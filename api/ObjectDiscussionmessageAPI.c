#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectDiscussionmessageAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


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

    // create the path
    long sizeOfPath = strlen("/1/object/discussionmessage")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/discussionmessage");




    // Body Param
    cJSON *localVarSingleItemJSON_discussionmessage_create_object_v1_request = NULL;
    if (discussionmessage_create_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_discussionmessage_create_object_v1_request = discussionmessage_create_object_v1_request_convertToJSON(discussionmessage_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_discussionmessage_create_object_v1_request);
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
    cJSON *ObjectDiscussionmessageAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    discussionmessage_create_object_v1_response_t *elementToReturn = discussionmessage_create_object_v1_response_parseFromJSON(ObjectDiscussionmessageAPIlocalVarJSON);
    cJSON_Delete(ObjectDiscussionmessageAPIlocalVarJSON);
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
common_response_t*
ObjectDiscussionmessageAPI_discussionmessageDeleteObjectV1(apiClient_t *apiClient, int *pkiDiscussionmessageID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/discussionmessage/{pkiDiscussionmessageID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/discussionmessage/{pkiDiscussionmessageID}");


    // Path Params
    long sizeOfPathParams_pkiDiscussionmessageID =  + strlen("{ pkiDiscussionmessageID }");
    if(pkiDiscussionmessageID == 0){
        goto end;
    }
    char* localVarToReplace_pkiDiscussionmessageID = malloc(sizeOfPathParams_pkiDiscussionmessageID);
    snprintf(localVarToReplace_pkiDiscussionmessageID, sizeOfPathParams_pkiDiscussionmessageID, "{%s}", "pkiDiscussionmessageID");

    char localVarBuff_pkiDiscussionmessageID[256];
    intToStr(localVarBuff_pkiDiscussionmessageID, *pkiDiscussionmessageID);

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
    cJSON *ObjectDiscussionmessageAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    common_response_t *elementToReturn = common_response_parseFromJSON(ObjectDiscussionmessageAPIlocalVarJSON);
    cJSON_Delete(ObjectDiscussionmessageAPIlocalVarJSON);
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
common_response_t*
ObjectDiscussionmessageAPI_discussionmessagePatchObjectV1(apiClient_t *apiClient, int *pkiDiscussionmessageID, discussionmessage_patch_object_v1_request_t *discussionmessage_patch_object_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/discussionmessage/{pkiDiscussionmessageID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/discussionmessage/{pkiDiscussionmessageID}");


    // Path Params
    long sizeOfPathParams_pkiDiscussionmessageID =  + strlen("{ pkiDiscussionmessageID }");
    if(pkiDiscussionmessageID == 0){
        goto end;
    }
    char* localVarToReplace_pkiDiscussionmessageID = malloc(sizeOfPathParams_pkiDiscussionmessageID);
    snprintf(localVarToReplace_pkiDiscussionmessageID, sizeOfPathParams_pkiDiscussionmessageID, "{%s}", "pkiDiscussionmessageID");

    char localVarBuff_pkiDiscussionmessageID[256];
    intToStr(localVarBuff_pkiDiscussionmessageID, *pkiDiscussionmessageID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiDiscussionmessageID, localVarBuff_pkiDiscussionmessageID);




    // Body Param
    cJSON *localVarSingleItemJSON_discussionmessage_patch_object_v1_request = NULL;
    if (discussionmessage_patch_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_discussionmessage_patch_object_v1_request = discussionmessage_patch_object_v1_request_convertToJSON(discussionmessage_patch_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_discussionmessage_patch_object_v1_request);
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
    cJSON *ObjectDiscussionmessageAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    common_response_t *elementToReturn = common_response_parseFromJSON(ObjectDiscussionmessageAPIlocalVarJSON);
    cJSON_Delete(ObjectDiscussionmessageAPIlocalVarJSON);
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

