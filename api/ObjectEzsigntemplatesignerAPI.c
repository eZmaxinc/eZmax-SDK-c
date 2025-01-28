#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzsigntemplatesignerAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Create a new Ezsigntemplatesigner
//
// The endpoint allows to create one or many elements at once.
//
ezsigntemplatesigner_create_object_v1_response_t*
ObjectEzsigntemplatesignerAPI_ezsigntemplatesignerCreateObjectV1(apiClient_t *apiClient, ezsigntemplatesigner_create_object_v1_request_t *ezsigntemplatesigner_create_object_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsigntemplatesigner");





    // Body Param
    cJSON *localVarSingleItemJSON_ezsigntemplatesigner_create_object_v1_request = NULL;
    if (ezsigntemplatesigner_create_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsigntemplatesigner_create_object_v1_request = ezsigntemplatesigner_create_object_v1_request_convertToJSON(ezsigntemplatesigner_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigntemplatesigner_create_object_v1_request);
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
    ezsigntemplatesigner_create_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigntemplatesignerAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigntemplatesigner_create_object_v1_response_parseFromJSON(ObjectEzsigntemplatesignerAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigntemplatesignerAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_ezsigntemplatesigner_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigntemplatesigner_create_object_v1_request);
        localVarSingleItemJSON_ezsigntemplatesigner_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an existing Ezsigntemplatesigner
//
// 
//
ezsigntemplatesigner_delete_object_v1_response_t*
ObjectEzsigntemplatesignerAPI_ezsigntemplatesignerDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplatesignerID)
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
    char *localVarPath = strdup("/1/object/ezsigntemplatesigner/{pkiEzsigntemplatesignerID}");



    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatesignerID =  + sizeof("{ pkiEzsigntemplatesignerID }") - 1;
    if(pkiEzsigntemplatesignerID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatesignerID = malloc(sizeOfPathParams_pkiEzsigntemplatesignerID);
    snprintf(localVarToReplace_pkiEzsigntemplatesignerID, sizeOfPathParams_pkiEzsigntemplatesignerID, "{%s}", "pkiEzsigntemplatesignerID");

    char localVarBuff_pkiEzsigntemplatesignerID[256];
    snprintf(localVarBuff_pkiEzsigntemplatesignerID, sizeof localVarBuff_pkiEzsigntemplatesignerID, "%ld", (long)*pkiEzsigntemplatesignerID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplatesignerID, localVarBuff_pkiEzsigntemplatesignerID);



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
    ezsigntemplatesigner_delete_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigntemplatesignerAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigntemplatesigner_delete_object_v1_response_parseFromJSON(ObjectEzsigntemplatesignerAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigntemplatesignerAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatesignerID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Edit an existing Ezsigntemplatesigner
//
// 
//
ezsigntemplatesigner_edit_object_v1_response_t*
ObjectEzsigntemplatesignerAPI_ezsigntemplatesignerEditObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplatesignerID, ezsigntemplatesigner_edit_object_v1_request_t *ezsigntemplatesigner_edit_object_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsigntemplatesigner/{pkiEzsigntemplatesignerID}");



    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatesignerID =  + sizeof("{ pkiEzsigntemplatesignerID }") - 1;
    if(pkiEzsigntemplatesignerID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatesignerID = malloc(sizeOfPathParams_pkiEzsigntemplatesignerID);
    snprintf(localVarToReplace_pkiEzsigntemplatesignerID, sizeOfPathParams_pkiEzsigntemplatesignerID, "{%s}", "pkiEzsigntemplatesignerID");

    char localVarBuff_pkiEzsigntemplatesignerID[256];
    snprintf(localVarBuff_pkiEzsigntemplatesignerID, sizeof localVarBuff_pkiEzsigntemplatesignerID, "%ld", (long)*pkiEzsigntemplatesignerID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplatesignerID, localVarBuff_pkiEzsigntemplatesignerID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigntemplatesigner_edit_object_v1_request = NULL;
    if (ezsigntemplatesigner_edit_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsigntemplatesigner_edit_object_v1_request = ezsigntemplatesigner_edit_object_v1_request_convertToJSON(ezsigntemplatesigner_edit_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigntemplatesigner_edit_object_v1_request);
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
    ezsigntemplatesigner_edit_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigntemplatesignerAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigntemplatesigner_edit_object_v1_response_parseFromJSON(ObjectEzsigntemplatesignerAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigntemplatesignerAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatesignerID);
    if (localVarSingleItemJSON_ezsigntemplatesigner_edit_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigntemplatesigner_edit_object_v1_request);
        localVarSingleItemJSON_ezsigntemplatesigner_edit_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsigntemplatesigner
//
// 
//
ezsigntemplatesigner_get_object_v2_response_t*
ObjectEzsigntemplatesignerAPI_ezsigntemplatesignerGetObjectV2(apiClient_t *apiClient, int *pkiEzsigntemplatesignerID)
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
    char *localVarPath = strdup("/2/object/ezsigntemplatesigner/{pkiEzsigntemplatesignerID}");



    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatesignerID =  + sizeof("{ pkiEzsigntemplatesignerID }") - 1;
    if(pkiEzsigntemplatesignerID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatesignerID = malloc(sizeOfPathParams_pkiEzsigntemplatesignerID);
    snprintf(localVarToReplace_pkiEzsigntemplatesignerID, sizeOfPathParams_pkiEzsigntemplatesignerID, "{%s}", "pkiEzsigntemplatesignerID");

    char localVarBuff_pkiEzsigntemplatesignerID[256];
    snprintf(localVarBuff_pkiEzsigntemplatesignerID, sizeof localVarBuff_pkiEzsigntemplatesignerID, "%ld", (long)*pkiEzsigntemplatesignerID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplatesignerID, localVarBuff_pkiEzsigntemplatesignerID);



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
    ezsigntemplatesigner_get_object_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigntemplatesignerAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigntemplatesigner_get_object_v2_response_parseFromJSON(ObjectEzsigntemplatesignerAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigntemplatesignerAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatesignerID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

