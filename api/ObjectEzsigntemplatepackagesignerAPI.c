#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzsigntemplatepackagesignerAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Create a new Ezsigntemplatepackagesigner
//
// The endpoint allows to create one or many elements at once.
//
ezsigntemplatepackagesigner_create_object_v1_response_t*
ObjectEzsigntemplatepackagesignerAPI_ezsigntemplatepackagesignerCreateObjectV1(apiClient_t *apiClient, ezsigntemplatepackagesigner_create_object_v1_request_t *ezsigntemplatepackagesigner_create_object_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsigntemplatepackagesigner");





    // Body Param
    cJSON *localVarSingleItemJSON_ezsigntemplatepackagesigner_create_object_v1_request = NULL;
    if (ezsigntemplatepackagesigner_create_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsigntemplatepackagesigner_create_object_v1_request = ezsigntemplatepackagesigner_create_object_v1_request_convertToJSON(ezsigntemplatepackagesigner_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigntemplatepackagesigner_create_object_v1_request);
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
    ezsigntemplatepackagesigner_create_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigntemplatepackagesignerAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigntemplatepackagesigner_create_object_v1_response_parseFromJSON(ObjectEzsigntemplatepackagesignerAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigntemplatepackagesignerAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_ezsigntemplatepackagesigner_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigntemplatepackagesigner_create_object_v1_request);
        localVarSingleItemJSON_ezsigntemplatepackagesigner_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an existing Ezsigntemplatepackagesigner
//
// 
//
ezsigntemplatepackagesigner_delete_object_v1_response_t*
ObjectEzsigntemplatepackagesignerAPI_ezsigntemplatepackagesignerDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplatepackagesignerID)
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
    char *localVarPath = strdup("/1/object/ezsigntemplatepackagesigner/{pkiEzsigntemplatepackagesignerID}");



    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatepackagesignerID =  + sizeof("{ pkiEzsigntemplatepackagesignerID }") - 1;
    if(pkiEzsigntemplatepackagesignerID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatepackagesignerID = malloc(sizeOfPathParams_pkiEzsigntemplatepackagesignerID);
    snprintf(localVarToReplace_pkiEzsigntemplatepackagesignerID, sizeOfPathParams_pkiEzsigntemplatepackagesignerID, "{%s}", "pkiEzsigntemplatepackagesignerID");

    char localVarBuff_pkiEzsigntemplatepackagesignerID[256];
    snprintf(localVarBuff_pkiEzsigntemplatepackagesignerID, sizeof localVarBuff_pkiEzsigntemplatepackagesignerID, "%ld", (long)*pkiEzsigntemplatepackagesignerID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplatepackagesignerID, localVarBuff_pkiEzsigntemplatepackagesignerID);



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
    ezsigntemplatepackagesigner_delete_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigntemplatepackagesignerAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigntemplatepackagesigner_delete_object_v1_response_parseFromJSON(ObjectEzsigntemplatepackagesignerAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigntemplatepackagesignerAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatepackagesignerID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Edit an existing Ezsigntemplatepackagesigner
//
// 
//
ezsigntemplatepackagesigner_edit_object_v1_response_t*
ObjectEzsigntemplatepackagesignerAPI_ezsigntemplatepackagesignerEditObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplatepackagesignerID, ezsigntemplatepackagesigner_edit_object_v1_request_t *ezsigntemplatepackagesigner_edit_object_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsigntemplatepackagesigner/{pkiEzsigntemplatepackagesignerID}");



    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatepackagesignerID =  + sizeof("{ pkiEzsigntemplatepackagesignerID }") - 1;
    if(pkiEzsigntemplatepackagesignerID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatepackagesignerID = malloc(sizeOfPathParams_pkiEzsigntemplatepackagesignerID);
    snprintf(localVarToReplace_pkiEzsigntemplatepackagesignerID, sizeOfPathParams_pkiEzsigntemplatepackagesignerID, "{%s}", "pkiEzsigntemplatepackagesignerID");

    char localVarBuff_pkiEzsigntemplatepackagesignerID[256];
    snprintf(localVarBuff_pkiEzsigntemplatepackagesignerID, sizeof localVarBuff_pkiEzsigntemplatepackagesignerID, "%ld", (long)*pkiEzsigntemplatepackagesignerID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplatepackagesignerID, localVarBuff_pkiEzsigntemplatepackagesignerID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigntemplatepackagesigner_edit_object_v1_request = NULL;
    if (ezsigntemplatepackagesigner_edit_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsigntemplatepackagesigner_edit_object_v1_request = ezsigntemplatepackagesigner_edit_object_v1_request_convertToJSON(ezsigntemplatepackagesigner_edit_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigntemplatepackagesigner_edit_object_v1_request);
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
    ezsigntemplatepackagesigner_edit_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigntemplatepackagesignerAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigntemplatepackagesigner_edit_object_v1_response_parseFromJSON(ObjectEzsigntemplatepackagesignerAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigntemplatepackagesignerAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatepackagesignerID);
    if (localVarSingleItemJSON_ezsigntemplatepackagesigner_edit_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigntemplatepackagesigner_edit_object_v1_request);
        localVarSingleItemJSON_ezsigntemplatepackagesigner_edit_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsigntemplatepackagesigner
//
// 
//
ezsigntemplatepackagesigner_get_object_v2_response_t*
ObjectEzsigntemplatepackagesignerAPI_ezsigntemplatepackagesignerGetObjectV2(apiClient_t *apiClient, int *pkiEzsigntemplatepackagesignerID)
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
    char *localVarPath = strdup("/2/object/ezsigntemplatepackagesigner/{pkiEzsigntemplatepackagesignerID}");



    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatepackagesignerID =  + sizeof("{ pkiEzsigntemplatepackagesignerID }") - 1;
    if(pkiEzsigntemplatepackagesignerID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatepackagesignerID = malloc(sizeOfPathParams_pkiEzsigntemplatepackagesignerID);
    snprintf(localVarToReplace_pkiEzsigntemplatepackagesignerID, sizeOfPathParams_pkiEzsigntemplatepackagesignerID, "{%s}", "pkiEzsigntemplatepackagesignerID");

    char localVarBuff_pkiEzsigntemplatepackagesignerID[256];
    snprintf(localVarBuff_pkiEzsigntemplatepackagesignerID, sizeof localVarBuff_pkiEzsigntemplatepackagesignerID, "%ld", (long)*pkiEzsigntemplatepackagesignerID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplatepackagesignerID, localVarBuff_pkiEzsigntemplatepackagesignerID);



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
    ezsigntemplatepackagesigner_get_object_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigntemplatepackagesignerAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigntemplatepackagesigner_get_object_v2_response_parseFromJSON(ObjectEzsigntemplatepackagesignerAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigntemplatepackagesignerAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatepackagesignerID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

