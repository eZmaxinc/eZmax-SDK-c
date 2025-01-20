#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzsignannotationAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create a new Ezsignannotation
//
// The endpoint allows to create one or many elements at once.
//
ezsignannotation_create_object_v1_response_t*
ObjectEzsignannotationAPI_ezsignannotationCreateObjectV1(apiClient_t *apiClient, ezsignannotation_create_object_v1_request_t *ezsignannotation_create_object_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignannotation")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignannotation");




    // Body Param
    cJSON *localVarSingleItemJSON_ezsignannotation_create_object_v1_request = NULL;
    if (ezsignannotation_create_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsignannotation_create_object_v1_request = ezsignannotation_create_object_v1_request_convertToJSON(ezsignannotation_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignannotation_create_object_v1_request);
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
    cJSON *ObjectEzsignannotationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignannotation_create_object_v1_response_t *elementToReturn = ezsignannotation_create_object_v1_response_parseFromJSON(ObjectEzsignannotationAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignannotationAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_ezsignannotation_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignannotation_create_object_v1_request);
        localVarSingleItemJSON_ezsignannotation_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an existing Ezsignannotation
//
// 
//
ezsignannotation_delete_object_v1_response_t*
ObjectEzsignannotationAPI_ezsignannotationDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsignannotationID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignannotation/{pkiEzsignannotationID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignannotation/{pkiEzsignannotationID}");


    // Path Params
    long sizeOfPathParams_pkiEzsignannotationID =  + strlen("{ pkiEzsignannotationID }");
    if(pkiEzsignannotationID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignannotationID = malloc(sizeOfPathParams_pkiEzsignannotationID);
    snprintf(localVarToReplace_pkiEzsignannotationID, sizeOfPathParams_pkiEzsignannotationID, "{%s}", "pkiEzsignannotationID");

    char localVarBuff_pkiEzsignannotationID[256];
    intToStr(localVarBuff_pkiEzsignannotationID, *pkiEzsignannotationID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignannotationID, localVarBuff_pkiEzsignannotationID);



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
    cJSON *ObjectEzsignannotationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignannotation_delete_object_v1_response_t *elementToReturn = ezsignannotation_delete_object_v1_response_parseFromJSON(ObjectEzsignannotationAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignannotationAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignannotationID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Edit an existing Ezsignannotation
//
// 
//
ezsignannotation_edit_object_v1_response_t*
ObjectEzsignannotationAPI_ezsignannotationEditObjectV1(apiClient_t *apiClient, int *pkiEzsignannotationID, ezsignannotation_edit_object_v1_request_t *ezsignannotation_edit_object_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignannotation/{pkiEzsignannotationID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignannotation/{pkiEzsignannotationID}");


    // Path Params
    long sizeOfPathParams_pkiEzsignannotationID =  + strlen("{ pkiEzsignannotationID }");
    if(pkiEzsignannotationID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignannotationID = malloc(sizeOfPathParams_pkiEzsignannotationID);
    snprintf(localVarToReplace_pkiEzsignannotationID, sizeOfPathParams_pkiEzsignannotationID, "{%s}", "pkiEzsignannotationID");

    char localVarBuff_pkiEzsignannotationID[256];
    intToStr(localVarBuff_pkiEzsignannotationID, *pkiEzsignannotationID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignannotationID, localVarBuff_pkiEzsignannotationID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsignannotation_edit_object_v1_request = NULL;
    if (ezsignannotation_edit_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsignannotation_edit_object_v1_request = ezsignannotation_edit_object_v1_request_convertToJSON(ezsignannotation_edit_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignannotation_edit_object_v1_request);
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
    cJSON *ObjectEzsignannotationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignannotation_edit_object_v1_response_t *elementToReturn = ezsignannotation_edit_object_v1_response_parseFromJSON(ObjectEzsignannotationAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignannotationAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignannotationID);
    if (localVarSingleItemJSON_ezsignannotation_edit_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignannotation_edit_object_v1_request);
        localVarSingleItemJSON_ezsignannotation_edit_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsignannotation
//
// 
//
ezsignannotation_get_object_v2_response_t*
ObjectEzsignannotationAPI_ezsignannotationGetObjectV2(apiClient_t *apiClient, int *pkiEzsignannotationID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/2/object/ezsignannotation/{pkiEzsignannotationID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/2/object/ezsignannotation/{pkiEzsignannotationID}");


    // Path Params
    long sizeOfPathParams_pkiEzsignannotationID =  + strlen("{ pkiEzsignannotationID }");
    if(pkiEzsignannotationID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignannotationID = malloc(sizeOfPathParams_pkiEzsignannotationID);
    snprintf(localVarToReplace_pkiEzsignannotationID, sizeOfPathParams_pkiEzsignannotationID, "{%s}", "pkiEzsignannotationID");

    char localVarBuff_pkiEzsignannotationID[256];
    intToStr(localVarBuff_pkiEzsignannotationID, *pkiEzsignannotationID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignannotationID, localVarBuff_pkiEzsignannotationID);



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
    cJSON *ObjectEzsignannotationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignannotation_get_object_v2_response_t *elementToReturn = ezsignannotation_get_object_v2_response_parseFromJSON(ObjectEzsignannotationAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignannotationAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignannotationID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

