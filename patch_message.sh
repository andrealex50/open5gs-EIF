#!/bin/bash
sed -i '/CASE(OGS_SBI_SERVICE_NAME_NSMF_EVENT_EXPOSURE)/i \
        CASE(OGS_SBI_SERVICE_NAME_NEIF_EVENTEXPOSURE)\
            SWITCH(message->h.resource.component[0])\
            CASE(OGS_SBI_RESOURCE_NAME_SUBSCRIPTIONS)\
                if (message->res_status < 300) {\
                    message->EnergyEeSubsc = \\\
                        OpenAPI_energy_ee_subsc_parseFromJSON(item);\
                    if (!message->EnergyEeSubsc) {\
                        rv = OGS_ERROR;\
                        ogs_error("JSON parse error");\
                    }\
                } else {\
                    ogs_error("HTTP ERROR Status : %d", message->res_status);\
                }\
                break;\
            DEFAULT\
                rv = OGS_ERROR;\
                ogs_error("Unknown resource name [%s]", \\\
                        message->h.resource.component[0]);\
            END\
            break;\
' lib/sbi/message.c
