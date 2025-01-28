#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectInscriptiontempAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
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

