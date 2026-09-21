#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "ObjectAttachmentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define MAX_NUMBER_LENGTH_LONG 21


// Delete an existing attachment
//
// Te endpoint allows to delete an attachment.
//
attachment_delete_v1_response_t*
ObjectAttachmentAPI_attachmentDeleteV1(apiClient_t *apiClient, int *pkiAttachmentID, object_t *body)
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
    char *localVarPath = strdup("/1/object/attachment/{pkiAttachmentID}/delete");



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




    // Body Param
    cJSON *localVarSingleItemJSON_body = NULL;
    if (body != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_body = object_convertToJSON(body);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_body);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","The request is not allowed to be executed. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    attachment_delete_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectAttachmentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = attachment_delete_v1_response_parseFromJSON(ObjectAttachmentAPIlocalVarJSON);
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
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_pkiAttachmentID);
    if (localVarSingleItemJSON_body) {
        cJSON_Delete(localVarSingleItemJSON_body);
        localVarSingleItemJSON_body = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Change attachment document type
//
// The endpoint allows to change the checklist document type for an attachment.
//
attachment_document_type_v1_response_t*
ObjectAttachmentAPI_attachmentDocumentTypeV1(apiClient_t *apiClient, int *pkiAttachmentID, attachment_document_type_v1_request_t *attachment_document_type_v1_request)
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
    char *localVarPath = strdup("/1/object/attachment/{pkiAttachmentID}/documentType");



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




    // Body Param
    cJSON *localVarSingleItemJSON_attachment_document_type_v1_request = NULL;
    if (attachment_document_type_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_attachment_document_type_v1_request = attachment_document_type_v1_request_convertToJSON(attachment_document_type_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_attachment_document_type_v1_request);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","The request is not allowed to be executed. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    attachment_document_type_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectAttachmentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = attachment_document_type_v1_response_parseFromJSON(ObjectAttachmentAPIlocalVarJSON);
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
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_pkiAttachmentID);
    if (localVarSingleItemJSON_attachment_document_type_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_attachment_document_type_v1_request);
        localVarSingleItemJSON_attachment_document_type_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
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

// Change the attachment privacy
//
// The endpoint allows to change an attachment's access privacy.
//
attachment_privacy_v1_response_t*
ObjectAttachmentAPI_attachmentPrivacyV1(apiClient_t *apiClient, int *pkiAttachmentID, attachment_privacy_v1_request_t *attachment_privacy_v1_request)
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
    char *localVarPath = strdup("/1/object/attachment/{pkiAttachmentID}/privacy");



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




    // Body Param
    cJSON *localVarSingleItemJSON_attachment_privacy_v1_request = NULL;
    if (attachment_privacy_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_attachment_privacy_v1_request = attachment_privacy_v1_request_convertToJSON(attachment_privacy_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_attachment_privacy_v1_request);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","The request is not allowed to be executed. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    attachment_privacy_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectAttachmentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = attachment_privacy_v1_response_parseFromJSON(ObjectAttachmentAPIlocalVarJSON);
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
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_pkiAttachmentID);
    if (localVarSingleItemJSON_attachment_privacy_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_attachment_privacy_v1_request);
        localVarSingleItemJSON_attachment_privacy_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Rename an attachment
//
// The endpoint allows to change the attachment's file name and category.
//
attachment_rename_v1_response_t*
ObjectAttachmentAPI_attachmentRenameV1(apiClient_t *apiClient, int *pkiAttachmentID, attachment_rename_v1_request_t *attachment_rename_v1_request)
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
    char *localVarPath = strdup("/1/object/attachment/{pkiAttachmentID}/rename");



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




    // Body Param
    cJSON *localVarSingleItemJSON_attachment_rename_v1_request = NULL;
    if (attachment_rename_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_attachment_rename_v1_request = attachment_rename_v1_request_convertToJSON(attachment_rename_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_attachment_rename_v1_request);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","The request is not allowed to be executed. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 409) {
    //    printf("%s\n","The request failed due to a conflict with the resource state. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    attachment_rename_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectAttachmentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = attachment_rename_v1_response_parseFromJSON(ObjectAttachmentAPIlocalVarJSON);
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
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_pkiAttachmentID);
    if (localVarSingleItemJSON_attachment_rename_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_attachment_rename_v1_request);
        localVarSingleItemJSON_attachment_rename_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Restore a deleted attachment
//
// The endpoints allows to restore a previously deleted attachment.
//
attachment_restore_v1_response_t*
ObjectAttachmentAPI_attachmentRestoreV1(apiClient_t *apiClient, int *pkiAttachmentID, attachment_restore_v1_request_t *attachment_restore_v1_request)
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
    char *localVarPath = strdup("/1/object/attachment/{pkiAttachmentID}/restore");



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




    // Body Param
    cJSON *localVarSingleItemJSON_attachment_restore_v1_request = NULL;
    if (attachment_restore_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_attachment_restore_v1_request = attachment_restore_v1_request_convertToJSON(attachment_restore_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_attachment_restore_v1_request);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","The request is not allowed to be executed. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 409) {
    //    printf("%s\n","The request failed due to a conflict with the resource state. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    attachment_restore_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectAttachmentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = attachment_restore_v1_response_parseFromJSON(ObjectAttachmentAPIlocalVarJSON);
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
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_pkiAttachmentID);
    if (localVarSingleItemJSON_attachment_restore_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_attachment_restore_v1_request);
        localVarSingleItemJSON_attachment_restore_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Validate an existing attachment
//
// This endpoint allows to validate or reject an attachment.
//
attachment_validate_v1_response_t*
ObjectAttachmentAPI_attachmentValidateV1(apiClient_t *apiClient, int *pkiAttachmentID, attachment_validate_v1_request_t *attachment_validate_v1_request)
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
    char *localVarPath = strdup("/1/object/attachment/{pkiAttachmentID}/validate");



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




    // Body Param
    cJSON *localVarSingleItemJSON_attachment_validate_v1_request = NULL;
    if (attachment_validate_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_attachment_validate_v1_request = attachment_validate_v1_request_convertToJSON(attachment_validate_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_attachment_validate_v1_request);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","The request is not allowed to be executed. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    attachment_validate_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectAttachmentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = attachment_validate_v1_response_parseFromJSON(ObjectAttachmentAPIlocalVarJSON);
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
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_pkiAttachmentID);
    if (localVarSingleItemJSON_attachment_validate_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_attachment_validate_v1_request);
        localVarSingleItemJSON_attachment_validate_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

