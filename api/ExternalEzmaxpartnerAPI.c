#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "ExternalEzmaxpartnerAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define MAX_NUMBER_LENGTH_LONG 21


// Subscribe to an Ezmaxparnerproductstage
//
// Subscribe to an Ezmaxparnerproductstage
//
ezmaxpartner_subscribe_v1_response_t*
ExternalEzmaxpartnerAPI_ezmaxpartnerSubscribeV1(apiClient_t *apiClient, ezmaxpartner_subscribe_v1_request_t *ezmaxpartner_subscribe_v1_request)
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
    char *localVarPath = strdup("/1/external/ezmaxpartner/subscribe");





    // Body Param
    cJSON *localVarSingleItemJSON_ezmaxpartner_subscribe_v1_request = NULL;
    if (ezmaxpartner_subscribe_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezmaxpartner_subscribe_v1_request = ezmaxpartner_subscribe_v1_request_convertToJSON(ezmaxpartner_subscribe_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezmaxpartner_subscribe_v1_request);
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
    //nonprimitive not container
    ezmaxpartner_subscribe_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ExternalEzmaxpartnerAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezmaxpartner_subscribe_v1_response_parseFromJSON(ExternalEzmaxpartnerAPIlocalVarJSON);
        cJSON_Delete(ExternalEzmaxpartnerAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_ezmaxpartner_subscribe_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezmaxpartner_subscribe_v1_request);
        localVarSingleItemJSON_ezmaxpartner_subscribe_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

