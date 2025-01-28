#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectOtherincomeAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Retrieve Communication count
//
// 
//
otherincome_get_communication_count_v1_response_t*
ObjectOtherincomeAPI_otherincomeGetCommunicationCountV1(apiClient_t *apiClient, int *pkiOtherincomeID)
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
    char *localVarPath = strdup("/1/object/otherincome/{pkiOtherincomeID}/getCommunicationCount");



    // Path Params
    long sizeOfPathParams_pkiOtherincomeID =  + sizeof("{ pkiOtherincomeID }") - 1;
    if(pkiOtherincomeID == 0){
        goto end;
    }
    char* localVarToReplace_pkiOtherincomeID = malloc(sizeOfPathParams_pkiOtherincomeID);
    snprintf(localVarToReplace_pkiOtherincomeID, sizeOfPathParams_pkiOtherincomeID, "{%s}", "pkiOtherincomeID");

    char localVarBuff_pkiOtherincomeID[256];
    snprintf(localVarBuff_pkiOtherincomeID, sizeof localVarBuff_pkiOtherincomeID, "%ld", (long)*pkiOtherincomeID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiOtherincomeID, localVarBuff_pkiOtherincomeID);



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
    otherincome_get_communication_count_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectOtherincomeAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = otherincome_get_communication_count_v1_response_parseFromJSON(ObjectOtherincomeAPIlocalVarJSON);
        cJSON_Delete(ObjectOtherincomeAPIlocalVarJSON);
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
    free(localVarToReplace_pkiOtherincomeID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Communication list
//
// 
//
otherincome_get_communication_list_v1_response_t*
ObjectOtherincomeAPI_otherincomeGetCommunicationListV1(apiClient_t *apiClient, int *pkiOtherincomeID)
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
    char *localVarPath = strdup("/1/object/otherincome/{pkiOtherincomeID}/getCommunicationList");



    // Path Params
    long sizeOfPathParams_pkiOtherincomeID =  + sizeof("{ pkiOtherincomeID }") - 1;
    if(pkiOtherincomeID == 0){
        goto end;
    }
    char* localVarToReplace_pkiOtherincomeID = malloc(sizeOfPathParams_pkiOtherincomeID);
    snprintf(localVarToReplace_pkiOtherincomeID, sizeOfPathParams_pkiOtherincomeID, "{%s}", "pkiOtherincomeID");

    char localVarBuff_pkiOtherincomeID[256];
    snprintf(localVarBuff_pkiOtherincomeID, sizeof localVarBuff_pkiOtherincomeID, "%ld", (long)*pkiOtherincomeID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiOtherincomeID, localVarBuff_pkiOtherincomeID);



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
    otherincome_get_communication_list_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectOtherincomeAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = otherincome_get_communication_list_v1_response_parseFromJSON(ObjectOtherincomeAPIlocalVarJSON);
        cJSON_Delete(ObjectOtherincomeAPIlocalVarJSON);
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
    free(localVarToReplace_pkiOtherincomeID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Otherincome's Communicationrecipient
//
// 
//
otherincome_get_communicationrecipients_v1_response_t*
ObjectOtherincomeAPI_otherincomeGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiOtherincomeID)
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
    char *localVarPath = strdup("/1/object/otherincome/{pkiOtherincomeID}/getCommunicationrecipients");



    // Path Params
    long sizeOfPathParams_pkiOtherincomeID =  + sizeof("{ pkiOtherincomeID }") - 1;
    if(pkiOtherincomeID == 0){
        goto end;
    }
    char* localVarToReplace_pkiOtherincomeID = malloc(sizeOfPathParams_pkiOtherincomeID);
    snprintf(localVarToReplace_pkiOtherincomeID, sizeOfPathParams_pkiOtherincomeID, "{%s}", "pkiOtherincomeID");

    char localVarBuff_pkiOtherincomeID[256];
    snprintf(localVarBuff_pkiOtherincomeID, sizeof localVarBuff_pkiOtherincomeID, "%ld", (long)*pkiOtherincomeID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiOtherincomeID, localVarBuff_pkiOtherincomeID);



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
    otherincome_get_communicationrecipients_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectOtherincomeAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = otherincome_get_communicationrecipients_v1_response_parseFromJSON(ObjectOtherincomeAPIlocalVarJSON);
        cJSON_Delete(ObjectOtherincomeAPIlocalVarJSON);
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
    free(localVarToReplace_pkiOtherincomeID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Otherincome's Communicationsender
//
// 
//
otherincome_get_communicationsenders_v1_response_t*
ObjectOtherincomeAPI_otherincomeGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiOtherincomeID)
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
    char *localVarPath = strdup("/1/object/otherincome/{pkiOtherincomeID}/getCommunicationsenders");



    // Path Params
    long sizeOfPathParams_pkiOtherincomeID =  + sizeof("{ pkiOtherincomeID }") - 1;
    if(pkiOtherincomeID == 0){
        goto end;
    }
    char* localVarToReplace_pkiOtherincomeID = malloc(sizeOfPathParams_pkiOtherincomeID);
    snprintf(localVarToReplace_pkiOtherincomeID, sizeOfPathParams_pkiOtherincomeID, "{%s}", "pkiOtherincomeID");

    char localVarBuff_pkiOtherincomeID[256];
    snprintf(localVarBuff_pkiOtherincomeID, sizeof localVarBuff_pkiOtherincomeID, "%ld", (long)*pkiOtherincomeID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiOtherincomeID, localVarBuff_pkiOtherincomeID);



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
    otherincome_get_communicationsenders_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectOtherincomeAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = otherincome_get_communicationsenders_v1_response_parseFromJSON(ObjectOtherincomeAPIlocalVarJSON);
        cJSON_Delete(ObjectOtherincomeAPIlocalVarJSON);
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
    free(localVarToReplace_pkiOtherincomeID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

