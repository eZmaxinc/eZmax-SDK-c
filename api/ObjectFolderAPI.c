#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "ObjectFolderAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define MAX_NUMBER_LENGTH_LONG 21


// Download multiples attachments from an Folder
//
binary_t*
ObjectFolderAPI_folderBatchDownloadV1(apiClient_t *apiClient, int *pkiFolderID, folder_batch_download_v1_request_t *folder_batch_download_v1_request)
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
    char *localVarPath = strdup("/1/object/folder/{pkiFolderID}/batchDownload");



    // Path Params
    long sizeOfPathParams_pkiFolderID =  + sizeof("{ pkiFolderID }") - 1;
    if(pkiFolderID == 0){
        goto end;
    }
    char* localVarToReplace_pkiFolderID = malloc(sizeOfPathParams_pkiFolderID);
    snprintf(localVarToReplace_pkiFolderID, sizeOfPathParams_pkiFolderID, "{%s}", "pkiFolderID");

    char localVarBuff_pkiFolderID[256];
    snprintf(localVarBuff_pkiFolderID, sizeof localVarBuff_pkiFolderID, "%ld", (long)*pkiFolderID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiFolderID, localVarBuff_pkiFolderID);




    // Body Param
    cJSON *localVarSingleItemJSON_folder_batch_download_v1_request = NULL;
    if (folder_batch_download_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_folder_batch_download_v1_request = folder_batch_download_v1_request_convertToJSON(folder_batch_download_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_folder_batch_download_v1_request);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/zip"); //produces
    list_addElement(localVarHeaderType,"text/xml"); //produces
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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 406) {
    //    printf("%s\n","The URL is valid, but one of the Accept header is not defined or invalid. For example, you set the header \&quot;Accept: application/json\&quot; but the function can only return \&quot;Content-type: image/png\&quot;");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //primitive return type simple binary
    binary_t* elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300)
        elementToReturn = instantiate_binary_t(apiClient->dataReceived, apiClient->dataReceivedLen);

    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_pkiFolderID);
    if (localVarSingleItemJSON_folder_batch_download_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_folder_batch_download_v1_request);
        localVarSingleItemJSON_folder_batch_download_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Folder's attachments
//
folder_get_attachments_v1_response_t*
ObjectFolderAPI_folderGetAttachmentsV1(apiClient_t *apiClient, int *pkiFolderID)
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
    char *localVarPath = strdup("/1/object/folder/{pkiFolderID}/getAttachments");



    // Path Params
    long sizeOfPathParams_pkiFolderID =  + sizeof("{ pkiFolderID }") - 1;
    if(pkiFolderID == 0){
        goto end;
    }
    char* localVarToReplace_pkiFolderID = malloc(sizeOfPathParams_pkiFolderID);
    snprintf(localVarToReplace_pkiFolderID, sizeOfPathParams_pkiFolderID, "{%s}", "pkiFolderID");

    char localVarBuff_pkiFolderID[256];
    snprintf(localVarBuff_pkiFolderID, sizeof localVarBuff_pkiFolderID, "%ld", (long)*pkiFolderID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiFolderID, localVarBuff_pkiFolderID);



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
    folder_get_attachments_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectFolderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = folder_get_attachments_v1_response_parseFromJSON(ObjectFolderAPIlocalVarJSON);
        cJSON_Delete(ObjectFolderAPIlocalVarJSON);
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
    free(localVarToReplace_pkiFolderID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Import attachments into the Folder
//
folder_import_into_edm_v1_response_t*
ObjectFolderAPI_folderImportIntoEDMV1(apiClient_t *apiClient, int *pkiFolderID, folder_import_into_edm_v1_request_t *folder_import_into_edm_v1_request)
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
    char *localVarPath = strdup("/1/object/folder/{pkiFolderID}/importIntoEDM");



    // Path Params
    long sizeOfPathParams_pkiFolderID =  + sizeof("{ pkiFolderID }") - 1;
    if(pkiFolderID == 0){
        goto end;
    }
    char* localVarToReplace_pkiFolderID = malloc(sizeOfPathParams_pkiFolderID);
    snprintf(localVarToReplace_pkiFolderID, sizeOfPathParams_pkiFolderID, "{%s}", "pkiFolderID");

    char localVarBuff_pkiFolderID[256];
    snprintf(localVarBuff_pkiFolderID, sizeof localVarBuff_pkiFolderID, "%ld", (long)*pkiFolderID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiFolderID, localVarBuff_pkiFolderID);




    // Body Param
    cJSON *localVarSingleItemJSON_folder_import_into_edm_v1_request = NULL;
    if (folder_import_into_edm_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_folder_import_into_edm_v1_request = folder_import_into_edm_v1_request_convertToJSON(folder_import_into_edm_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_folder_import_into_edm_v1_request);
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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    folder_import_into_edm_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectFolderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = folder_import_into_edm_v1_response_parseFromJSON(ObjectFolderAPIlocalVarJSON);
        cJSON_Delete(ObjectFolderAPIlocalVarJSON);
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
    free(localVarToReplace_pkiFolderID);
    if (localVarSingleItemJSON_folder_import_into_edm_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_folder_import_into_edm_v1_request);
        localVarSingleItemJSON_folder_import_into_edm_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

