#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzsignbulksendsignermappingAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Create a new Ezsignbulksendsignermapping
//
// The endpoint allows to create one or many elements at once.
//
ezsignbulksendsignermapping_create_object_v1_response_t*
ObjectEzsignbulksendsignermappingAPI_ezsignbulksendsignermappingCreateObjectV1(apiClient_t *apiClient, ezsignbulksendsignermapping_create_object_v1_request_t *ezsignbulksendsignermapping_create_object_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsignbulksendsignermapping");





    // Body Param
    cJSON *localVarSingleItemJSON_ezsignbulksendsignermapping_create_object_v1_request = NULL;
    if (ezsignbulksendsignermapping_create_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsignbulksendsignermapping_create_object_v1_request = ezsignbulksendsignermapping_create_object_v1_request_convertToJSON(ezsignbulksendsignermapping_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignbulksendsignermapping_create_object_v1_request);
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
    ezsignbulksendsignermapping_create_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignbulksendsignermappingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignbulksendsignermapping_create_object_v1_response_parseFromJSON(ObjectEzsignbulksendsignermappingAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignbulksendsignermappingAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_ezsignbulksendsignermapping_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignbulksendsignermapping_create_object_v1_request);
        localVarSingleItemJSON_ezsignbulksendsignermapping_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an existing Ezsignbulksendsignermapping
//
// 
//
ezsignbulksendsignermapping_delete_object_v1_response_t*
ObjectEzsignbulksendsignermappingAPI_ezsignbulksendsignermappingDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsignbulksendsignermappingID)
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
    char *localVarPath = strdup("/1/object/ezsignbulksendsignermapping/{pkiEzsignbulksendsignermappingID}");



    // Path Params
    long sizeOfPathParams_pkiEzsignbulksendsignermappingID =  + sizeof("{ pkiEzsignbulksendsignermappingID }") - 1;
    if(pkiEzsignbulksendsignermappingID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignbulksendsignermappingID = malloc(sizeOfPathParams_pkiEzsignbulksendsignermappingID);
    snprintf(localVarToReplace_pkiEzsignbulksendsignermappingID, sizeOfPathParams_pkiEzsignbulksendsignermappingID, "{%s}", "pkiEzsignbulksendsignermappingID");

    char localVarBuff_pkiEzsignbulksendsignermappingID[256];
    snprintf(localVarBuff_pkiEzsignbulksendsignermappingID, sizeof localVarBuff_pkiEzsignbulksendsignermappingID, "%ld", (long)*pkiEzsignbulksendsignermappingID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignbulksendsignermappingID, localVarBuff_pkiEzsignbulksendsignermappingID);



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
    ezsignbulksendsignermapping_delete_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignbulksendsignermappingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignbulksendsignermapping_delete_object_v1_response_parseFromJSON(ObjectEzsignbulksendsignermappingAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignbulksendsignermappingAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignbulksendsignermappingID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsignbulksendsignermapping
//
// 
//
ezsignbulksendsignermapping_get_object_v2_response_t*
ObjectEzsignbulksendsignermappingAPI_ezsignbulksendsignermappingGetObjectV2(apiClient_t *apiClient, int *pkiEzsignbulksendsignermappingID)
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
    char *localVarPath = strdup("/2/object/ezsignbulksendsignermapping/{pkiEzsignbulksendsignermappingID}");



    // Path Params
    long sizeOfPathParams_pkiEzsignbulksendsignermappingID =  + sizeof("{ pkiEzsignbulksendsignermappingID }") - 1;
    if(pkiEzsignbulksendsignermappingID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignbulksendsignermappingID = malloc(sizeOfPathParams_pkiEzsignbulksendsignermappingID);
    snprintf(localVarToReplace_pkiEzsignbulksendsignermappingID, sizeOfPathParams_pkiEzsignbulksendsignermappingID, "{%s}", "pkiEzsignbulksendsignermappingID");

    char localVarBuff_pkiEzsignbulksendsignermappingID[256];
    snprintf(localVarBuff_pkiEzsignbulksendsignermappingID, sizeof localVarBuff_pkiEzsignbulksendsignermappingID, "%ld", (long)*pkiEzsignbulksendsignermappingID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignbulksendsignermappingID, localVarBuff_pkiEzsignbulksendsignermappingID);



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
    ezsignbulksendsignermapping_get_object_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignbulksendsignermappingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignbulksendsignermapping_get_object_v2_response_parseFromJSON(ObjectEzsignbulksendsignermappingAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignbulksendsignermappingAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignbulksendsignermappingID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

