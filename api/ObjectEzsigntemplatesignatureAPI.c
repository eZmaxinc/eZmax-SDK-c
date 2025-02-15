#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzsigntemplatesignatureAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Create a new Ezsigntemplatesignature
//
// The endpoint allows to create one or many elements at once.
//
ezsigntemplatesignature_create_object_v2_response_t*
ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureCreateObjectV2(apiClient_t *apiClient, ezsigntemplatesignature_create_object_v2_request_t *ezsigntemplatesignature_create_object_v2_request)
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
    char *localVarPath = strdup("/2/object/ezsigntemplatesignature");





    // Body Param
    cJSON *localVarSingleItemJSON_ezsigntemplatesignature_create_object_v2_request = NULL;
    if (ezsigntemplatesignature_create_object_v2_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsigntemplatesignature_create_object_v2_request = ezsigntemplatesignature_create_object_v2_request_convertToJSON(ezsigntemplatesignature_create_object_v2_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigntemplatesignature_create_object_v2_request);
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
    ezsigntemplatesignature_create_object_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigntemplatesignatureAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigntemplatesignature_create_object_v2_response_parseFromJSON(ObjectEzsigntemplatesignatureAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigntemplatesignatureAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_ezsigntemplatesignature_create_object_v2_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigntemplatesignature_create_object_v2_request);
        localVarSingleItemJSON_ezsigntemplatesignature_create_object_v2_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an existing Ezsigntemplatesignature
//
// 
//
ezsigntemplatesignature_delete_object_v1_response_t*
ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplatesignatureID)
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
    char *localVarPath = strdup("/1/object/ezsigntemplatesignature/{pkiEzsigntemplatesignatureID}");



    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatesignatureID =  + sizeof("{ pkiEzsigntemplatesignatureID }") - 1;
    if(pkiEzsigntemplatesignatureID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatesignatureID = malloc(sizeOfPathParams_pkiEzsigntemplatesignatureID);
    snprintf(localVarToReplace_pkiEzsigntemplatesignatureID, sizeOfPathParams_pkiEzsigntemplatesignatureID, "{%s}", "pkiEzsigntemplatesignatureID");

    char localVarBuff_pkiEzsigntemplatesignatureID[256];
    snprintf(localVarBuff_pkiEzsigntemplatesignatureID, sizeof localVarBuff_pkiEzsigntemplatesignatureID, "%ld", (long)*pkiEzsigntemplatesignatureID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplatesignatureID, localVarBuff_pkiEzsigntemplatesignatureID);



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
    ezsigntemplatesignature_delete_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigntemplatesignatureAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigntemplatesignature_delete_object_v1_response_parseFromJSON(ObjectEzsigntemplatesignatureAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigntemplatesignatureAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatesignatureID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Edit an existing Ezsigntemplatesignature
//
// 
//
ezsigntemplatesignature_edit_object_v2_response_t*
ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureEditObjectV2(apiClient_t *apiClient, int *pkiEzsigntemplatesignatureID, ezsigntemplatesignature_edit_object_v2_request_t *ezsigntemplatesignature_edit_object_v2_request)
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
    char *localVarPath = strdup("/2/object/ezsigntemplatesignature/{pkiEzsigntemplatesignatureID}");



    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatesignatureID =  + sizeof("{ pkiEzsigntemplatesignatureID }") - 1;
    if(pkiEzsigntemplatesignatureID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatesignatureID = malloc(sizeOfPathParams_pkiEzsigntemplatesignatureID);
    snprintf(localVarToReplace_pkiEzsigntemplatesignatureID, sizeOfPathParams_pkiEzsigntemplatesignatureID, "{%s}", "pkiEzsigntemplatesignatureID");

    char localVarBuff_pkiEzsigntemplatesignatureID[256];
    snprintf(localVarBuff_pkiEzsigntemplatesignatureID, sizeof localVarBuff_pkiEzsigntemplatesignatureID, "%ld", (long)*pkiEzsigntemplatesignatureID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplatesignatureID, localVarBuff_pkiEzsigntemplatesignatureID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigntemplatesignature_edit_object_v2_request = NULL;
    if (ezsigntemplatesignature_edit_object_v2_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsigntemplatesignature_edit_object_v2_request = ezsigntemplatesignature_edit_object_v2_request_convertToJSON(ezsigntemplatesignature_edit_object_v2_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigntemplatesignature_edit_object_v2_request);
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
    ezsigntemplatesignature_edit_object_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigntemplatesignatureAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigntemplatesignature_edit_object_v2_response_parseFromJSON(ObjectEzsigntemplatesignatureAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigntemplatesignatureAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatesignatureID);
    if (localVarSingleItemJSON_ezsigntemplatesignature_edit_object_v2_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigntemplatesignature_edit_object_v2_request);
        localVarSingleItemJSON_ezsigntemplatesignature_edit_object_v2_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsigntemplatesignature
//
// 
//
ezsigntemplatesignature_get_object_v3_response_t*
ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureGetObjectV3(apiClient_t *apiClient, int *pkiEzsigntemplatesignatureID)
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
    char *localVarPath = strdup("/3/object/ezsigntemplatesignature/{pkiEzsigntemplatesignatureID}");



    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatesignatureID =  + sizeof("{ pkiEzsigntemplatesignatureID }") - 1;
    if(pkiEzsigntemplatesignatureID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatesignatureID = malloc(sizeOfPathParams_pkiEzsigntemplatesignatureID);
    snprintf(localVarToReplace_pkiEzsigntemplatesignatureID, sizeOfPathParams_pkiEzsigntemplatesignatureID, "{%s}", "pkiEzsigntemplatesignatureID");

    char localVarBuff_pkiEzsigntemplatesignatureID[256];
    snprintf(localVarBuff_pkiEzsigntemplatesignatureID, sizeof localVarBuff_pkiEzsigntemplatesignatureID, "%ld", (long)*pkiEzsigntemplatesignatureID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplatesignatureID, localVarBuff_pkiEzsigntemplatesignatureID);



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
    ezsigntemplatesignature_get_object_v3_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigntemplatesignatureAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigntemplatesignature_get_object_v3_response_parseFromJSON(ObjectEzsigntemplatesignatureAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigntemplatesignatureAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatesignatureID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

