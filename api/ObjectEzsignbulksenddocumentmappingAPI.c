#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzsignbulksenddocumentmappingAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create a new Ezsignbulksenddocumentmapping
//
// The endpoint allows to create one or many elements at once.
//
ezsignbulksenddocumentmapping_create_object_v1_response_t*
ObjectEzsignbulksenddocumentmappingAPI_ezsignbulksenddocumentmappingCreateObjectV1(apiClient_t *apiClient, ezsignbulksenddocumentmapping_create_object_v1_request_t * ezsignbulksenddocumentmapping_create_object_v1_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignbulksenddocumentmapping")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignbulksenddocumentmapping");




    // Body Param
    cJSON *localVarSingleItemJSON_ezsignbulksenddocumentmapping_create_object_v1_request = NULL;
    if (ezsignbulksenddocumentmapping_create_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsignbulksenddocumentmapping_create_object_v1_request = ezsignbulksenddocumentmapping_create_object_v1_request_convertToJSON(ezsignbulksenddocumentmapping_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignbulksenddocumentmapping_create_object_v1_request);
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
    cJSON *ObjectEzsignbulksenddocumentmappingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignbulksenddocumentmapping_create_object_v1_response_t *elementToReturn = ezsignbulksenddocumentmapping_create_object_v1_response_parseFromJSON(ObjectEzsignbulksenddocumentmappingAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignbulksenddocumentmappingAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
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
ObjectEzsignbulksenddocumentmappingAPI_ezsignbulksenddocumentmappingDeleteObjectV1(apiClient_t *apiClient, int pkiEzsignbulksenddocumentmappingID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignbulksenddocumentmapping/{pkiEzsignbulksenddocumentmappingID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignbulksenddocumentmapping/{pkiEzsignbulksenddocumentmappingID}");


    // Path Params
    long sizeOfPathParams_pkiEzsignbulksenddocumentmappingID =  + strlen("{ pkiEzsignbulksenddocumentmappingID }");
    if(pkiEzsignbulksenddocumentmappingID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignbulksenddocumentmappingID = malloc(sizeOfPathParams_pkiEzsignbulksenddocumentmappingID);
    snprintf(localVarToReplace_pkiEzsignbulksenddocumentmappingID, sizeOfPathParams_pkiEzsignbulksenddocumentmappingID, "{%s}", "pkiEzsignbulksenddocumentmappingID");

    char localVarBuff_pkiEzsignbulksenddocumentmappingID[256];
    intToStr(localVarBuff_pkiEzsignbulksenddocumentmappingID, pkiEzsignbulksenddocumentmappingID);

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
    cJSON *ObjectEzsignbulksenddocumentmappingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignbulksenddocumentmapping_delete_object_v1_response_t *elementToReturn = ezsignbulksenddocumentmapping_delete_object_v1_response_parseFromJSON(ObjectEzsignbulksenddocumentmappingAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignbulksenddocumentmappingAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
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
ezsignbulksenddocumentmapping_get_object_v1_response_t*
ObjectEzsignbulksenddocumentmappingAPI_ezsignbulksenddocumentmappingGetObjectV1(apiClient_t *apiClient, int pkiEzsignbulksenddocumentmappingID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignbulksenddocumentmapping/{pkiEzsignbulksenddocumentmappingID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignbulksenddocumentmapping/{pkiEzsignbulksenddocumentmappingID}");


    // Path Params
    long sizeOfPathParams_pkiEzsignbulksenddocumentmappingID =  + strlen("{ pkiEzsignbulksenddocumentmappingID }");
    if(pkiEzsignbulksenddocumentmappingID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignbulksenddocumentmappingID = malloc(sizeOfPathParams_pkiEzsignbulksenddocumentmappingID);
    snprintf(localVarToReplace_pkiEzsignbulksenddocumentmappingID, sizeOfPathParams_pkiEzsignbulksenddocumentmappingID, "{%s}", "pkiEzsignbulksenddocumentmappingID");

    char localVarBuff_pkiEzsignbulksenddocumentmappingID[256];
    intToStr(localVarBuff_pkiEzsignbulksenddocumentmappingID, pkiEzsignbulksenddocumentmappingID);

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
    cJSON *ObjectEzsignbulksenddocumentmappingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignbulksenddocumentmapping_get_object_v1_response_t *elementToReturn = ezsignbulksenddocumentmapping_get_object_v1_response_parseFromJSON(ObjectEzsignbulksenddocumentmappingAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignbulksenddocumentmappingAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
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
ObjectEzsignbulksenddocumentmappingAPI_ezsignbulksenddocumentmappingGetObjectV2(apiClient_t *apiClient, int pkiEzsignbulksenddocumentmappingID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/2/object/ezsignbulksenddocumentmapping/{pkiEzsignbulksenddocumentmappingID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/2/object/ezsignbulksenddocumentmapping/{pkiEzsignbulksenddocumentmappingID}");


    // Path Params
    long sizeOfPathParams_pkiEzsignbulksenddocumentmappingID =  + strlen("{ pkiEzsignbulksenddocumentmappingID }");
    if(pkiEzsignbulksenddocumentmappingID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignbulksenddocumentmappingID = malloc(sizeOfPathParams_pkiEzsignbulksenddocumentmappingID);
    snprintf(localVarToReplace_pkiEzsignbulksenddocumentmappingID, sizeOfPathParams_pkiEzsignbulksenddocumentmappingID, "{%s}", "pkiEzsignbulksenddocumentmappingID");

    char localVarBuff_pkiEzsignbulksenddocumentmappingID[256];
    intToStr(localVarBuff_pkiEzsignbulksenddocumentmappingID, pkiEzsignbulksenddocumentmappingID);

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
    cJSON *ObjectEzsignbulksenddocumentmappingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignbulksenddocumentmapping_get_object_v2_response_t *elementToReturn = ezsignbulksenddocumentmapping_get_object_v2_response_parseFromJSON(ObjectEzsignbulksenddocumentmappingAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignbulksenddocumentmappingAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
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

