#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzsignfoldersignerassociationAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Creates an Url to allow embedded signing
//
// This endpoint creates an Url that can be used in a browser or embedded in an I-Frame to allow signing.  The signer Login type must be configured as Embedded.
//
ezsignfoldersignerassociation_create_embedded_url_v1_response_t*
ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationCreateEmbeddedUrlV1(apiClient_t *apiClient, int *pkiEzsignfoldersignerassociationID, ezsignfoldersignerassociation_create_embedded_url_v1_request_t *ezsignfoldersignerassociation_create_embedded_url_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}/createEmbeddedUrl");



    // Path Params
    long sizeOfPathParams_pkiEzsignfoldersignerassociationID =  + sizeof("{ pkiEzsignfoldersignerassociationID }") - 1;
    if(pkiEzsignfoldersignerassociationID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfoldersignerassociationID = malloc(sizeOfPathParams_pkiEzsignfoldersignerassociationID);
    snprintf(localVarToReplace_pkiEzsignfoldersignerassociationID, sizeOfPathParams_pkiEzsignfoldersignerassociationID, "{%s}", "pkiEzsignfoldersignerassociationID");

    char localVarBuff_pkiEzsignfoldersignerassociationID[256];
    snprintf(localVarBuff_pkiEzsignfoldersignerassociationID, sizeof localVarBuff_pkiEzsignfoldersignerassociationID, "%ld", (long)*pkiEzsignfoldersignerassociationID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfoldersignerassociationID, localVarBuff_pkiEzsignfoldersignerassociationID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsignfoldersignerassociation_create_embedded_url_v1_request = NULL;
    if (ezsignfoldersignerassociation_create_embedded_url_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsignfoldersignerassociation_create_embedded_url_v1_request = ezsignfoldersignerassociation_create_embedded_url_v1_request_convertToJSON(ezsignfoldersignerassociation_create_embedded_url_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignfoldersignerassociation_create_embedded_url_v1_request);
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
    ezsignfoldersignerassociation_create_embedded_url_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignfoldersignerassociationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignfoldersignerassociation_create_embedded_url_v1_response_parseFromJSON(ObjectEzsignfoldersignerassociationAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignfoldersignerassociationAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfoldersignerassociationID);
    if (localVarSingleItemJSON_ezsignfoldersignerassociation_create_embedded_url_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignfoldersignerassociation_create_embedded_url_v1_request);
        localVarSingleItemJSON_ezsignfoldersignerassociation_create_embedded_url_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Create a new Ezsignfoldersignerassociation
//
// The endpoint allows to create one or many elements at once.  The array can contain simple (Just the object) or compound (The object and its child) objects.  Creating compound elements allows to reduce the multiple requests to create all child objects.
//
ezsignfoldersignerassociation_create_object_v1_response_t*
ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationCreateObjectV1(apiClient_t *apiClient, list_t *ezsignfoldersignerassociation_create_object_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsignfoldersignerassociation");





    // Body Param
    //notstring
    cJSON *localVar_ezsignfoldersignerassociation_create_object_v1_request = NULL;
    cJSON *localVarItemJSON_ezsignfoldersignerassociation_create_object_v1_request = NULL;
    cJSON *localVarSingleItemJSON_ezsignfoldersignerassociation_create_object_v1_request = NULL;
    if (ezsignfoldersignerassociation_create_object_v1_request != NULL)
    {
        localVarItemJSON_ezsignfoldersignerassociation_create_object_v1_request = cJSON_CreateObject();
        localVarSingleItemJSON_ezsignfoldersignerassociation_create_object_v1_request = cJSON_AddArrayToObject(localVarItemJSON_ezsignfoldersignerassociation_create_object_v1_request, "ezsignfoldersignerassociation_create_object_v1_request");
        if (localVarSingleItemJSON_ezsignfoldersignerassociation_create_object_v1_request == NULL)
        {
            // nonprimitive container

            goto end;
        }
    }

    listEntry_t *ezsignfoldersignerassociation_create_object_v1_requestBodyListEntry;
    list_ForEach(ezsignfoldersignerassociation_create_object_v1_requestBodyListEntry, ezsignfoldersignerassociation_create_object_v1_request)
    {
        localVar_ezsignfoldersignerassociation_create_object_v1_request = ezsignfoldersignerassociation_create_object_v1_request_convertToJSON(ezsignfoldersignerassociation_create_object_v1_requestBodyListEntry->data);
        if(localVar_ezsignfoldersignerassociation_create_object_v1_request == NULL)
        {
            goto end;
        }
        cJSON_AddItemToArray(localVarSingleItemJSON_ezsignfoldersignerassociation_create_object_v1_request, localVar_ezsignfoldersignerassociation_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarItemJSON_ezsignfoldersignerassociation_create_object_v1_request);
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
    ezsignfoldersignerassociation_create_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignfoldersignerassociationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignfoldersignerassociation_create_object_v1_response_parseFromJSON(ObjectEzsignfoldersignerassociationAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignfoldersignerassociationAPIlocalVarJSON);
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
    if (localVarItemJSON_ezsignfoldersignerassociation_create_object_v1_request) {
        cJSON_Delete(localVarItemJSON_ezsignfoldersignerassociation_create_object_v1_request);
        localVarItemJSON_ezsignfoldersignerassociation_create_object_v1_request = NULL;
    }
    if (localVarSingleItemJSON_ezsignfoldersignerassociation_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignfoldersignerassociation_create_object_v1_request);
        localVarSingleItemJSON_ezsignfoldersignerassociation_create_object_v1_request = NULL;
    }
    if (localVar_ezsignfoldersignerassociation_create_object_v1_request) {
        cJSON_Delete(localVar_ezsignfoldersignerassociation_create_object_v1_request);
        localVar_ezsignfoldersignerassociation_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Create a new Ezsignfoldersignerassociation
//
// The endpoint allows to create one or many elements at once.
//
ezsignfoldersignerassociation_create_object_v2_response_t*
ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationCreateObjectV2(apiClient_t *apiClient, ezsignfoldersignerassociation_create_object_v2_request_t *ezsignfoldersignerassociation_create_object_v2_request)
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
    char *localVarPath = strdup("/2/object/ezsignfoldersignerassociation");





    // Body Param
    cJSON *localVarSingleItemJSON_ezsignfoldersignerassociation_create_object_v2_request = NULL;
    if (ezsignfoldersignerassociation_create_object_v2_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsignfoldersignerassociation_create_object_v2_request = ezsignfoldersignerassociation_create_object_v2_request_convertToJSON(ezsignfoldersignerassociation_create_object_v2_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignfoldersignerassociation_create_object_v2_request);
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
    ezsignfoldersignerassociation_create_object_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignfoldersignerassociationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignfoldersignerassociation_create_object_v2_response_parseFromJSON(ObjectEzsignfoldersignerassociationAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignfoldersignerassociationAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_ezsignfoldersignerassociation_create_object_v2_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignfoldersignerassociation_create_object_v2_request);
        localVarSingleItemJSON_ezsignfoldersignerassociation_create_object_v2_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an existing Ezsignfoldersignerassociation
//
// 
//
ezsignfoldersignerassociation_delete_object_v1_response_t*
ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsignfoldersignerassociationID)
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
    char *localVarPath = strdup("/1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}");



    // Path Params
    long sizeOfPathParams_pkiEzsignfoldersignerassociationID =  + sizeof("{ pkiEzsignfoldersignerassociationID }") - 1;
    if(pkiEzsignfoldersignerassociationID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfoldersignerassociationID = malloc(sizeOfPathParams_pkiEzsignfoldersignerassociationID);
    snprintf(localVarToReplace_pkiEzsignfoldersignerassociationID, sizeOfPathParams_pkiEzsignfoldersignerassociationID, "{%s}", "pkiEzsignfoldersignerassociationID");

    char localVarBuff_pkiEzsignfoldersignerassociationID[256];
    snprintf(localVarBuff_pkiEzsignfoldersignerassociationID, sizeof localVarBuff_pkiEzsignfoldersignerassociationID, "%ld", (long)*pkiEzsignfoldersignerassociationID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfoldersignerassociationID, localVarBuff_pkiEzsignfoldersignerassociationID);



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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    ezsignfoldersignerassociation_delete_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignfoldersignerassociationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignfoldersignerassociation_delete_object_v1_response_parseFromJSON(ObjectEzsignfoldersignerassociationAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignfoldersignerassociationAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfoldersignerassociationID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Edit an existing Ezsignfoldersignerassociation
//
// 
//
ezsignfoldersignerassociation_edit_object_v1_response_t*
ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationEditObjectV1(apiClient_t *apiClient, int *pkiEzsignfoldersignerassociationID, ezsignfoldersignerassociation_edit_object_v1_request_t *ezsignfoldersignerassociation_edit_object_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}");



    // Path Params
    long sizeOfPathParams_pkiEzsignfoldersignerassociationID =  + sizeof("{ pkiEzsignfoldersignerassociationID }") - 1;
    if(pkiEzsignfoldersignerassociationID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfoldersignerassociationID = malloc(sizeOfPathParams_pkiEzsignfoldersignerassociationID);
    snprintf(localVarToReplace_pkiEzsignfoldersignerassociationID, sizeOfPathParams_pkiEzsignfoldersignerassociationID, "{%s}", "pkiEzsignfoldersignerassociationID");

    char localVarBuff_pkiEzsignfoldersignerassociationID[256];
    snprintf(localVarBuff_pkiEzsignfoldersignerassociationID, sizeof localVarBuff_pkiEzsignfoldersignerassociationID, "%ld", (long)*pkiEzsignfoldersignerassociationID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfoldersignerassociationID, localVarBuff_pkiEzsignfoldersignerassociationID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsignfoldersignerassociation_edit_object_v1_request = NULL;
    if (ezsignfoldersignerassociation_edit_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsignfoldersignerassociation_edit_object_v1_request = ezsignfoldersignerassociation_edit_object_v1_request_convertToJSON(ezsignfoldersignerassociation_edit_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignfoldersignerassociation_edit_object_v1_request);
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
    ezsignfoldersignerassociation_edit_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignfoldersignerassociationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignfoldersignerassociation_edit_object_v1_response_parseFromJSON(ObjectEzsignfoldersignerassociationAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignfoldersignerassociationAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfoldersignerassociationID);
    if (localVarSingleItemJSON_ezsignfoldersignerassociation_edit_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignfoldersignerassociation_edit_object_v1_request);
        localVarSingleItemJSON_ezsignfoldersignerassociation_edit_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Disconnects the Ezsignfoldersignerassociation
//
// 
//
ezsignfoldersignerassociation_force_disconnect_v1_response_t*
ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationForceDisconnectV1(apiClient_t *apiClient, int *pkiEzsignfoldersignerassociationID, object_t *body)
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
    char *localVarPath = strdup("/1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}/forceDisconnect");



    // Path Params
    long sizeOfPathParams_pkiEzsignfoldersignerassociationID =  + sizeof("{ pkiEzsignfoldersignerassociationID }") - 1;
    if(pkiEzsignfoldersignerassociationID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfoldersignerassociationID = malloc(sizeOfPathParams_pkiEzsignfoldersignerassociationID);
    snprintf(localVarToReplace_pkiEzsignfoldersignerassociationID, sizeOfPathParams_pkiEzsignfoldersignerassociationID, "{%s}", "pkiEzsignfoldersignerassociationID");

    char localVarBuff_pkiEzsignfoldersignerassociationID[256];
    snprintf(localVarBuff_pkiEzsignfoldersignerassociationID, sizeof localVarBuff_pkiEzsignfoldersignerassociationID, "%ld", (long)*pkiEzsignfoldersignerassociationID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfoldersignerassociationID, localVarBuff_pkiEzsignfoldersignerassociationID);




    // Body Param
    cJSON *localVarSingleItemJSON_body = NULL;
    if (body != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_body = object_convertToJSON(body);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_body);
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
    ezsignfoldersignerassociation_force_disconnect_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignfoldersignerassociationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignfoldersignerassociation_force_disconnect_v1_response_parseFromJSON(ObjectEzsignfoldersignerassociationAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignfoldersignerassociationAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfoldersignerassociationID);
    if (localVarSingleItemJSON_body) {
        cJSON_Delete(localVarSingleItemJSON_body);
        localVarSingleItemJSON_body = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve a Login Url to allow In-Person signing
//
// This endpoint returns a Login Url that can be used in a browser or embedded in an I-Frame to allow in person signing.  The signer Login type must be configured as In-Person.
//
ezsignfoldersignerassociation_get_in_person_login_url_v1_response_t*
ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationGetInPersonLoginUrlV1(apiClient_t *apiClient, int *pkiEzsignfoldersignerassociationID)
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
    char *localVarPath = strdup("/1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}/getInPersonLoginUrl");



    // Path Params
    long sizeOfPathParams_pkiEzsignfoldersignerassociationID =  + sizeof("{ pkiEzsignfoldersignerassociationID }") - 1;
    if(pkiEzsignfoldersignerassociationID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfoldersignerassociationID = malloc(sizeOfPathParams_pkiEzsignfoldersignerassociationID);
    snprintf(localVarToReplace_pkiEzsignfoldersignerassociationID, sizeOfPathParams_pkiEzsignfoldersignerassociationID, "{%s}", "pkiEzsignfoldersignerassociationID");

    char localVarBuff_pkiEzsignfoldersignerassociationID[256];
    snprintf(localVarBuff_pkiEzsignfoldersignerassociationID, sizeof localVarBuff_pkiEzsignfoldersignerassociationID, "%ld", (long)*pkiEzsignfoldersignerassociationID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfoldersignerassociationID, localVarBuff_pkiEzsignfoldersignerassociationID);



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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    ezsignfoldersignerassociation_get_in_person_login_url_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignfoldersignerassociationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignfoldersignerassociation_get_in_person_login_url_v1_response_parseFromJSON(ObjectEzsignfoldersignerassociationAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignfoldersignerassociationAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfoldersignerassociationID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsignfoldersignerassociation
//
// 
//
ezsignfoldersignerassociation_get_object_v1_response_t*
ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationGetObjectV1(apiClient_t *apiClient, int *pkiEzsignfoldersignerassociationID)
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
    char *localVarPath = strdup("/1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}");



    // Path Params
    long sizeOfPathParams_pkiEzsignfoldersignerassociationID =  + sizeof("{ pkiEzsignfoldersignerassociationID }") - 1;
    if(pkiEzsignfoldersignerassociationID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfoldersignerassociationID = malloc(sizeOfPathParams_pkiEzsignfoldersignerassociationID);
    snprintf(localVarToReplace_pkiEzsignfoldersignerassociationID, sizeOfPathParams_pkiEzsignfoldersignerassociationID, "{%s}", "pkiEzsignfoldersignerassociationID");

    char localVarBuff_pkiEzsignfoldersignerassociationID[256];
    snprintf(localVarBuff_pkiEzsignfoldersignerassociationID, sizeof localVarBuff_pkiEzsignfoldersignerassociationID, "%ld", (long)*pkiEzsignfoldersignerassociationID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfoldersignerassociationID, localVarBuff_pkiEzsignfoldersignerassociationID);



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
    ezsignfoldersignerassociation_get_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignfoldersignerassociationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignfoldersignerassociation_get_object_v1_response_parseFromJSON(ObjectEzsignfoldersignerassociationAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignfoldersignerassociationAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfoldersignerassociationID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsignfoldersignerassociation
//
// 
//
ezsignfoldersignerassociation_get_object_v2_response_t*
ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationGetObjectV2(apiClient_t *apiClient, int *pkiEzsignfoldersignerassociationID)
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
    char *localVarPath = strdup("/2/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}");



    // Path Params
    long sizeOfPathParams_pkiEzsignfoldersignerassociationID =  + sizeof("{ pkiEzsignfoldersignerassociationID }") - 1;
    if(pkiEzsignfoldersignerassociationID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfoldersignerassociationID = malloc(sizeOfPathParams_pkiEzsignfoldersignerassociationID);
    snprintf(localVarToReplace_pkiEzsignfoldersignerassociationID, sizeOfPathParams_pkiEzsignfoldersignerassociationID, "{%s}", "pkiEzsignfoldersignerassociationID");

    char localVarBuff_pkiEzsignfoldersignerassociationID[256];
    snprintf(localVarBuff_pkiEzsignfoldersignerassociationID, sizeof localVarBuff_pkiEzsignfoldersignerassociationID, "%ld", (long)*pkiEzsignfoldersignerassociationID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfoldersignerassociationID, localVarBuff_pkiEzsignfoldersignerassociationID);



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
    ezsignfoldersignerassociation_get_object_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignfoldersignerassociationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignfoldersignerassociation_get_object_v2_response_parseFromJSON(ObjectEzsignfoldersignerassociationAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignfoldersignerassociationAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfoldersignerassociationID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Patch an existing Ezsignfoldersignerassociation
//
ezsignfoldersignerassociation_patch_object_v1_response_t*
ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationPatchObjectV1(apiClient_t *apiClient, int *pkiEzsignfoldersignerassociationID, ezsignfoldersignerassociation_patch_object_v1_request_t *ezsignfoldersignerassociation_patch_object_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}");



    // Path Params
    long sizeOfPathParams_pkiEzsignfoldersignerassociationID =  + sizeof("{ pkiEzsignfoldersignerassociationID }") - 1;
    if(pkiEzsignfoldersignerassociationID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfoldersignerassociationID = malloc(sizeOfPathParams_pkiEzsignfoldersignerassociationID);
    snprintf(localVarToReplace_pkiEzsignfoldersignerassociationID, sizeOfPathParams_pkiEzsignfoldersignerassociationID, "{%s}", "pkiEzsignfoldersignerassociationID");

    char localVarBuff_pkiEzsignfoldersignerassociationID[256];
    snprintf(localVarBuff_pkiEzsignfoldersignerassociationID, sizeof localVarBuff_pkiEzsignfoldersignerassociationID, "%ld", (long)*pkiEzsignfoldersignerassociationID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfoldersignerassociationID, localVarBuff_pkiEzsignfoldersignerassociationID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsignfoldersignerassociation_patch_object_v1_request = NULL;
    if (ezsignfoldersignerassociation_patch_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsignfoldersignerassociation_patch_object_v1_request = ezsignfoldersignerassociation_patch_object_v1_request_convertToJSON(ezsignfoldersignerassociation_patch_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignfoldersignerassociation_patch_object_v1_request);
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
                    "PATCH");

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
    ezsignfoldersignerassociation_patch_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignfoldersignerassociationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignfoldersignerassociation_patch_object_v1_response_parseFromJSON(ObjectEzsignfoldersignerassociationAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignfoldersignerassociationAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfoldersignerassociationID);
    if (localVarSingleItemJSON_ezsignfoldersignerassociation_patch_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignfoldersignerassociation_patch_object_v1_request);
        localVarSingleItemJSON_ezsignfoldersignerassociation_patch_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Reassign remaining unsigned signatures and forms
//
// Reassign remaining unsigned signatures and forms
//
ezsignfoldersignerassociation_reassign_v1_response_t*
ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationReassignV1(apiClient_t *apiClient, int *pkiEzsignfoldersignerassociationID, ezsignfoldersignerassociation_reassign_v1_request_t *ezsignfoldersignerassociation_reassign_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}/reassign");



    // Path Params
    long sizeOfPathParams_pkiEzsignfoldersignerassociationID =  + sizeof("{ pkiEzsignfoldersignerassociationID }") - 1;
    if(pkiEzsignfoldersignerassociationID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfoldersignerassociationID = malloc(sizeOfPathParams_pkiEzsignfoldersignerassociationID);
    snprintf(localVarToReplace_pkiEzsignfoldersignerassociationID, sizeOfPathParams_pkiEzsignfoldersignerassociationID, "{%s}", "pkiEzsignfoldersignerassociationID");

    char localVarBuff_pkiEzsignfoldersignerassociationID[256];
    snprintf(localVarBuff_pkiEzsignfoldersignerassociationID, sizeof localVarBuff_pkiEzsignfoldersignerassociationID, "%ld", (long)*pkiEzsignfoldersignerassociationID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfoldersignerassociationID, localVarBuff_pkiEzsignfoldersignerassociationID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsignfoldersignerassociation_reassign_v1_request = NULL;
    if (ezsignfoldersignerassociation_reassign_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsignfoldersignerassociation_reassign_v1_request = ezsignfoldersignerassociation_reassign_v1_request_convertToJSON(ezsignfoldersignerassociation_reassign_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignfoldersignerassociation_reassign_v1_request);
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
    ezsignfoldersignerassociation_reassign_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignfoldersignerassociationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignfoldersignerassociation_reassign_v1_response_parseFromJSON(ObjectEzsignfoldersignerassociationAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignfoldersignerassociationAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfoldersignerassociationID);
    if (localVarSingleItemJSON_ezsignfoldersignerassociation_reassign_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignfoldersignerassociation_reassign_v1_request);
        localVarSingleItemJSON_ezsignfoldersignerassociation_reassign_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

