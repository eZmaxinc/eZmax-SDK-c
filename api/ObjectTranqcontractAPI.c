#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectTranqcontractAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
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

