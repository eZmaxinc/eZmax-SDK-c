#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectInvoiceAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
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

