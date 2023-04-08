#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzsigntemplatesignatureAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create a new Ezsigntemplatesignature
//
// The endpoint allows to create one or many elements at once.
//
ezsigntemplatesignature_create_object_v1_response_t*
ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureCreateObjectV1(apiClient_t *apiClient, ezsigntemplatesignature_create_object_v1_request_t * ezsigntemplatesignature_create_object_v1_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsigntemplatesignature")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsigntemplatesignature");




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigntemplatesignature_create_object_v1_request = NULL;
    if (ezsigntemplatesignature_create_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsigntemplatesignature_create_object_v1_request = ezsigntemplatesignature_create_object_v1_request_convertToJSON(ezsigntemplatesignature_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigntemplatesignature_create_object_v1_request);
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
    cJSON *ObjectEzsigntemplatesignatureAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigntemplatesignature_create_object_v1_response_t *elementToReturn = ezsigntemplatesignature_create_object_v1_response_parseFromJSON(ObjectEzsigntemplatesignatureAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigntemplatesignatureAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_ezsigntemplatesignature_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigntemplatesignature_create_object_v1_request);
        localVarSingleItemJSON_ezsigntemplatesignature_create_object_v1_request = NULL;
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
ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureDeleteObjectV1(apiClient_t *apiClient, int pkiEzsigntemplatesignatureID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsigntemplatesignature/{pkiEzsigntemplatesignatureID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsigntemplatesignature/{pkiEzsigntemplatesignatureID}");


    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatesignatureID =  + strlen("{ pkiEzsigntemplatesignatureID }");
    if(pkiEzsigntemplatesignatureID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatesignatureID = malloc(sizeOfPathParams_pkiEzsigntemplatesignatureID);
    snprintf(localVarToReplace_pkiEzsigntemplatesignatureID, sizeOfPathParams_pkiEzsigntemplatesignatureID, "{%s}", "pkiEzsigntemplatesignatureID");

    char localVarBuff_pkiEzsigntemplatesignatureID[256];
    intToStr(localVarBuff_pkiEzsigntemplatesignatureID, pkiEzsigntemplatesignatureID);

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
    cJSON *ObjectEzsigntemplatesignatureAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigntemplatesignature_delete_object_v1_response_t *elementToReturn = ezsigntemplatesignature_delete_object_v1_response_parseFromJSON(ObjectEzsigntemplatesignatureAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigntemplatesignatureAPIlocalVarJSON);
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
ezsigntemplatesignature_edit_object_v1_response_t*
ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureEditObjectV1(apiClient_t *apiClient, int pkiEzsigntemplatesignatureID , ezsigntemplatesignature_edit_object_v1_request_t * ezsigntemplatesignature_edit_object_v1_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsigntemplatesignature/{pkiEzsigntemplatesignatureID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsigntemplatesignature/{pkiEzsigntemplatesignatureID}");


    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatesignatureID =  + strlen("{ pkiEzsigntemplatesignatureID }");
    if(pkiEzsigntemplatesignatureID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatesignatureID = malloc(sizeOfPathParams_pkiEzsigntemplatesignatureID);
    snprintf(localVarToReplace_pkiEzsigntemplatesignatureID, sizeOfPathParams_pkiEzsigntemplatesignatureID, "{%s}", "pkiEzsigntemplatesignatureID");

    char localVarBuff_pkiEzsigntemplatesignatureID[256];
    intToStr(localVarBuff_pkiEzsigntemplatesignatureID, pkiEzsigntemplatesignatureID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplatesignatureID, localVarBuff_pkiEzsigntemplatesignatureID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigntemplatesignature_edit_object_v1_request = NULL;
    if (ezsigntemplatesignature_edit_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsigntemplatesignature_edit_object_v1_request = ezsigntemplatesignature_edit_object_v1_request_convertToJSON(ezsigntemplatesignature_edit_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigntemplatesignature_edit_object_v1_request);
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
    cJSON *ObjectEzsigntemplatesignatureAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigntemplatesignature_edit_object_v1_response_t *elementToReturn = ezsigntemplatesignature_edit_object_v1_response_parseFromJSON(ObjectEzsigntemplatesignatureAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigntemplatesignatureAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatesignatureID);
    if (localVarSingleItemJSON_ezsigntemplatesignature_edit_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigntemplatesignature_edit_object_v1_request);
        localVarSingleItemJSON_ezsigntemplatesignature_edit_object_v1_request = NULL;
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
ezsigntemplatesignature_get_object_v2_response_t*
ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureGetObjectV2(apiClient_t *apiClient, int pkiEzsigntemplatesignatureID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/2/object/ezsigntemplatesignature/{pkiEzsigntemplatesignatureID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/2/object/ezsigntemplatesignature/{pkiEzsigntemplatesignatureID}");


    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatesignatureID =  + strlen("{ pkiEzsigntemplatesignatureID }");
    if(pkiEzsigntemplatesignatureID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatesignatureID = malloc(sizeOfPathParams_pkiEzsigntemplatesignatureID);
    snprintf(localVarToReplace_pkiEzsigntemplatesignatureID, sizeOfPathParams_pkiEzsigntemplatesignatureID, "{%s}", "pkiEzsigntemplatesignatureID");

    char localVarBuff_pkiEzsigntemplatesignatureID[256];
    intToStr(localVarBuff_pkiEzsigntemplatesignatureID, pkiEzsigntemplatesignatureID);

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
    cJSON *ObjectEzsigntemplatesignatureAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigntemplatesignature_get_object_v2_response_t *elementToReturn = ezsigntemplatesignature_get_object_v2_response_parseFromJSON(ObjectEzsigntemplatesignatureAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigntemplatesignatureAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatesignatureID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

