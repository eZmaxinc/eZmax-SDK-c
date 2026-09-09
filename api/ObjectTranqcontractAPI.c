#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "ObjectTranqcontractAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define MAX_NUMBER_LENGTH_LONG 21


// Retrieve Communication count
//
// 
//
tranqcontract_get_communication_count_v1_response_t*
ObjectTranqcontractAPI_tranqcontractGetCommunicationCountV1(apiClient_t *apiClient, int *pkiTranqcontractID)
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
    char *localVarPath = strdup("/1/object/tranqcontract/{pkiTranqcontractID}/getCommunicationCount");



    // Path Params
    long sizeOfPathParams_pkiTranqcontractID =  + sizeof("{ pkiTranqcontractID }") - 1;
    if(pkiTranqcontractID == 0){
        goto end;
    }
    char* localVarToReplace_pkiTranqcontractID = malloc(sizeOfPathParams_pkiTranqcontractID);
    snprintf(localVarToReplace_pkiTranqcontractID, sizeOfPathParams_pkiTranqcontractID, "{%s}", "pkiTranqcontractID");

    char localVarBuff_pkiTranqcontractID[256];
    snprintf(localVarBuff_pkiTranqcontractID, sizeof localVarBuff_pkiTranqcontractID, "%ld", (long)*pkiTranqcontractID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiTranqcontractID, localVarBuff_pkiTranqcontractID);



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
    tranqcontract_get_communication_count_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectTranqcontractAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = tranqcontract_get_communication_count_v1_response_parseFromJSON(ObjectTranqcontractAPIlocalVarJSON);
        cJSON_Delete(ObjectTranqcontractAPIlocalVarJSON);
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
    free(localVarToReplace_pkiTranqcontractID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Communication list
//
// 
//
tranqcontract_get_communication_list_v1_response_t*
ObjectTranqcontractAPI_tranqcontractGetCommunicationListV1(apiClient_t *apiClient, int *pkiTranqcontractID)
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
    char *localVarPath = strdup("/1/object/tranqcontract/{pkiTranqcontractID}/getCommunicationList");



    // Path Params
    long sizeOfPathParams_pkiTranqcontractID =  + sizeof("{ pkiTranqcontractID }") - 1;
    if(pkiTranqcontractID == 0){
        goto end;
    }
    char* localVarToReplace_pkiTranqcontractID = malloc(sizeOfPathParams_pkiTranqcontractID);
    snprintf(localVarToReplace_pkiTranqcontractID, sizeOfPathParams_pkiTranqcontractID, "{%s}", "pkiTranqcontractID");

    char localVarBuff_pkiTranqcontractID[256];
    snprintf(localVarBuff_pkiTranqcontractID, sizeof localVarBuff_pkiTranqcontractID, "%ld", (long)*pkiTranqcontractID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiTranqcontractID, localVarBuff_pkiTranqcontractID);



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
    tranqcontract_get_communication_list_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectTranqcontractAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = tranqcontract_get_communication_list_v1_response_parseFromJSON(ObjectTranqcontractAPIlocalVarJSON);
        cJSON_Delete(ObjectTranqcontractAPIlocalVarJSON);
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
    free(localVarToReplace_pkiTranqcontractID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Tranqcontract's Communicationrecipient
//
// 
//
tranqcontract_get_communicationrecipients_v1_response_t*
ObjectTranqcontractAPI_tranqcontractGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiTranqcontractID)
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
    char *localVarPath = strdup("/1/object/tranqcontract/{pkiTranqcontractID}/getCommunicationrecipients");



    // Path Params
    long sizeOfPathParams_pkiTranqcontractID =  + sizeof("{ pkiTranqcontractID }") - 1;
    if(pkiTranqcontractID == 0){
        goto end;
    }
    char* localVarToReplace_pkiTranqcontractID = malloc(sizeOfPathParams_pkiTranqcontractID);
    snprintf(localVarToReplace_pkiTranqcontractID, sizeOfPathParams_pkiTranqcontractID, "{%s}", "pkiTranqcontractID");

    char localVarBuff_pkiTranqcontractID[256];
    snprintf(localVarBuff_pkiTranqcontractID, sizeof localVarBuff_pkiTranqcontractID, "%ld", (long)*pkiTranqcontractID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiTranqcontractID, localVarBuff_pkiTranqcontractID);



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
    tranqcontract_get_communicationrecipients_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectTranqcontractAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = tranqcontract_get_communicationrecipients_v1_response_parseFromJSON(ObjectTranqcontractAPIlocalVarJSON);
        cJSON_Delete(ObjectTranqcontractAPIlocalVarJSON);
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
    free(localVarToReplace_pkiTranqcontractID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Tranqcontract's Communicationsender
//
// 
//
tranqcontract_get_communicationsenders_v1_response_t*
ObjectTranqcontractAPI_tranqcontractGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiTranqcontractID)
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
    char *localVarPath = strdup("/1/object/tranqcontract/{pkiTranqcontractID}/getCommunicationsenders");



    // Path Params
    long sizeOfPathParams_pkiTranqcontractID =  + sizeof("{ pkiTranqcontractID }") - 1;
    if(pkiTranqcontractID == 0){
        goto end;
    }
    char* localVarToReplace_pkiTranqcontractID = malloc(sizeOfPathParams_pkiTranqcontractID);
    snprintf(localVarToReplace_pkiTranqcontractID, sizeOfPathParams_pkiTranqcontractID, "{%s}", "pkiTranqcontractID");

    char localVarBuff_pkiTranqcontractID[256];
    snprintf(localVarBuff_pkiTranqcontractID, sizeof localVarBuff_pkiTranqcontractID, "%ld", (long)*pkiTranqcontractID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiTranqcontractID, localVarBuff_pkiTranqcontractID);



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
    tranqcontract_get_communicationsenders_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectTranqcontractAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = tranqcontract_get_communicationsenders_v1_response_parseFromJSON(ObjectTranqcontractAPIlocalVarJSON);
        cJSON_Delete(ObjectTranqcontractAPIlocalVarJSON);
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
    free(localVarToReplace_pkiTranqcontractID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Import attachments into the Tranqcontract
//
// 
//
tranqcontract_import_into_edm_v1_response_t*
ObjectTranqcontractAPI_tranqcontractImportIntoEDMV1(apiClient_t *apiClient, int *pkiTranqcontractID, tranqcontract_import_into_edm_v1_request_t *tranqcontract_import_into_edm_v1_request)
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
    char *localVarPath = strdup("/1/object/tranqcontract/{pkiTranqcontractID}/importIntoEDM");



    // Path Params
    long sizeOfPathParams_pkiTranqcontractID =  + sizeof("{ pkiTranqcontractID }") - 1;
    if(pkiTranqcontractID == 0){
        goto end;
    }
    char* localVarToReplace_pkiTranqcontractID = malloc(sizeOfPathParams_pkiTranqcontractID);
    snprintf(localVarToReplace_pkiTranqcontractID, sizeOfPathParams_pkiTranqcontractID, "{%s}", "pkiTranqcontractID");

    char localVarBuff_pkiTranqcontractID[256];
    snprintf(localVarBuff_pkiTranqcontractID, sizeof localVarBuff_pkiTranqcontractID, "%ld", (long)*pkiTranqcontractID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiTranqcontractID, localVarBuff_pkiTranqcontractID);




    // Body Param
    cJSON *localVarSingleItemJSON_tranqcontract_import_into_edm_v1_request = NULL;
    if (tranqcontract_import_into_edm_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_tranqcontract_import_into_edm_v1_request = tranqcontract_import_into_edm_v1_request_convertToJSON(tranqcontract_import_into_edm_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_tranqcontract_import_into_edm_v1_request);
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
    tranqcontract_import_into_edm_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectTranqcontractAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = tranqcontract_import_into_edm_v1_response_parseFromJSON(ObjectTranqcontractAPIlocalVarJSON);
        cJSON_Delete(ObjectTranqcontractAPIlocalVarJSON);
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
    free(localVarToReplace_pkiTranqcontractID);
    if (localVarSingleItemJSON_tranqcontract_import_into_edm_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_tranqcontract_import_into_edm_v1_request);
        localVarSingleItemJSON_tranqcontract_import_into_edm_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

