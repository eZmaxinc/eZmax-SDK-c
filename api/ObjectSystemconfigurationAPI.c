#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectSystemconfigurationAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Edit an existing Systemconfiguration
//
// 
//
systemconfiguration_edit_object_v1_response_t*
ObjectSystemconfigurationAPI_systemconfigurationEditObjectV1(apiClient_t *apiClient, int *pkiSystemconfigurationID, systemconfiguration_edit_object_v1_request_t *systemconfiguration_edit_object_v1_request)
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
    char *localVarPath = strdup("/1/object/systemconfiguration/{pkiSystemconfigurationID}");



    // Path Params
    long sizeOfPathParams_pkiSystemconfigurationID =  + sizeof("{ pkiSystemconfigurationID }") - 1;
    if(pkiSystemconfigurationID == 0){
        goto end;
    }
    char* localVarToReplace_pkiSystemconfigurationID = malloc(sizeOfPathParams_pkiSystemconfigurationID);
    snprintf(localVarToReplace_pkiSystemconfigurationID, sizeOfPathParams_pkiSystemconfigurationID, "{%s}", "pkiSystemconfigurationID");

    char localVarBuff_pkiSystemconfigurationID[256];
    snprintf(localVarBuff_pkiSystemconfigurationID, sizeof localVarBuff_pkiSystemconfigurationID, "%ld", (long)*pkiSystemconfigurationID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiSystemconfigurationID, localVarBuff_pkiSystemconfigurationID);




    // Body Param
    cJSON *localVarSingleItemJSON_systemconfiguration_edit_object_v1_request = NULL;
    if (systemconfiguration_edit_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_systemconfiguration_edit_object_v1_request = systemconfiguration_edit_object_v1_request_convertToJSON(systemconfiguration_edit_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_systemconfiguration_edit_object_v1_request);
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
                    "PUT");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    systemconfiguration_edit_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectSystemconfigurationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = systemconfiguration_edit_object_v1_response_parseFromJSON(ObjectSystemconfigurationAPIlocalVarJSON);
        cJSON_Delete(ObjectSystemconfigurationAPIlocalVarJSON);
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
    free(localVarToReplace_pkiSystemconfigurationID);
    if (localVarSingleItemJSON_systemconfiguration_edit_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_systemconfiguration_edit_object_v1_request);
        localVarSingleItemJSON_systemconfiguration_edit_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Systemconfiguration
//
// 
//
systemconfiguration_get_object_v2_response_t*
ObjectSystemconfigurationAPI_systemconfigurationGetObjectV2(apiClient_t *apiClient, int *pkiSystemconfigurationID)
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
    char *localVarPath = strdup("/2/object/systemconfiguration/{pkiSystemconfigurationID}");



    // Path Params
    long sizeOfPathParams_pkiSystemconfigurationID =  + sizeof("{ pkiSystemconfigurationID }") - 1;
    if(pkiSystemconfigurationID == 0){
        goto end;
    }
    char* localVarToReplace_pkiSystemconfigurationID = malloc(sizeOfPathParams_pkiSystemconfigurationID);
    snprintf(localVarToReplace_pkiSystemconfigurationID, sizeOfPathParams_pkiSystemconfigurationID, "{%s}", "pkiSystemconfigurationID");

    char localVarBuff_pkiSystemconfigurationID[256];
    snprintf(localVarBuff_pkiSystemconfigurationID, sizeof localVarBuff_pkiSystemconfigurationID, "%ld", (long)*pkiSystemconfigurationID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiSystemconfigurationID, localVarBuff_pkiSystemconfigurationID);



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
    systemconfiguration_get_object_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectSystemconfigurationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = systemconfiguration_get_object_v2_response_parseFromJSON(ObjectSystemconfigurationAPIlocalVarJSON);
        cJSON_Delete(ObjectSystemconfigurationAPIlocalVarJSON);
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
    free(localVarToReplace_pkiSystemconfigurationID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

