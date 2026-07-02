/*
 * Copyright (C) 2019-2022 by Sukchan Lee <acetcom@gmail.com>
 *
 * This file is part of Open5GS.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include "context.h"

static eif_context_t self;
int __eif_log_domain;
static OGS_POOL(eif_sess_pool, eif_sess_t);
static int context_initialized = 0;

static void eif_timer_notify_expire(void *data)
{
    int rv;
    eif_event_t *e = NULL;

    e = eif_event_new(EIF_EVENT_TIMER_NOTIFY);
    ogs_assert(e);

    rv = ogs_queue_push(ogs_app()->queue, e);
    if (rv != OGS_OK) {
        ogs_error("ogs_queue_push() failed:%d", (int)rv);
        ogs_free(e);
    }
}

void eif_context_init(void)
{
    ogs_assert(context_initialized == 0);
    memset(&self, 0, sizeof(eif_context_t));
    ogs_log_install_domain(&__eif_log_domain, "eif", ogs_core()->log.level);
    ogs_pool_init(&eif_sess_pool, ogs_app()->pool.sess);

    self.notify_timer = ogs_timer_add(ogs_app()->timer_mgr, eif_timer_notify_expire, NULL);
    ogs_assert(self.notify_timer);

    context_initialized = 1;
}

void eif_context_final(void)
{
    ogs_assert(context_initialized == 1);
    
    if (self.notify_timer) {
        ogs_timer_delete(self.notify_timer);
        self.notify_timer = NULL;
    }

    eif_sess_remove_all();
    ogs_pool_final(&eif_sess_pool);
    context_initialized = 0;
}

eif_context_t *eif_self(void)
{
    return &self;
}

static int eif_context_prepare(void) { return OGS_OK; }
static int eif_context_validation(void) { return OGS_OK; }

int eif_context_parse_config(void)
{
    int rv;
    rv = eif_context_prepare();
    if (rv != OGS_OK) return rv;
    rv = eif_context_validation();
    if (rv != OGS_OK) return rv;
    return OGS_OK;
}

eif_sess_t *eif_sess_add(void)
{
    eif_sess_t *sess = NULL;

    ogs_pool_alloc(&eif_sess_pool, &sess);
    if (!sess) {
        ogs_error("Maximum number of session[%lld] reached", (long long)ogs_app()->pool.sess);
        return NULL;
    }
    memset(sess, 0, sizeof *sess);

    sess->sub_id = ogs_msprintf("%d", (int)ogs_pool_index(&eif_sess_pool, sess));
    ogs_assert(sess->sub_id);
    sess->generation = ++self.next_sess_generation;
    ogs_list_init(&sess->report_state_list);

    ogs_list_add(&self.sess_list, sess);
    return sess;
}

void eif_sess_remove(eif_sess_t *sess)
{
    ogs_assert(sess);
    ogs_list_remove(&self.sess_list, sess);
    ogs_sbi_object_free(&sess->sbi);

    if (sess->sub_id) ogs_free(sess->sub_id);
    if (sess->supi) ogs_free(sess->supi);
    
    if (sess->energy_ee_subsc) {
        OpenAPI_energy_ee_subsc_free(sess->energy_ee_subsc);
    }
    eif_report_state_remove_all(sess);

    ogs_pool_free(&eif_sess_pool, sess);
}

void eif_sess_remove_all(void)
{
    eif_sess_t *sess = NULL, *next_sess = NULL;
    ogs_list_for_each_safe(&self.sess_list, next_sess, sess)
        eif_sess_remove(sess);
}

eif_sess_t *eif_sess_find_by_sub_id(char *sub_id)
{
    ogs_assert(sub_id);
    return ogs_pool_find(&eif_sess_pool, atoll(sub_id));
}

eif_report_state_t *eif_report_state_add(
        eif_sess_t *sess, const char *subsc_set_id, ogs_time_t next_report_at)
{
    eif_report_state_t *state = NULL;

    ogs_assert(sess);
    ogs_assert(subsc_set_id);

    state = ogs_calloc(1, sizeof(*state));
    ogs_assert(state);
    state->subsc_set_id = ogs_strdup(subsc_set_id);
    ogs_assert(state->subsc_set_id);
    state->next_report_at = next_report_at;

    ogs_list_add(&sess->report_state_list, state);
    return state;
}

eif_report_state_t *eif_report_state_find(
        eif_sess_t *sess, const char *subsc_set_id)
{
    eif_report_state_t *state = NULL;

    ogs_assert(sess);
    ogs_assert(subsc_set_id);

    ogs_list_for_each(&sess->report_state_list, state) {
        if (state->subsc_set_id &&
                strcmp(state->subsc_set_id, subsc_set_id) == 0)
            return state;
    }

    return NULL;
}

void eif_report_state_remove_all(eif_sess_t *sess)
{
    eif_report_state_t *state = NULL, *next = NULL;

    ogs_assert(sess);

    ogs_list_for_each_safe(&sess->report_state_list, next, state) {
        ogs_list_remove(&sess->report_state_list, state);
        ogs_free(state->subsc_set_id);
        ogs_free(state);
    }
}

int get_sess_load(void)
{
    return (((ogs_pool_size(&eif_sess_pool) -
            ogs_pool_avail(&eif_sess_pool)) * 100) /
            ogs_pool_size(&eif_sess_pool));
}
