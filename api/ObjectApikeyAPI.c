#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectApikeyAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create a new Apikey
//
// The endpoint allows to create one or many elements at once.
//
apikey_create_object_v2_response_t*
ObjectApikeyAPI_apikeyCreateObjectV2(apiClient_t *apiClient, apikey_create_object_v2_request_t * apikey_create_object_v2_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/2/object/apikey")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/2/object/apikey");




    // Body Param
    cJSON *localVarSingleItemJSON_apikey_create_object_v2_request = NULL;
    if (apikey_create_object_v2_request != NULL)
    {
        //string
        localVarSingleItemJSON_apikey_create_object_v2_request = apikey_create_object_v2_request_convertToJSON(apikey_create_object_v2_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_apikey_create_object_v2_request);
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
    //nonprimitive not container
    cJSON *ObjectApikeyAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    apikey_create_object_v2_response_t *elementToReturn = apikey_create_object_v2_response_parseFromJSON(ObjectApikeyAPIlocalVarJSON);
    cJSON_Delete(ObjectApikeyAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_apikey_create_object_v2_request) {
        cJSON_Delete(localVarSingleItemJSON_apikey_create_object_v2_request);
        localVarSingleItemJSON_apikey_create_object_v2_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Edit an existing Apikey
//
// 
//
apikey_edit_object_v1_response_t*
ObjectApikeyAPI_apikeyEditObjectV1(apiClient_t *apiClient, int pkiApikeyID , apikey_edit_object_v1_request_t * apikey_edit_object_v1_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/apikey/{pkiApikeyID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/apikey/{pkiApikeyID}");


    // Path Params
    long sizeOfPathParams_pkiApikeyID =  + strlen("{ pkiApikeyID }");
    if(pkiApikeyID == 0){
        goto end;
    }
    char* localVarToReplace_pkiApikeyID = malloc(sizeOfPathParams_pkiApikeyID);
    snprintf(localVarToReplace_pkiApikeyID, sizeOfPathParams_pkiApikeyID, "{%s}", "pkiApikeyID");

    char localVarBuff_pkiApikeyID[256];
    intToStr(localVarBuff_pkiApikeyID, pkiApikeyID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiApikeyID, localVarBuff_pkiApikeyID);




    // Body Param
    cJSON *localVarSingleItemJSON_apikey_edit_object_v1_request = NULL;
    if (apikey_edit_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_apikey_edit_object_v1_request = apikey_edit_object_v1_request_convertToJSON(apikey_edit_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_apikey_edit_object_v1_request);
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
    cJSON *ObjectApikeyAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    apikey_edit_object_v1_response_t *elementToReturn = apikey_edit_object_v1_response_parseFromJSON(ObjectApikeyAPIlocalVarJSON);
    cJSON_Delete(ObjectApikeyAPIlocalVarJSON);
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
    free(localVarToReplace_pkiApikeyID);
    if (localVarSingleItemJSON_apikey_edit_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_apikey_edit_object_v1_request);
        localVarSingleItemJSON_apikey_edit_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Edit multiple Permissions
//
// Using this endpoint, you can edit multiple Permissions at the same time.
//
apikey_edit_permissions_v1_response_t*
ObjectApikeyAPI_apikeyEditPermissionsV1(apiClient_t *apiClient, int pkiApikeyID , apikey_edit_permissions_v1_request_t * apikey_edit_permissions_v1_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/apikey/{pkiApikeyID}/editPermissions")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/apikey/{pkiApikeyID}/editPermissions");


    // Path Params
    long sizeOfPathParams_pkiApikeyID =  + strlen("{ pkiApikeyID }");
    if(pkiApikeyID == 0){
        goto end;
    }
    char* localVarToReplace_pkiApikeyID = malloc(sizeOfPathParams_pkiApikeyID);
    snprintf(localVarToReplace_pkiApikeyID, sizeOfPathParams_pkiApikeyID, "{%s}", "pkiApikeyID");

    char localVarBuff_pkiApikeyID[256];
    intToStr(localVarBuff_pkiApikeyID, pkiApikeyID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiApikeyID, localVarBuff_pkiApikeyID);




    // Body Param
    cJSON *localVarSingleItemJSON_apikey_edit_permissions_v1_request = NULL;
    if (apikey_edit_permissions_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_apikey_edit_permissions_v1_request = apikey_edit_permissions_v1_request_convertToJSON(apikey_edit_permissions_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_apikey_edit_permissions_v1_request);
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
    cJSON *ObjectApikeyAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    apikey_edit_permissions_v1_response_t *elementToReturn = apikey_edit_permissions_v1_response_parseFromJSON(ObjectApikeyAPIlocalVarJSON);
    cJSON_Delete(ObjectApikeyAPIlocalVarJSON);
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
    free(localVarToReplace_pkiApikeyID);
    if (localVarSingleItemJSON_apikey_edit_permissions_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_apikey_edit_permissions_v1_request);
        localVarSingleItemJSON_apikey_edit_permissions_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Apikey
//
// 
//
apikey_get_object_v2_response_t*
ObjectApikeyAPI_apikeyGetObjectV2(apiClient_t *apiClient, int pkiApikeyID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/2/object/apikey/{pkiApikeyID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/2/object/apikey/{pkiApikeyID}");


    // Path Params
    long sizeOfPathParams_pkiApikeyID =  + strlen("{ pkiApikeyID }");
    if(pkiApikeyID == 0){
        goto end;
    }
    char* localVarToReplace_pkiApikeyID = malloc(sizeOfPathParams_pkiApikeyID);
    snprintf(localVarToReplace_pkiApikeyID, sizeOfPathParams_pkiApikeyID, "{%s}", "pkiApikeyID");

    char localVarBuff_pkiApikeyID[256];
    intToStr(localVarBuff_pkiApikeyID, pkiApikeyID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiApikeyID, localVarBuff_pkiApikeyID);



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
    cJSON *ObjectApikeyAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    apikey_get_object_v2_response_t *elementToReturn = apikey_get_object_v2_response_parseFromJSON(ObjectApikeyAPIlocalVarJSON);
    cJSON_Delete(ObjectApikeyAPIlocalVarJSON);
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
    free(localVarToReplace_pkiApikeyID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Apikey's Permissions
//
apikey_get_permissions_v1_response_t*
ObjectApikeyAPI_apikeyGetPermissionsV1(apiClient_t *apiClient, int pkiApikeyID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/apikey/{pkiApikeyID}/getPermissions")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/apikey/{pkiApikeyID}/getPermissions");


    // Path Params
    long sizeOfPathParams_pkiApikeyID =  + strlen("{ pkiApikeyID }");
    if(pkiApikeyID == 0){
        goto end;
    }
    char* localVarToReplace_pkiApikeyID = malloc(sizeOfPathParams_pkiApikeyID);
    snprintf(localVarToReplace_pkiApikeyID, sizeOfPathParams_pkiApikeyID, "{%s}", "pkiApikeyID");

    char localVarBuff_pkiApikeyID[256];
    intToStr(localVarBuff_pkiApikeyID, pkiApikeyID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiApikeyID, localVarBuff_pkiApikeyID);



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
    cJSON *ObjectApikeyAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    apikey_get_permissions_v1_response_t *elementToReturn = apikey_get_permissions_v1_response_parseFromJSON(ObjectApikeyAPIlocalVarJSON);
    cJSON_Delete(ObjectApikeyAPIlocalVarJSON);
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
    free(localVarToReplace_pkiApikeyID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Apikey's subnets
//
apikey_get_subnets_v1_response_t*
ObjectApikeyAPI_apikeyGetSubnetsV1(apiClient_t *apiClient, int pkiApikeyID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/apikey/{pkiApikeyID}/getSubnets")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/apikey/{pkiApikeyID}/getSubnets");


    // Path Params
    long sizeOfPathParams_pkiApikeyID =  + strlen("{ pkiApikeyID }");
    if(pkiApikeyID == 0){
        goto end;
    }
    char* localVarToReplace_pkiApikeyID = malloc(sizeOfPathParams_pkiApikeyID);
    snprintf(localVarToReplace_pkiApikeyID, sizeOfPathParams_pkiApikeyID, "{%s}", "pkiApikeyID");

    char localVarBuff_pkiApikeyID[256];
    intToStr(localVarBuff_pkiApikeyID, pkiApikeyID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiApikeyID, localVarBuff_pkiApikeyID);



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
    cJSON *ObjectApikeyAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    apikey_get_subnets_v1_response_t *elementToReturn = apikey_get_subnets_v1_response_parseFromJSON(ObjectApikeyAPIlocalVarJSON);
    cJSON_Delete(ObjectApikeyAPIlocalVarJSON);
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
    free(localVarToReplace_pkiApikeyID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

