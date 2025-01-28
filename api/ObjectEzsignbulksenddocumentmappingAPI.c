#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzsignbulksenddocumentmappingAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Create a new Ezsignbulksenddocumentmapping
//
// The endpoint allows to create one or many elements at once.
//
ezsignbulksenddocumentmapping_create_object_v1_response_t*
ObjectEzsignbulksenddocumentmappingAPI_ezsignbulksenddocumentmappingCreateObjectV1(apiClient_t *apiClient, ezsignbulksenddocumentmapping_create_object_v1_request_t *ezsignbulksenddocumentmapping_create_object_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsignbulksenddocumentmapping");





    // Body Param
    cJSON *localVarSingleItemJSON_ezsignbulksenddocumentmapping_create_object_v1_request = NULL;
    if (ezsignbulksenddocumentmapping_create_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsignbulksenddocumentmapping_create_object_v1_request = ezsignbulksenddocumentmapping_create_object_v1_request_convertToJSON(ezsignbulksenddocumentmapping_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignbulksenddocumentmapping_create_object_v1_request);
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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    ezsignbulksenddocumentmapping_create_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignbulksenddocumentmappingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignbulksenddocumentmapping_create_object_v1_response_parseFromJSON(ObjectEzsignbulksenddocumentmappingAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignbulksenddocumentmappingAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_ezsignbulksenddocumentmapping_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignbulksenddocumentmapping_create_object_v1_request);
        localVarSingleItemJSON_ezsignbulksenddocumentmapping_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an existing Ezsignbulksenddocumentmapping
//
// 
//
ezsignbulksenddocumentmapping_delete_object_v1_response_t*
ObjectEzsignbulksenddocumentmappingAPI_ezsignbulksenddocumentmappingDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsignbulksenddocumentmappingID)
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
    char *localVarPath = strdup("/1/object/ezsignbulksenddocumentmapping/{pkiEzsignbulksenddocumentmappingID}");



    // Path Params
    long sizeOfPathParams_pkiEzsignbulksenddocumentmappingID =  + sizeof("{ pkiEzsignbulksenddocumentmappingID }") - 1;
    if(pkiEzsignbulksenddocumentmappingID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignbulksenddocumentmappingID = malloc(sizeOfPathParams_pkiEzsignbulksenddocumentmappingID);
    snprintf(localVarToReplace_pkiEzsignbulksenddocumentmappingID, sizeOfPathParams_pkiEzsignbulksenddocumentmappingID, "{%s}", "pkiEzsignbulksenddocumentmappingID");

    char localVarBuff_pkiEzsignbulksenddocumentmappingID[256];
    snprintf(localVarBuff_pkiEzsignbulksenddocumentmappingID, sizeof localVarBuff_pkiEzsignbulksenddocumentmappingID, "%ld", (long)*pkiEzsignbulksenddocumentmappingID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignbulksenddocumentmappingID, localVarBuff_pkiEzsignbulksenddocumentmappingID);



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
    ezsignbulksenddocumentmapping_delete_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignbulksenddocumentmappingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignbulksenddocumentmapping_delete_object_v1_response_parseFromJSON(ObjectEzsignbulksenddocumentmappingAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignbulksenddocumentmappingAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignbulksenddocumentmappingID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsignbulksenddocumentmapping
//
// 
//
ezsignbulksenddocumentmapping_get_object_v2_response_t*
ObjectEzsignbulksenddocumentmappingAPI_ezsignbulksenddocumentmappingGetObjectV2(apiClient_t *apiClient, int *pkiEzsignbulksenddocumentmappingID)
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
    char *localVarPath = strdup("/2/object/ezsignbulksenddocumentmapping/{pkiEzsignbulksenddocumentmappingID}");



    // Path Params
    long sizeOfPathParams_pkiEzsignbulksenddocumentmappingID =  + sizeof("{ pkiEzsignbulksenddocumentmappingID }") - 1;
    if(pkiEzsignbulksenddocumentmappingID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignbulksenddocumentmappingID = malloc(sizeOfPathParams_pkiEzsignbulksenddocumentmappingID);
    snprintf(localVarToReplace_pkiEzsignbulksenddocumentmappingID, sizeOfPathParams_pkiEzsignbulksenddocumentmappingID, "{%s}", "pkiEzsignbulksenddocumentmappingID");

    char localVarBuff_pkiEzsignbulksenddocumentmappingID[256];
    snprintf(localVarBuff_pkiEzsignbulksenddocumentmappingID, sizeof localVarBuff_pkiEzsignbulksenddocumentmappingID, "%ld", (long)*pkiEzsignbulksenddocumentmappingID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignbulksenddocumentmappingID, localVarBuff_pkiEzsignbulksenddocumentmappingID);



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
    ezsignbulksenddocumentmapping_get_object_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignbulksenddocumentmappingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignbulksenddocumentmapping_get_object_v2_response_parseFromJSON(ObjectEzsignbulksenddocumentmappingAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignbulksenddocumentmappingAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignbulksenddocumentmappingID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

