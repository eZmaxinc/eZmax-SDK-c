#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectAttachmentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Retrieve the content
//
// Using this endpoint, you can retrieve the content of an attachment.
//
void
ObjectAttachmentAPI_attachmentDownloadV1(apiClient_t *apiClient, int *pkiAttachmentID)
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
    char *localVarPath = strdup("/1/object/attachment/{pkiAttachmentID}/download");



    // Path Params
    long sizeOfPathParams_pkiAttachmentID =  + sizeof("{ pkiAttachmentID }") - 1;
    if(pkiAttachmentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiAttachmentID = malloc(sizeOfPathParams_pkiAttachmentID);
    snprintf(localVarToReplace_pkiAttachmentID, sizeOfPathParams_pkiAttachmentID, "{%s}", "pkiAttachmentID");

    char localVarBuff_pkiAttachmentID[256];
    snprintf(localVarBuff_pkiAttachmentID, sizeof localVarBuff_pkiAttachmentID, "%ld", (long)*pkiAttachmentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiAttachmentID, localVarBuff_pkiAttachmentID);



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
    //if (apiClient->response_code == 302) {
    //    printf("%s\n","The user has been redirected");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_pkiAttachmentID);

}

// Retrieve the Attachmentlogs
//
// Using this endpoint, you can retrieve the Attachmentlogs of an attachment.
//
attachment_get_attachmentlogs_v1_response_t*
ObjectAttachmentAPI_attachmentGetAttachmentlogsV1(apiClient_t *apiClient, int *pkiAttachmentID)
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
    char *localVarPath = strdup("/1/object/attachment/{pkiAttachmentID}/getAttachmentlogs");



    // Path Params
    long sizeOfPathParams_pkiAttachmentID =  + sizeof("{ pkiAttachmentID }") - 1;
    if(pkiAttachmentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiAttachmentID = malloc(sizeOfPathParams_pkiAttachmentID);
    snprintf(localVarToReplace_pkiAttachmentID, sizeOfPathParams_pkiAttachmentID, "{%s}", "pkiAttachmentID");

    char localVarBuff_pkiAttachmentID[256];
    snprintf(localVarBuff_pkiAttachmentID, sizeof localVarBuff_pkiAttachmentID, "%ld", (long)*pkiAttachmentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiAttachmentID, localVarBuff_pkiAttachmentID);



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
    attachment_get_attachmentlogs_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectAttachmentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = attachment_get_attachmentlogs_v1_response_parseFromJSON(ObjectAttachmentAPIlocalVarJSON);
        cJSON_Delete(ObjectAttachmentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiAttachmentID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

