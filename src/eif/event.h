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

#ifndef EIF_EVENT_H
#define EIF_EVENT_H

#include "ogs-proto.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct eif_sess_s eif_sess_t;

typedef enum {
    EIF_EVENT_BASE = OGS_MAX_NUM_OF_PROTO_EVENT,

    EIF_EVENT_TIMER_NOTIFY,

} eif_event_id_e;

typedef struct eif_event_s {
    ogs_event_t h;
    eif_sess_t *sess;
} eif_event_t;

OGS_STATIC_ASSERT(OGS_EVENT_SIZE >= sizeof(eif_event_t));

eif_event_t *eif_event_new(int id);

const char *eif_event_get_name(eif_event_t *e);

#ifdef __cplusplus
}
#endif

#endif /* EIF_EVENT_H */
