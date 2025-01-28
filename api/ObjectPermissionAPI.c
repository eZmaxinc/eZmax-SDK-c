#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectPermissionAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Create a new Permission
//
// The endpoint allows to create one or many elements at once.
//
permission_create_object_v1_response_t*
ObjectPermissionAPI_permissionCreateObjectV1(apiClient_t *apiClient, permission_create_object_v1_request_t *permission_create_object_v1_request)
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
    char *localVarPath = strdup("/1/object/permission");





    // Body Param
    cJSON *localVarSingleItemJSON_permission_create_object_v1_request = NULL;
    if (permission_create_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_permission_create_object_v1_request = permission_create_object_v1_request_convertToJSON(permission_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_permission_create_object_v1_request);
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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    permission_create_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectPermissionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = permission_create_object_v1_response_parseFromJSON(ObjectPermissionAPIlocalVarJSON);
        cJSON_Delete(ObjectPermissionAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_permission_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_permission_create_object_v1_request);
        localVarSingleItemJSON_permission_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an existing Permission
//
// 
//
permission_delete_object_v1_response_t*
ObjectPermissionAPI_permissionDeleteObjectV1(apiClient_t *apiClient, int *pkiPermissionID)
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
    char *localVarPath = strdup("/1/object/permission/{pkiPermissionID}");



    // Path Params
    long sizeOfPathParams_pkiPermissionID =  + sizeof("{ pkiPermissionID }") - 1;
    if(pkiPermissionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiPermissionID = malloc(sizeOfPathParams_pkiPermissionID);
    snprintf(localVarToReplace_pkiPermissionID, sizeOfPathParams_pkiPermissionID, "{%s}", "pkiPermissionID");

    char localVarBuff_pkiPermissionID[256];
    snprintf(localVarBuff_pkiPermissionID, sizeof localVarBuff_pkiPermissionID, "%ld", (long)*pkiPermissionID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiPermissionID, localVarBuff_pkiPermissionID);



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
    permission_delete_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectPermissionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = permission_delete_object_v1_response_parseFromJSON(ObjectPermissionAPIlocalVarJSON);
        cJSON_Delete(ObjectPermissionAPIlocalVarJSON);
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
    free(localVarToReplace_pkiPermissionID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Edit an existing Permission
//
// 
//
permission_edit_object_v1_response_t*
ObjectPermissionAPI_permissionEditObjectV1(apiClient_t *apiClient, int *pkiPermissionID, permission_edit_object_v1_request_t *permission_edit_object_v1_request)
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
    char *localVarPath = strdup("/1/object/permission/{pkiPermissionID}");



    // Path Params
    long sizeOfPathParams_pkiPermissionID =  + sizeof("{ pkiPermissionID }") - 1;
    if(pkiPermissionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiPermissionID = malloc(sizeOfPathParams_pkiPermissionID);
    snprintf(localVarToReplace_pkiPermissionID, sizeOfPathParams_pkiPermissionID, "{%s}", "pkiPermissionID");

    char localVarBuff_pkiPermissionID[256];
    snprintf(localVarBuff_pkiPermissionID, sizeof localVarBuff_pkiPermissionID, "%ld", (long)*pkiPermissionID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiPermissionID, localVarBuff_pkiPermissionID);




    // Body Param
    cJSON *localVarSingleItemJSON_permission_edit_object_v1_request = NULL;
    if (permission_edit_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_permission_edit_object_v1_request = permission_edit_object_v1_request_convertToJSON(permission_edit_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_permission_edit_object_v1_request);
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
    permission_edit_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectPermissionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = permission_edit_object_v1_response_parseFromJSON(ObjectPermissionAPIlocalVarJSON);
        cJSON_Delete(ObjectPermissionAPIlocalVarJSON);
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
    free(localVarToReplace_pkiPermissionID);
    if (localVarSingleItemJSON_permission_edit_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_permission_edit_object_v1_request);
        localVarSingleItemJSON_permission_edit_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Permission
//
// 
//
permission_get_object_v2_response_t*
ObjectPermissionAPI_permissionGetObjectV2(apiClient_t *apiClient, int *pkiPermissionID)
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
    char *localVarPath = strdup("/2/object/permission/{pkiPermissionID}");



    // Path Params
    long sizeOfPathParams_pkiPermissionID =  + sizeof("{ pkiPermissionID }") - 1;
    if(pkiPermissionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiPermissionID = malloc(sizeOfPathParams_pkiPermissionID);
    snprintf(localVarToReplace_pkiPermissionID, sizeOfPathParams_pkiPermissionID, "{%s}", "pkiPermissionID");

    char localVarBuff_pkiPermissionID[256];
    snprintf(localVarBuff_pkiPermissionID, sizeof localVarBuff_pkiPermissionID, "%ld", (long)*pkiPermissionID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiPermissionID, localVarBuff_pkiPermissionID);



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
    permission_get_object_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectPermissionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = permission_get_object_v2_response_parseFromJSON(ObjectPermissionAPIlocalVarJSON);
        cJSON_Delete(ObjectPermissionAPIlocalVarJSON);
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
    free(localVarToReplace_pkiPermissionID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

