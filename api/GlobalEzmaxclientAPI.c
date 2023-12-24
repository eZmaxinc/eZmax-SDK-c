#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "GlobalEzmaxclientAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)

// Functions for enum  for GlobalEzmaxclientAPI_globalEzmaxclientVersionV1

static char* globalEzmaxclientVersionV1__ToString(ezmax_api_definition__full_globalEzmaxclientVersionV1_pksEzmaxclientOs_e ){
    char *Array[] =  { "NULL", "iOS", "iPadOS", "macOS", "Windows" };
    return Array[];
}

static ezmax_api_definition__full_globalEzmaxclientVersionV1_pksEzmaxclientOs_e globalEzmaxclientVersionV1__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "iOS", "iPadOS", "macOS", "Windows" };
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

    // create the path
    long sizeOfPath = strlen("/1/ezmaxclient/{pksEzmaxclientOs}/version")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/ezmaxclient/{pksEzmaxclientOs}/version");


    // Path Params
    long sizeOfPathParams_pksEzmaxclientOs =  + strlen("{ pksEzmaxclientOs }");


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
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
    cJSON *GlobalEzmaxclientAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    global_ezmaxclient_version_v1_response_t *elementToReturn = global_ezmaxclient_version_v1_response_parseFromJSON(GlobalEzmaxclientAPIlocalVarJSON);
    cJSON_Delete(GlobalEzmaxclientAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
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

