#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectUsergroupdelegationAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Create a new Usergroupdelegation
//
// The endpoint allows to create one or many elements at once.
//
usergroupdelegation_create_object_v1_response_t*
ObjectUsergroupdelegationAPI_usergroupdelegationCreateObjectV1(apiClient_t *apiClient, usergroupdelegation_create_object_v1_request_t *usergroupdelegation_create_object_v1_request)
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
    char *localVarPath = strdup("/1/object/usergroupdelegation");





    // Body Param
    cJSON *localVarSingleItemJSON_usergroupdelegation_create_object_v1_request = NULL;
    if (usergroupdelegation_create_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_usergroupdelegation_create_object_v1_request = usergroupdelegation_create_object_v1_request_convertToJSON(usergroupdelegation_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_usergroupdelegation_create_object_v1_request);
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
    usergroupdelegation_create_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectUsergroupdelegationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = usergroupdelegation_create_object_v1_response_parseFromJSON(ObjectUsergroupdelegationAPIlocalVarJSON);
        cJSON_Delete(ObjectUsergroupdelegationAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_usergroupdelegation_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_usergroupdelegation_create_object_v1_request);
        localVarSingleItemJSON_usergroupdelegation_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an existing Usergroupdelegation
//
// 
//
usergroupdelegation_delete_object_v1_response_t*
ObjectUsergroupdelegationAPI_usergroupdelegationDeleteObjectV1(apiClient_t *apiClient, int *pkiUsergroupdelegationID)
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
    char *localVarPath = strdup("/1/object/usergroupdelegation/{pkiUsergroupdelegationID}");



    // Path Params
    long sizeOfPathParams_pkiUsergroupdelegationID =  + sizeof("{ pkiUsergroupdelegationID }") - 1;
    if(pkiUsergroupdelegationID == 0){
        goto end;
    }
    char* localVarToReplace_pkiUsergroupdelegationID = malloc(sizeOfPathParams_pkiUsergroupdelegationID);
    snprintf(localVarToReplace_pkiUsergroupdelegationID, sizeOfPathParams_pkiUsergroupdelegationID, "{%s}", "pkiUsergroupdelegationID");

    char localVarBuff_pkiUsergroupdelegationID[256];
    snprintf(localVarBuff_pkiUsergroupdelegationID, sizeof localVarBuff_pkiUsergroupdelegationID, "%ld", (long)*pkiUsergroupdelegationID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiUsergroupdelegationID, localVarBuff_pkiUsergroupdelegationID);



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
    usergroupdelegation_delete_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectUsergroupdelegationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = usergroupdelegation_delete_object_v1_response_parseFromJSON(ObjectUsergroupdelegationAPIlocalVarJSON);
        cJSON_Delete(ObjectUsergroupdelegationAPIlocalVarJSON);
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
    free(localVarToReplace_pkiUsergroupdelegationID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Edit an existing Usergroupdelegation
//
// 
//
usergroupdelegation_edit_object_v1_response_t*
ObjectUsergroupdelegationAPI_usergroupdelegationEditObjectV1(apiClient_t *apiClient, int *pkiUsergroupdelegationID, usergroupdelegation_edit_object_v1_request_t *usergroupdelegation_edit_object_v1_request)
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
    char *localVarPath = strdup("/1/object/usergroupdelegation/{pkiUsergroupdelegationID}");



    // Path Params
    long sizeOfPathParams_pkiUsergroupdelegationID =  + sizeof("{ pkiUsergroupdelegationID }") - 1;
    if(pkiUsergroupdelegationID == 0){
        goto end;
    }
    char* localVarToReplace_pkiUsergroupdelegationID = malloc(sizeOfPathParams_pkiUsergroupdelegationID);
    snprintf(localVarToReplace_pkiUsergroupdelegationID, sizeOfPathParams_pkiUsergroupdelegationID, "{%s}", "pkiUsergroupdelegationID");

    char localVarBuff_pkiUsergroupdelegationID[256];
    snprintf(localVarBuff_pkiUsergroupdelegationID, sizeof localVarBuff_pkiUsergroupdelegationID, "%ld", (long)*pkiUsergroupdelegationID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiUsergroupdelegationID, localVarBuff_pkiUsergroupdelegationID);




    // Body Param
    cJSON *localVarSingleItemJSON_usergroupdelegation_edit_object_v1_request = NULL;
    if (usergroupdelegation_edit_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_usergroupdelegation_edit_object_v1_request = usergroupdelegation_edit_object_v1_request_convertToJSON(usergroupdelegation_edit_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_usergroupdelegation_edit_object_v1_request);
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
    usergroupdelegation_edit_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectUsergroupdelegationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = usergroupdelegation_edit_object_v1_response_parseFromJSON(ObjectUsergroupdelegationAPIlocalVarJSON);
        cJSON_Delete(ObjectUsergroupdelegationAPIlocalVarJSON);
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
    free(localVarToReplace_pkiUsergroupdelegationID);
    if (localVarSingleItemJSON_usergroupdelegation_edit_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_usergroupdelegation_edit_object_v1_request);
        localVarSingleItemJSON_usergroupdelegation_edit_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Usergroupdelegation
//
// 
//
usergroupdelegation_get_object_v2_response_t*
ObjectUsergroupdelegationAPI_usergroupdelegationGetObjectV2(apiClient_t *apiClient, int *pkiUsergroupdelegationID)
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
    char *localVarPath = strdup("/2/object/usergroupdelegation/{pkiUsergroupdelegationID}");



    // Path Params
    long sizeOfPathParams_pkiUsergroupdelegationID =  + sizeof("{ pkiUsergroupdelegationID }") - 1;
    if(pkiUsergroupdelegationID == 0){
        goto end;
    }
    char* localVarToReplace_pkiUsergroupdelegationID = malloc(sizeOfPathParams_pkiUsergroupdelegationID);
    snprintf(localVarToReplace_pkiUsergroupdelegationID, sizeOfPathParams_pkiUsergroupdelegationID, "{%s}", "pkiUsergroupdelegationID");

    char localVarBuff_pkiUsergroupdelegationID[256];
    snprintf(localVarBuff_pkiUsergroupdelegationID, sizeof localVarBuff_pkiUsergroupdelegationID, "%ld", (long)*pkiUsergroupdelegationID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiUsergroupdelegationID, localVarBuff_pkiUsergroupdelegationID);



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
    usergroupdelegation_get_object_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectUsergroupdelegationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = usergroupdelegation_get_object_v2_response_parseFromJSON(ObjectUsergroupdelegationAPIlocalVarJSON);
        cJSON_Delete(ObjectUsergroupdelegationAPIlocalVarJSON);
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
    free(localVarToReplace_pkiUsergroupdelegationID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

