#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectAttachmentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


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

    // create the path
    long sizeOfPath = strlen("/1/object/attachment/{pkiAttachmentID}/download")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/attachment/{pkiAttachmentID}/download");


    // Path Params
    long sizeOfPathParams_pkiAttachmentID =  + strlen("{ pkiAttachmentID }");
    if(pkiAttachmentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiAttachmentID = malloc(sizeOfPathParams_pkiAttachmentID);
    snprintf(localVarToReplace_pkiAttachmentID, sizeOfPathParams_pkiAttachmentID, "{%s}", "pkiAttachmentID");

    char localVarBuff_pkiAttachmentID[256];
    intToStr(localVarBuff_pkiAttachmentID, *pkiAttachmentID);

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

    // create the path
    long sizeOfPath = strlen("/1/object/attachment/{pkiAttachmentID}/getAttachmentlogs")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/attachment/{pkiAttachmentID}/getAttachmentlogs");


    // Path Params
    long sizeOfPathParams_pkiAttachmentID =  + strlen("{ pkiAttachmentID }");
    if(pkiAttachmentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiAttachmentID = malloc(sizeOfPathParams_pkiAttachmentID);
    snprintf(localVarToReplace_pkiAttachmentID, sizeOfPathParams_pkiAttachmentID, "{%s}", "pkiAttachmentID");

    char localVarBuff_pkiAttachmentID[256];
    intToStr(localVarBuff_pkiAttachmentID, *pkiAttachmentID);

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
    cJSON *ObjectAttachmentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    attachment_get_attachmentlogs_v1_response_t *elementToReturn = attachment_get_attachmentlogs_v1_response_parseFromJSON(ObjectAttachmentAPIlocalVarJSON);
    cJSON_Delete(ObjectAttachmentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiAttachmentID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

