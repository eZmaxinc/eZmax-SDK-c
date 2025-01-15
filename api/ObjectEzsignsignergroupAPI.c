#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzsignsignergroupAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create a new Ezsignsignergroup
//
// The endpoint allows to create one or many elements at once.
//
ezsignsignergroup_create_object_v1_response_t*
ObjectEzsignsignergroupAPI_ezsignsignergroupCreateObjectV1(apiClient_t *apiClient, ezsignsignergroup_create_object_v1_request_t *ezsignsignergroup_create_object_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignsignergroup")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignsignergroup");




    // Body Param
    cJSON *localVarSingleItemJSON_ezsignsignergroup_create_object_v1_request = NULL;
    if (ezsignsignergroup_create_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsignsignergroup_create_object_v1_request = ezsignsignergroup_create_object_v1_request_convertToJSON(ezsignsignergroup_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignsignergroup_create_object_v1_request);
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
    cJSON *ObjectEzsignsignergroupAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignsignergroup_create_object_v1_response_t *elementToReturn = ezsignsignergroup_create_object_v1_response_parseFromJSON(ObjectEzsignsignergroupAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignsignergroupAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_ezsignsignergroup_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignsignergroup_create_object_v1_request);
        localVarSingleItemJSON_ezsignsignergroup_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an existing Ezsignsignergroup
//
// 
//
common_response_t*
ObjectEzsignsignergroupAPI_ezsignsignergroupDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsignsignergroupID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignsignergroup/{pkiEzsignsignergroupID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignsignergroup/{pkiEzsignsignergroupID}");


    // Path Params
    long sizeOfPathParams_pkiEzsignsignergroupID =  + strlen("{ pkiEzsignsignergroupID }");
    if(pkiEzsignsignergroupID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignsignergroupID = malloc(sizeOfPathParams_pkiEzsignsignergroupID);
    snprintf(localVarToReplace_pkiEzsignsignergroupID, sizeOfPathParams_pkiEzsignsignergroupID, "{%s}", "pkiEzsignsignergroupID");

    char localVarBuff_pkiEzsignsignergroupID[256];
    intToStr(localVarBuff_pkiEzsignsignergroupID, *pkiEzsignsignergroupID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignsignergroupID, localVarBuff_pkiEzsignsignergroupID);



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
    cJSON *ObjectEzsignsignergroupAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    common_response_t *elementToReturn = common_response_parseFromJSON(ObjectEzsignsignergroupAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignsignergroupAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignsignergroupID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Edit multiple Ezsignsignergroupmemberships
//
// Using this endpoint, you can edit multiple Ezsignsignergroupmemberships at the same time.
//
ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_t*
ObjectEzsignsignergroupAPI_ezsignsignergroupEditEzsignsignergroupmembershipsV1(apiClient_t *apiClient, int *pkiEzsignsignergroupID, ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_t *ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignsignergroup/{pkiEzsignsignergroupID}/editEzsignsignergroupmemberships")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignsignergroup/{pkiEzsignsignergroupID}/editEzsignsignergroupmemberships");


    // Path Params
    long sizeOfPathParams_pkiEzsignsignergroupID =  + strlen("{ pkiEzsignsignergroupID }");
    if(pkiEzsignsignergroupID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignsignergroupID = malloc(sizeOfPathParams_pkiEzsignsignergroupID);
    snprintf(localVarToReplace_pkiEzsignsignergroupID, sizeOfPathParams_pkiEzsignsignergroupID, "{%s}", "pkiEzsignsignergroupID");

    char localVarBuff_pkiEzsignsignergroupID[256];
    intToStr(localVarBuff_pkiEzsignsignergroupID, *pkiEzsignsignergroupID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignsignergroupID, localVarBuff_pkiEzsignsignergroupID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request = NULL;
    if (ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request = ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_convertToJSON(ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request);
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
    cJSON *ObjectEzsignsignergroupAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_t *elementToReturn = ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_parseFromJSON(ObjectEzsignsignergroupAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignsignergroupAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignsignergroupID);
    if (localVarSingleItemJSON_ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request);
        localVarSingleItemJSON_ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Edit an existing Ezsignsignergroup
//
// 
//
common_response_t*
ObjectEzsignsignergroupAPI_ezsignsignergroupEditObjectV1(apiClient_t *apiClient, int *pkiEzsignsignergroupID, ezsignsignergroup_edit_object_v1_request_t *ezsignsignergroup_edit_object_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignsignergroup/{pkiEzsignsignergroupID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignsignergroup/{pkiEzsignsignergroupID}");


    // Path Params
    long sizeOfPathParams_pkiEzsignsignergroupID =  + strlen("{ pkiEzsignsignergroupID }");
    if(pkiEzsignsignergroupID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignsignergroupID = malloc(sizeOfPathParams_pkiEzsignsignergroupID);
    snprintf(localVarToReplace_pkiEzsignsignergroupID, sizeOfPathParams_pkiEzsignsignergroupID, "{%s}", "pkiEzsignsignergroupID");

    char localVarBuff_pkiEzsignsignergroupID[256];
    intToStr(localVarBuff_pkiEzsignsignergroupID, *pkiEzsignsignergroupID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignsignergroupID, localVarBuff_pkiEzsignsignergroupID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsignsignergroup_edit_object_v1_request = NULL;
    if (ezsignsignergroup_edit_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsignsignergroup_edit_object_v1_request = ezsignsignergroup_edit_object_v1_request_convertToJSON(ezsignsignergroup_edit_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignsignergroup_edit_object_v1_request);
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
    //nonprimitive not container
    cJSON *ObjectEzsignsignergroupAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    common_response_t *elementToReturn = common_response_parseFromJSON(ObjectEzsignsignergroupAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignsignergroupAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignsignergroupID);
    if (localVarSingleItemJSON_ezsignsignergroup_edit_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignsignergroup_edit_object_v1_request);
        localVarSingleItemJSON_ezsignsignergroup_edit_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsignsignergroup's Ezsignsignergroupmemberships
//
ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_t*
ObjectEzsignsignergroupAPI_ezsignsignergroupGetEzsignsignergroupmembershipsV1(apiClient_t *apiClient, int *pkiEzsignsignergroupID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignsignergroup/{pkiEzsignsignergroupID}/getEzsignsignergroupmemberships")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignsignergroup/{pkiEzsignsignergroupID}/getEzsignsignergroupmemberships");


    // Path Params
    long sizeOfPathParams_pkiEzsignsignergroupID =  + strlen("{ pkiEzsignsignergroupID }");
    if(pkiEzsignsignergroupID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignsignergroupID = malloc(sizeOfPathParams_pkiEzsignsignergroupID);
    snprintf(localVarToReplace_pkiEzsignsignergroupID, sizeOfPathParams_pkiEzsignsignergroupID, "{%s}", "pkiEzsignsignergroupID");

    char localVarBuff_pkiEzsignsignergroupID[256];
    intToStr(localVarBuff_pkiEzsignsignergroupID, *pkiEzsignsignergroupID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignsignergroupID, localVarBuff_pkiEzsignsignergroupID);



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
    cJSON *ObjectEzsignsignergroupAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_t *elementToReturn = ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_parseFromJSON(ObjectEzsignsignergroupAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignsignergroupAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignsignergroupID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsignsignergroup
//
// 
//
ezsignsignergroup_get_object_v2_response_t*
ObjectEzsignsignergroupAPI_ezsignsignergroupGetObjectV2(apiClient_t *apiClient, int *pkiEzsignsignergroupID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/2/object/ezsignsignergroup/{pkiEzsignsignergroupID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/2/object/ezsignsignergroup/{pkiEzsignsignergroupID}");


    // Path Params
    long sizeOfPathParams_pkiEzsignsignergroupID =  + strlen("{ pkiEzsignsignergroupID }");
    if(pkiEzsignsignergroupID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignsignergroupID = malloc(sizeOfPathParams_pkiEzsignsignergroupID);
    snprintf(localVarToReplace_pkiEzsignsignergroupID, sizeOfPathParams_pkiEzsignsignergroupID, "{%s}", "pkiEzsignsignergroupID");

    char localVarBuff_pkiEzsignsignergroupID[256];
    intToStr(localVarBuff_pkiEzsignsignergroupID, *pkiEzsignsignergroupID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignsignergroupID, localVarBuff_pkiEzsignsignergroupID);



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
    cJSON *ObjectEzsignsignergroupAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignsignergroup_get_object_v2_response_t *elementToReturn = ezsignsignergroup_get_object_v2_response_parseFromJSON(ObjectEzsignsignergroupAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignsignergroupAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignsignergroupID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

