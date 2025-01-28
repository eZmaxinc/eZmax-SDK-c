#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectVersionhistoryAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Retrieve an existing Versionhistory
//
// 
//
versionhistory_get_object_v2_response_t*
ObjectVersionhistoryAPI_versionhistoryGetObjectV2(apiClient_t *apiClient, int *pkiVersionhistoryID)
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
    char *localVarPath = strdup("/2/object/versionhistory/{pkiVersionhistoryID}");



    // Path Params
    long sizeOfPathParams_pkiVersionhistoryID =  + sizeof("{ pkiVersionhistoryID }") - 1;
    if(pkiVersionhistoryID == 0){
        goto end;
    }
    char* localVarToReplace_pkiVersionhistoryID = malloc(sizeOfPathParams_pkiVersionhistoryID);
    snprintf(localVarToReplace_pkiVersionhistoryID, sizeOfPathParams_pkiVersionhistoryID, "{%s}", "pkiVersionhistoryID");

    char localVarBuff_pkiVersionhistoryID[256];
    snprintf(localVarBuff_pkiVersionhistoryID, sizeof localVarBuff_pkiVersionhistoryID, "%ld", (long)*pkiVersionhistoryID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiVersionhistoryID, localVarBuff_pkiVersionhistoryID);



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
    versionhistory_get_object_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectVersionhistoryAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = versionhistory_get_object_v2_response_parseFromJSON(ObjectVersionhistoryAPIlocalVarJSON);
        cJSON_Delete(ObjectVersionhistoryAPIlocalVarJSON);
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
    free(localVarToReplace_pkiVersionhistoryID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

