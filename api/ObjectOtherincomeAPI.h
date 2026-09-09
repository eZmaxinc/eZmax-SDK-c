#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/header_accept_language.h"
#include "../model/otherincome_batch_download_v1_request.h"
#include "../model/otherincome_get_attachments_v1_response.h"
#include "../model/otherincome_get_communication_count_v1_response.h"
#include "../model/otherincome_get_communication_list_v1_response.h"
#include "../model/otherincome_get_communicationrecipients_v1_response.h"
#include "../model/otherincome_get_communicationsenders_v1_response.h"
#include "../model/otherincome_get_list_v1_response.h"
#include "../model/otherincome_import_into_edm_v1_request.h"
#include "../model/otherincome_import_into_edm_v1_response.h"

// Enum EORDERBY for ObjectOtherincomeAPI_otherincomeGetListV1
typedef enum  { ezmax_api_definition__full_otherincomeGetListV1_EORDERBY_NULL = 0, ezmax_api_definition__full_otherincomeGetListV1_EORDERBY_pkiOtherincomeID_ASC, ezmax_api_definition__full_otherincomeGetListV1_EORDERBY_pkiOtherincomeID_DESC, ezmax_api_definition__full_otherincomeGetListV1_EORDERBY_fkiOtherincometypeID_ASC, ezmax_api_definition__full_otherincomeGetListV1_EORDERBY_fkiOtherincometypeID_DESC, ezmax_api_definition__full_otherincomeGetListV1_EORDERBY_sOtherincometypeDescriptionX_ASC, ezmax_api_definition__full_otherincomeGetListV1_EORDERBY_sOtherincometypeDescriptionX_DESC, ezmax_api_definition__full_otherincomeGetListV1_EORDERBY_sOtherincomeDescription_ASC, ezmax_api_definition__full_otherincomeGetListV1_EORDERBY_sOtherincomeDescription_DESC, ezmax_api_definition__full_otherincomeGetListV1_EORDERBY_eOtherincomeRemunerationtype_ASC, ezmax_api_definition__full_otherincomeGetListV1_EORDERBY_eOtherincomeRemunerationtype_DESC, ezmax_api_definition__full_otherincomeGetListV1_EORDERBY_dOtherincomeRemunerationsubtotal_ASC, ezmax_api_definition__full_otherincomeGetListV1_EORDERBY_dOtherincomeRemunerationsubtotal_DESC, ezmax_api_definition__full_otherincomeGetListV1_EORDERBY_dOtherincomeRemunerationtaxes_ASC, ezmax_api_definition__full_otherincomeGetListV1_EORDERBY_dOtherincomeRemunerationtaxes_DESC, ezmax_api_definition__full_otherincomeGetListV1_EORDERBY_dOtherincomeRemunerationtotal_ASC, ezmax_api_definition__full_otherincomeGetListV1_EORDERBY_dOtherincomeRemunerationtotal_DESC, ezmax_api_definition__full_otherincomeGetListV1_EORDERBY_dtOtherincomePaid_ASC, ezmax_api_definition__full_otherincomeGetListV1_EORDERBY_dtOtherincomePaid_DESC, ezmax_api_definition__full_otherincomeGetListV1_EORDERBY_bOtherincomeIsactive_ASC, ezmax_api_definition__full_otherincomeGetListV1_EORDERBY_bOtherincomeIsactive_DESC } ezmax_api_definition__full_otherincomeGetListV1_eOrderBy_e;

// Enum  for ObjectOtherincomeAPI_otherincomeGetListV1
typedef enum  { ezmax_api_definition__full_otherincomeGetListV1__NULL = 0, ezmax_api_definition__full_otherincomeGetListV1__*, ezmax_api_definition__full_otherincomeGetListV1__en, ezmax_api_definition__full_otherincomeGetListV1__fr } ezmax_api_definition__full_otherincomeGetListV1_Accept-Language_e;


// Download multiples attachments from a Otherincome
//
binary_t*
ObjectOtherincomeAPI_otherincomeBatchDownloadV1(apiClient_t *apiClient, int *pkiOtherincomeID, otherincome_batch_download_v1_request_t *otherincome_batch_download_v1_request);


// Retrieve Otherincome's attachments
//
otherincome_get_attachments_v1_response_t*
ObjectOtherincomeAPI_otherincomeGetAttachmentsV1(apiClient_t *apiClient, int *pkiOtherincomeID);


// Retrieve Communication count
//
// 
//
otherincome_get_communication_count_v1_response_t*
ObjectOtherincomeAPI_otherincomeGetCommunicationCountV1(apiClient_t *apiClient, int *pkiOtherincomeID);


// Retrieve Communication list
//
// 
//
otherincome_get_communication_list_v1_response_t*
ObjectOtherincomeAPI_otherincomeGetCommunicationListV1(apiClient_t *apiClient, int *pkiOtherincomeID);


// Retrieve Otherincome's Communicationrecipient
//
// 
//
otherincome_get_communicationrecipients_v1_response_t*
ObjectOtherincomeAPI_otherincomeGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiOtherincomeID);


// Retrieve Otherincome's Communicationsender
//
// 
//
otherincome_get_communicationsenders_v1_response_t*
ObjectOtherincomeAPI_otherincomeGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiOtherincomeID);


// Retrieve Otherincome list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eOtherincomeRemunerationtype | Dollars<br>DollarsTaxesIncluded |
//
otherincome_get_list_v1_response_t*
ObjectOtherincomeAPI_otherincomeGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_otherincomeGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);


// Import attachments into the Otherincome
//
// 
//
otherincome_import_into_edm_v1_response_t*
ObjectOtherincomeAPI_otherincomeImportIntoEDMV1(apiClient_t *apiClient, int *pkiOtherincomeID, otherincome_import_into_edm_v1_request_t *otherincome_import_into_edm_v1_request);


