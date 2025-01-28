#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzsignsignergroupAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


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
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/1/object/ezsignsignergroup");





    // Body Param
    cJSON *localVarSingleItemJSON_ezsignsignergroup_create_object_v1_request = NULL;
    if (ezsignsignergroup_create_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsignsignergroup_create_object_v1_request = ezsignsignergroup_create_object_v1_request_convertToJSON(ezsignsignergroup_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignsignergroup_create_object_v1_request);
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
    ezsignsignergroup_create_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignsignergroupAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignsignergroup_create_object_v1_response_parseFromJSON(ObjectEzsignsignergroupAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignsignergroupAPIlocalVarJSON);
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
ezsignsignergroup_delete_object_v1_response_t*
ObjectEzsignsignergroupAPI_ezsignsignergroupDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsignsignergroupID)
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
    char *localVarPath = strdup("/1/object/ezsignsignergroup/{pkiEzsignsignergroupID}");



    // Path Params
    long sizeOfPathParams_pkiEzsignsignergroupID =  + sizeof("{ pkiEzsignsignergroupID }") - 1;
    if(pkiEzsignsignergroupID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignsignergroupID = malloc(sizeOfPathParams_pkiEzsignsignergroupID);
    snprintf(localVarToReplace_pkiEzsignsignergroupID, sizeOfPathParams_pkiEzsignsignergroupID, "{%s}", "pkiEzsignsignergroupID");

    char localVarBuff_pkiEzsignsignergroupID[256];
    snprintf(localVarBuff_pkiEzsignsignergroupID, sizeof localVarBuff_pkiEzsignsignergroupID, "%ld", (long)*pkiEzsignsignergroupID);

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
    ezsignsignergroup_delete_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignsignergroupAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignsignergroup_delete_object_v1_response_parseFromJSON(ObjectEzsignsignergroupAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignsignergroupAPIlocalVarJSON);
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
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/1/object/ezsignsignergroup/{pkiEzsignsignergroupID}/editEzsignsignergroupmemberships");



    // Path Params
    long sizeOfPathParams_pkiEzsignsignergroupID =  + sizeof("{ pkiEzsignsignergroupID }") - 1;
    if(pkiEzsignsignergroupID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignsignergroupID = malloc(sizeOfPathParams_pkiEzsignsignergroupID);
    snprintf(localVarToReplace_pkiEzsignsignergroupID, sizeOfPathParams_pkiEzsignsignergroupID, "{%s}", "pkiEzsignsignergroupID");

    char localVarBuff_pkiEzsignsignergroupID[256];
    snprintf(localVarBuff_pkiEzsignsignergroupID, sizeof localVarBuff_pkiEzsignsignergroupID, "%ld", (long)*pkiEzsignsignergroupID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignsignergroupID, localVarBuff_pkiEzsignsignergroupID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request = NULL;
    if (ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request = ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_convertToJSON(ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request);
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
    ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignsignergroupAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_parseFromJSON(ObjectEzsignsignergroupAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignsignergroupAPIlocalVarJSON);
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
ezsignsignergroup_edit_object_v1_response_t*
ObjectEzsignsignergroupAPI_ezsignsignergroupEditObjectV1(apiClient_t *apiClient, int *pkiEzsignsignergroupID, ezsignsignergroup_edit_object_v1_request_t *ezsignsignergroup_edit_object_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsignsignergroup/{pkiEzsignsignergroupID}");



    // Path Params
    long sizeOfPathParams_pkiEzsignsignergroupID =  + sizeof("{ pkiEzsignsignergroupID }") - 1;
    if(pkiEzsignsignergroupID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignsignergroupID = malloc(sizeOfPathParams_pkiEzsignsignergroupID);
    snprintf(localVarToReplace_pkiEzsignsignergroupID, sizeOfPathParams_pkiEzsignsignergroupID, "{%s}", "pkiEzsignsignergroupID");

    char localVarBuff_pkiEzsignsignergroupID[256];
    snprintf(localVarBuff_pkiEzsignsignergroupID, sizeof localVarBuff_pkiEzsignsignergroupID, "%ld", (long)*pkiEzsignsignergroupID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignsignergroupID, localVarBuff_pkiEzsignsignergroupID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsignsignergroup_edit_object_v1_request = NULL;
    if (ezsignsignergroup_edit_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsignsignergroup_edit_object_v1_request = ezsignsignergroup_edit_object_v1_request_convertToJSON(ezsignsignergroup_edit_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignsignergroup_edit_object_v1_request);
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
    ezsignsignergroup_edit_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignsignergroupAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignsignergroup_edit_object_v1_response_parseFromJSON(ObjectEzsignsignergroupAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignsignergroupAPIlocalVarJSON);
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
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/1/object/ezsignsignergroup/{pkiEzsignsignergroupID}/getEzsignsignergroupmemberships");



    // Path Params
    long sizeOfPathParams_pkiEzsignsignergroupID =  + sizeof("{ pkiEzsignsignergroupID }") - 1;
    if(pkiEzsignsignergroupID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignsignergroupID = malloc(sizeOfPathParams_pkiEzsignsignergroupID);
    snprintf(localVarToReplace_pkiEzsignsignergroupID, sizeOfPathParams_pkiEzsignsignergroupID, "{%s}", "pkiEzsignsignergroupID");

    char localVarBuff_pkiEzsignsignergroupID[256];
    snprintf(localVarBuff_pkiEzsignsignergroupID, sizeof localVarBuff_pkiEzsignsignergroupID, "%ld", (long)*pkiEzsignsignergroupID);

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
    ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignsignergroupAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_parseFromJSON(ObjectEzsignsignergroupAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignsignergroupAPIlocalVarJSON);
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
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/2/object/ezsignsignergroup/{pkiEzsignsignergroupID}");



    // Path Params
    long sizeOfPathParams_pkiEzsignsignergroupID =  + sizeof("{ pkiEzsignsignergroupID }") - 1;
    if(pkiEzsignsignergroupID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignsignergroupID = malloc(sizeOfPathParams_pkiEzsignsignergroupID);
    snprintf(localVarToReplace_pkiEzsignsignergroupID, sizeOfPathParams_pkiEzsignsignergroupID, "{%s}", "pkiEzsignsignergroupID");

    char localVarBuff_pkiEzsignsignergroupID[256];
    snprintf(localVarBuff_pkiEzsignsignergroupID, sizeof localVarBuff_pkiEzsignsignergroupID, "%ld", (long)*pkiEzsignsignergroupID);

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
    ezsignsignergroup_get_object_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignsignergroupAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignsignergroup_get_object_v2_response_parseFromJSON(ObjectEzsignsignergroupAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignsignergroupAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignsignergroupID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

