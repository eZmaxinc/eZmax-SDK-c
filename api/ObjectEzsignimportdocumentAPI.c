#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzsignimportdocumentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Retrieve the content
//
ezsignimportdocument_download_v1_response_t*
ObjectEzsignimportdocumentAPI_ezsignimportdocumentDownloadV1(apiClient_t *apiClient, int *pkiEzsignimportdocumentID)
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
    char *localVarPath = strdup("/1/object/ezsignimportdocument/{pkiEzsignimportdocumentID}/download");



    // Path Params
    long sizeOfPathParams_pkiEzsignimportdocumentID =  + sizeof("{ pkiEzsignimportdocumentID }") - 1;
    if(pkiEzsignimportdocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignimportdocumentID = malloc(sizeOfPathParams_pkiEzsignimportdocumentID);
    snprintf(localVarToReplace_pkiEzsignimportdocumentID, sizeOfPathParams_pkiEzsignimportdocumentID, "{%s}", "pkiEzsignimportdocumentID");

    char localVarBuff_pkiEzsignimportdocumentID[256];
    snprintf(localVarBuff_pkiEzsignimportdocumentID, sizeof localVarBuff_pkiEzsignimportdocumentID, "%ld", (long)*pkiEzsignimportdocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignimportdocumentID, localVarBuff_pkiEzsignimportdocumentID);



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
    ezsignimportdocument_download_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignimportdocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignimportdocument_download_v1_response_parseFromJSON(ObjectEzsignimportdocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignimportdocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignimportdocumentID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

