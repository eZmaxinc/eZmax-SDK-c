#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectRejectedoffertopurchaseAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Retrieve Communication count
//
// 
//
rejectedoffertopurchase_get_communication_count_v1_response_t*
ObjectRejectedoffertopurchaseAPI_rejectedoffertopurchaseGetCommunicationCountV1(apiClient_t *apiClient, int *pkiRejectedoffertopurchaseID)
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
    char *localVarPath = strdup("/1/object/rejectedoffertopurchase/{pkiRejectedoffertopurchaseID}/getCommunicationCount");



    // Path Params
    long sizeOfPathParams_pkiRejectedoffertopurchaseID =  + sizeof("{ pkiRejectedoffertopurchaseID }") - 1;
    if(pkiRejectedoffertopurchaseID == 0){
        goto end;
    }
    char* localVarToReplace_pkiRejectedoffertopurchaseID = malloc(sizeOfPathParams_pkiRejectedoffertopurchaseID);
    snprintf(localVarToReplace_pkiRejectedoffertopurchaseID, sizeOfPathParams_pkiRejectedoffertopurchaseID, "{%s}", "pkiRejectedoffertopurchaseID");

    char localVarBuff_pkiRejectedoffertopurchaseID[256];
    snprintf(localVarBuff_pkiRejectedoffertopurchaseID, sizeof localVarBuff_pkiRejectedoffertopurchaseID, "%ld", (long)*pkiRejectedoffertopurchaseID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiRejectedoffertopurchaseID, localVarBuff_pkiRejectedoffertopurchaseID);



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
    rejectedoffertopurchase_get_communication_count_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectRejectedoffertopurchaseAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = rejectedoffertopurchase_get_communication_count_v1_response_parseFromJSON(ObjectRejectedoffertopurchaseAPIlocalVarJSON);
        cJSON_Delete(ObjectRejectedoffertopurchaseAPIlocalVarJSON);
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
    free(localVarToReplace_pkiRejectedoffertopurchaseID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Communication list
//
// 
//
rejectedoffertopurchase_get_communication_list_v1_response_t*
ObjectRejectedoffertopurchaseAPI_rejectedoffertopurchaseGetCommunicationListV1(apiClient_t *apiClient, int *pkiRejectedoffertopurchaseID)
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
    char *localVarPath = strdup("/1/object/rejectedoffertopurchase/{pkiRejectedoffertopurchaseID}/getCommunicationList");



    // Path Params
    long sizeOfPathParams_pkiRejectedoffertopurchaseID =  + sizeof("{ pkiRejectedoffertopurchaseID }") - 1;
    if(pkiRejectedoffertopurchaseID == 0){
        goto end;
    }
    char* localVarToReplace_pkiRejectedoffertopurchaseID = malloc(sizeOfPathParams_pkiRejectedoffertopurchaseID);
    snprintf(localVarToReplace_pkiRejectedoffertopurchaseID, sizeOfPathParams_pkiRejectedoffertopurchaseID, "{%s}", "pkiRejectedoffertopurchaseID");

    char localVarBuff_pkiRejectedoffertopurchaseID[256];
    snprintf(localVarBuff_pkiRejectedoffertopurchaseID, sizeof localVarBuff_pkiRejectedoffertopurchaseID, "%ld", (long)*pkiRejectedoffertopurchaseID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiRejectedoffertopurchaseID, localVarBuff_pkiRejectedoffertopurchaseID);



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
    rejectedoffertopurchase_get_communication_list_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectRejectedoffertopurchaseAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = rejectedoffertopurchase_get_communication_list_v1_response_parseFromJSON(ObjectRejectedoffertopurchaseAPIlocalVarJSON);
        cJSON_Delete(ObjectRejectedoffertopurchaseAPIlocalVarJSON);
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
    free(localVarToReplace_pkiRejectedoffertopurchaseID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Rejectedoffertopurchase's Communicationrecipient
//
// 
//
rejectedoffertopurchase_get_communicationrecipients_v1_response_t*
ObjectRejectedoffertopurchaseAPI_rejectedoffertopurchaseGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiRejectedoffertopurchaseID)
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
    char *localVarPath = strdup("/1/object/rejectedoffertopurchase/{pkiRejectedoffertopurchaseID}/getCommunicationrecipients");



    // Path Params
    long sizeOfPathParams_pkiRejectedoffertopurchaseID =  + sizeof("{ pkiRejectedoffertopurchaseID }") - 1;
    if(pkiRejectedoffertopurchaseID == 0){
        goto end;
    }
    char* localVarToReplace_pkiRejectedoffertopurchaseID = malloc(sizeOfPathParams_pkiRejectedoffertopurchaseID);
    snprintf(localVarToReplace_pkiRejectedoffertopurchaseID, sizeOfPathParams_pkiRejectedoffertopurchaseID, "{%s}", "pkiRejectedoffertopurchaseID");

    char localVarBuff_pkiRejectedoffertopurchaseID[256];
    snprintf(localVarBuff_pkiRejectedoffertopurchaseID, sizeof localVarBuff_pkiRejectedoffertopurchaseID, "%ld", (long)*pkiRejectedoffertopurchaseID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiRejectedoffertopurchaseID, localVarBuff_pkiRejectedoffertopurchaseID);



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
    rejectedoffertopurchase_get_communicationrecipients_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectRejectedoffertopurchaseAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = rejectedoffertopurchase_get_communicationrecipients_v1_response_parseFromJSON(ObjectRejectedoffertopurchaseAPIlocalVarJSON);
        cJSON_Delete(ObjectRejectedoffertopurchaseAPIlocalVarJSON);
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
    free(localVarToReplace_pkiRejectedoffertopurchaseID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Rejectedoffertopurchase's Communicationsender
//
// 
//
rejectedoffertopurchase_get_communicationsenders_v1_response_t*
ObjectRejectedoffertopurchaseAPI_rejectedoffertopurchaseGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiRejectedoffertopurchaseID)
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
    char *localVarPath = strdup("/1/object/rejectedoffertopurchase/{pkiRejectedoffertopurchaseID}/getCommunicationsenders");



    // Path Params
    long sizeOfPathParams_pkiRejectedoffertopurchaseID =  + sizeof("{ pkiRejectedoffertopurchaseID }") - 1;
    if(pkiRejectedoffertopurchaseID == 0){
        goto end;
    }
    char* localVarToReplace_pkiRejectedoffertopurchaseID = malloc(sizeOfPathParams_pkiRejectedoffertopurchaseID);
    snprintf(localVarToReplace_pkiRejectedoffertopurchaseID, sizeOfPathParams_pkiRejectedoffertopurchaseID, "{%s}", "pkiRejectedoffertopurchaseID");

    char localVarBuff_pkiRejectedoffertopurchaseID[256];
    snprintf(localVarBuff_pkiRejectedoffertopurchaseID, sizeof localVarBuff_pkiRejectedoffertopurchaseID, "%ld", (long)*pkiRejectedoffertopurchaseID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiRejectedoffertopurchaseID, localVarBuff_pkiRejectedoffertopurchaseID);



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
    rejectedoffertopurchase_get_communicationsenders_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectRejectedoffertopurchaseAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = rejectedoffertopurchase_get_communicationsenders_v1_response_parseFromJSON(ObjectRejectedoffertopurchaseAPIlocalVarJSON);
        cJSON_Delete(ObjectRejectedoffertopurchaseAPIlocalVarJSON);
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
    free(localVarToReplace_pkiRejectedoffertopurchaseID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

