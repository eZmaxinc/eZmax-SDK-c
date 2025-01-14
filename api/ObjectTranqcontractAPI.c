#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectTranqcontractAPI.h"

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
tranqcontract_get_communication_count_v1_response_t*
ObjectTranqcontractAPI_tranqcontractGetCommunicationCountV1(apiClient_t *apiClient, int *pkiTranqcontractID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/tranqcontract/{pkiTranqcontractID}/getCommunicationCount")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/tranqcontract/{pkiTranqcontractID}/getCommunicationCount");


    // Path Params
    long sizeOfPathParams_pkiTranqcontractID =  + strlen("{ pkiTranqcontractID }");
    if(pkiTranqcontractID == 0){
        goto end;
    }
    char* localVarToReplace_pkiTranqcontractID = malloc(sizeOfPathParams_pkiTranqcontractID);
    snprintf(localVarToReplace_pkiTranqcontractID, sizeOfPathParams_pkiTranqcontractID, "{%s}", "pkiTranqcontractID");

    char localVarBuff_pkiTranqcontractID[256];
    intToStr(localVarBuff_pkiTranqcontractID, *pkiTranqcontractID);

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
    cJSON *ObjectTranqcontractAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    tranqcontract_get_communication_count_v1_response_t *elementToReturn = tranqcontract_get_communication_count_v1_response_parseFromJSON(ObjectTranqcontractAPIlocalVarJSON);
    cJSON_Delete(ObjectTranqcontractAPIlocalVarJSON);
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

    // create the path
    long sizeOfPath = strlen("/1/object/tranqcontract/{pkiTranqcontractID}/getCommunicationList")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/tranqcontract/{pkiTranqcontractID}/getCommunicationList");


    // Path Params
    long sizeOfPathParams_pkiTranqcontractID =  + strlen("{ pkiTranqcontractID }");
    if(pkiTranqcontractID == 0){
        goto end;
    }
    char* localVarToReplace_pkiTranqcontractID = malloc(sizeOfPathParams_pkiTranqcontractID);
    snprintf(localVarToReplace_pkiTranqcontractID, sizeOfPathParams_pkiTranqcontractID, "{%s}", "pkiTranqcontractID");

    char localVarBuff_pkiTranqcontractID[256];
    intToStr(localVarBuff_pkiTranqcontractID, *pkiTranqcontractID);

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
    cJSON *ObjectTranqcontractAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    tranqcontract_get_communication_list_v1_response_t *elementToReturn = tranqcontract_get_communication_list_v1_response_parseFromJSON(ObjectTranqcontractAPIlocalVarJSON);
    cJSON_Delete(ObjectTranqcontractAPIlocalVarJSON);
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

    // create the path
    long sizeOfPath = strlen("/1/object/tranqcontract/{pkiTranqcontractID}/getCommunicationrecipients")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/tranqcontract/{pkiTranqcontractID}/getCommunicationrecipients");


    // Path Params
    long sizeOfPathParams_pkiTranqcontractID =  + strlen("{ pkiTranqcontractID }");
    if(pkiTranqcontractID == 0){
        goto end;
    }
    char* localVarToReplace_pkiTranqcontractID = malloc(sizeOfPathParams_pkiTranqcontractID);
    snprintf(localVarToReplace_pkiTranqcontractID, sizeOfPathParams_pkiTranqcontractID, "{%s}", "pkiTranqcontractID");

    char localVarBuff_pkiTranqcontractID[256];
    intToStr(localVarBuff_pkiTranqcontractID, *pkiTranqcontractID);

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
    cJSON *ObjectTranqcontractAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    tranqcontract_get_communicationrecipients_v1_response_t *elementToReturn = tranqcontract_get_communicationrecipients_v1_response_parseFromJSON(ObjectTranqcontractAPIlocalVarJSON);
    cJSON_Delete(ObjectTranqcontractAPIlocalVarJSON);
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

    // create the path
    long sizeOfPath = strlen("/1/object/tranqcontract/{pkiTranqcontractID}/getCommunicationsenders")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/tranqcontract/{pkiTranqcontractID}/getCommunicationsenders");


    // Path Params
    long sizeOfPathParams_pkiTranqcontractID =  + strlen("{ pkiTranqcontractID }");
    if(pkiTranqcontractID == 0){
        goto end;
    }
    char* localVarToReplace_pkiTranqcontractID = malloc(sizeOfPathParams_pkiTranqcontractID);
    snprintf(localVarToReplace_pkiTranqcontractID, sizeOfPathParams_pkiTranqcontractID, "{%s}", "pkiTranqcontractID");

    char localVarBuff_pkiTranqcontractID[256];
    intToStr(localVarBuff_pkiTranqcontractID, *pkiTranqcontractID);

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
    cJSON *ObjectTranqcontractAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    tranqcontract_get_communicationsenders_v1_response_t *elementToReturn = tranqcontract_get_communicationsenders_v1_response_parseFromJSON(ObjectTranqcontractAPIlocalVarJSON);
    cJSON_Delete(ObjectTranqcontractAPIlocalVarJSON);
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
    free(localVarToReplace_pkiTranqcontractID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

