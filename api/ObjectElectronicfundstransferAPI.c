#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectElectronicfundstransferAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


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

    // create the path
    long sizeOfPath = strlen("/1/object/electronicfundstransfer/{pkiElectronicfundstransferID}/getCommunicationCount")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/electronicfundstransfer/{pkiElectronicfundstransferID}/getCommunicationCount");


    // Path Params
    long sizeOfPathParams_pkiElectronicfundstransferID =  + strlen("{ pkiElectronicfundstransferID }");
    if(pkiElectronicfundstransferID == 0){
        goto end;
    }
    char* localVarToReplace_pkiElectronicfundstransferID = malloc(sizeOfPathParams_pkiElectronicfundstransferID);
    snprintf(localVarToReplace_pkiElectronicfundstransferID, sizeOfPathParams_pkiElectronicfundstransferID, "{%s}", "pkiElectronicfundstransferID");

    char localVarBuff_pkiElectronicfundstransferID[256];
    intToStr(localVarBuff_pkiElectronicfundstransferID, *pkiElectronicfundstransferID);

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
    cJSON *ObjectElectronicfundstransferAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    electronicfundstransfer_get_communication_count_v1_response_t *elementToReturn = electronicfundstransfer_get_communication_count_v1_response_parseFromJSON(ObjectElectronicfundstransferAPIlocalVarJSON);
    cJSON_Delete(ObjectElectronicfundstransferAPIlocalVarJSON);
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

    // create the path
    long sizeOfPath = strlen("/1/object/electronicfundstransfer/{pkiElectronicfundstransferID}/getCommunicationList")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/electronicfundstransfer/{pkiElectronicfundstransferID}/getCommunicationList");


    // Path Params
    long sizeOfPathParams_pkiElectronicfundstransferID =  + strlen("{ pkiElectronicfundstransferID }");
    if(pkiElectronicfundstransferID == 0){
        goto end;
    }
    char* localVarToReplace_pkiElectronicfundstransferID = malloc(sizeOfPathParams_pkiElectronicfundstransferID);
    snprintf(localVarToReplace_pkiElectronicfundstransferID, sizeOfPathParams_pkiElectronicfundstransferID, "{%s}", "pkiElectronicfundstransferID");

    char localVarBuff_pkiElectronicfundstransferID[256];
    intToStr(localVarBuff_pkiElectronicfundstransferID, *pkiElectronicfundstransferID);

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
    cJSON *ObjectElectronicfundstransferAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    electronicfundstransfer_get_communication_list_v1_response_t *elementToReturn = electronicfundstransfer_get_communication_list_v1_response_parseFromJSON(ObjectElectronicfundstransferAPIlocalVarJSON);
    cJSON_Delete(ObjectElectronicfundstransferAPIlocalVarJSON);
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

    // create the path
    long sizeOfPath = strlen("/1/object/electronicfundstransfer/{pkiElectronicfundstransferID}/getCommunicationrecipients")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/electronicfundstransfer/{pkiElectronicfundstransferID}/getCommunicationrecipients");


    // Path Params
    long sizeOfPathParams_pkiElectronicfundstransferID =  + strlen("{ pkiElectronicfundstransferID }");
    if(pkiElectronicfundstransferID == 0){
        goto end;
    }
    char* localVarToReplace_pkiElectronicfundstransferID = malloc(sizeOfPathParams_pkiElectronicfundstransferID);
    snprintf(localVarToReplace_pkiElectronicfundstransferID, sizeOfPathParams_pkiElectronicfundstransferID, "{%s}", "pkiElectronicfundstransferID");

    char localVarBuff_pkiElectronicfundstransferID[256];
    intToStr(localVarBuff_pkiElectronicfundstransferID, *pkiElectronicfundstransferID);

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
    cJSON *ObjectElectronicfundstransferAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    electronicfundstransfer_get_communicationrecipients_v1_response_t *elementToReturn = electronicfundstransfer_get_communicationrecipients_v1_response_parseFromJSON(ObjectElectronicfundstransferAPIlocalVarJSON);
    cJSON_Delete(ObjectElectronicfundstransferAPIlocalVarJSON);
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

    // create the path
    long sizeOfPath = strlen("/1/object/electronicfundstransfer/{pkiElectronicfundstransferID}/getCommunicationsenders")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/electronicfundstransfer/{pkiElectronicfundstransferID}/getCommunicationsenders");


    // Path Params
    long sizeOfPathParams_pkiElectronicfundstransferID =  + strlen("{ pkiElectronicfundstransferID }");
    if(pkiElectronicfundstransferID == 0){
        goto end;
    }
    char* localVarToReplace_pkiElectronicfundstransferID = malloc(sizeOfPathParams_pkiElectronicfundstransferID);
    snprintf(localVarToReplace_pkiElectronicfundstransferID, sizeOfPathParams_pkiElectronicfundstransferID, "{%s}", "pkiElectronicfundstransferID");

    char localVarBuff_pkiElectronicfundstransferID[256];
    intToStr(localVarBuff_pkiElectronicfundstransferID, *pkiElectronicfundstransferID);

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
    cJSON *ObjectElectronicfundstransferAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    electronicfundstransfer_get_communicationsenders_v1_response_t *elementToReturn = electronicfundstransfer_get_communicationsenders_v1_response_parseFromJSON(ObjectElectronicfundstransferAPIlocalVarJSON);
    cJSON_Delete(ObjectElectronicfundstransferAPIlocalVarJSON);
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
    free(localVarToReplace_pkiElectronicfundstransferID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

