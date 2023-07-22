#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectSubnetAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create a new Subnet
//
// The endpoint allows to create one or many elements at once.
//
subnet_create_object_v1_response_t*
ObjectSubnetAPI_subnetCreateObjectV1(apiClient_t *apiClient, subnet_create_object_v1_request_t * subnet_create_object_v1_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/subnet")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/subnet");




    // Body Param
    cJSON *localVarSingleItemJSON_subnet_create_object_v1_request = NULL;
    if (subnet_create_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_subnet_create_object_v1_request = subnet_create_object_v1_request_convertToJSON(subnet_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_subnet_create_object_v1_request);
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
    cJSON *ObjectSubnetAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    subnet_create_object_v1_response_t *elementToReturn = subnet_create_object_v1_response_parseFromJSON(ObjectSubnetAPIlocalVarJSON);
    cJSON_Delete(ObjectSubnetAPIlocalVarJSON);
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
ObjectSubnetAPI_subnetDeleteObjectV1(apiClient_t *apiClient, int pkiSubnetID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/subnet/{pkiSubnetID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/subnet/{pkiSubnetID}");


    // Path Params
    long sizeOfPathParams_pkiSubnetID =  + strlen("{ pkiSubnetID }");
    if(pkiSubnetID == 0){
        goto end;
    }
    char* localVarToReplace_pkiSubnetID = malloc(sizeOfPathParams_pkiSubnetID);
    snprintf(localVarToReplace_pkiSubnetID, sizeOfPathParams_pkiSubnetID, "{%s}", "pkiSubnetID");

    char localVarBuff_pkiSubnetID[256];
    intToStr(localVarBuff_pkiSubnetID, pkiSubnetID);

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
    cJSON *ObjectSubnetAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    subnet_delete_object_v1_response_t *elementToReturn = subnet_delete_object_v1_response_parseFromJSON(ObjectSubnetAPIlocalVarJSON);
    cJSON_Delete(ObjectSubnetAPIlocalVarJSON);
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
ObjectSubnetAPI_subnetEditObjectV1(apiClient_t *apiClient, int pkiSubnetID , subnet_edit_object_v1_request_t * subnet_edit_object_v1_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/subnet/{pkiSubnetID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/subnet/{pkiSubnetID}");


    // Path Params
    long sizeOfPathParams_pkiSubnetID =  + strlen("{ pkiSubnetID }");
    if(pkiSubnetID == 0){
        goto end;
    }
    char* localVarToReplace_pkiSubnetID = malloc(sizeOfPathParams_pkiSubnetID);
    snprintf(localVarToReplace_pkiSubnetID, sizeOfPathParams_pkiSubnetID, "{%s}", "pkiSubnetID");

    char localVarBuff_pkiSubnetID[256];
    intToStr(localVarBuff_pkiSubnetID, pkiSubnetID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiSubnetID, localVarBuff_pkiSubnetID);




    // Body Param
    cJSON *localVarSingleItemJSON_subnet_edit_object_v1_request = NULL;
    if (subnet_edit_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_subnet_edit_object_v1_request = subnet_edit_object_v1_request_convertToJSON(subnet_edit_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_subnet_edit_object_v1_request);
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
    cJSON *ObjectSubnetAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    subnet_edit_object_v1_response_t *elementToReturn = subnet_edit_object_v1_response_parseFromJSON(ObjectSubnetAPIlocalVarJSON);
    cJSON_Delete(ObjectSubnetAPIlocalVarJSON);
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
ObjectSubnetAPI_subnetGetObjectV2(apiClient_t *apiClient, int pkiSubnetID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/2/object/subnet/{pkiSubnetID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/2/object/subnet/{pkiSubnetID}");


    // Path Params
    long sizeOfPathParams_pkiSubnetID =  + strlen("{ pkiSubnetID }");
    if(pkiSubnetID == 0){
        goto end;
    }
    char* localVarToReplace_pkiSubnetID = malloc(sizeOfPathParams_pkiSubnetID);
    snprintf(localVarToReplace_pkiSubnetID, sizeOfPathParams_pkiSubnetID, "{%s}", "pkiSubnetID");

    char localVarBuff_pkiSubnetID[256];
    intToStr(localVarBuff_pkiSubnetID, pkiSubnetID);

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
    cJSON *ObjectSubnetAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    subnet_get_object_v2_response_t *elementToReturn = subnet_get_object_v2_response_parseFromJSON(ObjectSubnetAPIlocalVarJSON);
    cJSON_Delete(ObjectSubnetAPIlocalVarJSON);
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
    free(localVarToReplace_pkiSubnetID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

