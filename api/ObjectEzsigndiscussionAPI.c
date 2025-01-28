#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzsigndiscussionAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Create a new Ezsigndiscussion
//
// The endpoint allows to create one or many elements at once.
//
ezsigndiscussion_create_object_v1_response_t*
ObjectEzsigndiscussionAPI_ezsigndiscussionCreateObjectV1(apiClient_t *apiClient, ezsigndiscussion_create_object_v1_request_t *ezsigndiscussion_create_object_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsigndiscussion");





    // Body Param
    cJSON *localVarSingleItemJSON_ezsigndiscussion_create_object_v1_request = NULL;
    if (ezsigndiscussion_create_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsigndiscussion_create_object_v1_request = ezsigndiscussion_create_object_v1_request_convertToJSON(ezsigndiscussion_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigndiscussion_create_object_v1_request);
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
    ezsigndiscussion_create_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndiscussionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndiscussion_create_object_v1_response_parseFromJSON(ObjectEzsigndiscussionAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndiscussionAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_ezsigndiscussion_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigndiscussion_create_object_v1_request);
        localVarSingleItemJSON_ezsigndiscussion_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an existing Ezsigndiscussion
//
// 
//
ezsigndiscussion_delete_object_v1_response_t*
ObjectEzsigndiscussionAPI_ezsigndiscussionDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsigndiscussionID)
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
    char *localVarPath = strdup("/1/object/ezsigndiscussion/{pkiEzsigndiscussionID}");



    // Path Params
    long sizeOfPathParams_pkiEzsigndiscussionID =  + sizeof("{ pkiEzsigndiscussionID }") - 1;
    if(pkiEzsigndiscussionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndiscussionID = malloc(sizeOfPathParams_pkiEzsigndiscussionID);
    snprintf(localVarToReplace_pkiEzsigndiscussionID, sizeOfPathParams_pkiEzsigndiscussionID, "{%s}", "pkiEzsigndiscussionID");

    char localVarBuff_pkiEzsigndiscussionID[256];
    snprintf(localVarBuff_pkiEzsigndiscussionID, sizeof localVarBuff_pkiEzsigndiscussionID, "%ld", (long)*pkiEzsigndiscussionID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigndiscussionID, localVarBuff_pkiEzsigndiscussionID);



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
    ezsigndiscussion_delete_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndiscussionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndiscussion_delete_object_v1_response_parseFromJSON(ObjectEzsigndiscussionAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndiscussionAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndiscussionID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsigndiscussion
//
// 
//
ezsigndiscussion_get_object_v2_response_t*
ObjectEzsigndiscussionAPI_ezsigndiscussionGetObjectV2(apiClient_t *apiClient, int *pkiEzsigndiscussionID)
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
    char *localVarPath = strdup("/2/object/ezsigndiscussion/{pkiEzsigndiscussionID}");



    // Path Params
    long sizeOfPathParams_pkiEzsigndiscussionID =  + sizeof("{ pkiEzsigndiscussionID }") - 1;
    if(pkiEzsigndiscussionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndiscussionID = malloc(sizeOfPathParams_pkiEzsigndiscussionID);
    snprintf(localVarToReplace_pkiEzsigndiscussionID, sizeOfPathParams_pkiEzsigndiscussionID, "{%s}", "pkiEzsigndiscussionID");

    char localVarBuff_pkiEzsigndiscussionID[256];
    snprintf(localVarBuff_pkiEzsigndiscussionID, sizeof localVarBuff_pkiEzsigndiscussionID, "%ld", (long)*pkiEzsigndiscussionID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigndiscussionID, localVarBuff_pkiEzsigndiscussionID);



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
    ezsigndiscussion_get_object_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndiscussionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndiscussion_get_object_v2_response_parseFromJSON(ObjectEzsigndiscussionAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndiscussionAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndiscussionID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

