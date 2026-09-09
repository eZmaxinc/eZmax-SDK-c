#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "ObjectPaymentpreparationAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define MAX_NUMBER_LENGTH_LONG 21


// Download multiples attachments from an Paymentpreparation
//
binary_t*
ObjectPaymentpreparationAPI_paymentpreparationBatchDownloadV1(apiClient_t *apiClient, int *pkiPaymentpreparationID, paymentpreparation_batch_download_v1_request_t *paymentpreparation_batch_download_v1_request)
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
    char *localVarPath = strdup("/1/object/paymentpreparation/{pkiPaymentpreparationID}/batchDownload");



    // Path Params
    long sizeOfPathParams_pkiPaymentpreparationID =  + sizeof("{ pkiPaymentpreparationID }") - 1;
    if(pkiPaymentpreparationID == 0){
        goto end;
    }
    char* localVarToReplace_pkiPaymentpreparationID = malloc(sizeOfPathParams_pkiPaymentpreparationID);
    snprintf(localVarToReplace_pkiPaymentpreparationID, sizeOfPathParams_pkiPaymentpreparationID, "{%s}", "pkiPaymentpreparationID");

    char localVarBuff_pkiPaymentpreparationID[256];
    snprintf(localVarBuff_pkiPaymentpreparationID, sizeof localVarBuff_pkiPaymentpreparationID, "%ld", (long)*pkiPaymentpreparationID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiPaymentpreparationID, localVarBuff_pkiPaymentpreparationID);




    // Body Param
    cJSON *localVarSingleItemJSON_paymentpreparation_batch_download_v1_request = NULL;
    if (paymentpreparation_batch_download_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_paymentpreparation_batch_download_v1_request = paymentpreparation_batch_download_v1_request_convertToJSON(paymentpreparation_batch_download_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_paymentpreparation_batch_download_v1_request);
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
    free(localVarToReplace_pkiPaymentpreparationID);
    if (localVarSingleItemJSON_paymentpreparation_batch_download_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_paymentpreparation_batch_download_v1_request);
        localVarSingleItemJSON_paymentpreparation_batch_download_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Paymentpreparation's attachments
//
paymentpreparation_get_attachments_v1_response_t*
ObjectPaymentpreparationAPI_paymentpreparationGetAttachmentsV1(apiClient_t *apiClient, int *pkiPaymentpreparationID)
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
    char *localVarPath = strdup("/1/object/paymentpreparation/{pkiPaymentpreparationID}/getAttachments");



    // Path Params
    long sizeOfPathParams_pkiPaymentpreparationID =  + sizeof("{ pkiPaymentpreparationID }") - 1;
    if(pkiPaymentpreparationID == 0){
        goto end;
    }
    char* localVarToReplace_pkiPaymentpreparationID = malloc(sizeOfPathParams_pkiPaymentpreparationID);
    snprintf(localVarToReplace_pkiPaymentpreparationID, sizeOfPathParams_pkiPaymentpreparationID, "{%s}", "pkiPaymentpreparationID");

    char localVarBuff_pkiPaymentpreparationID[256];
    snprintf(localVarBuff_pkiPaymentpreparationID, sizeof localVarBuff_pkiPaymentpreparationID, "%ld", (long)*pkiPaymentpreparationID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiPaymentpreparationID, localVarBuff_pkiPaymentpreparationID);



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
    paymentpreparation_get_attachments_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectPaymentpreparationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = paymentpreparation_get_attachments_v1_response_parseFromJSON(ObjectPaymentpreparationAPIlocalVarJSON);
        cJSON_Delete(ObjectPaymentpreparationAPIlocalVarJSON);
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
    free(localVarToReplace_pkiPaymentpreparationID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Import attachments into the Paymentpreparation
//
paymentpreparation_import_into_edm_v1_response_t*
ObjectPaymentpreparationAPI_paymentpreparationImportIntoEDMV1(apiClient_t *apiClient, int *pkiPaymentpreparationID, paymentpreparation_import_into_edm_v1_request_t *paymentpreparation_import_into_edm_v1_request)
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
    char *localVarPath = strdup("/1/object/paymentpreparation/{pkiPaymentpreparationID}/importIntoEDM");



    // Path Params
    long sizeOfPathParams_pkiPaymentpreparationID =  + sizeof("{ pkiPaymentpreparationID }") - 1;
    if(pkiPaymentpreparationID == 0){
        goto end;
    }
    char* localVarToReplace_pkiPaymentpreparationID = malloc(sizeOfPathParams_pkiPaymentpreparationID);
    snprintf(localVarToReplace_pkiPaymentpreparationID, sizeOfPathParams_pkiPaymentpreparationID, "{%s}", "pkiPaymentpreparationID");

    char localVarBuff_pkiPaymentpreparationID[256];
    snprintf(localVarBuff_pkiPaymentpreparationID, sizeof localVarBuff_pkiPaymentpreparationID, "%ld", (long)*pkiPaymentpreparationID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiPaymentpreparationID, localVarBuff_pkiPaymentpreparationID);




    // Body Param
    cJSON *localVarSingleItemJSON_paymentpreparation_import_into_edm_v1_request = NULL;
    if (paymentpreparation_import_into_edm_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_paymentpreparation_import_into_edm_v1_request = paymentpreparation_import_into_edm_v1_request_convertToJSON(paymentpreparation_import_into_edm_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_paymentpreparation_import_into_edm_v1_request);
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
    paymentpreparation_import_into_edm_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectPaymentpreparationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = paymentpreparation_import_into_edm_v1_response_parseFromJSON(ObjectPaymentpreparationAPIlocalVarJSON);
        cJSON_Delete(ObjectPaymentpreparationAPIlocalVarJSON);
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
    free(localVarToReplace_pkiPaymentpreparationID);
    if (localVarSingleItemJSON_paymentpreparation_import_into_edm_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_paymentpreparation_import_into_edm_v1_request);
        localVarSingleItemJSON_paymentpreparation_import_into_edm_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

