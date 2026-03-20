import sys

with open('src/eif/neif-handler.c', 'r') as f:
    lines = f.readlines()

new_lines = []
in_block = False

for line in lines:
    if line.startswith('static void notif_client_cb(int status, ogs_sbi_response_t *response, void *data)'):
        in_block = True
        new_lines.append('static int notif_client_cb(int status, ogs_sbi_response_t *response, void *data)\n')
        new_lines.append('{\n')
        new_lines.append('    if (status != OGS_SBI_HTTP_STATUS_NO_CONTENT && status != OGS_SBI_HTTP_STATUS_OK) {\n')
        new_lines.append('        ogs_warn("Notification failed with status: %d", status);\n')
        new_lines.append('    } else {\n')
        new_lines.append('        ogs_debug("Notification succeeded with status: %d", status);\n')
        new_lines.append('    }\n')
        new_lines.append('    return OGS_OK;\n')
        new_lines.append('}\n\n')
        new_lines.append('void eif_timer_notify_handler(eif_event_t *e)\n')
        new_lines.append('{\n')
        new_lines.append('    eif_sess_t *sess = NULL;\n')
        new_lines.append('    bool rc;\n')
        new_lines.append('    OpenAPI_uri_scheme_e scheme = OpenAPI_uri_scheme_NULL;\n')
        new_lines.append('    char *fqdn = NULL;\n')
        new_lines.append('    uint16_t fqdn_port = 0;\n')
        new_lines.append('    ogs_sockaddr_t *addr = NULL, *addr6 = NULL;\n')
        new_lines.append('    ogs_debug("Timer Notification Handler executed");\n\n')
        new_lines.append('    ogs_list_for_each(&eif_self()->sess_list, sess) {\n')
        new_lines.append('        if (!sess->energy_ee_subsc || !sess->energy_ee_subsc->notif_uri) continue;\n\n')
        new_lines.append('        ogs_sbi_message_t message;\n')
        new_lines.append('        ogs_sbi_request_t *request = NULL;\n')
        new_lines.append('        ogs_sbi_client_t *client = NULL;\n\n')
        new_lines.append('        memset(&message, 0, sizeof(message));\n')
        new_lines.append('        message.h.method = (char *)OGS_SBI_HTTP_METHOD_POST;\n')
        new_lines.append('        message.h.uri = sess->energy_ee_subsc->notif_uri;\n\n')
        new_lines.append('        OpenAPI_energy_ee_notif_t notif;\n')
        new_lines.append('        OpenAPI_energy_ee_report_t report;\n\n')
        new_lines.append('        memset(&notif, 0, sizeof(notif));\n')
        new_lines.append('        memset(&report, 0, sizeof(report));\n\n')
        new_lines.append('        report.event = OpenAPI_energy_ee_event_UE_ENERGY;\n')
        new_lines.append('        OpenAPI_list_t *list = OpenAPI_list_create();\n')
        new_lines.append('        OpenAPI_list_add(list, &report);\n')
        new_lines.append('        notif.reports = list;\n')
        new_lines.append('        message.EnergyEeNotif = &notif;\n\n')
        new_lines.append('        request = ogs_sbi_build_request(&message);\n')
        new_lines.append('        if (request) {\n')
        new_lines.append('            rc = ogs_sbi_getaddr_from_uri(&scheme, &fqdn, &fqdn_port, &addr, &addr6, sess->energy_ee_subsc->notif_uri);\n')
        new_lines.append('            if (rc == true && scheme != OpenAPI_uri_scheme_NULL) {\n')
        new_lines.append('                client = ogs_sbi_client_find(scheme, fqdn, fqdn_port, addr, addr6);\n')
        new_lines.append('                if (!client) {\n')
        new_lines.append('                    client = ogs_sbi_client_add(scheme, fqdn, fqdn_port, addr, addr6);\n')
        new_lines.append('                }\n')
        new_lines.append('            }\n')
        new_lines.append('            ogs_free(fqdn);\n')
        new_lines.append('            ogs_freeaddrinfo(addr);\n')
        new_lines.append('            ogs_freeaddrinfo(addr6);\n\n')
        new_lines.append('            if (client) {\n')
        new_lines.append('                ogs_sbi_send_request_to_client(client, notif_client_cb, request, NULL);\n')
        new_lines.append('                ogs_debug("Notification sent to %s", sess->energy_ee_subsc->notif_uri);\n')
        new_lines.append('            } else {\n')
        new_lines.append('                ogs_error("Cannot create HTTP client for %s", sess->energy_ee_subsc->notif_uri);\n')
        new_lines.append('                ogs_sbi_request_free(request);\n')
        new_lines.append('            }\n')
        new_lines.append('        } else {\n')
        new_lines.append('            ogs_error("Failed to build request for %s", sess->energy_ee_subsc->notif_uri);\n')
        new_lines.append('        }\n')
        new_lines.append('        OpenAPI_list_free(list);\n')
        new_lines.append('    }\n')
        new_lines.append('    ogs_timer_start(eif_self()->notify_timer, ogs_time_from_sec(5));\n')
        new_lines.append('}\n')
        continue

    if in_block:
        if line.startswith('}'): # end of eif_timer_notify_handler
            in_block = False
        continue

    if not in_block:
        new_lines.append(line)


with open('src/eif/neif-handler.c', 'w') as f:
    f.writelines(new_lines)
