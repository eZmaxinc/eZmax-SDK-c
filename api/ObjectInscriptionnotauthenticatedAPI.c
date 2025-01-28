#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectInscriptionnotauthenticatedAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Retrieve Communication count
//
// 
//
inscriptionnotauthenticated_get_communication_count_v1_response_t*
ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationCountV1(apiClient_t *apiClient, int *pkiInscriptionnotauthenticatedID)
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
    char *localVarPath = strdup("/1/object/inscriptionnotauthenticated/{pkiInscriptionnotauthenticatedID}/getCommunicationCount");



    // Path Params
    long sizeOfPathParams_pkiInscriptionnotauthenticatedID =  + sizeof("{ pkiInscriptionnotauthenticatedID }") - 1;
    if(pkiInscriptionnotauthenticatedID == 0){
        goto end;
    }
    char* localVarToReplace_pkiInscriptionnotauthenticatedID = malloc(sizeOfPathParams_pkiInscriptionnotauthenticatedID);
    snprintf(localVarToReplace_pkiInscriptionnotauthenticatedID, sizeOfPathParams_pkiInscriptionnotauthenticatedID, "{%s}", "pkiInscriptionnotauthenticatedID");

    char localVarBuff_pkiInscriptionnotauthenticatedID[256];
    snprintf(localVarBuff_pkiInscriptionnotauthenticatedID, sizeof localVarBuff_pkiInscriptionnotauthenticatedID, "%ld", (long)*pkiInscriptionnotauthenticatedID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiInscriptionnotauthenticatedID, localVarBuff_pkiInscriptionnotauthenticatedID);



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
    inscriptionnotauthenticated_get_communication_count_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectInscriptionnotauthenticatedAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = inscriptionnotauthenticated_get_communication_count_v1_response_parseFromJSON(ObjectInscriptionnotauthenticatedAPIlocalVarJSON);
        cJSON_Delete(ObjectInscriptionnotauthenticatedAPIlocalVarJSON);
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
    free(localVarToReplace_pkiInscriptionnotauthenticatedID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Communication list
//
// 
//
inscriptionnotauthenticated_get_communication_list_v1_response_t*
ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationListV1(apiClient_t *apiClient, int *pkiInscriptionnotauthenticatedID)
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
    char *localVarPath = strdup("/1/object/inscriptionnotauthenticated/{pkiInscriptionnotauthenticatedID}/getCommunicationList");



    // Path Params
    long sizeOfPathParams_pkiInscriptionnotauthenticatedID =  + sizeof("{ pkiInscriptionnotauthenticatedID }") - 1;
    if(pkiInscriptionnotauthenticatedID == 0){
        goto end;
    }
    char* localVarToReplace_pkiInscriptionnotauthenticatedID = malloc(sizeOfPathParams_pkiInscriptionnotauthenticatedID);
    snprintf(localVarToReplace_pkiInscriptionnotauthenticatedID, sizeOfPathParams_pkiInscriptionnotauthenticatedID, "{%s}", "pkiInscriptionnotauthenticatedID");

    char localVarBuff_pkiInscriptionnotauthenticatedID[256];
    snprintf(localVarBuff_pkiInscriptionnotauthenticatedID, sizeof localVarBuff_pkiInscriptionnotauthenticatedID, "%ld", (long)*pkiInscriptionnotauthenticatedID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiInscriptionnotauthenticatedID, localVarBuff_pkiInscriptionnotauthenticatedID);



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
    inscriptionnotauthenticated_get_communication_list_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectInscriptionnotauthenticatedAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = inscriptionnotauthenticated_get_communication_list_v1_response_parseFromJSON(ObjectInscriptionnotauthenticatedAPIlocalVarJSON);
        cJSON_Delete(ObjectInscriptionnotauthenticatedAPIlocalVarJSON);
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
    free(localVarToReplace_pkiInscriptionnotauthenticatedID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Inscriptionnotauthenticated's Communicationrecipient
//
// 
//
inscriptionnotauthenticated_get_communicationrecipients_v1_response_t*
ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiInscriptionnotauthenticatedID)
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
    char *localVarPath = strdup("/1/object/inscriptionnotauthenticated/{pkiInscriptionnotauthenticatedID}/getCommunicationrecipients");



    // Path Params
    long sizeOfPathParams_pkiInscriptionnotauthenticatedID =  + sizeof("{ pkiInscriptionnotauthenticatedID }") - 1;
    if(pkiInscriptionnotauthenticatedID == 0){
        goto end;
    }
    char* localVarToReplace_pkiInscriptionnotauthenticatedID = malloc(sizeOfPathParams_pkiInscriptionnotauthenticatedID);
    snprintf(localVarToReplace_pkiInscriptionnotauthenticatedID, sizeOfPathParams_pkiInscriptionnotauthenticatedID, "{%s}", "pkiInscriptionnotauthenticatedID");

    char localVarBuff_pkiInscriptionnotauthenticatedID[256];
    snprintf(localVarBuff_pkiInscriptionnotauthenticatedID, sizeof localVarBuff_pkiInscriptionnotauthenticatedID, "%ld", (long)*pkiInscriptionnotauthenticatedID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiInscriptionnotauthenticatedID, localVarBuff_pkiInscriptionnotauthenticatedID);



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
    inscriptionnotauthenticated_get_communicationrecipients_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectInscriptionnotauthenticatedAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = inscriptionnotauthenticated_get_communicationrecipients_v1_response_parseFromJSON(ObjectInscriptionnotauthenticatedAPIlocalVarJSON);
        cJSON_Delete(ObjectInscriptionnotauthenticatedAPIlocalVarJSON);
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
    free(localVarToReplace_pkiInscriptionnotauthenticatedID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Inscriptionnotauthenticated's Communicationsender
//
// 
//
inscriptionnotauthenticated_get_communicationsenders_v1_response_t*
ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiInscriptionnotauthenticatedID)
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
    char *localVarPath = strdup("/1/object/inscriptionnotauthenticated/{pkiInscriptionnotauthenticatedID}/getCommunicationsenders");



    // Path Params
    long sizeOfPathParams_pkiInscriptionnotauthenticatedID =  + sizeof("{ pkiInscriptionnotauthenticatedID }") - 1;
    if(pkiInscriptionnotauthenticatedID == 0){
        goto end;
    }
    char* localVarToReplace_pkiInscriptionnotauthenticatedID = malloc(sizeOfPathParams_pkiInscriptionnotauthenticatedID);
    snprintf(localVarToReplace_pkiInscriptionnotauthenticatedID, sizeOfPathParams_pkiInscriptionnotauthenticatedID, "{%s}", "pkiInscriptionnotauthenticatedID");

    char localVarBuff_pkiInscriptionnotauthenticatedID[256];
    snprintf(localVarBuff_pkiInscriptionnotauthenticatedID, sizeof localVarBuff_pkiInscriptionnotauthenticatedID, "%ld", (long)*pkiInscriptionnotauthenticatedID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiInscriptionnotauthenticatedID, localVarBuff_pkiInscriptionnotauthenticatedID);



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
    inscriptionnotauthenticated_get_communicationsenders_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectInscriptionnotauthenticatedAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = inscriptionnotauthenticated_get_communicationsenders_v1_response_parseFromJSON(ObjectInscriptionnotauthenticatedAPIlocalVarJSON);
        cJSON_Delete(ObjectInscriptionnotauthenticatedAPIlocalVarJSON);
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
    free(localVarToReplace_pkiInscriptionnotauthenticatedID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

