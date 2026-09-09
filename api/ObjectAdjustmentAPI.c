#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "ObjectAdjustmentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define MAX_NUMBER_LENGTH_LONG 21


// Download multiples attachments from an Adjustment
//
binary_t*
ObjectAdjustmentAPI_adjustmentBatchDownloadV1(apiClient_t *apiClient, int *pkiAdjustmentID, adjustment_batch_download_v1_request_t *adjustment_batch_download_v1_request)
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
    char *localVarPath = strdup("/1/object/adjustment/{pkiAdjustmentID}/batchDownload");



    // Path Params
    long sizeOfPathParams_pkiAdjustmentID =  + sizeof("{ pkiAdjustmentID }") - 1;
    if(pkiAdjustmentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiAdjustmentID = malloc(sizeOfPathParams_pkiAdjustmentID);
    snprintf(localVarToReplace_pkiAdjustmentID, sizeOfPathParams_pkiAdjustmentID, "{%s}", "pkiAdjustmentID");

    char localVarBuff_pkiAdjustmentID[256];
    snprintf(localVarBuff_pkiAdjustmentID, sizeof localVarBuff_pkiAdjustmentID, "%ld", (long)*pkiAdjustmentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiAdjustmentID, localVarBuff_pkiAdjustmentID);




    // Body Param
    cJSON *localVarSingleItemJSON_adjustment_batch_download_v1_request = NULL;
    if (adjustment_batch_download_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_adjustment_batch_download_v1_request = adjustment_batch_download_v1_request_convertToJSON(adjustment_batch_download_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_adjustment_batch_download_v1_request);
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
    free(localVarToReplace_pkiAdjustmentID);
    if (localVarSingleItemJSON_adjustment_batch_download_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_adjustment_batch_download_v1_request);
        localVarSingleItemJSON_adjustment_batch_download_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Adjustment's attachments
//
adjustment_get_attachments_v1_response_t*
ObjectAdjustmentAPI_adjustmentGetAttachmentsV1(apiClient_t *apiClient, int *pkiAdjustmentID)
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
    char *localVarPath = strdup("/1/object/adjustment/{pkiAdjustmentID}/getAttachments");



    // Path Params
    long sizeOfPathParams_pkiAdjustmentID =  + sizeof("{ pkiAdjustmentID }") - 1;
    if(pkiAdjustmentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiAdjustmentID = malloc(sizeOfPathParams_pkiAdjustmentID);
    snprintf(localVarToReplace_pkiAdjustmentID, sizeOfPathParams_pkiAdjustmentID, "{%s}", "pkiAdjustmentID");

    char localVarBuff_pkiAdjustmentID[256];
    snprintf(localVarBuff_pkiAdjustmentID, sizeof localVarBuff_pkiAdjustmentID, "%ld", (long)*pkiAdjustmentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiAdjustmentID, localVarBuff_pkiAdjustmentID);



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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    adjustment_get_attachments_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectAdjustmentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = adjustment_get_attachments_v1_response_parseFromJSON(ObjectAdjustmentAPIlocalVarJSON);
        cJSON_Delete(ObjectAdjustmentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiAdjustmentID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Communication count
//
adjustment_get_communication_count_v1_response_t*
ObjectAdjustmentAPI_adjustmentGetCommunicationCountV1(apiClient_t *apiClient, int *pkiAdjustmentID)
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
    char *localVarPath = strdup("/1/object/adjustment/{pkiAdjustmentID}/getCommunicationCount");



    // Path Params
    long sizeOfPathParams_pkiAdjustmentID =  + sizeof("{ pkiAdjustmentID }") - 1;
    if(pkiAdjustmentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiAdjustmentID = malloc(sizeOfPathParams_pkiAdjustmentID);
    snprintf(localVarToReplace_pkiAdjustmentID, sizeOfPathParams_pkiAdjustmentID, "{%s}", "pkiAdjustmentID");

    char localVarBuff_pkiAdjustmentID[256];
    snprintf(localVarBuff_pkiAdjustmentID, sizeof localVarBuff_pkiAdjustmentID, "%ld", (long)*pkiAdjustmentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiAdjustmentID, localVarBuff_pkiAdjustmentID);



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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    adjustment_get_communication_count_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectAdjustmentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = adjustment_get_communication_count_v1_response_parseFromJSON(ObjectAdjustmentAPIlocalVarJSON);
        cJSON_Delete(ObjectAdjustmentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiAdjustmentID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Communication list
//
adjustment_get_communication_list_v1_response_t*
ObjectAdjustmentAPI_adjustmentGetCommunicationListV1(apiClient_t *apiClient, int *pkiAdjustmentID)
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
    char *localVarPath = strdup("/1/object/adjustment/{pkiAdjustmentID}/getCommunicationList");



    // Path Params
    long sizeOfPathParams_pkiAdjustmentID =  + sizeof("{ pkiAdjustmentID }") - 1;
    if(pkiAdjustmentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiAdjustmentID = malloc(sizeOfPathParams_pkiAdjustmentID);
    snprintf(localVarToReplace_pkiAdjustmentID, sizeOfPathParams_pkiAdjustmentID, "{%s}", "pkiAdjustmentID");

    char localVarBuff_pkiAdjustmentID[256];
    snprintf(localVarBuff_pkiAdjustmentID, sizeof localVarBuff_pkiAdjustmentID, "%ld", (long)*pkiAdjustmentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiAdjustmentID, localVarBuff_pkiAdjustmentID);



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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    adjustment_get_communication_list_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectAdjustmentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = adjustment_get_communication_list_v1_response_parseFromJSON(ObjectAdjustmentAPIlocalVarJSON);
        cJSON_Delete(ObjectAdjustmentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiAdjustmentID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Communication recipients
//
adjustment_get_communicationrecipients_v1_response_t*
ObjectAdjustmentAPI_adjustmentGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiAdjustmentID)
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
    char *localVarPath = strdup("/1/object/adjustment/{pkiAdjustmentID}/getCommunicationrecipients");



    // Path Params
    long sizeOfPathParams_pkiAdjustmentID =  + sizeof("{ pkiAdjustmentID }") - 1;
    if(pkiAdjustmentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiAdjustmentID = malloc(sizeOfPathParams_pkiAdjustmentID);
    snprintf(localVarToReplace_pkiAdjustmentID, sizeOfPathParams_pkiAdjustmentID, "{%s}", "pkiAdjustmentID");

    char localVarBuff_pkiAdjustmentID[256];
    snprintf(localVarBuff_pkiAdjustmentID, sizeof localVarBuff_pkiAdjustmentID, "%ld", (long)*pkiAdjustmentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiAdjustmentID, localVarBuff_pkiAdjustmentID);



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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    adjustment_get_communicationrecipients_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectAdjustmentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = adjustment_get_communicationrecipients_v1_response_parseFromJSON(ObjectAdjustmentAPIlocalVarJSON);
        cJSON_Delete(ObjectAdjustmentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiAdjustmentID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Communication senders
//
adjustment_get_communicationsenders_v1_response_t*
ObjectAdjustmentAPI_adjustmentGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiAdjustmentID)
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
    char *localVarPath = strdup("/1/object/adjustment/{pkiAdjustmentID}/getCommunicationsenders");



    // Path Params
    long sizeOfPathParams_pkiAdjustmentID =  + sizeof("{ pkiAdjustmentID }") - 1;
    if(pkiAdjustmentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiAdjustmentID = malloc(sizeOfPathParams_pkiAdjustmentID);
    snprintf(localVarToReplace_pkiAdjustmentID, sizeOfPathParams_pkiAdjustmentID, "{%s}", "pkiAdjustmentID");

    char localVarBuff_pkiAdjustmentID[256];
    snprintf(localVarBuff_pkiAdjustmentID, sizeof localVarBuff_pkiAdjustmentID, "%ld", (long)*pkiAdjustmentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiAdjustmentID, localVarBuff_pkiAdjustmentID);



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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    adjustment_get_communicationsenders_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectAdjustmentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = adjustment_get_communicationsenders_v1_response_parseFromJSON(ObjectAdjustmentAPIlocalVarJSON);
        cJSON_Delete(ObjectAdjustmentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiAdjustmentID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Import attachments into the Adjustment
//
adjustment_import_into_edm_v1_response_t*
ObjectAdjustmentAPI_adjustmentImportIntoEDMV1(apiClient_t *apiClient, int *pkiAdjustmentID, adjustment_import_into_edm_v1_request_t *adjustment_import_into_edm_v1_request)
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
    char *localVarPath = strdup("/1/object/adjustment/{pkiAdjustmentID}/importIntoEDM");



    // Path Params
    long sizeOfPathParams_pkiAdjustmentID =  + sizeof("{ pkiAdjustmentID }") - 1;
    if(pkiAdjustmentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiAdjustmentID = malloc(sizeOfPathParams_pkiAdjustmentID);
    snprintf(localVarToReplace_pkiAdjustmentID, sizeOfPathParams_pkiAdjustmentID, "{%s}", "pkiAdjustmentID");

    char localVarBuff_pkiAdjustmentID[256];
    snprintf(localVarBuff_pkiAdjustmentID, sizeof localVarBuff_pkiAdjustmentID, "%ld", (long)*pkiAdjustmentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiAdjustmentID, localVarBuff_pkiAdjustmentID);




    // Body Param
    cJSON *localVarSingleItemJSON_adjustment_import_into_edm_v1_request = NULL;
    if (adjustment_import_into_edm_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_adjustment_import_into_edm_v1_request = adjustment_import_into_edm_v1_request_convertToJSON(adjustment_import_into_edm_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_adjustment_import_into_edm_v1_request);
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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    adjustment_import_into_edm_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectAdjustmentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = adjustment_import_into_edm_v1_response_parseFromJSON(ObjectAdjustmentAPIlocalVarJSON);
        cJSON_Delete(ObjectAdjustmentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiAdjustmentID);
    if (localVarSingleItemJSON_adjustment_import_into_edm_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_adjustment_import_into_edm_v1_request);
        localVarSingleItemJSON_adjustment_import_into_edm_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

