#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "ObjectEzsigntemplateglobalannotationAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define MAX_NUMBER_LENGTH_LONG 21


// Retrieve an existing Ezsigntemplateglobalannotation
//
// 
//
ezsigntemplateglobalannotation_get_object_v2_response_t*
ObjectEzsigntemplateglobalannotationAPI_ezsigntemplateglobalannotationGetObjectV2(apiClient_t *apiClient, int *pkiEzsigntemplateglobalannotationID)
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
    char *localVarPath = strdup("/2/object/ezsigntemplateglobalannotation/{pkiEzsigntemplateglobalannotationID}");



    // Path Params
    long sizeOfPathParams_pkiEzsigntemplateglobalannotationID =  + sizeof("{ pkiEzsigntemplateglobalannotationID }") - 1;
    if(pkiEzsigntemplateglobalannotationID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplateglobalannotationID = malloc(sizeOfPathParams_pkiEzsigntemplateglobalannotationID);
    snprintf(localVarToReplace_pkiEzsigntemplateglobalannotationID, sizeOfPathParams_pkiEzsigntemplateglobalannotationID, "{%s}", "pkiEzsigntemplateglobalannotationID");

    char localVarBuff_pkiEzsigntemplateglobalannotationID[256];
    snprintf(localVarBuff_pkiEzsigntemplateglobalannotationID, sizeof localVarBuff_pkiEzsigntemplateglobalannotationID, "%ld", (long)*pkiEzsigntemplateglobalannotationID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplateglobalannotationID, localVarBuff_pkiEzsigntemplateglobalannotationID);



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
    ezsigntemplateglobalannotation_get_object_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigntemplateglobalannotationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigntemplateglobalannotation_get_object_v2_response_parseFromJSON(ObjectEzsigntemplateglobalannotationAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigntemplateglobalannotationAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplateglobalannotationID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

