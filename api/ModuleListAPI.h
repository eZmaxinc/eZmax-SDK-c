#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/list_get_listpresentation_v1_response.h"
#include "../model/list_save_listpresentation_v1_request.h"
#include "../model/list_save_listpresentation_v1_response.h"


// Get all Listpresentation for a specific list
//
// Retrive previously saved Listpresentation
//
list_get_listpresentation_v1_response_t*
ModuleListAPI_listGetListpresentationV1(apiClient_t *apiClient, char * sListName );


// Save all Listpresentation for a specific list
//
// Users can create many Listpresentations for lists in the system. They can customize orber by, filters, numbers of rows, etc.
//
list_save_listpresentation_v1_response_t*
ModuleListAPI_listSaveListpresentationV1(apiClient_t *apiClient, char * sListName , list_save_listpresentation_v1_request_t * list_save_listpresentation_v1_request );


