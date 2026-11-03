#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "ObjectDocumenttypechecklistAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define MAX_NUMBER_LENGTH_LONG 21


// Delete an existing Documenttypechecklist
//
// 
//
documenttypechecklist_delete_object_v1_response_t*
ObjectDocumenttypechecklistAPI_documenttypechecklistDeleteObjectV1(apiClient_t *apiClient, int *pkiDocumenttypechecklistID)
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
    char *localVarPath = strdup("/1/object/documenttypechecklist/{pkiDocumenttypechecklistID}");



    // Path Params
    long sizeOfPathParams_pkiDocumenttypechecklistID =  + sizeof("{ pkiDocumenttypechecklistID }") - 1;
    if(pkiDocumenttypechecklistID == 0){
        goto end;
    }
    char* localVarToReplace_pkiDocumenttypechecklistID = malloc(sizeOfPathParams_pkiDocumenttypechecklistID);
    snprintf(localVarToReplace_pkiDocumenttypechecklistID, sizeOfPathParams_pkiDocumenttypechecklistID, "{%s}", "pkiDocumenttypechecklistID");

    char localVarBuff_pkiDocumenttypechecklistID[256];
    snprintf(localVarBuff_pkiDocumenttypechecklistID, sizeof localVarBuff_pkiDocumenttypechecklistID, "%ld", (long)*pkiDocumenttypechecklistID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiDocumenttypechecklistID, localVarBuff_pkiDocumenttypechecklistID);



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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    documenttypechecklist_delete_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectDocumenttypechecklistAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = documenttypechecklist_delete_object_v1_response_parseFromJSON(ObjectDocumenttypechecklistAPIlocalVarJSON);
        cJSON_Delete(ObjectDocumenttypechecklistAPIlocalVarJSON);
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
    free(localVarToReplace_pkiDocumenttypechecklistID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Patch an existing Documenttypechecklist
//
// 
//
documenttypechecklist_patch_object_v1_response_t*
ObjectDocumenttypechecklistAPI_documenttypechecklistPatchObjectV1(apiClient_t *apiClient, int *pkiDocumenttypechecklistID, documenttypechecklist_patch_object_v1_request_t *documenttypechecklist_patch_object_v1_request)
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
    char *localVarPath = strdup("/1/object/documenttypechecklist/{pkiDocumenttypechecklistID}");



    // Path Params
    long sizeOfPathParams_pkiDocumenttypechecklistID =  + sizeof("{ pkiDocumenttypechecklistID }") - 1;
    if(pkiDocumenttypechecklistID == 0){
        goto end;
    }
    char* localVarToReplace_pkiDocumenttypechecklistID = malloc(sizeOfPathParams_pkiDocumenttypechecklistID);
    snprintf(localVarToReplace_pkiDocumenttypechecklistID, sizeOfPathParams_pkiDocumenttypechecklistID, "{%s}", "pkiDocumenttypechecklistID");

    char localVarBuff_pkiDocumenttypechecklistID[256];
    snprintf(localVarBuff_pkiDocumenttypechecklistID, sizeof localVarBuff_pkiDocumenttypechecklistID, "%ld", (long)*pkiDocumenttypechecklistID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiDocumenttypechecklistID, localVarBuff_pkiDocumenttypechecklistID);




    // Body Param
    cJSON *localVarSingleItemJSON_documenttypechecklist_patch_object_v1_request = NULL;
    if (documenttypechecklist_patch_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_documenttypechecklist_patch_object_v1_request = documenttypechecklist_patch_object_v1_request_convertToJSON(documenttypechecklist_patch_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_documenttypechecklist_patch_object_v1_request);
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    documenttypechecklist_patch_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectDocumenttypechecklistAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = documenttypechecklist_patch_object_v1_response_parseFromJSON(ObjectDocumenttypechecklistAPIlocalVarJSON);
        cJSON_Delete(ObjectDocumenttypechecklistAPIlocalVarJSON);
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
    free(localVarToReplace_pkiDocumenttypechecklistID);
    if (localVarSingleItemJSON_documenttypechecklist_patch_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_documenttypechecklist_patch_object_v1_request);
        localVarSingleItemJSON_documenttypechecklist_patch_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

