#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzsigntemplatepackagesignerAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


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

    // create the path
    long sizeOfPath = strlen("/1/object/ezsigntemplatepackagesigner")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsigntemplatepackagesigner");




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigntemplatepackagesigner_create_object_v1_request = NULL;
    if (ezsigntemplatepackagesigner_create_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsigntemplatepackagesigner_create_object_v1_request = ezsigntemplatepackagesigner_create_object_v1_request_convertToJSON(ezsigntemplatepackagesigner_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigntemplatepackagesigner_create_object_v1_request);
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
    cJSON *ObjectEzsigntemplatepackagesignerAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigntemplatepackagesigner_create_object_v1_response_t *elementToReturn = ezsigntemplatepackagesigner_create_object_v1_response_parseFromJSON(ObjectEzsigntemplatepackagesignerAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigntemplatepackagesignerAPIlocalVarJSON);
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

    // create the path
    long sizeOfPath = strlen("/1/object/ezsigntemplatepackagesigner/{pkiEzsigntemplatepackagesignerID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsigntemplatepackagesigner/{pkiEzsigntemplatepackagesignerID}");


    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatepackagesignerID =  + strlen("{ pkiEzsigntemplatepackagesignerID }");
    if(pkiEzsigntemplatepackagesignerID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatepackagesignerID = malloc(sizeOfPathParams_pkiEzsigntemplatepackagesignerID);
    snprintf(localVarToReplace_pkiEzsigntemplatepackagesignerID, sizeOfPathParams_pkiEzsigntemplatepackagesignerID, "{%s}", "pkiEzsigntemplatepackagesignerID");

    char localVarBuff_pkiEzsigntemplatepackagesignerID[256];
    intToStr(localVarBuff_pkiEzsigntemplatepackagesignerID, *pkiEzsigntemplatepackagesignerID);

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
    cJSON *ObjectEzsigntemplatepackagesignerAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigntemplatepackagesigner_delete_object_v1_response_t *elementToReturn = ezsigntemplatepackagesigner_delete_object_v1_response_parseFromJSON(ObjectEzsigntemplatepackagesignerAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigntemplatepackagesignerAPIlocalVarJSON);
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
common_response_t*
ObjectEzsigntemplatepackagesignerAPI_ezsigntemplatepackagesignerEditObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplatepackagesignerID, ezsigntemplatepackagesigner_edit_object_v1_request_t *ezsigntemplatepackagesigner_edit_object_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsigntemplatepackagesigner/{pkiEzsigntemplatepackagesignerID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsigntemplatepackagesigner/{pkiEzsigntemplatepackagesignerID}");


    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatepackagesignerID =  + strlen("{ pkiEzsigntemplatepackagesignerID }");
    if(pkiEzsigntemplatepackagesignerID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatepackagesignerID = malloc(sizeOfPathParams_pkiEzsigntemplatepackagesignerID);
    snprintf(localVarToReplace_pkiEzsigntemplatepackagesignerID, sizeOfPathParams_pkiEzsigntemplatepackagesignerID, "{%s}", "pkiEzsigntemplatepackagesignerID");

    char localVarBuff_pkiEzsigntemplatepackagesignerID[256];
    intToStr(localVarBuff_pkiEzsigntemplatepackagesignerID, *pkiEzsigntemplatepackagesignerID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplatepackagesignerID, localVarBuff_pkiEzsigntemplatepackagesignerID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigntemplatepackagesigner_edit_object_v1_request = NULL;
    if (ezsigntemplatepackagesigner_edit_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsigntemplatepackagesigner_edit_object_v1_request = ezsigntemplatepackagesigner_edit_object_v1_request_convertToJSON(ezsigntemplatepackagesigner_edit_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigntemplatepackagesigner_edit_object_v1_request);
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
    cJSON *ObjectEzsigntemplatepackagesignerAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    common_response_t *elementToReturn = common_response_parseFromJSON(ObjectEzsigntemplatepackagesignerAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigntemplatepackagesignerAPIlocalVarJSON);
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

    // create the path
    long sizeOfPath = strlen("/2/object/ezsigntemplatepackagesigner/{pkiEzsigntemplatepackagesignerID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/2/object/ezsigntemplatepackagesigner/{pkiEzsigntemplatepackagesignerID}");


    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatepackagesignerID =  + strlen("{ pkiEzsigntemplatepackagesignerID }");
    if(pkiEzsigntemplatepackagesignerID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatepackagesignerID = malloc(sizeOfPathParams_pkiEzsigntemplatepackagesignerID);
    snprintf(localVarToReplace_pkiEzsigntemplatepackagesignerID, sizeOfPathParams_pkiEzsigntemplatepackagesignerID, "{%s}", "pkiEzsigntemplatepackagesignerID");

    char localVarBuff_pkiEzsigntemplatepackagesignerID[256];
    intToStr(localVarBuff_pkiEzsigntemplatepackagesignerID, *pkiEzsigntemplatepackagesignerID);

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
    cJSON *ObjectEzsigntemplatepackagesignerAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigntemplatepackagesigner_get_object_v2_response_t *elementToReturn = ezsigntemplatepackagesigner_get_object_v2_response_parseFromJSON(ObjectEzsigntemplatepackagesignerAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigntemplatepackagesignerAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatepackagesignerID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

