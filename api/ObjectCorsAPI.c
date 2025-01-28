#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectCorsAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Create a new Cors
//
// The endpoint allows to create one or many elements at once.
//
cors_create_object_v1_response_t*
ObjectCorsAPI_corsCreateObjectV1(apiClient_t *apiClient, cors_create_object_v1_request_t *cors_create_object_v1_request)
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
    char *localVarPath = strdup("/1/object/cors");





    // Body Param
    cJSON *localVarSingleItemJSON_cors_create_object_v1_request = NULL;
    if (cors_create_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_cors_create_object_v1_request = cors_create_object_v1_request_convertToJSON(cors_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_cors_create_object_v1_request);
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
    cors_create_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectCorsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = cors_create_object_v1_response_parseFromJSON(ObjectCorsAPIlocalVarJSON);
        cJSON_Delete(ObjectCorsAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_cors_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_cors_create_object_v1_request);
        localVarSingleItemJSON_cors_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an existing Cors
//
// 
//
cors_delete_object_v1_response_t*
ObjectCorsAPI_corsDeleteObjectV1(apiClient_t *apiClient, int *pkiCorsID)
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
    char *localVarPath = strdup("/1/object/cors/{pkiCorsID}");



    // Path Params
    long sizeOfPathParams_pkiCorsID =  + sizeof("{ pkiCorsID }") - 1;
    if(pkiCorsID == 0){
        goto end;
    }
    char* localVarToReplace_pkiCorsID = malloc(sizeOfPathParams_pkiCorsID);
    snprintf(localVarToReplace_pkiCorsID, sizeOfPathParams_pkiCorsID, "{%s}", "pkiCorsID");

    char localVarBuff_pkiCorsID[256];
    snprintf(localVarBuff_pkiCorsID, sizeof localVarBuff_pkiCorsID, "%ld", (long)*pkiCorsID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiCorsID, localVarBuff_pkiCorsID);



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
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    cors_delete_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectCorsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = cors_delete_object_v1_response_parseFromJSON(ObjectCorsAPIlocalVarJSON);
        cJSON_Delete(ObjectCorsAPIlocalVarJSON);
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
    free(localVarToReplace_pkiCorsID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Edit an existing Cors
//
// 
//
cors_edit_object_v1_response_t*
ObjectCorsAPI_corsEditObjectV1(apiClient_t *apiClient, int *pkiCorsID, cors_edit_object_v1_request_t *cors_edit_object_v1_request)
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
    char *localVarPath = strdup("/1/object/cors/{pkiCorsID}");



    // Path Params
    long sizeOfPathParams_pkiCorsID =  + sizeof("{ pkiCorsID }") - 1;
    if(pkiCorsID == 0){
        goto end;
    }
    char* localVarToReplace_pkiCorsID = malloc(sizeOfPathParams_pkiCorsID);
    snprintf(localVarToReplace_pkiCorsID, sizeOfPathParams_pkiCorsID, "{%s}", "pkiCorsID");

    char localVarBuff_pkiCorsID[256];
    snprintf(localVarBuff_pkiCorsID, sizeof localVarBuff_pkiCorsID, "%ld", (long)*pkiCorsID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiCorsID, localVarBuff_pkiCorsID);




    // Body Param
    cJSON *localVarSingleItemJSON_cors_edit_object_v1_request = NULL;
    if (cors_edit_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_cors_edit_object_v1_request = cors_edit_object_v1_request_convertToJSON(cors_edit_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_cors_edit_object_v1_request);
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
    cors_edit_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectCorsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = cors_edit_object_v1_response_parseFromJSON(ObjectCorsAPIlocalVarJSON);
        cJSON_Delete(ObjectCorsAPIlocalVarJSON);
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
    free(localVarToReplace_pkiCorsID);
    if (localVarSingleItemJSON_cors_edit_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_cors_edit_object_v1_request);
        localVarSingleItemJSON_cors_edit_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Cors
//
// 
//
cors_get_object_v2_response_t*
ObjectCorsAPI_corsGetObjectV2(apiClient_t *apiClient, int *pkiCorsID)
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
    char *localVarPath = strdup("/2/object/cors/{pkiCorsID}");



    // Path Params
    long sizeOfPathParams_pkiCorsID =  + sizeof("{ pkiCorsID }") - 1;
    if(pkiCorsID == 0){
        goto end;
    }
    char* localVarToReplace_pkiCorsID = malloc(sizeOfPathParams_pkiCorsID);
    snprintf(localVarToReplace_pkiCorsID, sizeOfPathParams_pkiCorsID, "{%s}", "pkiCorsID");

    char localVarBuff_pkiCorsID[256];
    snprintf(localVarBuff_pkiCorsID, sizeof localVarBuff_pkiCorsID, "%ld", (long)*pkiCorsID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiCorsID, localVarBuff_pkiCorsID);



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
    cors_get_object_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectCorsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = cors_get_object_v2_response_parseFromJSON(ObjectCorsAPIlocalVarJSON);
        cJSON_Delete(ObjectCorsAPIlocalVarJSON);
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
    free(localVarToReplace_pkiCorsID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

