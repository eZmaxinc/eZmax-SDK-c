#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectSubnetAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Create a new Subnet
//
// The endpoint allows to create one or many elements at once.
//
subnet_create_object_v1_response_t*
ObjectSubnetAPI_subnetCreateObjectV1(apiClient_t *apiClient, subnet_create_object_v1_request_t *subnet_create_object_v1_request)
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
    char *localVarPath = strdup("/1/object/subnet");





    // Body Param
    cJSON *localVarSingleItemJSON_subnet_create_object_v1_request = NULL;
    if (subnet_create_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_subnet_create_object_v1_request = subnet_create_object_v1_request_convertToJSON(subnet_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_subnet_create_object_v1_request);
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
    subnet_create_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectSubnetAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = subnet_create_object_v1_response_parseFromJSON(ObjectSubnetAPIlocalVarJSON);
        cJSON_Delete(ObjectSubnetAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_subnet_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_subnet_create_object_v1_request);
        localVarSingleItemJSON_subnet_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an existing Subnet
//
// 
//
subnet_delete_object_v1_response_t*
ObjectSubnetAPI_subnetDeleteObjectV1(apiClient_t *apiClient, int *pkiSubnetID)
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
    char *localVarPath = strdup("/1/object/subnet/{pkiSubnetID}");



    // Path Params
    long sizeOfPathParams_pkiSubnetID =  + sizeof("{ pkiSubnetID }") - 1;
    if(pkiSubnetID == 0){
        goto end;
    }
    char* localVarToReplace_pkiSubnetID = malloc(sizeOfPathParams_pkiSubnetID);
    snprintf(localVarToReplace_pkiSubnetID, sizeOfPathParams_pkiSubnetID, "{%s}", "pkiSubnetID");

    char localVarBuff_pkiSubnetID[256];
    snprintf(localVarBuff_pkiSubnetID, sizeof localVarBuff_pkiSubnetID, "%ld", (long)*pkiSubnetID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiSubnetID, localVarBuff_pkiSubnetID);



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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    subnet_delete_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectSubnetAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = subnet_delete_object_v1_response_parseFromJSON(ObjectSubnetAPIlocalVarJSON);
        cJSON_Delete(ObjectSubnetAPIlocalVarJSON);
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
    free(localVarToReplace_pkiSubnetID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Edit an existing Subnet
//
// 
//
subnet_edit_object_v1_response_t*
ObjectSubnetAPI_subnetEditObjectV1(apiClient_t *apiClient, int *pkiSubnetID, subnet_edit_object_v1_request_t *subnet_edit_object_v1_request)
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
    char *localVarPath = strdup("/1/object/subnet/{pkiSubnetID}");



    // Path Params
    long sizeOfPathParams_pkiSubnetID =  + sizeof("{ pkiSubnetID }") - 1;
    if(pkiSubnetID == 0){
        goto end;
    }
    char* localVarToReplace_pkiSubnetID = malloc(sizeOfPathParams_pkiSubnetID);
    snprintf(localVarToReplace_pkiSubnetID, sizeOfPathParams_pkiSubnetID, "{%s}", "pkiSubnetID");

    char localVarBuff_pkiSubnetID[256];
    snprintf(localVarBuff_pkiSubnetID, sizeof localVarBuff_pkiSubnetID, "%ld", (long)*pkiSubnetID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiSubnetID, localVarBuff_pkiSubnetID);




    // Body Param
    cJSON *localVarSingleItemJSON_subnet_edit_object_v1_request = NULL;
    if (subnet_edit_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_subnet_edit_object_v1_request = subnet_edit_object_v1_request_convertToJSON(subnet_edit_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_subnet_edit_object_v1_request);
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
    subnet_edit_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectSubnetAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = subnet_edit_object_v1_response_parseFromJSON(ObjectSubnetAPIlocalVarJSON);
        cJSON_Delete(ObjectSubnetAPIlocalVarJSON);
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
    free(localVarToReplace_pkiSubnetID);
    if (localVarSingleItemJSON_subnet_edit_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_subnet_edit_object_v1_request);
        localVarSingleItemJSON_subnet_edit_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Subnet
//
// 
//
subnet_get_object_v2_response_t*
ObjectSubnetAPI_subnetGetObjectV2(apiClient_t *apiClient, int *pkiSubnetID)
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
    char *localVarPath = strdup("/2/object/subnet/{pkiSubnetID}");



    // Path Params
    long sizeOfPathParams_pkiSubnetID =  + sizeof("{ pkiSubnetID }") - 1;
    if(pkiSubnetID == 0){
        goto end;
    }
    char* localVarToReplace_pkiSubnetID = malloc(sizeOfPathParams_pkiSubnetID);
    snprintf(localVarToReplace_pkiSubnetID, sizeOfPathParams_pkiSubnetID, "{%s}", "pkiSubnetID");

    char localVarBuff_pkiSubnetID[256];
    snprintf(localVarBuff_pkiSubnetID, sizeof localVarBuff_pkiSubnetID, "%ld", (long)*pkiSubnetID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiSubnetID, localVarBuff_pkiSubnetID);



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
    subnet_get_object_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectSubnetAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = subnet_get_object_v2_response_parseFromJSON(ObjectSubnetAPIlocalVarJSON);
        cJSON_Delete(ObjectSubnetAPIlocalVarJSON);
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
    free(localVarToReplace_pkiSubnetID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

