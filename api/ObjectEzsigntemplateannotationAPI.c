#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "ObjectEzsigntemplateannotationAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define MAX_NUMBER_LENGTH_LONG 21


// Create a new Ezsigntemplateannotation
//
// The endpoint allows to create one or many elements at once.
//
ezsigntemplateannotation_create_object_v1_response_t*
ObjectEzsigntemplateannotationAPI_ezsigntemplateannotationCreateObjectV1(apiClient_t *apiClient, ezsigntemplateannotation_create_object_v1_request_t *ezsigntemplateannotation_create_object_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsigntemplateannotation");





    // Body Param
    cJSON *localVarSingleItemJSON_ezsigntemplateannotation_create_object_v1_request = NULL;
    if (ezsigntemplateannotation_create_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsigntemplateannotation_create_object_v1_request = ezsigntemplateannotation_create_object_v1_request_convertToJSON(ezsigntemplateannotation_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigntemplateannotation_create_object_v1_request);
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
    ezsigntemplateannotation_create_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigntemplateannotationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigntemplateannotation_create_object_v1_response_parseFromJSON(ObjectEzsigntemplateannotationAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigntemplateannotationAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_ezsigntemplateannotation_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigntemplateannotation_create_object_v1_request);
        localVarSingleItemJSON_ezsigntemplateannotation_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an existing Ezsigntemplateannotation
//
// 
//
ezsigntemplateannotation_delete_object_v1_response_t*
ObjectEzsigntemplateannotationAPI_ezsigntemplateannotationDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplateannotationID)
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
    char *localVarPath = strdup("/1/object/ezsigntemplateannotation/{pkiEzsigntemplateannotationID}");



    // Path Params
    long sizeOfPathParams_pkiEzsigntemplateannotationID =  + sizeof("{ pkiEzsigntemplateannotationID }") - 1;
    if(pkiEzsigntemplateannotationID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplateannotationID = malloc(sizeOfPathParams_pkiEzsigntemplateannotationID);
    snprintf(localVarToReplace_pkiEzsigntemplateannotationID, sizeOfPathParams_pkiEzsigntemplateannotationID, "{%s}", "pkiEzsigntemplateannotationID");

    char localVarBuff_pkiEzsigntemplateannotationID[256];
    snprintf(localVarBuff_pkiEzsigntemplateannotationID, sizeof localVarBuff_pkiEzsigntemplateannotationID, "%ld", (long)*pkiEzsigntemplateannotationID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplateannotationID, localVarBuff_pkiEzsigntemplateannotationID);



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
    ezsigntemplateannotation_delete_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigntemplateannotationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigntemplateannotation_delete_object_v1_response_parseFromJSON(ObjectEzsigntemplateannotationAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigntemplateannotationAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplateannotationID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Edit an existing Ezsigntemplateannotation
//
// 
//
ezsigntemplateannotation_edit_object_v1_response_t*
ObjectEzsigntemplateannotationAPI_ezsigntemplateannotationEditObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplateannotationID, ezsigntemplateannotation_edit_object_v1_request_t *ezsigntemplateannotation_edit_object_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsigntemplateannotation/{pkiEzsigntemplateannotationID}");



    // Path Params
    long sizeOfPathParams_pkiEzsigntemplateannotationID =  + sizeof("{ pkiEzsigntemplateannotationID }") - 1;
    if(pkiEzsigntemplateannotationID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplateannotationID = malloc(sizeOfPathParams_pkiEzsigntemplateannotationID);
    snprintf(localVarToReplace_pkiEzsigntemplateannotationID, sizeOfPathParams_pkiEzsigntemplateannotationID, "{%s}", "pkiEzsigntemplateannotationID");

    char localVarBuff_pkiEzsigntemplateannotationID[256];
    snprintf(localVarBuff_pkiEzsigntemplateannotationID, sizeof localVarBuff_pkiEzsigntemplateannotationID, "%ld", (long)*pkiEzsigntemplateannotationID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplateannotationID, localVarBuff_pkiEzsigntemplateannotationID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigntemplateannotation_edit_object_v1_request = NULL;
    if (ezsigntemplateannotation_edit_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsigntemplateannotation_edit_object_v1_request = ezsigntemplateannotation_edit_object_v1_request_convertToJSON(ezsigntemplateannotation_edit_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigntemplateannotation_edit_object_v1_request);
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigntemplateannotation_edit_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigntemplateannotationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigntemplateannotation_edit_object_v1_response_parseFromJSON(ObjectEzsigntemplateannotationAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigntemplateannotationAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplateannotationID);
    if (localVarSingleItemJSON_ezsigntemplateannotation_edit_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigntemplateannotation_edit_object_v1_request);
        localVarSingleItemJSON_ezsigntemplateannotation_edit_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsigntemplateannotation
//
// 
//
ezsigntemplateannotation_get_object_v2_response_t*
ObjectEzsigntemplateannotationAPI_ezsigntemplateannotationGetObjectV2(apiClient_t *apiClient, int *pkiEzsigntemplateannotationID)
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
    char *localVarPath = strdup("/2/object/ezsigntemplateannotation/{pkiEzsigntemplateannotationID}");



    // Path Params
    long sizeOfPathParams_pkiEzsigntemplateannotationID =  + sizeof("{ pkiEzsigntemplateannotationID }") - 1;
    if(pkiEzsigntemplateannotationID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplateannotationID = malloc(sizeOfPathParams_pkiEzsigntemplateannotationID);
    snprintf(localVarToReplace_pkiEzsigntemplateannotationID, sizeOfPathParams_pkiEzsigntemplateannotationID, "{%s}", "pkiEzsigntemplateannotationID");

    char localVarBuff_pkiEzsigntemplateannotationID[256];
    snprintf(localVarBuff_pkiEzsigntemplateannotationID, sizeof localVarBuff_pkiEzsigntemplateannotationID, "%ld", (long)*pkiEzsigntemplateannotationID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplateannotationID, localVarBuff_pkiEzsigntemplateannotationID);



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
    ezsigntemplateannotation_get_object_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigntemplateannotationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigntemplateannotation_get_object_v2_response_parseFromJSON(ObjectEzsigntemplateannotationAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigntemplateannotationAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplateannotationID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

