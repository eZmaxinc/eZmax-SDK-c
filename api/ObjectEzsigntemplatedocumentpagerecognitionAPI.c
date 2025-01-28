#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzsigntemplatedocumentpagerecognitionAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Create a new Ezsigntemplatedocumentpagerecognition
//
// The endpoint allows to create one or many elements at once.
//
ezsigntemplatedocumentpagerecognition_create_object_v1_response_t*
ObjectEzsigntemplatedocumentpagerecognitionAPI_ezsigntemplatedocumentpagerecognitionCreateObjectV1(apiClient_t *apiClient, ezsigntemplatedocumentpagerecognition_create_object_v1_request_t *ezsigntemplatedocumentpagerecognition_create_object_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsigntemplatedocumentpagerecognition");





    // Body Param
    cJSON *localVarSingleItemJSON_ezsigntemplatedocumentpagerecognition_create_object_v1_request = NULL;
    if (ezsigntemplatedocumentpagerecognition_create_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsigntemplatedocumentpagerecognition_create_object_v1_request = ezsigntemplatedocumentpagerecognition_create_object_v1_request_convertToJSON(ezsigntemplatedocumentpagerecognition_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigntemplatedocumentpagerecognition_create_object_v1_request);
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
    ezsigntemplatedocumentpagerecognition_create_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigntemplatedocumentpagerecognitionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigntemplatedocumentpagerecognition_create_object_v1_response_parseFromJSON(ObjectEzsigntemplatedocumentpagerecognitionAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigntemplatedocumentpagerecognitionAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_ezsigntemplatedocumentpagerecognition_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigntemplatedocumentpagerecognition_create_object_v1_request);
        localVarSingleItemJSON_ezsigntemplatedocumentpagerecognition_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an existing Ezsigntemplatedocumentpagerecognition
//
// 
//
ezsigntemplatedocumentpagerecognition_delete_object_v1_response_t*
ObjectEzsigntemplatedocumentpagerecognitionAPI_ezsigntemplatedocumentpagerecognitionDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplatedocumentpagerecognitionID)
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
    char *localVarPath = strdup("/1/object/ezsigntemplatedocumentpagerecognition/{pkiEzsigntemplatedocumentpagerecognitionID}");



    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatedocumentpagerecognitionID =  + sizeof("{ pkiEzsigntemplatedocumentpagerecognitionID }") - 1;
    if(pkiEzsigntemplatedocumentpagerecognitionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatedocumentpagerecognitionID = malloc(sizeOfPathParams_pkiEzsigntemplatedocumentpagerecognitionID);
    snprintf(localVarToReplace_pkiEzsigntemplatedocumentpagerecognitionID, sizeOfPathParams_pkiEzsigntemplatedocumentpagerecognitionID, "{%s}", "pkiEzsigntemplatedocumentpagerecognitionID");

    char localVarBuff_pkiEzsigntemplatedocumentpagerecognitionID[256];
    snprintf(localVarBuff_pkiEzsigntemplatedocumentpagerecognitionID, sizeof localVarBuff_pkiEzsigntemplatedocumentpagerecognitionID, "%ld", (long)*pkiEzsigntemplatedocumentpagerecognitionID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplatedocumentpagerecognitionID, localVarBuff_pkiEzsigntemplatedocumentpagerecognitionID);



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
    //nonprimitive not container
    ezsigntemplatedocumentpagerecognition_delete_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigntemplatedocumentpagerecognitionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigntemplatedocumentpagerecognition_delete_object_v1_response_parseFromJSON(ObjectEzsigntemplatedocumentpagerecognitionAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigntemplatedocumentpagerecognitionAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatedocumentpagerecognitionID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Edit an existing Ezsigntemplatedocumentpagerecognition
//
// 
//
ezsigntemplatedocumentpagerecognition_edit_object_v1_response_t*
ObjectEzsigntemplatedocumentpagerecognitionAPI_ezsigntemplatedocumentpagerecognitionEditObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplatedocumentpagerecognitionID, ezsigntemplatedocumentpagerecognition_edit_object_v1_request_t *ezsigntemplatedocumentpagerecognition_edit_object_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsigntemplatedocumentpagerecognition/{pkiEzsigntemplatedocumentpagerecognitionID}");



    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatedocumentpagerecognitionID =  + sizeof("{ pkiEzsigntemplatedocumentpagerecognitionID }") - 1;
    if(pkiEzsigntemplatedocumentpagerecognitionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatedocumentpagerecognitionID = malloc(sizeOfPathParams_pkiEzsigntemplatedocumentpagerecognitionID);
    snprintf(localVarToReplace_pkiEzsigntemplatedocumentpagerecognitionID, sizeOfPathParams_pkiEzsigntemplatedocumentpagerecognitionID, "{%s}", "pkiEzsigntemplatedocumentpagerecognitionID");

    char localVarBuff_pkiEzsigntemplatedocumentpagerecognitionID[256];
    snprintf(localVarBuff_pkiEzsigntemplatedocumentpagerecognitionID, sizeof localVarBuff_pkiEzsigntemplatedocumentpagerecognitionID, "%ld", (long)*pkiEzsigntemplatedocumentpagerecognitionID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplatedocumentpagerecognitionID, localVarBuff_pkiEzsigntemplatedocumentpagerecognitionID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigntemplatedocumentpagerecognition_edit_object_v1_request = NULL;
    if (ezsigntemplatedocumentpagerecognition_edit_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsigntemplatedocumentpagerecognition_edit_object_v1_request = ezsigntemplatedocumentpagerecognition_edit_object_v1_request_convertToJSON(ezsigntemplatedocumentpagerecognition_edit_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigntemplatedocumentpagerecognition_edit_object_v1_request);
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
    ezsigntemplatedocumentpagerecognition_edit_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigntemplatedocumentpagerecognitionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigntemplatedocumentpagerecognition_edit_object_v1_response_parseFromJSON(ObjectEzsigntemplatedocumentpagerecognitionAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigntemplatedocumentpagerecognitionAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatedocumentpagerecognitionID);
    if (localVarSingleItemJSON_ezsigntemplatedocumentpagerecognition_edit_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigntemplatedocumentpagerecognition_edit_object_v1_request);
        localVarSingleItemJSON_ezsigntemplatedocumentpagerecognition_edit_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsigntemplatedocumentpagerecognition
//
// 
//
ezsigntemplatedocumentpagerecognition_get_object_v2_response_t*
ObjectEzsigntemplatedocumentpagerecognitionAPI_ezsigntemplatedocumentpagerecognitionGetObjectV2(apiClient_t *apiClient, int *pkiEzsigntemplatedocumentpagerecognitionID)
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
    char *localVarPath = strdup("/2/object/ezsigntemplatedocumentpagerecognition/{pkiEzsigntemplatedocumentpagerecognitionID}");



    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatedocumentpagerecognitionID =  + sizeof("{ pkiEzsigntemplatedocumentpagerecognitionID }") - 1;
    if(pkiEzsigntemplatedocumentpagerecognitionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatedocumentpagerecognitionID = malloc(sizeOfPathParams_pkiEzsigntemplatedocumentpagerecognitionID);
    snprintf(localVarToReplace_pkiEzsigntemplatedocumentpagerecognitionID, sizeOfPathParams_pkiEzsigntemplatedocumentpagerecognitionID, "{%s}", "pkiEzsigntemplatedocumentpagerecognitionID");

    char localVarBuff_pkiEzsigntemplatedocumentpagerecognitionID[256];
    snprintf(localVarBuff_pkiEzsigntemplatedocumentpagerecognitionID, sizeof localVarBuff_pkiEzsigntemplatedocumentpagerecognitionID, "%ld", (long)*pkiEzsigntemplatedocumentpagerecognitionID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplatedocumentpagerecognitionID, localVarBuff_pkiEzsigntemplatedocumentpagerecognitionID);



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
    ezsigntemplatedocumentpagerecognition_get_object_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigntemplatedocumentpagerecognitionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigntemplatedocumentpagerecognition_get_object_v2_response_parseFromJSON(ObjectEzsigntemplatedocumentpagerecognitionAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigntemplatedocumentpagerecognitionAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatedocumentpagerecognitionID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

