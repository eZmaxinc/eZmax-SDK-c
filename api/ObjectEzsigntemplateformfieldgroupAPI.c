#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzsigntemplateformfieldgroupAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create a new Ezsigntemplateformfieldgroup
//
// The endpoint allows to create one or many elements at once.
//
ezsigntemplateformfieldgroup_create_object_v1_response_t*
ObjectEzsigntemplateformfieldgroupAPI_ezsigntemplateformfieldgroupCreateObjectV1(apiClient_t *apiClient, ezsigntemplateformfieldgroup_create_object_v1_request_t * ezsigntemplateformfieldgroup_create_object_v1_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsigntemplateformfieldgroup")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsigntemplateformfieldgroup");




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigntemplateformfieldgroup_create_object_v1_request = NULL;
    if (ezsigntemplateformfieldgroup_create_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsigntemplateformfieldgroup_create_object_v1_request = ezsigntemplateformfieldgroup_create_object_v1_request_convertToJSON(ezsigntemplateformfieldgroup_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigntemplateformfieldgroup_create_object_v1_request);
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
    cJSON *ObjectEzsigntemplateformfieldgroupAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigntemplateformfieldgroup_create_object_v1_response_t *elementToReturn = ezsigntemplateformfieldgroup_create_object_v1_response_parseFromJSON(ObjectEzsigntemplateformfieldgroupAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigntemplateformfieldgroupAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_ezsigntemplateformfieldgroup_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigntemplateformfieldgroup_create_object_v1_request);
        localVarSingleItemJSON_ezsigntemplateformfieldgroup_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an existing Ezsigntemplateformfieldgroup
//
// 
//
ezsigntemplateformfieldgroup_delete_object_v1_response_t*
ObjectEzsigntemplateformfieldgroupAPI_ezsigntemplateformfieldgroupDeleteObjectV1(apiClient_t *apiClient, int pkiEzsigntemplateformfieldgroupID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsigntemplateformfieldgroup/{pkiEzsigntemplateformfieldgroupID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsigntemplateformfieldgroup/{pkiEzsigntemplateformfieldgroupID}");


    // Path Params
    long sizeOfPathParams_pkiEzsigntemplateformfieldgroupID =  + strlen("{ pkiEzsigntemplateformfieldgroupID }");
    if(pkiEzsigntemplateformfieldgroupID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplateformfieldgroupID = malloc(sizeOfPathParams_pkiEzsigntemplateformfieldgroupID);
    snprintf(localVarToReplace_pkiEzsigntemplateformfieldgroupID, sizeOfPathParams_pkiEzsigntemplateformfieldgroupID, "{%s}", "pkiEzsigntemplateformfieldgroupID");

    char localVarBuff_pkiEzsigntemplateformfieldgroupID[256];
    intToStr(localVarBuff_pkiEzsigntemplateformfieldgroupID, pkiEzsigntemplateformfieldgroupID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplateformfieldgroupID, localVarBuff_pkiEzsigntemplateformfieldgroupID);



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
    cJSON *ObjectEzsigntemplateformfieldgroupAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigntemplateformfieldgroup_delete_object_v1_response_t *elementToReturn = ezsigntemplateformfieldgroup_delete_object_v1_response_parseFromJSON(ObjectEzsigntemplateformfieldgroupAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigntemplateformfieldgroupAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplateformfieldgroupID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Edit an existing Ezsigntemplateformfieldgroup
//
// 
//
ezsigntemplateformfieldgroup_edit_object_v1_response_t*
ObjectEzsigntemplateformfieldgroupAPI_ezsigntemplateformfieldgroupEditObjectV1(apiClient_t *apiClient, int pkiEzsigntemplateformfieldgroupID , ezsigntemplateformfieldgroup_edit_object_v1_request_t * ezsigntemplateformfieldgroup_edit_object_v1_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsigntemplateformfieldgroup/{pkiEzsigntemplateformfieldgroupID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsigntemplateformfieldgroup/{pkiEzsigntemplateformfieldgroupID}");


    // Path Params
    long sizeOfPathParams_pkiEzsigntemplateformfieldgroupID =  + strlen("{ pkiEzsigntemplateformfieldgroupID }");
    if(pkiEzsigntemplateformfieldgroupID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplateformfieldgroupID = malloc(sizeOfPathParams_pkiEzsigntemplateformfieldgroupID);
    snprintf(localVarToReplace_pkiEzsigntemplateformfieldgroupID, sizeOfPathParams_pkiEzsigntemplateformfieldgroupID, "{%s}", "pkiEzsigntemplateformfieldgroupID");

    char localVarBuff_pkiEzsigntemplateformfieldgroupID[256];
    intToStr(localVarBuff_pkiEzsigntemplateformfieldgroupID, pkiEzsigntemplateformfieldgroupID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplateformfieldgroupID, localVarBuff_pkiEzsigntemplateformfieldgroupID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigntemplateformfieldgroup_edit_object_v1_request = NULL;
    if (ezsigntemplateformfieldgroup_edit_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsigntemplateformfieldgroup_edit_object_v1_request = ezsigntemplateformfieldgroup_edit_object_v1_request_convertToJSON(ezsigntemplateformfieldgroup_edit_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigntemplateformfieldgroup_edit_object_v1_request);
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
    cJSON *ObjectEzsigntemplateformfieldgroupAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigntemplateformfieldgroup_edit_object_v1_response_t *elementToReturn = ezsigntemplateformfieldgroup_edit_object_v1_response_parseFromJSON(ObjectEzsigntemplateformfieldgroupAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigntemplateformfieldgroupAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplateformfieldgroupID);
    if (localVarSingleItemJSON_ezsigntemplateformfieldgroup_edit_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigntemplateformfieldgroup_edit_object_v1_request);
        localVarSingleItemJSON_ezsigntemplateformfieldgroup_edit_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsigntemplateformfieldgroup
//
// 
//
ezsigntemplateformfieldgroup_get_object_v2_response_t*
ObjectEzsigntemplateformfieldgroupAPI_ezsigntemplateformfieldgroupGetObjectV2(apiClient_t *apiClient, int pkiEzsigntemplateformfieldgroupID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/2/object/ezsigntemplateformfieldgroup/{pkiEzsigntemplateformfieldgroupID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/2/object/ezsigntemplateformfieldgroup/{pkiEzsigntemplateformfieldgroupID}");


    // Path Params
    long sizeOfPathParams_pkiEzsigntemplateformfieldgroupID =  + strlen("{ pkiEzsigntemplateformfieldgroupID }");
    if(pkiEzsigntemplateformfieldgroupID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplateformfieldgroupID = malloc(sizeOfPathParams_pkiEzsigntemplateformfieldgroupID);
    snprintf(localVarToReplace_pkiEzsigntemplateformfieldgroupID, sizeOfPathParams_pkiEzsigntemplateformfieldgroupID, "{%s}", "pkiEzsigntemplateformfieldgroupID");

    char localVarBuff_pkiEzsigntemplateformfieldgroupID[256];
    intToStr(localVarBuff_pkiEzsigntemplateformfieldgroupID, pkiEzsigntemplateformfieldgroupID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplateformfieldgroupID, localVarBuff_pkiEzsigntemplateformfieldgroupID);



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
    cJSON *ObjectEzsigntemplateformfieldgroupAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigntemplateformfieldgroup_get_object_v2_response_t *elementToReturn = ezsigntemplateformfieldgroup_get_object_v2_response_parseFromJSON(ObjectEzsigntemplateformfieldgroupAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigntemplateformfieldgroupAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplateformfieldgroupID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

