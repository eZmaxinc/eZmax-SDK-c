#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectDiscussionmessageAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Create a new Discussionmessage
//
// The endpoint allows to create one or many elements at once.
//
discussionmessage_create_object_v1_response_t*
ObjectDiscussionmessageAPI_discussionmessageCreateObjectV1(apiClient_t *apiClient, discussionmessage_create_object_v1_request_t *discussionmessage_create_object_v1_request)
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
    char *localVarPath = strdup("/1/object/discussionmessage");





    // Body Param
    cJSON *localVarSingleItemJSON_discussionmessage_create_object_v1_request = NULL;
    if (discussionmessage_create_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_discussionmessage_create_object_v1_request = discussionmessage_create_object_v1_request_convertToJSON(discussionmessage_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_discussionmessage_create_object_v1_request);
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
    discussionmessage_create_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectDiscussionmessageAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = discussionmessage_create_object_v1_response_parseFromJSON(ObjectDiscussionmessageAPIlocalVarJSON);
        cJSON_Delete(ObjectDiscussionmessageAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_discussionmessage_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_discussionmessage_create_object_v1_request);
        localVarSingleItemJSON_discussionmessage_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an existing Discussionmessage
//
// 
//
discussionmessage_delete_object_v1_response_t*
ObjectDiscussionmessageAPI_discussionmessageDeleteObjectV1(apiClient_t *apiClient, int *pkiDiscussionmessageID)
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
    char *localVarPath = strdup("/1/object/discussionmessage/{pkiDiscussionmessageID}");



    // Path Params
    long sizeOfPathParams_pkiDiscussionmessageID =  + sizeof("{ pkiDiscussionmessageID }") - 1;
    if(pkiDiscussionmessageID == 0){
        goto end;
    }
    char* localVarToReplace_pkiDiscussionmessageID = malloc(sizeOfPathParams_pkiDiscussionmessageID);
    snprintf(localVarToReplace_pkiDiscussionmessageID, sizeOfPathParams_pkiDiscussionmessageID, "{%s}", "pkiDiscussionmessageID");

    char localVarBuff_pkiDiscussionmessageID[256];
    snprintf(localVarBuff_pkiDiscussionmessageID, sizeof localVarBuff_pkiDiscussionmessageID, "%ld", (long)*pkiDiscussionmessageID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiDiscussionmessageID, localVarBuff_pkiDiscussionmessageID);



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
    discussionmessage_delete_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectDiscussionmessageAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = discussionmessage_delete_object_v1_response_parseFromJSON(ObjectDiscussionmessageAPIlocalVarJSON);
        cJSON_Delete(ObjectDiscussionmessageAPIlocalVarJSON);
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
    free(localVarToReplace_pkiDiscussionmessageID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Patch an existing Discussionmessage
//
// 
//
discussionmessage_patch_object_v1_response_t*
ObjectDiscussionmessageAPI_discussionmessagePatchObjectV1(apiClient_t *apiClient, int *pkiDiscussionmessageID, discussionmessage_patch_object_v1_request_t *discussionmessage_patch_object_v1_request)
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
    char *localVarPath = strdup("/1/object/discussionmessage/{pkiDiscussionmessageID}");



    // Path Params
    long sizeOfPathParams_pkiDiscussionmessageID =  + sizeof("{ pkiDiscussionmessageID }") - 1;
    if(pkiDiscussionmessageID == 0){
        goto end;
    }
    char* localVarToReplace_pkiDiscussionmessageID = malloc(sizeOfPathParams_pkiDiscussionmessageID);
    snprintf(localVarToReplace_pkiDiscussionmessageID, sizeOfPathParams_pkiDiscussionmessageID, "{%s}", "pkiDiscussionmessageID");

    char localVarBuff_pkiDiscussionmessageID[256];
    snprintf(localVarBuff_pkiDiscussionmessageID, sizeof localVarBuff_pkiDiscussionmessageID, "%ld", (long)*pkiDiscussionmessageID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiDiscussionmessageID, localVarBuff_pkiDiscussionmessageID);




    // Body Param
    cJSON *localVarSingleItemJSON_discussionmessage_patch_object_v1_request = NULL;
    if (discussionmessage_patch_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_discussionmessage_patch_object_v1_request = discussionmessage_patch_object_v1_request_convertToJSON(discussionmessage_patch_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_discussionmessage_patch_object_v1_request);
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
                    "PATCH");

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
    discussionmessage_patch_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectDiscussionmessageAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = discussionmessage_patch_object_v1_response_parseFromJSON(ObjectDiscussionmessageAPIlocalVarJSON);
        cJSON_Delete(ObjectDiscussionmessageAPIlocalVarJSON);
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
    free(localVarToReplace_pkiDiscussionmessageID);
    if (localVarSingleItemJSON_discussionmessage_patch_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_discussionmessage_patch_object_v1_request);
        localVarSingleItemJSON_discussionmessage_patch_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

