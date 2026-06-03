#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "ModuleEzmaxmaillinglistAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define MAX_NUMBER_LENGTH_LONG 21


// Subscribe to specific Ezmaxmaillinglist
//
// Users can subscribe to specific Ezmaxmaillinglist
//
ezmaxmaillinglist_subscribe_v1_response_t*
ModuleEzmaxmaillinglistAPI_ezmaxmaillinglistSubscribeV1(apiClient_t *apiClient, ezmaxmaillinglist_subscribe_v1_request_t *ezmaxmaillinglist_subscribe_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/1/module/ezmaxmaillinglist/subscribe");





    // Body Param
    cJSON *localVarSingleItemJSON_ezmaxmaillinglist_subscribe_v1_request = NULL;
    if (ezmaxmaillinglist_subscribe_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezmaxmaillinglist_subscribe_v1_request = ezmaxmaillinglist_subscribe_v1_request_convertToJSON(ezmaxmaillinglist_subscribe_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezmaxmaillinglist_subscribe_v1_request);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    ezmaxmaillinglist_subscribe_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ModuleEzmaxmaillinglistAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezmaxmaillinglist_subscribe_v1_response_parseFromJSON(ModuleEzmaxmaillinglistAPIlocalVarJSON);
        cJSON_Delete(ModuleEzmaxmaillinglistAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_ezmaxmaillinglist_subscribe_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezmaxmaillinglist_subscribe_v1_request);
        localVarSingleItemJSON_ezmaxmaillinglist_subscribe_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

