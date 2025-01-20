#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzsignformfieldgroupAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create a new Ezsignformfieldgroup
//
// The endpoint allows to create one or many elements at once.
//
ezsignformfieldgroup_create_object_v1_response_t*
ObjectEzsignformfieldgroupAPI_ezsignformfieldgroupCreateObjectV1(apiClient_t *apiClient, ezsignformfieldgroup_create_object_v1_request_t *ezsignformfieldgroup_create_object_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignformfieldgroup")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignformfieldgroup");




    // Body Param
    cJSON *localVarSingleItemJSON_ezsignformfieldgroup_create_object_v1_request = NULL;
    if (ezsignformfieldgroup_create_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsignformfieldgroup_create_object_v1_request = ezsignformfieldgroup_create_object_v1_request_convertToJSON(ezsignformfieldgroup_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignformfieldgroup_create_object_v1_request);
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
    cJSON *ObjectEzsignformfieldgroupAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignformfieldgroup_create_object_v1_response_t *elementToReturn = ezsignformfieldgroup_create_object_v1_response_parseFromJSON(ObjectEzsignformfieldgroupAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignformfieldgroupAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_ezsignformfieldgroup_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignformfieldgroup_create_object_v1_request);
        localVarSingleItemJSON_ezsignformfieldgroup_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an existing Ezsignformfieldgroup
//
// 
//
common_response_t*
ObjectEzsignformfieldgroupAPI_ezsignformfieldgroupDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsignformfieldgroupID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignformfieldgroup/{pkiEzsignformfieldgroupID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignformfieldgroup/{pkiEzsignformfieldgroupID}");


    // Path Params
    long sizeOfPathParams_pkiEzsignformfieldgroupID =  + strlen("{ pkiEzsignformfieldgroupID }");
    if(pkiEzsignformfieldgroupID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignformfieldgroupID = malloc(sizeOfPathParams_pkiEzsignformfieldgroupID);
    snprintf(localVarToReplace_pkiEzsignformfieldgroupID, sizeOfPathParams_pkiEzsignformfieldgroupID, "{%s}", "pkiEzsignformfieldgroupID");

    char localVarBuff_pkiEzsignformfieldgroupID[256];
    intToStr(localVarBuff_pkiEzsignformfieldgroupID, *pkiEzsignformfieldgroupID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignformfieldgroupID, localVarBuff_pkiEzsignformfieldgroupID);



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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    cJSON *ObjectEzsignformfieldgroupAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    common_response_t *elementToReturn = common_response_parseFromJSON(ObjectEzsignformfieldgroupAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignformfieldgroupAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignformfieldgroupID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Edit an existing Ezsignformfieldgroup
//
// 
//
common_response_t*
ObjectEzsignformfieldgroupAPI_ezsignformfieldgroupEditObjectV1(apiClient_t *apiClient, int *pkiEzsignformfieldgroupID, ezsignformfieldgroup_edit_object_v1_request_t *ezsignformfieldgroup_edit_object_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignformfieldgroup/{pkiEzsignformfieldgroupID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignformfieldgroup/{pkiEzsignformfieldgroupID}");


    // Path Params
    long sizeOfPathParams_pkiEzsignformfieldgroupID =  + strlen("{ pkiEzsignformfieldgroupID }");
    if(pkiEzsignformfieldgroupID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignformfieldgroupID = malloc(sizeOfPathParams_pkiEzsignformfieldgroupID);
    snprintf(localVarToReplace_pkiEzsignformfieldgroupID, sizeOfPathParams_pkiEzsignformfieldgroupID, "{%s}", "pkiEzsignformfieldgroupID");

    char localVarBuff_pkiEzsignformfieldgroupID[256];
    intToStr(localVarBuff_pkiEzsignformfieldgroupID, *pkiEzsignformfieldgroupID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignformfieldgroupID, localVarBuff_pkiEzsignformfieldgroupID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsignformfieldgroup_edit_object_v1_request = NULL;
    if (ezsignformfieldgroup_edit_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsignformfieldgroup_edit_object_v1_request = ezsignformfieldgroup_edit_object_v1_request_convertToJSON(ezsignformfieldgroup_edit_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignformfieldgroup_edit_object_v1_request);
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
    cJSON *ObjectEzsignformfieldgroupAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    common_response_t *elementToReturn = common_response_parseFromJSON(ObjectEzsignformfieldgroupAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignformfieldgroupAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignformfieldgroupID);
    if (localVarSingleItemJSON_ezsignformfieldgroup_edit_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignformfieldgroup_edit_object_v1_request);
        localVarSingleItemJSON_ezsignformfieldgroup_edit_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsignformfieldgroup
//
// 
//
ezsignformfieldgroup_get_object_v2_response_t*
ObjectEzsignformfieldgroupAPI_ezsignformfieldgroupGetObjectV2(apiClient_t *apiClient, int *pkiEzsignformfieldgroupID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/2/object/ezsignformfieldgroup/{pkiEzsignformfieldgroupID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/2/object/ezsignformfieldgroup/{pkiEzsignformfieldgroupID}");


    // Path Params
    long sizeOfPathParams_pkiEzsignformfieldgroupID =  + strlen("{ pkiEzsignformfieldgroupID }");
    if(pkiEzsignformfieldgroupID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignformfieldgroupID = malloc(sizeOfPathParams_pkiEzsignformfieldgroupID);
    snprintf(localVarToReplace_pkiEzsignformfieldgroupID, sizeOfPathParams_pkiEzsignformfieldgroupID, "{%s}", "pkiEzsignformfieldgroupID");

    char localVarBuff_pkiEzsignformfieldgroupID[256];
    intToStr(localVarBuff_pkiEzsignformfieldgroupID, *pkiEzsignformfieldgroupID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignformfieldgroupID, localVarBuff_pkiEzsignformfieldgroupID);



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
    cJSON *ObjectEzsignformfieldgroupAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignformfieldgroup_get_object_v2_response_t *elementToReturn = ezsignformfieldgroup_get_object_v2_response_parseFromJSON(ObjectEzsignformfieldgroupAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignformfieldgroupAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignformfieldgroupID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

