#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectDiscussionAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create a new Discussion
//
// The endpoint allows to create one or many elements at once.
//
discussion_create_object_v1_response_t*
ObjectDiscussionAPI_discussionCreateObjectV1(apiClient_t *apiClient, discussion_create_object_v1_request_t *discussion_create_object_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/discussion")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/discussion");




    // Body Param
    cJSON *localVarSingleItemJSON_discussion_create_object_v1_request = NULL;
    if (discussion_create_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_discussion_create_object_v1_request = discussion_create_object_v1_request_convertToJSON(discussion_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_discussion_create_object_v1_request);
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
    cJSON *ObjectDiscussionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    discussion_create_object_v1_response_t *elementToReturn = discussion_create_object_v1_response_parseFromJSON(ObjectDiscussionAPIlocalVarJSON);
    cJSON_Delete(ObjectDiscussionAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_discussion_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_discussion_create_object_v1_request);
        localVarSingleItemJSON_discussion_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an existing Discussion
//
// 
//
common_response_t*
ObjectDiscussionAPI_discussionDeleteObjectV1(apiClient_t *apiClient, int *pkiDiscussionID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/discussion/{pkiDiscussionID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/discussion/{pkiDiscussionID}");


    // Path Params
    long sizeOfPathParams_pkiDiscussionID =  + strlen("{ pkiDiscussionID }");
    if(pkiDiscussionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiDiscussionID = malloc(sizeOfPathParams_pkiDiscussionID);
    snprintf(localVarToReplace_pkiDiscussionID, sizeOfPathParams_pkiDiscussionID, "{%s}", "pkiDiscussionID");

    char localVarBuff_pkiDiscussionID[256];
    intToStr(localVarBuff_pkiDiscussionID, *pkiDiscussionID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiDiscussionID, localVarBuff_pkiDiscussionID);



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
    cJSON *ObjectDiscussionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    common_response_t *elementToReturn = common_response_parseFromJSON(ObjectDiscussionAPIlocalVarJSON);
    cJSON_Delete(ObjectDiscussionAPIlocalVarJSON);
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
    free(localVarToReplace_pkiDiscussionID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Discussion
//
// 
//
discussion_get_object_v2_response_t*
ObjectDiscussionAPI_discussionGetObjectV2(apiClient_t *apiClient, int *pkiDiscussionID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/2/object/discussion/{pkiDiscussionID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/2/object/discussion/{pkiDiscussionID}");


    // Path Params
    long sizeOfPathParams_pkiDiscussionID =  + strlen("{ pkiDiscussionID }");
    if(pkiDiscussionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiDiscussionID = malloc(sizeOfPathParams_pkiDiscussionID);
    snprintf(localVarToReplace_pkiDiscussionID, sizeOfPathParams_pkiDiscussionID, "{%s}", "pkiDiscussionID");

    char localVarBuff_pkiDiscussionID[256];
    intToStr(localVarBuff_pkiDiscussionID, *pkiDiscussionID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiDiscussionID, localVarBuff_pkiDiscussionID);



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
    cJSON *ObjectDiscussionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    discussion_get_object_v2_response_t *elementToReturn = discussion_get_object_v2_response_parseFromJSON(ObjectDiscussionAPIlocalVarJSON);
    cJSON_Delete(ObjectDiscussionAPIlocalVarJSON);
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
    free(localVarToReplace_pkiDiscussionID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Patch an existing Discussion
//
// 
//
common_response_t*
ObjectDiscussionAPI_discussionPatchObjectV1(apiClient_t *apiClient, int *pkiDiscussionID, discussion_patch_object_v1_request_t *discussion_patch_object_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/discussion/{pkiDiscussionID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/discussion/{pkiDiscussionID}");


    // Path Params
    long sizeOfPathParams_pkiDiscussionID =  + strlen("{ pkiDiscussionID }");
    if(pkiDiscussionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiDiscussionID = malloc(sizeOfPathParams_pkiDiscussionID);
    snprintf(localVarToReplace_pkiDiscussionID, sizeOfPathParams_pkiDiscussionID, "{%s}", "pkiDiscussionID");

    char localVarBuff_pkiDiscussionID[256];
    intToStr(localVarBuff_pkiDiscussionID, *pkiDiscussionID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiDiscussionID, localVarBuff_pkiDiscussionID);




    // Body Param
    cJSON *localVarSingleItemJSON_discussion_patch_object_v1_request = NULL;
    if (discussion_patch_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_discussion_patch_object_v1_request = discussion_patch_object_v1_request_convertToJSON(discussion_patch_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_discussion_patch_object_v1_request);
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
    cJSON *ObjectDiscussionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    common_response_t *elementToReturn = common_response_parseFromJSON(ObjectDiscussionAPIlocalVarJSON);
    cJSON_Delete(ObjectDiscussionAPIlocalVarJSON);
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
    free(localVarToReplace_pkiDiscussionID);
    if (localVarSingleItemJSON_discussion_patch_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_discussion_patch_object_v1_request);
        localVarSingleItemJSON_discussion_patch_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Update the read status of the discussion
//
common_response_t*
ObjectDiscussionAPI_discussionUpdateDiscussionreadstatusV1(apiClient_t *apiClient, int *pkiDiscussionID, discussion_update_discussionreadstatus_v1_request_t *discussion_update_discussionreadstatus_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/discussion/{pkiDiscussionID}/updateDiscussionreadstatus")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/discussion/{pkiDiscussionID}/updateDiscussionreadstatus");


    // Path Params
    long sizeOfPathParams_pkiDiscussionID =  + strlen("{ pkiDiscussionID }");
    if(pkiDiscussionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiDiscussionID = malloc(sizeOfPathParams_pkiDiscussionID);
    snprintf(localVarToReplace_pkiDiscussionID, sizeOfPathParams_pkiDiscussionID, "{%s}", "pkiDiscussionID");

    char localVarBuff_pkiDiscussionID[256];
    intToStr(localVarBuff_pkiDiscussionID, *pkiDiscussionID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiDiscussionID, localVarBuff_pkiDiscussionID);




    // Body Param
    cJSON *localVarSingleItemJSON_discussion_update_discussionreadstatus_v1_request = NULL;
    if (discussion_update_discussionreadstatus_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_discussion_update_discussionreadstatus_v1_request = discussion_update_discussionreadstatus_v1_request_convertToJSON(discussion_update_discussionreadstatus_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_discussion_update_discussionreadstatus_v1_request);
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
    cJSON *ObjectDiscussionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    common_response_t *elementToReturn = common_response_parseFromJSON(ObjectDiscussionAPIlocalVarJSON);
    cJSON_Delete(ObjectDiscussionAPIlocalVarJSON);
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
    free(localVarToReplace_pkiDiscussionID);
    if (localVarSingleItemJSON_discussion_update_discussionreadstatus_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_discussion_update_discussionreadstatus_v1_request);
        localVarSingleItemJSON_discussion_update_discussionreadstatus_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

