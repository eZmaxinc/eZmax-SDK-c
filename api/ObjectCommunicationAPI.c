#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectCommunicationAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Retrieve the communication body.
//
// This endpoint returns the communication body.
//
void
ObjectCommunicationAPI_communicationGetCommunicationBodyV1(apiClient_t *apiClient, int *pkiCommunicationID)
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
    char *localVarPath = strdup("/1/object/communication/{pkiCommunicationID}/getCommunicationBody");



    // Path Params
    long sizeOfPathParams_pkiCommunicationID =  + sizeof("{ pkiCommunicationID }") - 1;
    if(pkiCommunicationID == 0){
        goto end;
    }
    char* localVarToReplace_pkiCommunicationID = malloc(sizeOfPathParams_pkiCommunicationID);
    snprintf(localVarToReplace_pkiCommunicationID, sizeOfPathParams_pkiCommunicationID, "{%s}", "pkiCommunicationID");

    char localVarBuff_pkiCommunicationID[256];
    snprintf(localVarBuff_pkiCommunicationID, sizeof localVarBuff_pkiCommunicationID, "%ld", (long)*pkiCommunicationID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiCommunicationID, localVarBuff_pkiCommunicationID);



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
    //if (apiClient->response_code == 302) {
    //    printf("%s\n","The user has been redirected");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_pkiCommunicationID);

}

// Send a new Communication
//
// The endpoint allows to send one or many elements at once.
//
communication_send_v1_response_t*
ObjectCommunicationAPI_communicationSendV1(apiClient_t *apiClient, communication_send_v1_request_t *communication_send_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/1/object/communication/send");





    // Body Param
    cJSON *localVarSingleItemJSON_communication_send_v1_request = NULL;
    if (communication_send_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_communication_send_v1_request = communication_send_v1_request_convertToJSON(communication_send_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_communication_send_v1_request);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 201) {
    //    printf("%s\n","Successful response");
    //}
    //nonprimitive not container
    communication_send_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectCommunicationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = communication_send_v1_response_parseFromJSON(ObjectCommunicationAPIlocalVarJSON);
        cJSON_Delete(ObjectCommunicationAPIlocalVarJSON);
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
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_communication_send_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_communication_send_v1_request);
        localVarSingleItemJSON_communication_send_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

