#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectInscriptionAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


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

    // create the path
    long sizeOfPath = strlen("/1/object/inscription/{pkiInscriptionID}/getAttachments")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/inscription/{pkiInscriptionID}/getAttachments");


    // Path Params
    long sizeOfPathParams_pkiInscriptionID =  + strlen("{ pkiInscriptionID }");
    if(pkiInscriptionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiInscriptionID = malloc(sizeOfPathParams_pkiInscriptionID);
    snprintf(localVarToReplace_pkiInscriptionID, sizeOfPathParams_pkiInscriptionID, "{%s}", "pkiInscriptionID");

    char localVarBuff_pkiInscriptionID[256];
    intToStr(localVarBuff_pkiInscriptionID, *pkiInscriptionID);

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
    cJSON *ObjectInscriptionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    inscription_get_attachments_v1_response_t *elementToReturn = inscription_get_attachments_v1_response_parseFromJSON(ObjectInscriptionAPIlocalVarJSON);
    cJSON_Delete(ObjectInscriptionAPIlocalVarJSON);
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

    // create the path
    long sizeOfPath = strlen("/1/object/inscription/{pkiInscriptionID}/getCommunicationCount")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/inscription/{pkiInscriptionID}/getCommunicationCount");


    // Path Params
    long sizeOfPathParams_pkiInscriptionID =  + strlen("{ pkiInscriptionID }");
    if(pkiInscriptionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiInscriptionID = malloc(sizeOfPathParams_pkiInscriptionID);
    snprintf(localVarToReplace_pkiInscriptionID, sizeOfPathParams_pkiInscriptionID, "{%s}", "pkiInscriptionID");

    char localVarBuff_pkiInscriptionID[256];
    intToStr(localVarBuff_pkiInscriptionID, *pkiInscriptionID);

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
    cJSON *ObjectInscriptionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    inscription_get_communication_count_v1_response_t *elementToReturn = inscription_get_communication_count_v1_response_parseFromJSON(ObjectInscriptionAPIlocalVarJSON);
    cJSON_Delete(ObjectInscriptionAPIlocalVarJSON);
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

    // create the path
    long sizeOfPath = strlen("/1/object/inscription/{pkiInscriptionID}/getCommunicationList")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/inscription/{pkiInscriptionID}/getCommunicationList");


    // Path Params
    long sizeOfPathParams_pkiInscriptionID =  + strlen("{ pkiInscriptionID }");
    if(pkiInscriptionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiInscriptionID = malloc(sizeOfPathParams_pkiInscriptionID);
    snprintf(localVarToReplace_pkiInscriptionID, sizeOfPathParams_pkiInscriptionID, "{%s}", "pkiInscriptionID");

    char localVarBuff_pkiInscriptionID[256];
    intToStr(localVarBuff_pkiInscriptionID, *pkiInscriptionID);

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
    cJSON *ObjectInscriptionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    inscription_get_communication_list_v1_response_t *elementToReturn = inscription_get_communication_list_v1_response_parseFromJSON(ObjectInscriptionAPIlocalVarJSON);
    cJSON_Delete(ObjectInscriptionAPIlocalVarJSON);
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

    // create the path
    long sizeOfPath = strlen("/1/object/inscription/{pkiInscriptionID}/getCommunicationrecipients")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/inscription/{pkiInscriptionID}/getCommunicationrecipients");


    // Path Params
    long sizeOfPathParams_pkiInscriptionID =  + strlen("{ pkiInscriptionID }");
    if(pkiInscriptionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiInscriptionID = malloc(sizeOfPathParams_pkiInscriptionID);
    snprintf(localVarToReplace_pkiInscriptionID, sizeOfPathParams_pkiInscriptionID, "{%s}", "pkiInscriptionID");

    char localVarBuff_pkiInscriptionID[256];
    intToStr(localVarBuff_pkiInscriptionID, *pkiInscriptionID);

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
    cJSON *ObjectInscriptionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    inscription_get_communicationrecipients_v1_response_t *elementToReturn = inscription_get_communicationrecipients_v1_response_parseFromJSON(ObjectInscriptionAPIlocalVarJSON);
    cJSON_Delete(ObjectInscriptionAPIlocalVarJSON);
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

    // create the path
    long sizeOfPath = strlen("/1/object/inscription/{pkiInscriptionID}/getCommunicationsenders")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/inscription/{pkiInscriptionID}/getCommunicationsenders");


    // Path Params
    long sizeOfPathParams_pkiInscriptionID =  + strlen("{ pkiInscriptionID }");
    if(pkiInscriptionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiInscriptionID = malloc(sizeOfPathParams_pkiInscriptionID);
    snprintf(localVarToReplace_pkiInscriptionID, sizeOfPathParams_pkiInscriptionID, "{%s}", "pkiInscriptionID");

    char localVarBuff_pkiInscriptionID[256];
    intToStr(localVarBuff_pkiInscriptionID, *pkiInscriptionID);

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
    cJSON *ObjectInscriptionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    inscription_get_communicationsenders_v1_response_t *elementToReturn = inscription_get_communicationsenders_v1_response_parseFromJSON(ObjectInscriptionAPIlocalVarJSON);
    cJSON_Delete(ObjectInscriptionAPIlocalVarJSON);
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
    free(localVarToReplace_pkiInscriptionID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

