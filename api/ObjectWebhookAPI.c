#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectWebhookAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)

// Functions for enum EWEBHOOKHISTORYINTERVAL for ObjectWebhookAPI_webhookGetHistoryV1

static char* webhookGetHistoryV1_EWEBHOOKHISTORYINTERVAL_ToString(ezmax_api_definition__full_webhookGetHistoryV1_eWebhookHistoryinterval_e EWEBHOOKHISTORYINTERVAL){
    char *EWEBHOOKHISTORYINTERVALArray[] =  { "NULL", "LastDay", "LastWeek" };
    return EWEBHOOKHISTORYINTERVALArray[EWEBHOOKHISTORYINTERVAL];
}

static ezmax_api_definition__full_webhookGetHistoryV1_eWebhookHistoryinterval_e webhookGetHistoryV1_EWEBHOOKHISTORYINTERVAL_FromString(char* EWEBHOOKHISTORYINTERVAL){
    int stringToReturn = 0;
    char *EWEBHOOKHISTORYINTERVALArray[] =  { "NULL", "LastDay", "LastWeek" };
    size_t sizeofArray = sizeof(EWEBHOOKHISTORYINTERVALArray) / sizeof(EWEBHOOKHISTORYINTERVALArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(EWEBHOOKHISTORYINTERVAL, EWEBHOOKHISTORYINTERVALArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function webhookGetHistoryV1_EWEBHOOKHISTORYINTERVAL_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *webhookGetHistoryV1_EWEBHOOKHISTORYINTERVAL_convertToJSON(ezmax_api_definition__full_webhookGetHistoryV1_eWebhookHistoryinterval_e EWEBHOOKHISTORYINTERVAL) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "eWebhookHistoryinterval", webhookGetHistoryV1_EWEBHOOKHISTORYINTERVAL_ToString(EWEBHOOKHISTORYINTERVAL)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function webhookGetHistoryV1_EWEBHOOKHISTORYINTERVAL_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_webhookGetHistoryV1_eWebhookHistoryinterval_e webhookGetHistoryV1_EWEBHOOKHISTORYINTERVAL_parseFromJSON(cJSON* EWEBHOOKHISTORYINTERVALJSON) {
    ezmax_api_definition__full_webhookGetHistoryV1_eWebhookHistoryinterval_e EWEBHOOKHISTORYINTERVALVariable = 0;
    cJSON *EWEBHOOKHISTORYINTERVALVar = cJSON_GetObjectItemCaseSensitive(EWEBHOOKHISTORYINTERVALJSON, "eWebhookHistoryinterval");
    if(!cJSON_IsString(EWEBHOOKHISTORYINTERVALVar) || (EWEBHOOKHISTORYINTERVALVar->valuestring == NULL))
    {
        goto end;
    }
    EWEBHOOKHISTORYINTERVALVariable = webhookGetHistoryV1_EWEBHOOKHISTORYINTERVAL_FromString(EWEBHOOKHISTORYINTERVALVar->valuestring);
    return EWEBHOOKHISTORYINTERVALVariable;
end:
    return 0;
}
*/

// Functions for enum EORDERBY for ObjectWebhookAPI_webhookGetListV1

static char* webhookGetListV1_EORDERBY_ToString(ezmax_api_definition__full_webhookGetListV1_eOrderBy_e EORDERBY){
    char *EORDERBYArray[] =  { "NULL", "pkiWebhookID_ASC", "pkiWebhookID_DESC", "sWebhookDescription_ASC", "sWebhookDescription_DESC", "eWebhookEzsignevent_ASC", "eWebhookEzsignevent_DESC", "eWebhookManagementevent_ASC", "eWebhookManagementevent_DESC", "eWebhookModule_ASC", "eWebhookModule_DESC", "sWebhookEmailfailed_ASC", "sWebhookEmailfailed_DESC", "sWebhookEvent_ASC", "sWebhookEvent_DESC", "sWebhookUrl_ASC", "sWebhookUrl_DESC", "bWebhookIsactive_ASC", "bWebhookIsactive_DESC", "bWebhookIssigned_ASC", "bWebhookIssigned_DESC" };
    return EORDERBYArray[EORDERBY];
}

static ezmax_api_definition__full_webhookGetListV1_eOrderBy_e webhookGetListV1_EORDERBY_FromString(char* EORDERBY){
    int stringToReturn = 0;
    char *EORDERBYArray[] =  { "NULL", "pkiWebhookID_ASC", "pkiWebhookID_DESC", "sWebhookDescription_ASC", "sWebhookDescription_DESC", "eWebhookEzsignevent_ASC", "eWebhookEzsignevent_DESC", "eWebhookManagementevent_ASC", "eWebhookManagementevent_DESC", "eWebhookModule_ASC", "eWebhookModule_DESC", "sWebhookEmailfailed_ASC", "sWebhookEmailfailed_DESC", "sWebhookEvent_ASC", "sWebhookEvent_DESC", "sWebhookUrl_ASC", "sWebhookUrl_DESC", "bWebhookIsactive_ASC", "bWebhookIsactive_DESC", "bWebhookIssigned_ASC", "bWebhookIssigned_DESC" };
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
// Function webhookGetListV1_EORDERBY_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *webhookGetListV1_EORDERBY_convertToJSON(ezmax_api_definition__full_webhookGetListV1_eOrderBy_e EORDERBY) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "eOrderBy", webhookGetListV1_EORDERBY_ToString(EORDERBY)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function webhookGetListV1_EORDERBY_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_webhookGetListV1_eOrderBy_e webhookGetListV1_EORDERBY_parseFromJSON(cJSON* EORDERBYJSON) {
    ezmax_api_definition__full_webhookGetListV1_eOrderBy_e EORDERBYVariable = 0;
    cJSON *EORDERBYVar = cJSON_GetObjectItemCaseSensitive(EORDERBYJSON, "eOrderBy");
    if(!cJSON_IsString(EORDERBYVar) || (EORDERBYVar->valuestring == NULL))
    {
        goto end;
    }
    EORDERBYVariable = webhookGetListV1_EORDERBY_FromString(EORDERBYVar->valuestring);
    return EORDERBYVariable;
end:
    return 0;
}
*/

// Functions for enum  for ObjectWebhookAPI_webhookGetListV1

static char* webhookGetListV1__ToString(ezmax_api_definition__full_webhookGetListV1_Accept-Language_e ){
    char *Array[] =  { "NULL", "*", "en", "fr" };
    return Array[];
}

static ezmax_api_definition__full_webhookGetListV1_Accept-Language_e webhookGetListV1__FromString(char* ){
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
// Function webhookGetListV1__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *webhookGetListV1__convertToJSON(ezmax_api_definition__full_webhookGetListV1_Accept-Language_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function webhookGetListV1__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_webhookGetListV1_Accept-Language_e webhookGetListV1__parseFromJSON(cJSON* JSON) {
    ezmax_api_definition__full_webhookGetListV1_Accept-Language_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/


// Create a new Webhook
//
// The endpoint allows to create one or many elements at once.
//
webhook_create_object_v2_response_t*
ObjectWebhookAPI_webhookCreateObjectV2(apiClient_t *apiClient, webhook_create_object_v2_request_t *webhook_create_object_v2_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/2/object/webhook")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/2/object/webhook");




    // Body Param
    cJSON *localVarSingleItemJSON_webhook_create_object_v2_request = NULL;
    if (webhook_create_object_v2_request != NULL)
    {
        //string
        localVarSingleItemJSON_webhook_create_object_v2_request = webhook_create_object_v2_request_convertToJSON(webhook_create_object_v2_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_webhook_create_object_v2_request);
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
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 201) {
    //    printf("%s\n","Successful response");
    //}
    //nonprimitive not container
    cJSON *ObjectWebhookAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    webhook_create_object_v2_response_t *elementToReturn = webhook_create_object_v2_response_parseFromJSON(ObjectWebhookAPIlocalVarJSON);
    cJSON_Delete(ObjectWebhookAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
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
    if (localVarSingleItemJSON_webhook_create_object_v2_request) {
        cJSON_Delete(localVarSingleItemJSON_webhook_create_object_v2_request);
        localVarSingleItemJSON_webhook_create_object_v2_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an existing Webhook
//
// 
//
webhook_delete_object_v1_response_t*
ObjectWebhookAPI_webhookDeleteObjectV1(apiClient_t *apiClient, int *pkiWebhookID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/webhook/{pkiWebhookID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/webhook/{pkiWebhookID}");


    // Path Params
    long sizeOfPathParams_pkiWebhookID =  + strlen("{ pkiWebhookID }");
    if(pkiWebhookID == 0){
        goto end;
    }
    char* localVarToReplace_pkiWebhookID = malloc(sizeOfPathParams_pkiWebhookID);
    snprintf(localVarToReplace_pkiWebhookID, sizeOfPathParams_pkiWebhookID, "{%s}", "pkiWebhookID");

    char localVarBuff_pkiWebhookID[256];
    intToStr(localVarBuff_pkiWebhookID, *pkiWebhookID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiWebhookID, localVarBuff_pkiWebhookID);



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    cJSON *ObjectWebhookAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    webhook_delete_object_v1_response_t *elementToReturn = webhook_delete_object_v1_response_parseFromJSON(ObjectWebhookAPIlocalVarJSON);
    cJSON_Delete(ObjectWebhookAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_pkiWebhookID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Edit an existing Webhook
//
// 
//
webhook_edit_object_v1_response_t*
ObjectWebhookAPI_webhookEditObjectV1(apiClient_t *apiClient, int *pkiWebhookID, webhook_edit_object_v1_request_t *webhook_edit_object_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/webhook/{pkiWebhookID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/webhook/{pkiWebhookID}");


    // Path Params
    long sizeOfPathParams_pkiWebhookID =  + strlen("{ pkiWebhookID }");
    if(pkiWebhookID == 0){
        goto end;
    }
    char* localVarToReplace_pkiWebhookID = malloc(sizeOfPathParams_pkiWebhookID);
    snprintf(localVarToReplace_pkiWebhookID, sizeOfPathParams_pkiWebhookID, "{%s}", "pkiWebhookID");

    char localVarBuff_pkiWebhookID[256];
    intToStr(localVarBuff_pkiWebhookID, *pkiWebhookID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiWebhookID, localVarBuff_pkiWebhookID);




    // Body Param
    cJSON *localVarSingleItemJSON_webhook_edit_object_v1_request = NULL;
    if (webhook_edit_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_webhook_edit_object_v1_request = webhook_edit_object_v1_request_convertToJSON(webhook_edit_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_webhook_edit_object_v1_request);
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
                    "PUT");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    cJSON *ObjectWebhookAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    webhook_edit_object_v1_response_t *elementToReturn = webhook_edit_object_v1_response_parseFromJSON(ObjectWebhookAPIlocalVarJSON);
    cJSON_Delete(ObjectWebhookAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
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
    free(localVarToReplace_pkiWebhookID);
    if (localVarSingleItemJSON_webhook_edit_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_webhook_edit_object_v1_request);
        localVarSingleItemJSON_webhook_edit_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve the logs for recent Webhook calls
//
// 
//
webhook_get_history_v1_response_t*
ObjectWebhookAPI_webhookGetHistoryV1(apiClient_t *apiClient, int *pkiWebhookID, ezmax_api_definition__full_webhookGetHistoryV1_eWebhookHistoryinterval_e eWebhookHistoryinterval)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/webhook/{pkiWebhookID}/getHistory")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/webhook/{pkiWebhookID}/getHistory");


    // Path Params
    long sizeOfPathParams_pkiWebhookID =  + strlen("{ pkiWebhookID }");
    if(pkiWebhookID == 0){
        goto end;
    }
    char* localVarToReplace_pkiWebhookID = malloc(sizeOfPathParams_pkiWebhookID);
    snprintf(localVarToReplace_pkiWebhookID, sizeOfPathParams_pkiWebhookID, "{%s}", "pkiWebhookID");

    char localVarBuff_pkiWebhookID[256];
    intToStr(localVarBuff_pkiWebhookID, *pkiWebhookID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiWebhookID, localVarBuff_pkiWebhookID);




    // query parameters
    char *keyQuery_eWebhookHistoryinterval = NULL;
    ezmax_api_definition__full_webhookGetHistoryV1_eWebhookHistoryinterval_e valueQuery_eWebhookHistoryinterval ;
    keyValuePair_t *keyPairQuery_eWebhookHistoryinterval = 0;
    if (eWebhookHistoryinterval)
    {
        keyQuery_eWebhookHistoryinterval = strdup("eWebhookHistoryinterval");
        valueQuery_eWebhookHistoryinterval = (eWebhookHistoryinterval);
        keyPairQuery_eWebhookHistoryinterval = keyValuePair_create(keyQuery_eWebhookHistoryinterval, (void *)strdup(webhookGetHistoryV1_EWEBHOOKHISTORYINTERVAL_ToString(
        valueQuery_eWebhookHistoryinterval)));
        list_addElement(localVarQueryParameters,keyPairQuery_eWebhookHistoryinterval);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 429) {
    //    printf("%s\n","Too Many Requests");
    //}
    //nonprimitive not container
    cJSON *ObjectWebhookAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    webhook_get_history_v1_response_t *elementToReturn = webhook_get_history_v1_response_parseFromJSON(ObjectWebhookAPIlocalVarJSON);
    cJSON_Delete(ObjectWebhookAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_pkiWebhookID);
    if(keyQuery_eWebhookHistoryinterval){
        free(keyQuery_eWebhookHistoryinterval);
        keyQuery_eWebhookHistoryinterval = NULL;
    }
    if(keyPairQuery_eWebhookHistoryinterval){
        keyValuePair_free(keyPairQuery_eWebhookHistoryinterval);
        keyPairQuery_eWebhookHistoryinterval = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Webhook list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eWebhookModule | Ezsign<br>Management | | eWebhookEzsignevent | DocumentCompleted<br>FolderCompleted | | eWebhookManagementevent | UserCreated |
//
webhook_get_list_v1_response_t*
ObjectWebhookAPI_webhookGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_webhookGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/webhook/getList")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/webhook/getList");




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
    ezmax_api_definition__full_webhookGetListV1_eOrderBy_e valueQuery_eOrderBy ;
    keyValuePair_t *keyPairQuery_eOrderBy = 0;
    if (eOrderBy)
    {
        keyQuery_eOrderBy = strdup("eOrderBy");
        valueQuery_eOrderBy = (eOrderBy);
        keyPairQuery_eOrderBy = keyValuePair_create(keyQuery_eOrderBy, (void *)strdup(webhookGetListV1_EORDERBY_ToString(
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
    cJSON *ObjectWebhookAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    webhook_get_list_v1_response_t *elementToReturn = webhook_get_list_v1_response_parseFromJSON(ObjectWebhookAPIlocalVarJSON);
    cJSON_Delete(ObjectWebhookAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
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

// Retrieve an existing Webhook
//
// 
//
webhook_get_object_v2_response_t*
ObjectWebhookAPI_webhookGetObjectV2(apiClient_t *apiClient, int *pkiWebhookID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/2/object/webhook/{pkiWebhookID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/2/object/webhook/{pkiWebhookID}");


    // Path Params
    long sizeOfPathParams_pkiWebhookID =  + strlen("{ pkiWebhookID }");
    if(pkiWebhookID == 0){
        goto end;
    }
    char* localVarToReplace_pkiWebhookID = malloc(sizeOfPathParams_pkiWebhookID);
    snprintf(localVarToReplace_pkiWebhookID, sizeOfPathParams_pkiWebhookID, "{%s}", "pkiWebhookID");

    char localVarBuff_pkiWebhookID[256];
    intToStr(localVarBuff_pkiWebhookID, *pkiWebhookID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiWebhookID, localVarBuff_pkiWebhookID);



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
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
    cJSON *ObjectWebhookAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    webhook_get_object_v2_response_t *elementToReturn = webhook_get_object_v2_response_parseFromJSON(ObjectWebhookAPIlocalVarJSON);
    cJSON_Delete(ObjectWebhookAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_pkiWebhookID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Regenerate the Apikey
//
// 
//
webhook_regenerate_apikey_v1_response_t*
ObjectWebhookAPI_webhookRegenerateApikeyV1(apiClient_t *apiClient, int *pkiWebhookID, webhook_regenerate_apikey_v1_request_t *webhook_regenerate_apikey_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/webhook/{pkiWebhookID}/regenerateApikey")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/webhook/{pkiWebhookID}/regenerateApikey");


    // Path Params
    long sizeOfPathParams_pkiWebhookID =  + strlen("{ pkiWebhookID }");
    if(pkiWebhookID == 0){
        goto end;
    }
    char* localVarToReplace_pkiWebhookID = malloc(sizeOfPathParams_pkiWebhookID);
    snprintf(localVarToReplace_pkiWebhookID, sizeOfPathParams_pkiWebhookID, "{%s}", "pkiWebhookID");

    char localVarBuff_pkiWebhookID[256];
    intToStr(localVarBuff_pkiWebhookID, *pkiWebhookID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiWebhookID, localVarBuff_pkiWebhookID);




    // Body Param
    cJSON *localVarSingleItemJSON_webhook_regenerate_apikey_v1_request = NULL;
    if (webhook_regenerate_apikey_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_webhook_regenerate_apikey_v1_request = webhook_regenerate_apikey_v1_request_convertToJSON(webhook_regenerate_apikey_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_webhook_regenerate_apikey_v1_request);
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
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    cJSON *ObjectWebhookAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    webhook_regenerate_apikey_v1_response_t *elementToReturn = webhook_regenerate_apikey_v1_response_parseFromJSON(ObjectWebhookAPIlocalVarJSON);
    cJSON_Delete(ObjectWebhookAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
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
    free(localVarToReplace_pkiWebhookID);
    if (localVarSingleItemJSON_webhook_regenerate_apikey_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_webhook_regenerate_apikey_v1_request);
        localVarSingleItemJSON_webhook_regenerate_apikey_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Emit a Webhook event
//
webhook_send_webhook_v1_response_t*
ObjectWebhookAPI_webhookSendWebhookV1(apiClient_t *apiClient, webhook_send_webhook_v1_request_t *webhook_send_webhook_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/webhook/sendWebhook")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/webhook/sendWebhook");




    // Body Param
    cJSON *localVarSingleItemJSON_webhook_send_webhook_v1_request = NULL;
    if (webhook_send_webhook_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_webhook_send_webhook_v1_request = webhook_send_webhook_v1_request_convertToJSON(webhook_send_webhook_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_webhook_send_webhook_v1_request);
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
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    cJSON *ObjectWebhookAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    webhook_send_webhook_v1_response_t *elementToReturn = webhook_send_webhook_v1_response_parseFromJSON(ObjectWebhookAPIlocalVarJSON);
    cJSON_Delete(ObjectWebhookAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
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
    if (localVarSingleItemJSON_webhook_send_webhook_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_webhook_send_webhook_v1_request);
        localVarSingleItemJSON_webhook_send_webhook_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Test the Webhook by calling the Url
//
// 
//
webhook_test_v1_response_t*
ObjectWebhookAPI_webhookTestV1(apiClient_t *apiClient, int *pkiWebhookID, object_t *body)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/webhook/{pkiWebhookID}/test")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/webhook/{pkiWebhookID}/test");


    // Path Params
    long sizeOfPathParams_pkiWebhookID =  + strlen("{ pkiWebhookID }");
    if(pkiWebhookID == 0){
        goto end;
    }
    char* localVarToReplace_pkiWebhookID = malloc(sizeOfPathParams_pkiWebhookID);
    snprintf(localVarToReplace_pkiWebhookID, sizeOfPathParams_pkiWebhookID, "{%s}", "pkiWebhookID");

    char localVarBuff_pkiWebhookID[256];
    intToStr(localVarBuff_pkiWebhookID, *pkiWebhookID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiWebhookID, localVarBuff_pkiWebhookID);




    // Body Param
    cJSON *localVarSingleItemJSON_body = NULL;
    if (body != NULL)
    {
        //string
        localVarSingleItemJSON_body = object_convertToJSON(body);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_body);
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
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    cJSON *ObjectWebhookAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    webhook_test_v1_response_t *elementToReturn = webhook_test_v1_response_parseFromJSON(ObjectWebhookAPIlocalVarJSON);
    cJSON_Delete(ObjectWebhookAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
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
    free(localVarToReplace_pkiWebhookID);
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

