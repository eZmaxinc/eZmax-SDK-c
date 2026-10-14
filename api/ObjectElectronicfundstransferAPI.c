#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "ObjectElectronicfundstransferAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define MAX_NUMBER_LENGTH_LONG 21

// Functions for enum EORDERBY for ObjectElectronicfundstransferAPI_electronicfundstransferGetListV1

static char* electronicfundstransferGetListV1_EORDERBY_ToString(ezmax_api_definition__full_electronicfundstransferGetListV1_eOrderBy_e EORDERBY){
    char *EORDERBYArray[] =  { "NULL", "pkiElectronicfundstransferID_ASC", "pkiElectronicfundstransferID_DESC", "fkiPaymentmethodID_ASC", "fkiPaymentmethodID_DESC", "fkiUserIDCreated_ASC", "fkiUserIDCreated_DESC", "sPaymentmethodDescriptionX_ASC", "sPaymentmethodDescriptionX_DESC", "sUserLoginnameCreated_ASC", "sUserLoginnameCreated_DESC", "iElectronicfundstransferNumber_ASC", "iElectronicfundstransferNumber_DESC", "dtElectronicfundstransferDate_ASC", "dtElectronicfundstransferDate_DESC", "iElectronicfundstransferTransactioncount_ASC", "iElectronicfundstransferTransactioncount_DESC", "dElectronicfundstransferAmountvisible_ASC", "dElectronicfundstransferAmountvisible_DESC" };
    return EORDERBYArray[EORDERBY];
}

