#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "ObjectInscriptiontempAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define MAX_NUMBER_LENGTH_LONG 21

// Functions for enum EORDERBY for ObjectInscriptiontempAPI_inscriptiontempGetListV1

static char* inscriptiontempGetListV1_EORDERBY_ToString(ezmax_api_definition__full_inscriptiontempGetListV1_eOrderBy_e EORDERBY){
    char *EORDERBYArray[] =  { "NULL", "pkiInscriptiontempID_ASC", "pkiInscriptiontempID_DESC", "eInscriptiontempStatus_ASC", "eInscriptiontempStatus_DESC", "sInscriptiontempMLS_ASC", "sInscriptiontempMLS_DESC", "sInscriptiontempDescription_ASC", "sInscriptiontempDescription_DESC", "bInscriptiontempIsactive_ASC", "bInscriptiontempIsactive_DESC", "dtCreatedDate_ASC", "dtCreatedDate_DESC", "dtModifiedDate_ASC", "dtModifiedDate_DESC" };
    return EORDERBYArray[EORDERBY];
}

static ezmax_api_definition__full_inscriptiontempGetListV1_eOrderBy_e inscriptiontempGetListV1_EORDERBY_FromString(char* EORDERBY){
    int stringToReturn = 0;
    char *EORDERBYArray[] =  { "NULL", "pkiInscriptiontempID_ASC", "pkiInscriptiontempID_DESC", "eInscriptiontempStatus_ASC", "eInscriptiontempStatus_DESC", "sInscriptiontempMLS_ASC", "sInscriptiontempMLS_DESC", "sInscriptiontempDescription_ASC", "sInscriptiontempDescription_DESC", "bInscriptiontempIsactive_ASC", "bInscriptiontempIsactive_DESC", "dtCreatedDate_ASC", "dtCreatedDate_DESC", "dtModifiedDate_ASC", "dtModifiedDate_DESC" };
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
// Function inscriptiontempGetListV1_EORDERBY_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *inscriptiontempGetListV1_EORDERBY_convertToJSON(ezmax_api_definition__full_inscriptiontempGetListV1_eOrderBy_e EORDERBY) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "eOrderBy", inscriptiontempGetListV1_EORDERBY_ToString(EORDERBY)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function inscriptiontempGetListV1_EORDERBY_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_inscriptiontempGetListV1_eOrderBy_e inscriptiontempGetListV1_EORDERBY_parseFromJSON(cJSON* EORDERBYJSON) {
    ezmax_api_definition__full_inscriptiontempGetListV1_eOrderBy_e EORDERBYVariable = 0;
    cJSON *EORDERBYVar = cJSON_GetObjectItemCaseSensitive(EORDERBYJSON, "eOrderBy");
    if(!cJSON_IsString(EORDERBYVar) || (EORDERBYVar->valuestring == NULL))
    {
        goto end;
    }
    EORDERBYVariable = inscriptiontempGetListV1_EORDERBY_FromString(EORDERBYVar->valuestring);
    return EORDERBYVariable;
end:
    return 0;
}
*/

// Functions for enum  for ObjectInscriptiontempAPI_inscriptiontempGetListV1

static char* inscriptiontempGetListV1__ToString(ezmax_api_definition__full_inscriptiontempGetListV1_Accept-Language_e ){
    char *Array[] =  { "NULL", "*", "en", "fr" };
    return Array[];
}

