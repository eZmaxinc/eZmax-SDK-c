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

// Import attachments into the Electronicfundstransfer
//
// 
//
electronicfundstransfer_import_into_edm_v1_response_t*
ObjectElectronicfundstransferAPI_electronicfundstransferImportIntoEDMV1(apiClient_t *apiClient, int *pkiElectronicfundstransferID, electronicfundstransfer_import_into_edm_v1_request_t *electronicfundstransfer_import_into_edm_v1_request)
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
    char *localVarPath = strdup("/1/object/electronicfundstransfer/{pkiElectronicfundstransferID}/importIntoEDM");



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




    // Body Param
    cJSON *localVarSingleItemJSON_electronicfundstransfer_import_into_edm_v1_request = NULL;
    if (electronicfundstransfer_import_into_edm_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_electronicfundstransfer_import_into_edm_v1_request = electronicfundstransfer_import_into_edm_v1_request_convertToJSON(electronicfundstransfer_import_into_edm_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_electronicfundstransfer_import_into_edm_v1_request);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    electronicfundstransfer_import_into_edm_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectElectronicfundstransferAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = electronicfundstransfer_import_into_edm_v1_response_parseFromJSON(ObjectElectronicfundstransferAPIlocalVarJSON);
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
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_pkiElectronicfundstransferID);
    if (localVarSingleItemJSON_electronicfundstransfer_import_into_edm_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_electronicfundstransfer_import_into_edm_v1_request);
        localVarSingleItemJSON_electronicfundstransfer_import_into_edm_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

