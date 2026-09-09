#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "ObjectReconciliationAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define MAX_NUMBER_LENGTH_LONG 21


// Download multiples attachments from a Reconciliation
//
binary_t*
ObjectReconciliationAPI_reconciliationBatchDownloadV1(apiClient_t *apiClient, int *pkiReconciliationID, reconciliation_batch_download_v1_request_t *reconciliation_batch_download_v1_request)
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
    char *localVarPath = strdup("/1/object/reconciliation/{pkiReconciliationID}/batchDownload");



    // Path Params
    long sizeOfPathParams_pkiReconciliationID =  + sizeof("{ pkiReconciliationID }") - 1;
    if(pkiReconciliationID == 0){
        goto end;
    }
    char* localVarToReplace_pkiReconciliationID = malloc(sizeOfPathParams_pkiReconciliationID);
    snprintf(localVarToReplace_pkiReconciliationID, sizeOfPathParams_pkiReconciliationID, "{%s}", "pkiReconciliationID");

    char localVarBuff_pkiReconciliationID[256];
    snprintf(localVarBuff_pkiReconciliationID, sizeof localVarBuff_pkiReconciliationID, "%ld", (long)*pkiReconciliationID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiReconciliationID, localVarBuff_pkiReconciliationID);




    // Body Param
    cJSON *localVarSingleItemJSON_reconciliation_batch_download_v1_request = NULL;
    if (reconciliation_batch_download_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_reconciliation_batch_download_v1_request = reconciliation_batch_download_v1_request_convertToJSON(reconciliation_batch_download_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_reconciliation_batch_download_v1_request);
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
    free(localVarToReplace_pkiReconciliationID);
    if (localVarSingleItemJSON_reconciliation_batch_download_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_reconciliation_batch_download_v1_request);
        localVarSingleItemJSON_reconciliation_batch_download_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Reconciliation's attachments
//
reconciliation_get_attachments_v1_response_t*
ObjectReconciliationAPI_reconciliationGetAttachmentsV1(apiClient_t *apiClient, int *pkiReconciliationID)
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
    char *localVarPath = strdup("/1/object/reconciliation/{pkiReconciliationID}/getAttachments");



    // Path Params
    long sizeOfPathParams_pkiReconciliationID =  + sizeof("{ pkiReconciliationID }") - 1;
    if(pkiReconciliationID == 0){
        goto end;
    }
    char* localVarToReplace_pkiReconciliationID = malloc(sizeOfPathParams_pkiReconciliationID);
    snprintf(localVarToReplace_pkiReconciliationID, sizeOfPathParams_pkiReconciliationID, "{%s}", "pkiReconciliationID");

    char localVarBuff_pkiReconciliationID[256];
    snprintf(localVarBuff_pkiReconciliationID, sizeof localVarBuff_pkiReconciliationID, "%ld", (long)*pkiReconciliationID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiReconciliationID, localVarBuff_pkiReconciliationID);



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
    reconciliation_get_attachments_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectReconciliationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = reconciliation_get_attachments_v1_response_parseFromJSON(ObjectReconciliationAPIlocalVarJSON);
        cJSON_Delete(ObjectReconciliationAPIlocalVarJSON);
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
    free(localVarToReplace_pkiReconciliationID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Import attachments into the Reconciliation
//
reconciliation_import_into_edm_v1_response_t*
ObjectReconciliationAPI_reconciliationImportIntoEDMV1(apiClient_t *apiClient, int *pkiReconciliationID, reconciliation_import_into_edm_v1_request_t *reconciliation_import_into_edm_v1_request)
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
    char *localVarPath = strdup("/1/object/reconciliation/{pkiReconciliationID}/importIntoEDM");



    // Path Params
    long sizeOfPathParams_pkiReconciliationID =  + sizeof("{ pkiReconciliationID }") - 1;
    if(pkiReconciliationID == 0){
        goto end;
    }
    char* localVarToReplace_pkiReconciliationID = malloc(sizeOfPathParams_pkiReconciliationID);
    snprintf(localVarToReplace_pkiReconciliationID, sizeOfPathParams_pkiReconciliationID, "{%s}", "pkiReconciliationID");

    char localVarBuff_pkiReconciliationID[256];
    snprintf(localVarBuff_pkiReconciliationID, sizeof localVarBuff_pkiReconciliationID, "%ld", (long)*pkiReconciliationID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiReconciliationID, localVarBuff_pkiReconciliationID);




    // Body Param
    cJSON *localVarSingleItemJSON_reconciliation_import_into_edm_v1_request = NULL;
    if (reconciliation_import_into_edm_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_reconciliation_import_into_edm_v1_request = reconciliation_import_into_edm_v1_request_convertToJSON(reconciliation_import_into_edm_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_reconciliation_import_into_edm_v1_request);
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
    reconciliation_import_into_edm_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectReconciliationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = reconciliation_import_into_edm_v1_response_parseFromJSON(ObjectReconciliationAPIlocalVarJSON);
        cJSON_Delete(ObjectReconciliationAPIlocalVarJSON);
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
    free(localVarToReplace_pkiReconciliationID);
    if (localVarSingleItemJSON_reconciliation_import_into_edm_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_reconciliation_import_into_edm_v1_request);
        localVarSingleItemJSON_reconciliation_import_into_edm_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

