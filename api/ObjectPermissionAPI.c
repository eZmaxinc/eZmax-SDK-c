#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectPermissionAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create a new Permission
//
// The endpoint allows to create one or many elements at once.
//
permission_create_object_v1_response_t*
ObjectPermissionAPI_permissionCreateObjectV1(apiClient_t *apiClient, permission_create_object_v1_request_t * permission_create_object_v1_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/permission")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/permission");




    // Body Param
    cJSON *localVarSingleItemJSON_permission_create_object_v1_request = NULL;
    if (permission_create_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_permission_create_object_v1_request = permission_create_object_v1_request_convertToJSON(permission_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_permission_create_object_v1_request);
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
    cJSON *ObjectPermissionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    permission_create_object_v1_response_t *elementToReturn = permission_create_object_v1_response_parseFromJSON(ObjectPermissionAPIlocalVarJSON);
    cJSON_Delete(ObjectPermissionAPIlocalVarJSON);
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
ObjectPermissionAPI_permissionDeleteObjectV1(apiClient_t *apiClient, int pkiPermissionID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/permission/{pkiPermissionID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/permission/{pkiPermissionID}");


    // Path Params
    long sizeOfPathParams_pkiPermissionID =  + strlen("{ pkiPermissionID }");
    if(pkiPermissionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiPermissionID = malloc(sizeOfPathParams_pkiPermissionID);
    snprintf(localVarToReplace_pkiPermissionID, sizeOfPathParams_pkiPermissionID, "{%s}", "pkiPermissionID");

    char localVarBuff_pkiPermissionID[256];
    intToStr(localVarBuff_pkiPermissionID, pkiPermissionID);

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
    cJSON *ObjectPermissionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    permission_delete_object_v1_response_t *elementToReturn = permission_delete_object_v1_response_parseFromJSON(ObjectPermissionAPIlocalVarJSON);
    cJSON_Delete(ObjectPermissionAPIlocalVarJSON);
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
ObjectPermissionAPI_permissionEditObjectV1(apiClient_t *apiClient, int pkiPermissionID , permission_edit_object_v1_request_t * permission_edit_object_v1_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/permission/{pkiPermissionID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/permission/{pkiPermissionID}");


    // Path Params
    long sizeOfPathParams_pkiPermissionID =  + strlen("{ pkiPermissionID }");
    if(pkiPermissionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiPermissionID = malloc(sizeOfPathParams_pkiPermissionID);
    snprintf(localVarToReplace_pkiPermissionID, sizeOfPathParams_pkiPermissionID, "{%s}", "pkiPermissionID");

    char localVarBuff_pkiPermissionID[256];
    intToStr(localVarBuff_pkiPermissionID, pkiPermissionID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiPermissionID, localVarBuff_pkiPermissionID);




    // Body Param
    cJSON *localVarSingleItemJSON_permission_edit_object_v1_request = NULL;
    if (permission_edit_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_permission_edit_object_v1_request = permission_edit_object_v1_request_convertToJSON(permission_edit_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_permission_edit_object_v1_request);
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
    cJSON *ObjectPermissionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    permission_edit_object_v1_response_t *elementToReturn = permission_edit_object_v1_response_parseFromJSON(ObjectPermissionAPIlocalVarJSON);
    cJSON_Delete(ObjectPermissionAPIlocalVarJSON);
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
ObjectPermissionAPI_permissionGetObjectV2(apiClient_t *apiClient, int pkiPermissionID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/2/object/permission/{pkiPermissionID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/2/object/permission/{pkiPermissionID}");


    // Path Params
    long sizeOfPathParams_pkiPermissionID =  + strlen("{ pkiPermissionID }");
    if(pkiPermissionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiPermissionID = malloc(sizeOfPathParams_pkiPermissionID);
    snprintf(localVarToReplace_pkiPermissionID, sizeOfPathParams_pkiPermissionID, "{%s}", "pkiPermissionID");

    char localVarBuff_pkiPermissionID[256];
    intToStr(localVarBuff_pkiPermissionID, pkiPermissionID);

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
    cJSON *ObjectPermissionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    permission_get_object_v2_response_t *elementToReturn = permission_get_object_v2_response_parseFromJSON(ObjectPermissionAPIlocalVarJSON);
    cJSON_Delete(ObjectPermissionAPIlocalVarJSON);
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
    free(localVarToReplace_pkiPermissionID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

