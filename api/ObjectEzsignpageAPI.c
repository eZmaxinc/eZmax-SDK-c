#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzsignpageAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Consult an Ezsignpage
//
ezsignpage_consult_v1_response_t*
ObjectEzsignpageAPI_ezsignpageConsultV1(apiClient_t *apiClient, int *pkiEzsignpageID, object_t *body)
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
    char *localVarPath = strdup("/1/object/ezsignpage/{pkiEzsignpageID}/consult");



    // Path Params
    long sizeOfPathParams_pkiEzsignpageID =  + sizeof("{ pkiEzsignpageID }") - 1;
    if(pkiEzsignpageID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignpageID = malloc(sizeOfPathParams_pkiEzsignpageID);
    snprintf(localVarToReplace_pkiEzsignpageID, sizeOfPathParams_pkiEzsignpageID, "{%s}", "pkiEzsignpageID");

    char localVarBuff_pkiEzsignpageID[256];
    snprintf(localVarBuff_pkiEzsignpageID, sizeof localVarBuff_pkiEzsignpageID, "%ld", (long)*pkiEzsignpageID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignpageID, localVarBuff_pkiEzsignpageID);




    // Body Param
    cJSON *localVarSingleItemJSON_body = NULL;
    if (body != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_body = object_convertToJSON(body);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_body);
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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    ezsignpage_consult_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignpageAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignpage_consult_v1_response_parseFromJSON(ObjectEzsignpageAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignpageAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignpageID);
    if (localVarSingleItemJSON_body) {
        cJSON_Delete(localVarSingleItemJSON_body);
        localVarSingleItemJSON_body = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

