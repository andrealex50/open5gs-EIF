/* Energy exposure helpers for TS 29.566 Release 20. */
#ifndef EIF_ENERGY_REPORT_H
#define EIF_ENERGY_REPORT_H

#include "openapi/model/energy_ee_subsc.h"
#include "openapi/model/energy_ee_report.h"

#define EIF_ENERGY_2_FEATURE 1
#define EIF_NEIF_API_VERSION "1.1.0-alpha.2"

bool eif_energy_negotiate_features(
        OpenAPI_energy_ee_subsc_t *subscription, bool from_nef, char **error);
OpenAPI_energy_ee_report_t *eif_energy_report_parse(
        const char *body, OpenAPI_energy_ee_subsc_set_t *set,
        const char *end_time);

#endif
