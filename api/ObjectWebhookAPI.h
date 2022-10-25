#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/common_response_error_too_many_requests.h"
#include "../model/header_accept_language.h"
#include "../model/object.h"
#include "../model/webhook_create_object_v1_request.h"
#include "../model/webhook_create_object_v1_response.h"
#include "../model/webhook_delete_object_v1_response.h"
#include "../model/webhook_edit_object_v1_request.h"
#include "../model/webhook_edit_object_v1_response.h"
#include "../model/webhook_get_history_v1_response.h"
#include "../model/webhook_get_list_v1_response.h"
#include "../model/webhook_get_object_v1_response.h"
#include "../model/webhook_test_v1_response.h"

// Enum EWEBHOOKHISTORYINTERVAL for ObjectWebhookAPI_webhookGetHistoryV1
typedef enum  { ezmax_api_definition__full_webhookGetHistoryV1_EWEBHOOKHISTORYINTERVAL_NULL = 0, ezmax_api_definition__full_webhookGetHistoryV1_EWEBHOOKHISTORYINTERVAL_LastDay, ezmax_api_definition__full_webhookGetHistoryV1_EWEBHOOKHISTORYINTERVAL_LastWeek } ezmax_api_definition__full_webhookGetHistoryV1_eWebhookHistoryinterval_e;

// Enum EORDERBY for ObjectWebhookAPI_webhookGetListV1
typedef enum  { ezmax_api_definition__full_webhookGetListV1_EORDERBY_NULL = 0, ezmax_api_definition__full_webhookGetListV1_EORDERBY_pkiWebhookID_ASC, ezmax_api_definition__full_webhookGetListV1_EORDERBY_pkiWebhookID_DESC, ezmax_api_definition__full_webhookGetListV1_EORDERBY_sWebhookDescription_ASC, ezmax_api_definition__full_webhookGetListV1_EORDERBY_sWebhookDescription_DESC, ezmax_api_definition__full_webhookGetListV1_EORDERBY_eWebhookEzsignevent_ASC, ezmax_api_definition__full_webhookGetListV1_EORDERBY_eWebhookEzsignevent_DESC, ezmax_api_definition__full_webhookGetListV1_EORDERBY_eWebhookManagementevent_ASC, ezmax_api_definition__full_webhookGetListV1_EORDERBY_eWebhookManagementevent_DESC, ezmax_api_definition__full_webhookGetListV1_EORDERBY_eWebhookModule_ASC, ezmax_api_definition__full_webhookGetListV1_EORDERBY_eWebhookModule_DESC, ezmax_api_definition__full_webhookGetListV1_EORDERBY_sWebhookEmailfailed_ASC, ezmax_api_definition__full_webhookGetListV1_EORDERBY_sWebhookEmailfailed_DESC, ezmax_api_definition__full_webhookGetListV1_EORDERBY_sWebhookEvent_ASC, ezmax_api_definition__full_webhookGetListV1_EORDERBY_sWebhookEvent_DESC, ezmax_api_definition__full_webhookGetListV1_EORDERBY_sWebhookUrl_ASC, ezmax_api_definition__full_webhookGetListV1_EORDERBY_sWebhookUrl_DESC, ezmax_api_definition__full_webhookGetListV1_EORDERBY_bWebhookIsactive_ASC, ezmax_api_definition__full_webhookGetListV1_EORDERBY_bWebhookIsactive_DESC } ezmax_api_definition__full_webhookGetListV1_eOrderBy_e;

// Enum  for ObjectWebhookAPI_webhookGetListV1
typedef enum  { ezmax_api_definition__full_webhookGetListV1__NULL = 0, ezmax_api_definition__full_webhookGetListV1__*, ezmax_api_definition__full_webhookGetListV1__en, ezmax_api_definition__full_webhookGetListV1__fr } ezmax_api_definition__full_webhookGetListV1_Accept-Language_e;


// Create a new Webhook
//
// The endpoint allows to create one or many elements at once.
//
webhook_create_object_v1_response_t*
ObjectWebhookAPI_webhookCreateObjectV1(apiClient_t *apiClient, webhook_create_object_v1_request_t * webhook_create_object_v1_request );


// Delete an existing Webhook
//
// 
//
webhook_delete_object_v1_response_t*
ObjectWebhookAPI_webhookDeleteObjectV1(apiClient_t *apiClient, int pkiWebhookID );


// Edit an existing Webhook
//
// 
//
webhook_edit_object_v1_response_t*
ObjectWebhookAPI_webhookEditObjectV1(apiClient_t *apiClient, int pkiWebhookID , webhook_edit_object_v1_request_t * webhook_edit_object_v1_request );


// Retrieve the logs for recent Webhook calls
//
// 
//
webhook_get_history_v1_response_t*
ObjectWebhookAPI_webhookGetHistoryV1(apiClient_t *apiClient, int pkiWebhookID , ezmax_api_definition__full_webhookGetHistoryV1_eWebhookHistoryinterval_e eWebhookHistoryinterval );


// Retrieve Webhook list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eWebhookModule | Ezsign<br>Management | | eWebhookEzsignevent | DocumentCompleted<br>FolderCompleted | | eWebhookManagementevent | UserCreated |
//
webhook_get_list_v1_response_t*
ObjectWebhookAPI_webhookGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_webhookGetListV1_eOrderBy_e eOrderBy , int iRowMax , int iRowOffset , header_accept_language_e Accept_Language , char * sFilter );


// Retrieve an existing Webhook
//
// 
//
webhook_get_object_v1_response_t*
ObjectWebhookAPI_webhookGetObjectV1(apiClient_t *apiClient, int pkiWebhookID );


// Test the Webhook by calling the Url
//
// 
//
webhook_test_v1_response_t*
ObjectWebhookAPI_webhookTestV1(apiClient_t *apiClient, int pkiWebhookID , object_t * body );


