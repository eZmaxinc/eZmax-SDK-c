#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectElectronicfundstransferAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
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

