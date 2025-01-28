#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "GlobalEzmaxclientAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096

// Functions for enum  for GlobalEzmaxclientAPI_globalEzmaxclientVersionV1

static char* globalEzmaxclientVersionV1__ToString(ezmax_api_definition__full_globalEzmaxclientVersionV1_pksEzmaxclientOs_e ){
    char *Array[] =  { "NULL", "Android", "iOS", "iPadOS", "macOS", "Windows" };
    return Array[];
}

static ezmax_api_definition__full_globalEzmaxclientVersionV1_pksEzmaxclientOs_e globalEzmaxclientVersionV1__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "Android", "iOS", "iPadOS", "macOS", "Windows" };
    size_t sizeofArray = sizeof(Array) / sizeof(Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(, Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function globalEzmaxclientVersionV1__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *globalEzmaxclientVersionV1__convertToJSON(ezmax_api_definition__full_globalEzmaxclientVersionV1_pksEzmaxclientOs_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function globalEzmaxclientVersionV1__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_globalEzmaxclientVersionV1_pksEzmaxclientOs_e globalEzmaxclientVersionV1__parseFromJSON(cJSON* JSON) {
    ezmax_api_definition__full_globalEzmaxclientVersionV1_pksEzmaxclientOs_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/


// Retrieve the latest version of the Ezmaxclient
//
// Retrieve the latest version of the Ezmaxclient that is available on the store.
//
global_ezmaxclient_version_v1_response_t*
GlobalEzmaxclientAPI_globalEzmaxclientVersionV1(apiClient_t *apiClient, field_pks_ezmaxclient_os_e pksEzmaxclientOs)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/1/ezmaxclient/{pksEzmaxclientOs}/version");



    // Path Params
    long sizeOfPathParams_pksEzmaxclientOs =  + sizeof("{ pksEzmaxclientOs }") - 1;


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    global_ezmaxclient_version_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *GlobalEzmaxclientAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = global_ezmaxclient_version_v1_response_parseFromJSON(GlobalEzmaxclientAPIlocalVarJSON);
        cJSON_Delete(GlobalEzmaxclientAPIlocalVarJSON);
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
    
    free(localVarPath);
    free(localVarToReplace_pksEzmaxclientOs);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

