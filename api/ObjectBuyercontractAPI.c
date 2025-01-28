#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectBuyercontractAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Retrieve Communication count
//
// 
//
buyercontract_get_communication_count_v1_response_t*
ObjectBuyercontractAPI_buyercontractGetCommunicationCountV1(apiClient_t *apiClient, int *pkiBuyercontractID)
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
    char *localVarPath = strdup("/1/object/buyercontract/{pkiBuyercontractID}/getCommunicationCount");



    // Path Params
    long sizeOfPathParams_pkiBuyercontractID =  + sizeof("{ pkiBuyercontractID }") - 1;
    if(pkiBuyercontractID == 0){
        goto end;
    }
    char* localVarToReplace_pkiBuyercontractID = malloc(sizeOfPathParams_pkiBuyercontractID);
    snprintf(localVarToReplace_pkiBuyercontractID, sizeOfPathParams_pkiBuyercontractID, "{%s}", "pkiBuyercontractID");

    char localVarBuff_pkiBuyercontractID[256];
    snprintf(localVarBuff_pkiBuyercontractID, sizeof localVarBuff_pkiBuyercontractID, "%ld", (long)*pkiBuyercontractID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiBuyercontractID, localVarBuff_pkiBuyercontractID);



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
    buyercontract_get_communication_count_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectBuyercontractAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = buyercontract_get_communication_count_v1_response_parseFromJSON(ObjectBuyercontractAPIlocalVarJSON);
        cJSON_Delete(ObjectBuyercontractAPIlocalVarJSON);
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
    free(localVarToReplace_pkiBuyercontractID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Communication list
//
// 
//
buyercontract_get_communication_list_v1_response_t*
ObjectBuyercontractAPI_buyercontractGetCommunicationListV1(apiClient_t *apiClient, int *pkiBuyercontractID)
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
    char *localVarPath = strdup("/1/object/buyercontract/{pkiBuyercontractID}/getCommunicationList");



    // Path Params
    long sizeOfPathParams_pkiBuyercontractID =  + sizeof("{ pkiBuyercontractID }") - 1;
    if(pkiBuyercontractID == 0){
        goto end;
    }
    char* localVarToReplace_pkiBuyercontractID = malloc(sizeOfPathParams_pkiBuyercontractID);
    snprintf(localVarToReplace_pkiBuyercontractID, sizeOfPathParams_pkiBuyercontractID, "{%s}", "pkiBuyercontractID");

    char localVarBuff_pkiBuyercontractID[256];
    snprintf(localVarBuff_pkiBuyercontractID, sizeof localVarBuff_pkiBuyercontractID, "%ld", (long)*pkiBuyercontractID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiBuyercontractID, localVarBuff_pkiBuyercontractID);



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
    buyercontract_get_communication_list_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectBuyercontractAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = buyercontract_get_communication_list_v1_response_parseFromJSON(ObjectBuyercontractAPIlocalVarJSON);
        cJSON_Delete(ObjectBuyercontractAPIlocalVarJSON);
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
    free(localVarToReplace_pkiBuyercontractID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Buyercontract's Communicationrecipient
//
// 
//
buyercontract_get_communicationrecipients_v1_response_t*
ObjectBuyercontractAPI_buyercontractGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiBuyercontractID)
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
    char *localVarPath = strdup("/1/object/buyercontract/{pkiBuyercontractID}/getCommunicationrecipients");



    // Path Params
    long sizeOfPathParams_pkiBuyercontractID =  + sizeof("{ pkiBuyercontractID }") - 1;
    if(pkiBuyercontractID == 0){
        goto end;
    }
    char* localVarToReplace_pkiBuyercontractID = malloc(sizeOfPathParams_pkiBuyercontractID);
    snprintf(localVarToReplace_pkiBuyercontractID, sizeOfPathParams_pkiBuyercontractID, "{%s}", "pkiBuyercontractID");

    char localVarBuff_pkiBuyercontractID[256];
    snprintf(localVarBuff_pkiBuyercontractID, sizeof localVarBuff_pkiBuyercontractID, "%ld", (long)*pkiBuyercontractID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiBuyercontractID, localVarBuff_pkiBuyercontractID);



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
    buyercontract_get_communicationrecipients_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectBuyercontractAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = buyercontract_get_communicationrecipients_v1_response_parseFromJSON(ObjectBuyercontractAPIlocalVarJSON);
        cJSON_Delete(ObjectBuyercontractAPIlocalVarJSON);
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
    free(localVarToReplace_pkiBuyercontractID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Buyercontract's Communicationsender
//
// 
//
buyercontract_get_communicationsenders_v1_response_t*
ObjectBuyercontractAPI_buyercontractGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiBuyercontractID)
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
    char *localVarPath = strdup("/1/object/buyercontract/{pkiBuyercontractID}/getCommunicationsenders");



    // Path Params
    long sizeOfPathParams_pkiBuyercontractID =  + sizeof("{ pkiBuyercontractID }") - 1;
    if(pkiBuyercontractID == 0){
        goto end;
    }
    char* localVarToReplace_pkiBuyercontractID = malloc(sizeOfPathParams_pkiBuyercontractID);
    snprintf(localVarToReplace_pkiBuyercontractID, sizeOfPathParams_pkiBuyercontractID, "{%s}", "pkiBuyercontractID");

    char localVarBuff_pkiBuyercontractID[256];
    snprintf(localVarBuff_pkiBuyercontractID, sizeof localVarBuff_pkiBuyercontractID, "%ld", (long)*pkiBuyercontractID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiBuyercontractID, localVarBuff_pkiBuyercontractID);



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
    buyercontract_get_communicationsenders_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectBuyercontractAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = buyercontract_get_communicationsenders_v1_response_parseFromJSON(ObjectBuyercontractAPIlocalVarJSON);
        cJSON_Delete(ObjectBuyercontractAPIlocalVarJSON);
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
    free(localVarToReplace_pkiBuyercontractID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

