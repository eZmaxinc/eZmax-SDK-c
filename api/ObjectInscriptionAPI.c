#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectInscriptionAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Retrieve Inscription's Attachments
//
// 
//
inscription_get_attachments_v1_response_t*
ObjectInscriptionAPI_inscriptionGetAttachmentsV1(apiClient_t *apiClient, int *pkiInscriptionID)
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
    char *localVarPath = strdup("/1/object/inscription/{pkiInscriptionID}/getAttachments");



    // Path Params
    long sizeOfPathParams_pkiInscriptionID =  + sizeof("{ pkiInscriptionID }") - 1;
    if(pkiInscriptionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiInscriptionID = malloc(sizeOfPathParams_pkiInscriptionID);
    snprintf(localVarToReplace_pkiInscriptionID, sizeOfPathParams_pkiInscriptionID, "{%s}", "pkiInscriptionID");

    char localVarBuff_pkiInscriptionID[256];
    snprintf(localVarBuff_pkiInscriptionID, sizeof localVarBuff_pkiInscriptionID, "%ld", (long)*pkiInscriptionID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiInscriptionID, localVarBuff_pkiInscriptionID);



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
    inscription_get_attachments_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectInscriptionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = inscription_get_attachments_v1_response_parseFromJSON(ObjectInscriptionAPIlocalVarJSON);
        cJSON_Delete(ObjectInscriptionAPIlocalVarJSON);
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
    free(localVarToReplace_pkiInscriptionID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Communication count
//
// 
//
inscription_get_communication_count_v1_response_t*
ObjectInscriptionAPI_inscriptionGetCommunicationCountV1(apiClient_t *apiClient, int *pkiInscriptionID)
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
    char *localVarPath = strdup("/1/object/inscription/{pkiInscriptionID}/getCommunicationCount");



    // Path Params
    long sizeOfPathParams_pkiInscriptionID =  + sizeof("{ pkiInscriptionID }") - 1;
    if(pkiInscriptionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiInscriptionID = malloc(sizeOfPathParams_pkiInscriptionID);
    snprintf(localVarToReplace_pkiInscriptionID, sizeOfPathParams_pkiInscriptionID, "{%s}", "pkiInscriptionID");

    char localVarBuff_pkiInscriptionID[256];
    snprintf(localVarBuff_pkiInscriptionID, sizeof localVarBuff_pkiInscriptionID, "%ld", (long)*pkiInscriptionID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiInscriptionID, localVarBuff_pkiInscriptionID);



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
    inscription_get_communication_count_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectInscriptionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = inscription_get_communication_count_v1_response_parseFromJSON(ObjectInscriptionAPIlocalVarJSON);
        cJSON_Delete(ObjectInscriptionAPIlocalVarJSON);
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
    free(localVarToReplace_pkiInscriptionID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Communication list
//
// 
//
inscription_get_communication_list_v1_response_t*
ObjectInscriptionAPI_inscriptionGetCommunicationListV1(apiClient_t *apiClient, int *pkiInscriptionID)
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
    char *localVarPath = strdup("/1/object/inscription/{pkiInscriptionID}/getCommunicationList");



    // Path Params
    long sizeOfPathParams_pkiInscriptionID =  + sizeof("{ pkiInscriptionID }") - 1;
    if(pkiInscriptionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiInscriptionID = malloc(sizeOfPathParams_pkiInscriptionID);
    snprintf(localVarToReplace_pkiInscriptionID, sizeOfPathParams_pkiInscriptionID, "{%s}", "pkiInscriptionID");

    char localVarBuff_pkiInscriptionID[256];
    snprintf(localVarBuff_pkiInscriptionID, sizeof localVarBuff_pkiInscriptionID, "%ld", (long)*pkiInscriptionID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiInscriptionID, localVarBuff_pkiInscriptionID);



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
    inscription_get_communication_list_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectInscriptionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = inscription_get_communication_list_v1_response_parseFromJSON(ObjectInscriptionAPIlocalVarJSON);
        cJSON_Delete(ObjectInscriptionAPIlocalVarJSON);
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
    free(localVarToReplace_pkiInscriptionID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Inscription's Communicationrecipient
//
// 
//
inscription_get_communicationrecipients_v1_response_t*
ObjectInscriptionAPI_inscriptionGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiInscriptionID)
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
    char *localVarPath = strdup("/1/object/inscription/{pkiInscriptionID}/getCommunicationrecipients");



    // Path Params
    long sizeOfPathParams_pkiInscriptionID =  + sizeof("{ pkiInscriptionID }") - 1;
    if(pkiInscriptionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiInscriptionID = malloc(sizeOfPathParams_pkiInscriptionID);
    snprintf(localVarToReplace_pkiInscriptionID, sizeOfPathParams_pkiInscriptionID, "{%s}", "pkiInscriptionID");

    char localVarBuff_pkiInscriptionID[256];
    snprintf(localVarBuff_pkiInscriptionID, sizeof localVarBuff_pkiInscriptionID, "%ld", (long)*pkiInscriptionID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiInscriptionID, localVarBuff_pkiInscriptionID);



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
    inscription_get_communicationrecipients_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectInscriptionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = inscription_get_communicationrecipients_v1_response_parseFromJSON(ObjectInscriptionAPIlocalVarJSON);
        cJSON_Delete(ObjectInscriptionAPIlocalVarJSON);
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
    free(localVarToReplace_pkiInscriptionID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Inscription's Communicationsender
//
// 
//
inscription_get_communicationsenders_v1_response_t*
ObjectInscriptionAPI_inscriptionGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiInscriptionID)
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
    char *localVarPath = strdup("/1/object/inscription/{pkiInscriptionID}/getCommunicationsenders");



    // Path Params
    long sizeOfPathParams_pkiInscriptionID =  + sizeof("{ pkiInscriptionID }") - 1;
    if(pkiInscriptionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiInscriptionID = malloc(sizeOfPathParams_pkiInscriptionID);
    snprintf(localVarToReplace_pkiInscriptionID, sizeOfPathParams_pkiInscriptionID, "{%s}", "pkiInscriptionID");

    char localVarBuff_pkiInscriptionID[256];
    snprintf(localVarBuff_pkiInscriptionID, sizeof localVarBuff_pkiInscriptionID, "%ld", (long)*pkiInscriptionID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiInscriptionID, localVarBuff_pkiInscriptionID);



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
    inscription_get_communicationsenders_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectInscriptionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = inscription_get_communicationsenders_v1_response_parseFromJSON(ObjectInscriptionAPIlocalVarJSON);
        cJSON_Delete(ObjectInscriptionAPIlocalVarJSON);
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
    free(localVarToReplace_pkiInscriptionID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