static ezmax_api_definition__full_electronicfundstransferGetListV1_eOrderBy_e electronicfundstransferGetListV1_EORDERBY_FromString(char* EORDERBY){
    int stringToReturn = 0;
    char *EORDERBYArray[] =  { "NULL", "pkiElectronicfundstransferID_ASC", "pkiElectronicfundstransferID_DESC", "fkiPaymentmethodID_ASC", "fkiPaymentmethodID_DESC", "fkiUserIDCreated_ASC", "fkiUserIDCreated_DESC", "sPaymentmethodDescriptionX_ASC", "sPaymentmethodDescriptionX_DESC", "sUserLoginnameCreated_ASC", "sUserLoginnameCreated_DESC", "iElectronicfundstransferNumber_ASC", "iElectronicfundstransferNumber_DESC", "dtElectronicfundstransferDate_ASC", "dtElectronicfundstransferDate_DESC", "iElectronicfundstransferTransactioncount_ASC", "iElectronicfundstransferTransactioncount_DESC", "dElectronicfundstransferAmountvisible_ASC", "dElectronicfundstransferAmountvisible_DESC" };
    size_t sizeofArray = sizeof(EORDERBYArray) / sizeof(EORDERBYArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(EORDERBY, EORDERBYArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function electronicfundstransferGetListV1_EORDERBY_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *electronicfundstransferGetListV1_EORDERBY_convertToJSON(ezmax_api_definition__full_electronicfundstransferGetListV1_eOrderBy_e EORDERBY) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "eOrderBy", electronicfundstransferGetListV1_EORDERBY_ToString(EORDERBY)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function electronicfundstransferGetListV1_EORDERBY_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_electronicfundstransferGetListV1_eOrderBy_e electronicfundstransferGetListV1_EORDERBY_parseFromJSON(cJSON* EORDERBYJSON) {
    ezmax_api_definition__full_electronicfundstransferGetListV1_eOrderBy_e EORDERBYVariable = 0;
    cJSON *EORDERBYVar = cJSON_GetObjectItemCaseSensitive(EORDERBYJSON, "eOrderBy");
    if(!cJSON_IsString(EORDERBYVar) || (EORDERBYVar->valuestring == NULL))
    {
        goto end;
    }
    EORDERBYVariable = electronicfundstransferGetListV1_EORDERBY_FromString(EORDERBYVar->valuestring);
    return EORDERBYVariable;
end:
    return 0;
}
*/

// Functions for enum  for ObjectElectronicfundstransferAPI_electronicfundstransferGetListV1

static char* electronicfundstransferGetListV1__ToString(ezmax_api_definition__full_electronicfundstransferGetListV1_Accept-Language_e ){
    char *Array[] =  { "NULL", "*", "en", "fr" };
    return Array[];
}

static ezmax_api_definition__full_electronicfundstransferGetListV1_Accept-Language_e electronicfundstransferGetListV1__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "*", "en", "fr" };
    size_t sizeofArray = sizeof(Array) / sizeof(Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(, Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function electronicfundstransferGetListV1__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *electronicfundstransferGetListV1__convertToJSON(ezmax_api_definition__full_electronicfundstransferGetListV1_Accept-Language_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function electronicfundstransferGetListV1__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_electronicfundstransferGetListV1_Accept-Language_e electronicfundstransferGetListV1__parseFromJSON(cJSON* JSON) {
    ezmax_api_definition__full_electronicfundstransferGetListV1_Accept-Language_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/


// Download multiples attachments from an Electronicfundstransfer
//
binary_t*
ObjectElectronicfundstransferAPI_electronicfundstransferBatchDownloadV1(apiClient_t *apiClient, int *pkiElectronicfundstransferID, electronicfundstransfer_batch_download_v1_request_t *electronicfundstransfer_batch_download_v1_request)
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
    char *localVarPath = strdup("/1/object/electronicfundstransfer/{pkiElectronicfundstransferID}/batchDownload");



    // Path Params
    long sizeOfPathParams_pkiElectronicfundstransferID =  + sizeof("{ pkiElectronicfundstransferID }") - 1;
    if(pkiElectronicfundstransferID == 0){
        goto end;
    }
    char* localVarToReplace_pkiElectronicfundstransferID = malloc(sizeOfPathParams_pkiElectronicfundstransferID);
    snprintf(localVarToReplace_pkiElectronicfundstransferID, sizeOfPathParams_pkiElectronicfundstransferID, "{%s}", "pkiElectronicfundstransferID");

    char localVarBuff_pkiElectronicfundstransferID[256];
    snprintf(localVarBuff_pkiElectronicfundstransferID, sizeof localVarBuff_pkiElectronicfundstransferID, "%ld", (long)*pkiElectronicfundstransferID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiElectronicfundstransferID, localVarBuff_pkiElectronicfundstransferID);




    // Body Param
    cJSON *localVarSingleItemJSON_electronicfundstransfer_batch_download_v1_request = NULL;
    if (electronicfundstransfer_batch_download_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_electronicfundstransfer_batch_download_v1_request = electronicfundstransfer_batch_download_v1_request_convertToJSON(electronicfundstransfer_batch_download_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_electronicfundstransfer_batch_download_v1_request);
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
    free(localVarToReplace_pkiElectronicfundstransferID);
    if (localVarSingleItemJSON_electronicfundstransfer_batch_download_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_electronicfundstransfer_batch_download_v1_request);
        localVarSingleItemJSON_electronicfundstransfer_batch_download_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Electronicfundstransfer's attachments
//
electronicfundstransfer_get_attachments_v1_response_t*
ObjectElectronicfundstransferAPI_electronicfundstransferGetAttachmentsV1(apiClient_t *apiClient, int *pkiElectronicfundstransferID)
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
    char *localVarPath = strdup("/1/object/electronicfundstransfer/{pkiElectronicfundstransferID}/getAttachments");



    // Path Params
    long sizeOfPathParams_pkiElectronicfundstransferID =  + sizeof("{ pkiElectronicfundstransferID }") - 1;
    if(pkiElectronicfundstransferID == 0){
        goto end;
    }
    char* localVarToReplace_pkiElectronicfundstransferID = malloc(sizeOfPathParams_pkiElectronicfundstransferID);
    snprintf(localVarToReplace_pkiElectronicfundstransferID, sizeOfPathParams_pkiElectronicfundstransferID, "{%s}", "pkiElectronicfundstransferID");

    char localVarBuff_pkiElectronicfundstransferID[256];
    snprintf(localVarBuff_pkiElectronicfundstransferID, sizeof localVarBuff_pkiElectronicfundstransferID, "%ld", (long)*pkiElectronicfundstransferID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiElectronicfundstransferID, localVarBuff_pkiElectronicfundstransferID);



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
    electronicfundstransfer_get_attachments_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectElectronicfundstransferAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = electronicfundstransfer_get_attachments_v1_response_parseFromJSON(ObjectElectronicfundstransferAPIlocalVarJSON);
        cJSON_Delete(ObjectElectronicfundstransferAPIlocalVarJSON);
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
    free(localVarToReplace_pkiElectronicfundstransferID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Communication count
//
// 
//
electronicfundstransfer_get_communication_count_v1_response_t*
ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationCountV1(apiClient_t *apiClient, int *pkiElectronicfundstransferID)
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
    char *localVarPath = strdup("/1/object/electronicfundstransfer/{pkiElectronicfundstransferID}/getCommunicationCount");



    // Path Params
    long sizeOfPathParams_pkiElectronicfundstransferID =  + sizeof("{ pkiElectronicfundstransferID }") - 1;
    if(pkiElectronicfundstransferID == 0){
        goto end;
    }
    char* localVarToReplace_pkiElectronicfundstransferID = malloc(sizeOfPathParams_pkiElectronicfundstransferID);
    snprintf(localVarToReplace_pkiElectronicfundstransferID, sizeOfPathParams_pkiElectronicfundstransferID, "{%s}", "pkiElectronicfundstransferID");

    char localVarBuff_pkiElectronicfundstransferID[256];
    snprintf(localVarBuff_pkiElectronicfundstransferID, sizeof localVarBuff_pkiElectronicfundstransferID, "%ld", (long)*pkiElectronicfundstransferID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiElectronicfundstransferID, localVarBuff_pkiElectronicfundstransferID);



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
    electronicfundstransfer_get_communication_count_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectElectronicfundstransferAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = electronicfundstransfer_get_communication_count_v1_response_parseFromJSON(ObjectElectronicfundstransferAPIlocalVarJSON);
        cJSON_Delete(ObjectElectronicfundstransferAPIlocalVarJSON);
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
    free(localVarToReplace_pkiElectronicfundstransferID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Communication list
//
// 
//
electronicfundstransfer_get_communication_list_v1_response_t*
ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationListV1(apiClient_t *apiClient, int *pkiElectronicfundstransferID)
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
    char *localVarPath = strdup("/1/object/electronicfundstransfer/{pkiElectronicfundstransferID}/getCommunicationList");



    // Path Params
    long sizeOfPathParams_pkiElectronicfundstransferID =  + sizeof("{ pkiElectronicfundstransferID }") - 1;
    if(pkiElectronicfundstransferID == 0){
        goto end;
    }
    char* localVarToReplace_pkiElectronicfundstransferID = malloc(sizeOfPathParams_pkiElectronicfundstransferID);
    snprintf(localVarToReplace_pkiElectronicfundstransferID, sizeOfPathParams_pkiElectronicfundstransferID, "{%s}", "pkiElectronicfundstransferID");

    char localVarBuff_pkiElectronicfundstransferID[256];
    snprintf(localVarBuff_pkiElectronicfundstransferID, sizeof localVarBuff_pkiElectronicfundstransferID, "%ld", (long)*pkiElectronicfundstransferID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiElectronicfundstransferID, localVarBuff_pkiElectronicfundstransferID);



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
    electronicfundstransfer_get_communication_list_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectElectronicfundstransferAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = electronicfundstransfer_get_communication_list_v1_response_parseFromJSON(ObjectElectronicfundstransferAPIlocalVarJSON);
        cJSON_Delete(ObjectElectronicfundstransferAPIlocalVarJSON);
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
    free(localVarToReplace_pkiElectronicfundstransferID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Electronicfundstransfer's Communicationrecipient
//
// 
//
electronicfundstransfer_get_communicationrecipients_v1_response_t*
ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiElectronicfundstransferID)
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
    char *localVarPath = strdup("/1/object/electronicfundstransfer/{pkiElectronicfundstransferID}/getCommunicationrecipients");



    // Path Params
    long sizeOfPathParams_pkiElectronicfundstransferID =  + sizeof("{ pkiElectronicfundstransferID }") - 1;
    if(pkiElectronicfundstransferID == 0){
        goto end;
    }
    char* localVarToReplace_pkiElectronicfundstransferID = malloc(sizeOfPathParams_pkiElectronicfundstransferID);
    snprintf(localVarToReplace_pkiElectronicfundstransferID, sizeOfPathParams_pkiElectronicfundstransferID, "{%s}", "pkiElectronicfundstransferID");

    char localVarBuff_pkiElectronicfundstransferID[256];
    snprintf(localVarBuff_pkiElectronicfundstransferID, sizeof localVarBuff_pkiElectronicfundstransferID, "%ld", (long)*pkiElectronicfundstransferID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiElectronicfundstransferID, localVarBuff_pkiElectronicfundstransferID);



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
    electronicfundstransfer_get_communicationrecipients_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectElectronicfundstransferAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = electronicfundstransfer_get_communicationrecipients_v1_response_parseFromJSON(ObjectElectronicfundstransferAPIlocalVarJSON);
        cJSON_Delete(ObjectElectronicfundstransferAPIlocalVarJSON);
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
    free(localVarToReplace_pkiElectronicfundstransferID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Electronicfundstransfer's Communicationsender
//
// 
//
electronicfundstransfer_get_communicationsenders_v1_response_t*
ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiElectronicfundstransferID)
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
    char *localVarPath = strdup("/1/object/electronicfundstransfer/{pkiElectronicfundstransferID}/getCommunicationsenders");



    // Path Params
    long sizeOfPathParams_pkiElectronicfundstransferID =  + sizeof("{ pkiElectronicfundstransferID }") - 1;
    if(pkiElectronicfundstransferID == 0){
        goto end;
    }
    char* localVarToReplace_pkiElectronicfundstransferID = malloc(sizeOfPathParams_pkiElectronicfundstransferID);
    snprintf(localVarToReplace_pkiElectronicfundstransferID, sizeOfPathParams_pkiElectronicfundstransferID, "{%s}", "pkiElectronicfundstransferID");

    char localVarBuff_pkiElectronicfundstransferID[256];
    snprintf(localVarBuff_pkiElectronicfundstransferID, sizeof localVarBuff_pkiElectronicfundstransferID, "%ld", (long)*pkiElectronicfundstransferID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiElectronicfundstransferID, localVarBuff_pkiElectronicfundstransferID);



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
    electronicfundstransfer_get_communicationsenders_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectElectronicfundstransferAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = electronicfundstransfer_get_communicationsenders_v1_response_parseFromJSON(ObjectElectronicfundstransferAPIlocalVarJSON);
        cJSON_Delete(ObjectElectronicfundstransferAPIlocalVarJSON);
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
    free(localVarToReplace_pkiElectronicfundstransferID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Electronicfundstransfer list
//
// 
//
electronicfundstransfer_get_list_v1_response_t*
ObjectElectronicfundstransferAPI_electronicfundstransferGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_electronicfundstransferGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/1/object/electronicfundstransfer/getList");





    // header parameters
    char *keyHeader_Accept_Language = NULL;
    header_accept_language_e valueHeader_Accept_Language = 0;
    keyValuePair_t *keyPairHeader_Accept_Language = 0;
    if (Accept_Language) {
        keyHeader_Accept_Language = strdup("Accept-Language");
        valueHeader_Accept_Language = (Accept_Language);
        keyPairHeader_Accept_Language = keyValuePair_create(keyHeader_Accept_Language, (void *)&valueHeader_Accept_Language);
        list_addElement(localVarHeaderParameters,keyPairHeader_Accept_Language);
    }


    // query parameters
    char *keyQuery_eOrderBy = NULL;
    ezmax_api_definition__full_electronicfundstransferGetListV1_eOrderBy_e valueQuery_eOrderBy ;
    keyValuePair_t *keyPairQuery_eOrderBy = 0;
    if (eOrderBy)
    {
        keyQuery_eOrderBy = strdup("eOrderBy");
        valueQuery_eOrderBy = (eOrderBy);
        keyPairQuery_eOrderBy = keyValuePair_create(keyQuery_eOrderBy, strdup(electronicfundstransferGetListV1_EORDERBY_ToString(
        valueQuery_eOrderBy)));
        list_addElement(localVarQueryParameters,keyPairQuery_eOrderBy);
    }

    // query parameters
    char *keyQuery_iRowMax = NULL;
    char * valueQuery_iRowMax = NULL;
    keyValuePair_t *keyPairQuery_iRowMax = 0;
    if (iRowMax)
    {
        keyQuery_iRowMax = strdup("iRowMax");
        valueQuery_iRowMax = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_iRowMax, MAX_NUMBER_LENGTH, "%d", *iRowMax);
        keyPairQuery_iRowMax = keyValuePair_create(keyQuery_iRowMax, valueQuery_iRowMax);
        list_addElement(localVarQueryParameters,keyPairQuery_iRowMax);
    }

    // query parameters
    char *keyQuery_iRowOffset = NULL;
    char * valueQuery_iRowOffset = NULL;
    keyValuePair_t *keyPairQuery_iRowOffset = 0;
    if (iRowOffset)
    {
        keyQuery_iRowOffset = strdup("iRowOffset");
        valueQuery_iRowOffset = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_iRowOffset, MAX_NUMBER_LENGTH, "%d", *iRowOffset);
        keyPairQuery_iRowOffset = keyValuePair_create(keyQuery_iRowOffset, valueQuery_iRowOffset);
        list_addElement(localVarQueryParameters,keyPairQuery_iRowOffset);
    }

    // query parameters
    char *keyQuery_sFilter = NULL;
    char * valueQuery_sFilter = NULL;
    keyValuePair_t *keyPairQuery_sFilter = 0;
    if (sFilter)
    {
        keyQuery_sFilter = strdup("sFilter");
        valueQuery_sFilter = strdup((sFilter));
        keyPairQuery_sFilter = keyValuePair_create(keyQuery_sFilter, valueQuery_sFilter);
        list_addElement(localVarQueryParameters,keyPairQuery_sFilter);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/vnd.openxmlformats-officedocument.spreadsheetml.sheet"); //produces
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
    //if (apiClient->response_code == 406) {
    //    printf("%s\n","The URL is valid, but one of the Accept header is not defined or invalid. For example, you set the header \&quot;Accept: application/json\&quot; but the function can only return \&quot;Content-type: image/png\&quot;");
    //}
    //nonprimitive not container
    electronicfundstransfer_get_list_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectElectronicfundstransferAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = electronicfundstransfer_get_list_v1_response_parseFromJSON(ObjectElectronicfundstransferAPIlocalVarJSON);
        cJSON_Delete(ObjectElectronicfundstransferAPIlocalVarJSON);
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
    list_freeList(localVarQueryParameters);
    list_freeList(localVarHeaderParameters);
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if (keyHeader_Accept_Language) {
        free(keyHeader_Accept_Language);
        keyHeader_Accept_Language = NULL;
    }
    free(keyPairHeader_Accept_Language);
    if(keyQuery_eOrderBy){
        free(keyQuery_eOrderBy);
        keyQuery_eOrderBy = NULL;
    }
    if(keyPairQuery_eOrderBy){
        keyValuePair_free(keyPairQuery_eOrderBy);
        keyPairQuery_eOrderBy = NULL;
    }
    if(keyQuery_iRowMax){
        free(keyQuery_iRowMax);
        keyQuery_iRowMax = NULL;
    }
    if(valueQuery_iRowMax){
        free(valueQuery_iRowMax);
        valueQuery_iRowMax = NULL;
    }
    if(keyPairQuery_iRowMax){
        keyValuePair_free(keyPairQuery_iRowMax);
        keyPairQuery_iRowMax = NULL;
    }
    if(keyQuery_iRowOffset){
        free(keyQuery_iRowOffset);
        keyQuery_iRowOffset = NULL;
    }
    if(valueQuery_iRowOffset){
        free(valueQuery_iRowOffset);
        valueQuery_iRowOffset = NULL;
    }
    if(keyPairQuery_iRowOffset){
        keyValuePair_free(keyPairQuery_iRowOffset);
        keyPairQuery_iRowOffset = NULL;
    }
    if(keyQuery_sFilter){
        free(keyQuery_sFilter);
        keyQuery_sFilter = NULL;
    }
    if(valueQuery_sFilter){
        free(valueQuery_sFilter);
        valueQuery_sFilter = NULL;
    }
    if(keyPairQuery_sFilter){
        keyValuePair_free(keyPairQuery_sFilter);
        keyPairQuery_sFilter = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Import attachments into the Electronicfundstransfer
//
// 
//
electronicfundstransfer_import_into_edm_v1_response_t*
ObjectElectronicfundstransferAPI_electronicfundstransferImportIntoEDMV1(apiClient_t *apiClient, int *pkiElectronicfundstransferID, electronicfundstransfer_import_into_edm_v1_request_t *electronicfundstransfer_import_into_edm_v1_request)
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
    char *localVarPath = strdup("/1/object/electronicfundstransfer/{pkiElectronicfundstransferID}/importIntoEDM");



    // Path Params
    long sizeOfPathParams_pkiElectronicfundstransferID =  + sizeof("{ pkiElectronicfundstransferID }") - 1;
    if(pkiElectronicfundstransferID == 0){
        goto end;
    }
    char* localVarToReplace_pkiElectronicfundstransferID = malloc(sizeOfPathParams_pkiElectronicfundstransferID);
    snprintf(localVarToReplace_pkiElectronicfundstransferID, sizeOfPathParams_pkiElectronicfundstransferID, "{%s}", "pkiElectronicfundstransferID");

    char localVarBuff_pkiElectronicfundstransferID[256];
    snprintf(localVarBuff_pkiElectronicfundstransferID, sizeof localVarBuff_pkiElectronicfundstransferID, "%ld", (long)*pkiElectronicfundstransferID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiElectronicfundstransferID, localVarBuff_pkiElectronicfundstransferID);




    // Body Param
    cJSON *localVarSingleItemJSON_electronicfundstransfer_import_into_edm_v1_request = NULL;
    if (electronicfundstransfer_import_into_edm_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_electronicfundstransfer_import_into_edm_v1_request = electronicfundstransfer_import_into_edm_v1_request_convertToJSON(electronicfundstransfer_import_into_edm_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_electronicfundstransfer_import_into_edm_v1_request);
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
    electronicfundstransfer_import_into_edm_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectElectronicfundstransferAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = electronicfundstransfer_import_into_edm_v1_response_parseFromJSON(ObjectElectronicfundstransferAPIlocalVarJSON);
        cJSON_Delete(ObjectElectronicfundstransferAPIlocalVarJSON);
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
    free(localVarToReplace_pkiElectronicfundstransferID);
    if (localVarSingleItemJSON_electronicfundstransfer_import_into_edm_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_electronicfundstransfer_import_into_edm_v1_request);
        localVarSingleItemJSON_electronicfundstransfer_import_into_edm_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

