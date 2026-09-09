#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "ObjectNotaryAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define MAX_NUMBER_LENGTH_LONG 21


// Download multiples attachments from a Notary
//
binary_t*
ObjectNotaryAPI_notaryBatchDownloadV1(apiClient_t *apiClient, int *pkiNotaryID, notary_batch_download_v1_request_t *notary_batch_download_v1_request)
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
    char *localVarPath = strdup("/1/object/notary/{pkiNotaryID}/batchDownload");



    // Path Params
    long sizeOfPathParams_pkiNotaryID =  + sizeof("{ pkiNotaryID }") - 1;
    if(pkiNotaryID == 0){
        goto end;
    }
    char* localVarToReplace_pkiNotaryID = malloc(sizeOfPathParams_pkiNotaryID);
    snprintf(localVarToReplace_pkiNotaryID, sizeOfPathParams_pkiNotaryID, "{%s}", "pkiNotaryID");

    char localVarBuff_pkiNotaryID[256];
    snprintf(localVarBuff_pkiNotaryID, sizeof localVarBuff_pkiNotaryID, "%ld", (long)*pkiNotaryID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiNotaryID, localVarBuff_pkiNotaryID);




    // Body Param
    cJSON *localVarSingleItemJSON_notary_batch_download_v1_request = NULL;
    if (notary_batch_download_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_notary_batch_download_v1_request = notary_batch_download_v1_request_convertToJSON(notary_batch_download_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_notary_batch_download_v1_request);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/zip"); //produces
    list_addElement(localVarHeaderType,"text/xml"); //produces
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 406) {
    //    printf("%s\n","The URL is valid, but one of the Accept header is not defined or invalid. For example, you set the header \&quot;Accept: application/json\&quot; but the function can only return \&quot;Content-type: image/png\&quot;");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //primitive return type simple binary
    binary_t* elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300)
        elementToReturn = instantiate_binary_t(apiClient->dataReceived, apiClient->dataReceivedLen);

    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_pkiNotaryID);
    if (localVarSingleItemJSON_notary_batch_download_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_notary_batch_download_v1_request);
        localVarSingleItemJSON_notary_batch_download_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Notary's attachments
//
notary_get_attachments_v1_response_t*
ObjectNotaryAPI_notaryGetAttachmentsV1(apiClient_t *apiClient, int *pkiNotaryID)
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
    char *localVarPath = strdup("/1/object/notary/{pkiNotaryID}/getAttachments");



    // Path Params
    long sizeOfPathParams_pkiNotaryID =  + sizeof("{ pkiNotaryID }") - 1;
    if(pkiNotaryID == 0){
        goto end;
    }
    char* localVarToReplace_pkiNotaryID = malloc(sizeOfPathParams_pkiNotaryID);
    snprintf(localVarToReplace_pkiNotaryID, sizeOfPathParams_pkiNotaryID, "{%s}", "pkiNotaryID");

    char localVarBuff_pkiNotaryID[256];
    snprintf(localVarBuff_pkiNotaryID, sizeof localVarBuff_pkiNotaryID, "%ld", (long)*pkiNotaryID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiNotaryID, localVarBuff_pkiNotaryID);



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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    notary_get_attachments_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectNotaryAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = notary_get_attachments_v1_response_parseFromJSON(ObjectNotaryAPIlocalVarJSON);
        cJSON_Delete(ObjectNotaryAPIlocalVarJSON);
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
    free(localVarToReplace_pkiNotaryID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Import attachments into the Notary
//
notary_import_into_edm_v1_response_t*
ObjectNotaryAPI_notaryImportIntoEDMV1(apiClient_t *apiClient, int *pkiNotaryID, notary_import_into_edm_v1_request_t *notary_import_into_edm_v1_request)
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
    char *localVarPath = strdup("/1/object/notary/{pkiNotaryID}/importIntoEDM");



    // Path Params
    long sizeOfPathParams_pkiNotaryID =  + sizeof("{ pkiNotaryID }") - 1;
    if(pkiNotaryID == 0){
        goto end;
    }
    char* localVarToReplace_pkiNotaryID = malloc(sizeOfPathParams_pkiNotaryID);
    snprintf(localVarToReplace_pkiNotaryID, sizeOfPathParams_pkiNotaryID, "{%s}", "pkiNotaryID");

    char localVarBuff_pkiNotaryID[256];
    snprintf(localVarBuff_pkiNotaryID, sizeof localVarBuff_pkiNotaryID, "%ld", (long)*pkiNotaryID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiNotaryID, localVarBuff_pkiNotaryID);




    // Body Param
    cJSON *localVarSingleItemJSON_notary_import_into_edm_v1_request = NULL;
    if (notary_import_into_edm_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_notary_import_into_edm_v1_request = notary_import_into_edm_v1_request_convertToJSON(notary_import_into_edm_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_notary_import_into_edm_v1_request);
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    notary_import_into_edm_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectNotaryAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = notary_import_into_edm_v1_response_parseFromJSON(ObjectNotaryAPIlocalVarJSON);
        cJSON_Delete(ObjectNotaryAPIlocalVarJSON);
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
    free(localVarToReplace_pkiNotaryID);
    if (localVarSingleItemJSON_notary_import_into_edm_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_notary_import_into_edm_v1_request);
        localVarSingleItemJSON_notary_import_into_edm_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

