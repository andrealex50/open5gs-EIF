/*
 * Copyright (C) 2019-2023 by Sukchan Lee <acetcom@gmail.com>
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

#ifndef EIF_CONTEXT_H
#define EIF_CONTEXT_H

#include "ogs-sbi.h"
#include "ogs-app.h"
#include "eif-sm.h"

int eif_initialize(void);
void eif_terminate(void);

#ifdef __cplusplus
extern "C" {
#endif

extern int __eif_log_domain;

#undef OGS_LOG_DOMAIN
#define OGS_LOG_DOMAIN __eif_log_domain

typedef struct eif_context_s {
    ogs_list_t          sess_list;

    ogs_timer_t         *notify_timer;
    uint64_t            next_sess_generation;
} eif_context_t;

typedef struct eif_report_state_s {
    ogs_lnode_t lnode;

    char *subsc_set_id;
    ogs_time_t next_report_at;
    uint64_t reports_sent;
    bool time_window_complete;
} eif_report_state_t;

typedef struct eif_sess_s {
    ogs_sbi_object_t sbi;

    char *sub_id;
    char *supi;
    uint64_t generation;

    OpenAPI_energy_ee_subsc_t *energy_ee_subsc; /* Release 19  structure */
    ogs_list_t report_state_list;
    bool notification_pending;
} eif_sess_t;

void eif_context_init(void);
void eif_context_final(void);
eif_context_t *eif_self(void);

int eif_context_parse_config(void);

eif_sess_t *eif_sess_add(void);
void eif_sess_remove(eif_sess_t *sess);
void eif_sess_remove_all(void);

eif_sess_t *eif_sess_find_by_sub_id(char *sub_id);
eif_report_state_t *eif_report_state_add(
        eif_sess_t *sess, const char *subsc_set_id, ogs_time_t next_report_at);
eif_report_state_t *eif_report_state_find(
        eif_sess_t *sess, const char *subsc_set_id);
void eif_report_state_remove_all(eif_sess_t *sess);
int get_sess_load(void);

#ifdef __cplusplus
}
#endif

#endif /* EIF_CONTEXT_H */
