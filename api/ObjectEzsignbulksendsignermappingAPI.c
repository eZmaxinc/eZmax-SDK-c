#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzsignbulksendsignermappingAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create a new Ezsignbulksendsignermapping
//
// The endpoint allows to create one or many elements at once.
//
ezsignbulksendsignermapping_create_object_v1_response_t*
ObjectEzsignbulksendsignermappingAPI_ezsignbulksendsignermappingCreateObjectV1(apiClient_t *apiClient, ezsignbulksendsignermapping_create_object_v1_request_t * ezsignbulksendsignermapping_create_object_v1_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignbulksendsignermapping")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignbulksendsignermapping");




    // Body Param
    cJSON *localVarSingleItemJSON_ezsignbulksendsignermapping_create_object_v1_request = NULL;
    if (ezsignbulksendsignermapping_create_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsignbulksendsignermapping_create_object_v1_request = ezsignbulksendsignermapping_create_object_v1_request_convertToJSON(ezsignbulksendsignermapping_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignbulksendsignermapping_create_object_v1_request);
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
    //nonprimitive not container
    cJSON *ObjectEzsignbulksendsignermappingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignbulksendsignermapping_create_object_v1_response_t *elementToReturn = ezsignbulksendsignermapping_create_object_v1_response_parseFromJSON(ObjectEzsignbulksendsignermappingAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignbulksendsignermappingAPIlocalVarJSON);
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
ObjectEzsignbulksendsignermappingAPI_ezsignbulksendsignermappingDeleteObjectV1(apiClient_t *apiClient, int pkiEzsignbulksendsignermappingID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignbulksendsignermapping/{pkiEzsignbulksendsignermappingID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignbulksendsignermapping/{pkiEzsignbulksendsignermappingID}");


    // Path Params
    long sizeOfPathParams_pkiEzsignbulksendsignermappingID =  + strlen("{ pkiEzsignbulksendsignermappingID }");
    if(pkiEzsignbulksendsignermappingID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignbulksendsignermappingID = malloc(sizeOfPathParams_pkiEzsignbulksendsignermappingID);
    snprintf(localVarToReplace_pkiEzsignbulksendsignermappingID, sizeOfPathParams_pkiEzsignbulksendsignermappingID, "{%s}", "pkiEzsignbulksendsignermappingID");

    char localVarBuff_pkiEzsignbulksendsignermappingID[256];
    intToStr(localVarBuff_pkiEzsignbulksendsignermappingID, pkiEzsignbulksendsignermappingID);

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
    cJSON *ObjectEzsignbulksendsignermappingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignbulksendsignermapping_delete_object_v1_response_t *elementToReturn = ezsignbulksendsignermapping_delete_object_v1_response_parseFromJSON(ObjectEzsignbulksendsignermappingAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignbulksendsignermappingAPIlocalVarJSON);
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
ObjectEzsignbulksendsignermappingAPI_ezsignbulksendsignermappingGetObjectV2(apiClient_t *apiClient, int pkiEzsignbulksendsignermappingID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/2/object/ezsignbulksendsignermapping/{pkiEzsignbulksendsignermappingID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/2/object/ezsignbulksendsignermapping/{pkiEzsignbulksendsignermappingID}");


    // Path Params
    long sizeOfPathParams_pkiEzsignbulksendsignermappingID =  + strlen("{ pkiEzsignbulksendsignermappingID }");
    if(pkiEzsignbulksendsignermappingID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignbulksendsignermappingID = malloc(sizeOfPathParams_pkiEzsignbulksendsignermappingID);
    snprintf(localVarToReplace_pkiEzsignbulksendsignermappingID, sizeOfPathParams_pkiEzsignbulksendsignermappingID, "{%s}", "pkiEzsignbulksendsignermappingID");

    char localVarBuff_pkiEzsignbulksendsignermappingID[256];
    intToStr(localVarBuff_pkiEzsignbulksendsignermappingID, pkiEzsignbulksendsignermappingID);

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
    cJSON *ObjectEzsignbulksendsignermappingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignbulksendsignermapping_get_object_v2_response_t *elementToReturn = ezsignbulksendsignermapping_get_object_v2_response_parseFromJSON(ObjectEzsignbulksendsignermappingAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignbulksendsignermappingAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignbulksendsignermappingID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

