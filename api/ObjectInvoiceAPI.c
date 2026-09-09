#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "ObjectInvoiceAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define MAX_NUMBER_LENGTH_LONG 21


// Download multiples attachments from an Invoice
//
binary_t*
ObjectInvoiceAPI_invoiceBatchDownloadV1(apiClient_t *apiClient, int *pkiInvoiceID, invoice_batch_download_v1_request_t *invoice_batch_download_v1_request)
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
    char *localVarPath = strdup("/1/object/invoice/{pkiInvoiceID}/batchDownload");



    // Path Params
    long sizeOfPathParams_pkiInvoiceID =  + sizeof("{ pkiInvoiceID }") - 1;
    if(pkiInvoiceID == 0){
        goto end;
    }
    char* localVarToReplace_pkiInvoiceID = malloc(sizeOfPathParams_pkiInvoiceID);
    snprintf(localVarToReplace_pkiInvoiceID, sizeOfPathParams_pkiInvoiceID, "{%s}", "pkiInvoiceID");

    char localVarBuff_pkiInvoiceID[256];
    snprintf(localVarBuff_pkiInvoiceID, sizeof localVarBuff_pkiInvoiceID, "%ld", (long)*pkiInvoiceID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiInvoiceID, localVarBuff_pkiInvoiceID);




    // Body Param
    cJSON *localVarSingleItemJSON_invoice_batch_download_v1_request = NULL;
    if (invoice_batch_download_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_invoice_batch_download_v1_request = invoice_batch_download_v1_request_convertToJSON(invoice_batch_download_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_invoice_batch_download_v1_request);
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
    free(localVarToReplace_pkiInvoiceID);
    if (localVarSingleItemJSON_invoice_batch_download_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_invoice_batch_download_v1_request);
        localVarSingleItemJSON_invoice_batch_download_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Invoice's Attachments
//
// 
//
invoice_get_attachments_v1_response_t*
ObjectInvoiceAPI_invoiceGetAttachmentsV1(apiClient_t *apiClient, int *pkiInvoiceID)
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
    char *localVarPath = strdup("/1/object/invoice/{pkiInvoiceID}/getAttachments");



    // Path Params
    long sizeOfPathParams_pkiInvoiceID =  + sizeof("{ pkiInvoiceID }") - 1;
    if(pkiInvoiceID == 0){
        goto end;
    }
    char* localVarToReplace_pkiInvoiceID = malloc(sizeOfPathParams_pkiInvoiceID);
    snprintf(localVarToReplace_pkiInvoiceID, sizeOfPathParams_pkiInvoiceID, "{%s}", "pkiInvoiceID");

    char localVarBuff_pkiInvoiceID[256];
    snprintf(localVarBuff_pkiInvoiceID, sizeof localVarBuff_pkiInvoiceID, "%ld", (long)*pkiInvoiceID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiInvoiceID, localVarBuff_pkiInvoiceID);



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
    invoice_get_attachments_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectInvoiceAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = invoice_get_attachments_v1_response_parseFromJSON(ObjectInvoiceAPIlocalVarJSON);
        cJSON_Delete(ObjectInvoiceAPIlocalVarJSON);
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
    free(localVarToReplace_pkiInvoiceID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Communication count
//
// 
//
invoice_get_communication_count_v1_response_t*
ObjectInvoiceAPI_invoiceGetCommunicationCountV1(apiClient_t *apiClient, int *pkiInvoiceID)
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
    char *localVarPath = strdup("/1/object/invoice/{pkiInvoiceID}/getCommunicationCount");



    // Path Params
    long sizeOfPathParams_pkiInvoiceID =  + sizeof("{ pkiInvoiceID }") - 1;
    if(pkiInvoiceID == 0){
        goto end;
    }
    char* localVarToReplace_pkiInvoiceID = malloc(sizeOfPathParams_pkiInvoiceID);
    snprintf(localVarToReplace_pkiInvoiceID, sizeOfPathParams_pkiInvoiceID, "{%s}", "pkiInvoiceID");

    char localVarBuff_pkiInvoiceID[256];
    snprintf(localVarBuff_pkiInvoiceID, sizeof localVarBuff_pkiInvoiceID, "%ld", (long)*pkiInvoiceID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiInvoiceID, localVarBuff_pkiInvoiceID);



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
    invoice_get_communication_count_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectInvoiceAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = invoice_get_communication_count_v1_response_parseFromJSON(ObjectInvoiceAPIlocalVarJSON);
        cJSON_Delete(ObjectInvoiceAPIlocalVarJSON);
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
    free(localVarToReplace_pkiInvoiceID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Communication list
//
// 
//
invoice_get_communication_list_v1_response_t*
ObjectInvoiceAPI_invoiceGetCommunicationListV1(apiClient_t *apiClient, int *pkiInvoiceID)
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
    char *localVarPath = strdup("/1/object/invoice/{pkiInvoiceID}/getCommunicationList");



    // Path Params
    long sizeOfPathParams_pkiInvoiceID =  + sizeof("{ pkiInvoiceID }") - 1;
    if(pkiInvoiceID == 0){
        goto end;
    }
    char* localVarToReplace_pkiInvoiceID = malloc(sizeOfPathParams_pkiInvoiceID);
    snprintf(localVarToReplace_pkiInvoiceID, sizeOfPathParams_pkiInvoiceID, "{%s}", "pkiInvoiceID");

    char localVarBuff_pkiInvoiceID[256];
    snprintf(localVarBuff_pkiInvoiceID, sizeof localVarBuff_pkiInvoiceID, "%ld", (long)*pkiInvoiceID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiInvoiceID, localVarBuff_pkiInvoiceID);



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
    invoice_get_communication_list_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectInvoiceAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = invoice_get_communication_list_v1_response_parseFromJSON(ObjectInvoiceAPIlocalVarJSON);
        cJSON_Delete(ObjectInvoiceAPIlocalVarJSON);
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
    free(localVarToReplace_pkiInvoiceID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Invoice's Communicationrecipient
//
// 
//
invoice_get_communicationrecipients_v1_response_t*
ObjectInvoiceAPI_invoiceGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiInvoiceID)
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
    char *localVarPath = strdup("/1/object/invoice/{pkiInvoiceID}/getCommunicationrecipients");



    // Path Params
    long sizeOfPathParams_pkiInvoiceID =  + sizeof("{ pkiInvoiceID }") - 1;
    if(pkiInvoiceID == 0){
        goto end;
    }
    char* localVarToReplace_pkiInvoiceID = malloc(sizeOfPathParams_pkiInvoiceID);
    snprintf(localVarToReplace_pkiInvoiceID, sizeOfPathParams_pkiInvoiceID, "{%s}", "pkiInvoiceID");

    char localVarBuff_pkiInvoiceID[256];
    snprintf(localVarBuff_pkiInvoiceID, sizeof localVarBuff_pkiInvoiceID, "%ld", (long)*pkiInvoiceID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiInvoiceID, localVarBuff_pkiInvoiceID);



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
    invoice_get_communicationrecipients_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectInvoiceAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = invoice_get_communicationrecipients_v1_response_parseFromJSON(ObjectInvoiceAPIlocalVarJSON);
        cJSON_Delete(ObjectInvoiceAPIlocalVarJSON);
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
    free(localVarToReplace_pkiInvoiceID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Invoice's Communicationsender
//
// 
//
invoice_get_communicationsenders_v1_response_t*
ObjectInvoiceAPI_invoiceGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiInvoiceID)
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
    char *localVarPath = strdup("/1/object/invoice/{pkiInvoiceID}/getCommunicationsenders");



    // Path Params
    long sizeOfPathParams_pkiInvoiceID =  + sizeof("{ pkiInvoiceID }") - 1;
    if(pkiInvoiceID == 0){
        goto end;
    }
    char* localVarToReplace_pkiInvoiceID = malloc(sizeOfPathParams_pkiInvoiceID);
    snprintf(localVarToReplace_pkiInvoiceID, sizeOfPathParams_pkiInvoiceID, "{%s}", "pkiInvoiceID");

    char localVarBuff_pkiInvoiceID[256];
    snprintf(localVarBuff_pkiInvoiceID, sizeof localVarBuff_pkiInvoiceID, "%ld", (long)*pkiInvoiceID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiInvoiceID, localVarBuff_pkiInvoiceID);



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
    invoice_get_communicationsenders_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectInvoiceAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = invoice_get_communicationsenders_v1_response_parseFromJSON(ObjectInvoiceAPIlocalVarJSON);
        cJSON_Delete(ObjectInvoiceAPIlocalVarJSON);
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
    free(localVarToReplace_pkiInvoiceID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Import attachments into the Invoice
//
// 
//
invoice_import_into_edm_v1_response_t*
ObjectInvoiceAPI_invoiceImportIntoEDMV1(apiClient_t *apiClient, int *pkiInvoiceID, invoice_import_into_edm_v1_request_t *invoice_import_into_edm_v1_request)
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
    char *localVarPath = strdup("/1/object/invoice/{pkiInvoiceID}/importIntoEDM");



    // Path Params
    long sizeOfPathParams_pkiInvoiceID =  + sizeof("{ pkiInvoiceID }") - 1;
    if(pkiInvoiceID == 0){
        goto end;
    }
    char* localVarToReplace_pkiInvoiceID = malloc(sizeOfPathParams_pkiInvoiceID);
    snprintf(localVarToReplace_pkiInvoiceID, sizeOfPathParams_pkiInvoiceID, "{%s}", "pkiInvoiceID");

    char localVarBuff_pkiInvoiceID[256];
    snprintf(localVarBuff_pkiInvoiceID, sizeof localVarBuff_pkiInvoiceID, "%ld", (long)*pkiInvoiceID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiInvoiceID, localVarBuff_pkiInvoiceID);




    // Body Param
    cJSON *localVarSingleItemJSON_invoice_import_into_edm_v1_request = NULL;
    if (invoice_import_into_edm_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_invoice_import_into_edm_v1_request = invoice_import_into_edm_v1_request_convertToJSON(invoice_import_into_edm_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_invoice_import_into_edm_v1_request);
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
    invoice_import_into_edm_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectInvoiceAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = invoice_import_into_edm_v1_response_parseFromJSON(ObjectInvoiceAPIlocalVarJSON);
        cJSON_Delete(ObjectInvoiceAPIlocalVarJSON);
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
    free(localVarToReplace_pkiInvoiceID);
    if (localVarSingleItemJSON_invoice_import_into_edm_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_invoice_import_into_edm_v1_request);
        localVarSingleItemJSON_invoice_import_into_edm_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