static ezmax_api_definition__full_inscriptiontempGetListV1_Accept-Language_e inscriptiontempGetListV1__FromString(char* ){
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
// Function inscriptiontempGetListV1__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *inscriptiontempGetListV1__convertToJSON(ezmax_api_definition__full_inscriptiontempGetListV1_Accept-Language_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function inscriptiontempGetListV1__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_inscriptiontempGetListV1_Accept-Language_e inscriptiontempGetListV1__parseFromJSON(cJSON* JSON) {
    ezmax_api_definition__full_inscriptiontempGetListV1_Accept-Language_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/


// Download multiples attachments from a Inscriptiontemp
//
binary_t*
ObjectInscriptiontempAPI_inscriptiontempBatchDownloadV1(apiClient_t *apiClient, int *pkiInscriptiontempID, inscriptiontemp_batch_download_v1_request_t *inscriptiontemp_batch_download_v1_request)
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
    char *localVarPath = strdup("/1/object/inscriptiontemp/{pkiInscriptiontempID}/batchDownload");



    // Path Params
    long sizeOfPathParams_pkiInscriptiontempID =  + sizeof("{ pkiInscriptiontempID }") - 1;
    if(pkiInscriptiontempID == 0){
        goto end;
    }
    char* localVarToReplace_pkiInscriptiontempID = malloc(sizeOfPathParams_pkiInscriptiontempID);
    snprintf(localVarToReplace_pkiInscriptiontempID, sizeOfPathParams_pkiInscriptiontempID, "{%s}", "pkiInscriptiontempID");

    char localVarBuff_pkiInscriptiontempID[256];
    snprintf(localVarBuff_pkiInscriptiontempID, sizeof localVarBuff_pkiInscriptiontempID, "%ld", (long)*pkiInscriptiontempID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiInscriptiontempID, localVarBuff_pkiInscriptiontempID);




    // Body Param
    cJSON *localVarSingleItemJSON_inscriptiontemp_batch_download_v1_request = NULL;
    if (inscriptiontemp_batch_download_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_inscriptiontemp_batch_download_v1_request = inscriptiontemp_batch_download_v1_request_convertToJSON(inscriptiontemp_batch_download_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_inscriptiontemp_batch_download_v1_request);
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
    free(localVarToReplace_pkiInscriptiontempID);
    if (localVarSingleItemJSON_inscriptiontemp_batch_download_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_inscriptiontemp_batch_download_v1_request);
        localVarSingleItemJSON_inscriptiontemp_batch_download_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Inscriptiontemp's attachments
//
inscriptiontemp_get_attachments_v1_response_t*
ObjectInscriptiontempAPI_inscriptiontempGetAttachmentsV1(apiClient_t *apiClient, int *pkiInscriptiontempID)
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
    char *localVarPath = strdup("/1/object/inscriptiontemp/{pkiInscriptiontempID}/getAttachments");



    // Path Params
    long sizeOfPathParams_pkiInscriptiontempID =  + sizeof("{ pkiInscriptiontempID }") - 1;
    if(pkiInscriptiontempID == 0){
        goto end;
    }
    char* localVarToReplace_pkiInscriptiontempID = malloc(sizeOfPathParams_pkiInscriptiontempID);
    snprintf(localVarToReplace_pkiInscriptiontempID, sizeOfPathParams_pkiInscriptiontempID, "{%s}", "pkiInscriptiontempID");

    char localVarBuff_pkiInscriptiontempID[256];
    snprintf(localVarBuff_pkiInscriptiontempID, sizeof localVarBuff_pkiInscriptiontempID, "%ld", (long)*pkiInscriptiontempID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiInscriptiontempID, localVarBuff_pkiInscriptiontempID);



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
    inscriptiontemp_get_attachments_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectInscriptiontempAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = inscriptiontemp_get_attachments_v1_response_parseFromJSON(ObjectInscriptiontempAPIlocalVarJSON);
        cJSON_Delete(ObjectInscriptiontempAPIlocalVarJSON);
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
    free(localVarToReplace_pkiInscriptiontempID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Communication count
//
// 
//
inscriptiontemp_get_communication_count_v1_response_t*
ObjectInscriptiontempAPI_inscriptiontempGetCommunicationCountV1(apiClient_t *apiClient, int *pkiInscriptiontempID)
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
    char *localVarPath = strdup("/1/object/inscriptiontemp/{pkiInscriptiontempID}/getCommunicationCount");



    // Path Params
    long sizeOfPathParams_pkiInscriptiontempID =  + sizeof("{ pkiInscriptiontempID }") - 1;
    if(pkiInscriptiontempID == 0){
        goto end;
    }
    char* localVarToReplace_pkiInscriptiontempID = malloc(sizeOfPathParams_pkiInscriptiontempID);
    snprintf(localVarToReplace_pkiInscriptiontempID, sizeOfPathParams_pkiInscriptiontempID, "{%s}", "pkiInscriptiontempID");

    char localVarBuff_pkiInscriptiontempID[256];
    snprintf(localVarBuff_pkiInscriptiontempID, sizeof localVarBuff_pkiInscriptiontempID, "%ld", (long)*pkiInscriptiontempID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiInscriptiontempID, localVarBuff_pkiInscriptiontempID);



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
    inscriptiontemp_get_communication_count_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectInscriptiontempAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = inscriptiontemp_get_communication_count_v1_response_parseFromJSON(ObjectInscriptiontempAPIlocalVarJSON);
        cJSON_Delete(ObjectInscriptiontempAPIlocalVarJSON);
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
    free(localVarToReplace_pkiInscriptiontempID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Communication list
//
// 
//
inscriptiontemp_get_communication_list_v1_response_t*
ObjectInscriptiontempAPI_inscriptiontempGetCommunicationListV1(apiClient_t *apiClient, int *pkiInscriptiontempID)
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
    char *localVarPath = strdup("/1/object/inscriptiontemp/{pkiInscriptiontempID}/getCommunicationList");



    // Path Params
    long sizeOfPathParams_pkiInscriptiontempID =  + sizeof("{ pkiInscriptiontempID }") - 1;
    if(pkiInscriptiontempID == 0){
        goto end;
    }
    char* localVarToReplace_pkiInscriptiontempID = malloc(sizeOfPathParams_pkiInscriptiontempID);
    snprintf(localVarToReplace_pkiInscriptiontempID, sizeOfPathParams_pkiInscriptiontempID, "{%s}", "pkiInscriptiontempID");

    char localVarBuff_pkiInscriptiontempID[256];
    snprintf(localVarBuff_pkiInscriptiontempID, sizeof localVarBuff_pkiInscriptiontempID, "%ld", (long)*pkiInscriptiontempID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiInscriptiontempID, localVarBuff_pkiInscriptiontempID);



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
    inscriptiontemp_get_communication_list_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectInscriptiontempAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = inscriptiontemp_get_communication_list_v1_response_parseFromJSON(ObjectInscriptiontempAPIlocalVarJSON);
        cJSON_Delete(ObjectInscriptiontempAPIlocalVarJSON);
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
    free(localVarToReplace_pkiInscriptiontempID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Inscriptiontemp's Communicationrecipient
//
// 
//
inscriptiontemp_get_communicationrecipients_v1_response_t*
ObjectInscriptiontempAPI_inscriptiontempGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiInscriptiontempID)
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
    char *localVarPath = strdup("/1/object/inscriptiontemp/{pkiInscriptiontempID}/getCommunicationrecipients");



    // Path Params
    long sizeOfPathParams_pkiInscriptiontempID =  + sizeof("{ pkiInscriptiontempID }") - 1;
    if(pkiInscriptiontempID == 0){
        goto end;
    }
    char* localVarToReplace_pkiInscriptiontempID = malloc(sizeOfPathParams_pkiInscriptiontempID);
    snprintf(localVarToReplace_pkiInscriptiontempID, sizeOfPathParams_pkiInscriptiontempID, "{%s}", "pkiInscriptiontempID");

    char localVarBuff_pkiInscriptiontempID[256];
    snprintf(localVarBuff_pkiInscriptiontempID, sizeof localVarBuff_pkiInscriptiontempID, "%ld", (long)*pkiInscriptiontempID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiInscriptiontempID, localVarBuff_pkiInscriptiontempID);



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
    inscriptiontemp_get_communicationrecipients_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectInscriptiontempAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = inscriptiontemp_get_communicationrecipients_v1_response_parseFromJSON(ObjectInscriptiontempAPIlocalVarJSON);
        cJSON_Delete(ObjectInscriptiontempAPIlocalVarJSON);
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
    free(localVarToReplace_pkiInscriptiontempID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Inscriptiontemp's Communicationsender
//
// 
//
inscriptiontemp_get_communicationsenders_v1_response_t*
ObjectInscriptiontempAPI_inscriptiontempGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiInscriptiontempID)
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
    char *localVarPath = strdup("/1/object/inscriptiontemp/{pkiInscriptiontempID}/getCommunicationsenders");



    // Path Params
    long sizeOfPathParams_pkiInscriptiontempID =  + sizeof("{ pkiInscriptiontempID }") - 1;
    if(pkiInscriptiontempID == 0){
        goto end;
    }
    char* localVarToReplace_pkiInscriptiontempID = malloc(sizeOfPathParams_pkiInscriptiontempID);
    snprintf(localVarToReplace_pkiInscriptiontempID, sizeOfPathParams_pkiInscriptiontempID, "{%s}", "pkiInscriptiontempID");

    char localVarBuff_pkiInscriptiontempID[256];
    snprintf(localVarBuff_pkiInscriptiontempID, sizeof localVarBuff_pkiInscriptiontempID, "%ld", (long)*pkiInscriptiontempID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiInscriptiontempID, localVarBuff_pkiInscriptiontempID);



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
    inscriptiontemp_get_communicationsenders_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectInscriptiontempAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = inscriptiontemp_get_communicationsenders_v1_response_parseFromJSON(ObjectInscriptiontempAPIlocalVarJSON);
        cJSON_Delete(ObjectInscriptiontempAPIlocalVarJSON);
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
    free(localVarToReplace_pkiInscriptiontempID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Inscriptiontemp list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eInscriptiontempStatus | Imported<br>Processed<br>Modified |
//
inscriptiontemp_get_list_v1_response_t*
ObjectInscriptiontempAPI_inscriptiontempGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_inscriptiontempGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter)
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
    char *localVarPath = strdup("/1/object/inscriptiontemp/getList");





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
    ezmax_api_definition__full_inscriptiontempGetListV1_eOrderBy_e valueQuery_eOrderBy ;
    keyValuePair_t *keyPairQuery_eOrderBy = 0;
    if (eOrderBy)
    {
        keyQuery_eOrderBy = strdup("eOrderBy");
        valueQuery_eOrderBy = (eOrderBy);
        keyPairQuery_eOrderBy = keyValuePair_create(keyQuery_eOrderBy, strdup(inscriptiontempGetListV1_EORDERBY_ToString(
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
    inscriptiontemp_get_list_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectInscriptiontempAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = inscriptiontemp_get_list_v1_response_parseFromJSON(ObjectInscriptiontempAPIlocalVarJSON);
        cJSON_Delete(ObjectInscriptiontempAPIlocalVarJSON);
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

// Import attachments into the Inscriptiontemp
//
// 
//
inscriptiontemp_import_into_edm_v1_response_t*
ObjectInscriptiontempAPI_inscriptiontempImportIntoEDMV1(apiClient_t *apiClient, int *pkiInscriptiontempID, inscriptiontemp_import_into_edm_v1_request_t *inscriptiontemp_import_into_edm_v1_request)
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
    char *localVarPath = strdup("/1/object/inscriptiontemp/{pkiInscriptiontempID}/importIntoEDM");



    // Path Params
    long sizeOfPathParams_pkiInscriptiontempID =  + sizeof("{ pkiInscriptiontempID }") - 1;
    if(pkiInscriptiontempID == 0){
        goto end;
    }
    char* localVarToReplace_pkiInscriptiontempID = malloc(sizeOfPathParams_pkiInscriptiontempID);
    snprintf(localVarToReplace_pkiInscriptiontempID, sizeOfPathParams_pkiInscriptiontempID, "{%s}", "pkiInscriptiontempID");

    char localVarBuff_pkiInscriptiontempID[256];
    snprintf(localVarBuff_pkiInscriptiontempID, sizeof localVarBuff_pkiInscriptiontempID, "%ld", (long)*pkiInscriptiontempID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiInscriptiontempID, localVarBuff_pkiInscriptiontempID);




    // Body Param
    cJSON *localVarSingleItemJSON_inscriptiontemp_import_into_edm_v1_request = NULL;
    if (inscriptiontemp_import_into_edm_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_inscriptiontemp_import_into_edm_v1_request = inscriptiontemp_import_into_edm_v1_request_convertToJSON(inscriptiontemp_import_into_edm_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_inscriptiontemp_import_into_edm_v1_request);
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
    inscriptiontemp_import_into_edm_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectInscriptiontempAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = inscriptiontemp_import_into_edm_v1_response_parseFromJSON(ObjectInscriptiontempAPIlocalVarJSON);
        cJSON_Delete(ObjectInscriptiontempAPIlocalVarJSON);
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
    free(localVarToReplace_pkiInscriptiontempID);
    if (localVarSingleItemJSON_inscriptiontemp_import_into_edm_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_inscriptiontemp_import_into_edm_v1_request);
        localVarSingleItemJSON_inscriptiontemp_import_into_edm_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

