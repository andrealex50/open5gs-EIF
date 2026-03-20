#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/authorized_network_slice_info.h"
#include "../model/nf_type.h"
#include "../model/plmn_id.h"
#include "../model/problem_details.h"
#include "../model/redirect_response.h"
#include "../model/slice_info_for_pdu_session.h"
#include "../model/slice_info_for_registration.h"
#include "../model/slice_info_for_ue_configuration_update.h"
#include "../model/tai.h"

// Enum  for NetworkSliceInformationDocumentAPI_nSSelectionGet
typedef enum  { nssf_ns_selection_nSSelectionGet__NULL = 0, nssf_ns_selection_nSSelectionGet__NRF, nssf_ns_selection_nSSelectionGet__UDM, nssf_ns_selection_nSSelectionGet__AMF, nssf_ns_selection_nSSelectionGet__SMF, nssf_ns_selection_nSSelectionGet__AUSF, nssf_ns_selection_nSSelectionGet__NEF, nssf_ns_selection_nSSelectionGet__PCF, nssf_ns_selection_nSSelectionGet__SMSF, nssf_ns_selection_nSSelectionGet__NSSF, nssf_ns_selection_nSSelectionGet__UDR, nssf_ns_selection_nSSelectionGet__LMF, nssf_ns_selection_nSSelectionGet__GMLC, nssf_ns_selection_nSSelectionGet__5G_EIR, nssf_ns_selection_nSSelectionGet__SEPP, nssf_ns_selection_nSSelectionGet__UPF, nssf_ns_selection_nSSelectionGet__N3IWF, nssf_ns_selection_nSSelectionGet__AF, nssf_ns_selection_nSSelectionGet__UDSF, nssf_ns_selection_nSSelectionGet__BSF, nssf_ns_selection_nSSelectionGet__CHF, nssf_ns_selection_nSSelectionGet__NWDAF, nssf_ns_selection_nSSelectionGet__PCSCF, nssf_ns_selection_nSSelectionGet__CBCF, nssf_ns_selection_nSSelectionGet__HSS, nssf_ns_selection_nSSelectionGet__UCMF, nssf_ns_selection_nSSelectionGet__SOR_AF, nssf_ns_selection_nSSelectionGet__SPAF, nssf_ns_selection_nSSelectionGet__MME, nssf_ns_selection_nSSelectionGet__SCSAS, nssf_ns_selection_nSSelectionGet__SCEF, nssf_ns_selection_nSSelectionGet__SCP, nssf_ns_selection_nSSelectionGet__NSSAAF, nssf_ns_selection_nSSelectionGet__ICSCF, nssf_ns_selection_nSSelectionGet__SCSCF, nssf_ns_selection_nSSelectionGet__DRA, nssf_ns_selection_nSSelectionGet__IMS_AS, nssf_ns_selection_nSSelectionGet__AANF, nssf_ns_selection_nSSelectionGet___5G_DDNMF, nssf_ns_selection_nSSelectionGet__NSACF, nssf_ns_selection_nSSelectionGet__MFAF, nssf_ns_selection_nSSelectionGet__EASDF, nssf_ns_selection_nSSelectionGet__DCCF, nssf_ns_selection_nSSelectionGet__MB_SMF, nssf_ns_selection_nSSelectionGet__TSCTSF, nssf_ns_selection_nSSelectionGet__ADRF, nssf_ns_selection_nSSelectionGet__GBA_BSF, nssf_ns_selection_nSSelectionGet__CEF, nssf_ns_selection_nSSelectionGet__MB_UPF, nssf_ns_selection_nSSelectionGet__NSWOF, nssf_ns_selection_nSSelectionGet__PKMF, nssf_ns_selection_nSSelectionGet__MNPF, nssf_ns_selection_nSSelectionGet__SMS_GMSC, nssf_ns_selection_nSSelectionGet__SMS_IWMSC, nssf_ns_selection_nSSelectionGet__MBSF, nssf_ns_selection_nSSelectionGet__MBSTF, nssf_ns_selection_nSSelectionGet__PANF } nssf_ns_selection_nSSelectionGet_nf-type_e;


// Retrieve the Network Slice Selection Information
//
authorized_network_slice_info_t*
NetworkSliceInformationDocumentAPI_nSSelectionGet(apiClient_t *apiClient, nf_type_e nf_type , char * nf_id , slice_info_for_registration_t * slice_info_request_for_registration , slice_info_for_pdu_session_t * slice_info_request_for_pdu_session , slice_info_for_ue_configuration_update_t * slice_info_request_for_ue_cu , plmn_id_t * home_plmn_id , tai_t * tai , char * supported_features );


