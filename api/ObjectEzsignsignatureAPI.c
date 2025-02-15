#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzsignsignatureAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Create a new Ezsignsignature
//
// The endpoint allows to create one or many elements at once.  The array can contain simple (Just the object) or compound (The object and its child) objects.  Creating compound elements allows to reduce the multiple requests to create all child objects.
//
ezsignsignature_create_object_v1_response_t*
ObjectEzsignsignatureAPI_ezsignsignatureCreateObjectV1(apiClient_t *apiClient, list_t *ezsignsignature_create_object_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsignsignature");





    // Body Param
    //notstring
    cJSON *localVar_ezsignsignature_create_object_v1_request = NULL;
    cJSON *localVarItemJSON_ezsignsignature_create_object_v1_request = NULL;
    cJSON *localVarSingleItemJSON_ezsignsignature_create_object_v1_request = NULL;
    if (ezsignsignature_create_object_v1_request != NULL)
    {
        localVarItemJSON_ezsignsignature_create_object_v1_request = cJSON_CreateObject();
        localVarSingleItemJSON_ezsignsignature_create_object_v1_request = cJSON_AddArrayToObject(localVarItemJSON_ezsignsignature_create_object_v1_request, "ezsignsignature_create_object_v1_request");
        if (localVarSingleItemJSON_ezsignsignature_create_object_v1_request == NULL)
        {
            // nonprimitive container

            goto end;
        }
    }

    listEntry_t *ezsignsignature_create_object_v1_requestBodyListEntry;
    list_ForEach(ezsignsignature_create_object_v1_requestBodyListEntry, ezsignsignature_create_object_v1_request)
    {
        localVar_ezsignsignature_create_object_v1_request = ezsignsignature_create_object_v1_request_convertToJSON(ezsignsignature_create_object_v1_requestBodyListEntry->data);
        if(localVar_ezsignsignature_create_object_v1_request == NULL)
        {
            goto end;
        }
        cJSON_AddItemToArray(localVarSingleItemJSON_ezsignsignature_create_object_v1_request, localVar_ezsignsignature_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarItemJSON_ezsignsignature_create_object_v1_request);
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
    ezsignsignature_create_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignsignatureAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignsignature_create_object_v1_response_parseFromJSON(ObjectEzsignsignatureAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignsignatureAPIlocalVarJSON);
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
    if (localVarItemJSON_ezsignsignature_create_object_v1_request) {
        cJSON_Delete(localVarItemJSON_ezsignsignature_create_object_v1_request);
        localVarItemJSON_ezsignsignature_create_object_v1_request = NULL;
    }
    if (localVarSingleItemJSON_ezsignsignature_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignsignature_create_object_v1_request);
        localVarSingleItemJSON_ezsignsignature_create_object_v1_request = NULL;
    }
    if (localVar_ezsignsignature_create_object_v1_request) {
        cJSON_Delete(localVar_ezsignsignature_create_object_v1_request);
        localVar_ezsignsignature_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Create a new Ezsignsignature
//
// The endpoint allows to create one or many elements at once.
//
ezsignsignature_create_object_v2_response_t*
ObjectEzsignsignatureAPI_ezsignsignatureCreateObjectV2(apiClient_t *apiClient, ezsignsignature_create_object_v2_request_t *ezsignsignature_create_object_v2_request)
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
    char *localVarPath = strdup("/2/object/ezsignsignature");





    // Body Param
    cJSON *localVarSingleItemJSON_ezsignsignature_create_object_v2_request = NULL;
    if (ezsignsignature_create_object_v2_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsignsignature_create_object_v2_request = ezsignsignature_create_object_v2_request_convertToJSON(ezsignsignature_create_object_v2_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignsignature_create_object_v2_request);
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
    ezsignsignature_create_object_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignsignatureAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignsignature_create_object_v2_response_parseFromJSON(ObjectEzsignsignatureAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignsignatureAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_ezsignsignature_create_object_v2_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignsignature_create_object_v2_request);
        localVarSingleItemJSON_ezsignsignature_create_object_v2_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Create a new Ezsignsignature
//
// The endpoint allows to create one or many elements at once.
//
ezsignsignature_create_object_v3_response_t*
ObjectEzsignsignatureAPI_ezsignsignatureCreateObjectV3(apiClient_t *apiClient, ezsignsignature_create_object_v3_request_t *ezsignsignature_create_object_v3_request)
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
    char *localVarPath = strdup("/3/object/ezsignsignature");





    // Body Param
    cJSON *localVarSingleItemJSON_ezsignsignature_create_object_v3_request = NULL;
    if (ezsignsignature_create_object_v3_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsignsignature_create_object_v3_request = ezsignsignature_create_object_v3_request_convertToJSON(ezsignsignature_create_object_v3_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignsignature_create_object_v3_request);
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
    ezsignsignature_create_object_v3_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignsignatureAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignsignature_create_object_v3_response_parseFromJSON(ObjectEzsignsignatureAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignsignatureAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_ezsignsignature_create_object_v3_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignsignature_create_object_v3_request);
        localVarSingleItemJSON_ezsignsignature_create_object_v3_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an existing Ezsignsignature
//
// 
//
ezsignsignature_delete_object_v1_response_t*
ObjectEzsignsignatureAPI_ezsignsignatureDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsignsignatureID)
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
    char *localVarPath = strdup("/1/object/ezsignsignature/{pkiEzsignsignatureID}");



    // Path Params
    long sizeOfPathParams_pkiEzsignsignatureID =  + sizeof("{ pkiEzsignsignatureID }") - 1;
    if(pkiEzsignsignatureID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignsignatureID = malloc(sizeOfPathParams_pkiEzsignsignatureID);
    snprintf(localVarToReplace_pkiEzsignsignatureID, sizeOfPathParams_pkiEzsignsignatureID, "{%s}", "pkiEzsignsignatureID");

    char localVarBuff_pkiEzsignsignatureID[256];
    snprintf(localVarBuff_pkiEzsignsignatureID, sizeof localVarBuff_pkiEzsignsignatureID, "%ld", (long)*pkiEzsignsignatureID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignsignatureID, localVarBuff_pkiEzsignsignatureID);



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
    ezsignsignature_delete_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignsignatureAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignsignature_delete_object_v1_response_parseFromJSON(ObjectEzsignsignatureAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignsignatureAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignsignatureID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Edit an existing Ezsignsignature
//
// 
//
ezsignsignature_edit_object_v2_response_t*
ObjectEzsignsignatureAPI_ezsignsignatureEditObjectV2(apiClient_t *apiClient, int *pkiEzsignsignatureID, ezsignsignature_edit_object_v2_request_t *ezsignsignature_edit_object_v2_request)
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
    char *localVarPath = strdup("/2/object/ezsignsignature/{pkiEzsignsignatureID}");



    // Path Params
    long sizeOfPathParams_pkiEzsignsignatureID =  + sizeof("{ pkiEzsignsignatureID }") - 1;
    if(pkiEzsignsignatureID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignsignatureID = malloc(sizeOfPathParams_pkiEzsignsignatureID);
    snprintf(localVarToReplace_pkiEzsignsignatureID, sizeOfPathParams_pkiEzsignsignatureID, "{%s}", "pkiEzsignsignatureID");

    char localVarBuff_pkiEzsignsignatureID[256];
    snprintf(localVarBuff_pkiEzsignsignatureID, sizeof localVarBuff_pkiEzsignsignatureID, "%ld", (long)*pkiEzsignsignatureID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignsignatureID, localVarBuff_pkiEzsignsignatureID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsignsignature_edit_object_v2_request = NULL;
    if (ezsignsignature_edit_object_v2_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsignsignature_edit_object_v2_request = ezsignsignature_edit_object_v2_request_convertToJSON(ezsignsignature_edit_object_v2_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignsignature_edit_object_v2_request);
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
    ezsignsignature_edit_object_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignsignatureAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignsignature_edit_object_v2_response_parseFromJSON(ObjectEzsignsignatureAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignsignatureAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignsignatureID);
    if (localVarSingleItemJSON_ezsignsignature_edit_object_v2_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignsignature_edit_object_v2_request);
        localVarSingleItemJSON_ezsignsignature_edit_object_v2_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsignsignature's Ezsignsignatureattachments
//
ezsignsignature_get_ezsignsignatureattachment_v1_response_t*
ObjectEzsignsignatureAPI_ezsignsignatureGetEzsignsignatureattachmentV1(apiClient_t *apiClient, int *pkiEzsignsignatureID)
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
    char *localVarPath = strdup("/1/object/ezsignsignature/{pkiEzsignsignatureID}/getEzsignsignatureattachment");



    // Path Params
    long sizeOfPathParams_pkiEzsignsignatureID =  + sizeof("{ pkiEzsignsignatureID }") - 1;
    if(pkiEzsignsignatureID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignsignatureID = malloc(sizeOfPathParams_pkiEzsignsignatureID);
    snprintf(localVarToReplace_pkiEzsignsignatureID, sizeOfPathParams_pkiEzsignsignatureID, "{%s}", "pkiEzsignsignatureID");

    char localVarBuff_pkiEzsignsignatureID[256];
    snprintf(localVarBuff_pkiEzsignsignatureID, sizeof localVarBuff_pkiEzsignsignatureID, "%ld", (long)*pkiEzsignsignatureID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignsignatureID, localVarBuff_pkiEzsignsignatureID);



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
    ezsignsignature_get_ezsignsignatureattachment_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignsignatureAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignsignature_get_ezsignsignatureattachment_v1_response_parseFromJSON(ObjectEzsignsignatureAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignsignatureAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignsignatureID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve all automatic Ezsignsignatures
//
// Return all the Ezsignsignatures that can be signed by the current user
//
ezsignsignature_get_ezsignsignatures_automatic_v1_response_t*
ObjectEzsignsignatureAPI_ezsignsignatureGetEzsignsignaturesAutomaticV1(apiClient_t *apiClient)
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
    char *localVarPath = strdup("/1/object/ezsignsignature/getEzsignsignaturesAutomatic");




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
    //nonprimitive not container
    ezsignsignature_get_ezsignsignatures_automatic_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignsignatureAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignsignature_get_ezsignsignatures_automatic_v1_response_parseFromJSON(ObjectEzsignsignatureAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignsignatureAPIlocalVarJSON);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsignsignature
//
// 
//
ezsignsignature_get_object_v3_response_t*
ObjectEzsignsignatureAPI_ezsignsignatureGetObjectV3(apiClient_t *apiClient, int *pkiEzsignsignatureID)
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
    char *localVarPath = strdup("/3/object/ezsignsignature/{pkiEzsignsignatureID}");



    // Path Params
    long sizeOfPathParams_pkiEzsignsignatureID =  + sizeof("{ pkiEzsignsignatureID }") - 1;
    if(pkiEzsignsignatureID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignsignatureID = malloc(sizeOfPathParams_pkiEzsignsignatureID);
    snprintf(localVarToReplace_pkiEzsignsignatureID, sizeOfPathParams_pkiEzsignsignatureID, "{%s}", "pkiEzsignsignatureID");

    char localVarBuff_pkiEzsignsignatureID[256];
    snprintf(localVarBuff_pkiEzsignsignatureID, sizeof localVarBuff_pkiEzsignsignatureID, "%ld", (long)*pkiEzsignsignatureID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignsignatureID, localVarBuff_pkiEzsignsignatureID);



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
    ezsignsignature_get_object_v3_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignsignatureAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignsignature_get_object_v3_response_parseFromJSON(ObjectEzsignsignatureAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignsignatureAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignsignatureID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Sign the Ezsignsignature
//
// 
//
ezsignsignature_sign_v1_response_t*
ObjectEzsignsignatureAPI_ezsignsignatureSignV1(apiClient_t *apiClient, int *pkiEzsignsignatureID, ezsignsignature_sign_v1_request_t *ezsignsignature_sign_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsignsignature/{pkiEzsignsignatureID}/sign");



    // Path Params
    long sizeOfPathParams_pkiEzsignsignatureID =  + sizeof("{ pkiEzsignsignatureID }") - 1;
    if(pkiEzsignsignatureID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignsignatureID = malloc(sizeOfPathParams_pkiEzsignsignatureID);
    snprintf(localVarToReplace_pkiEzsignsignatureID, sizeOfPathParams_pkiEzsignsignatureID, "{%s}", "pkiEzsignsignatureID");

    char localVarBuff_pkiEzsignsignatureID[256];
    snprintf(localVarBuff_pkiEzsignsignatureID, sizeof localVarBuff_pkiEzsignsignatureID, "%ld", (long)*pkiEzsignsignatureID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignsignatureID, localVarBuff_pkiEzsignsignatureID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsignsignature_sign_v1_request = NULL;
    if (ezsignsignature_sign_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsignsignature_sign_v1_request = ezsignsignature_sign_v1_request_convertToJSON(ezsignsignature_sign_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignsignature_sign_v1_request);
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
    ezsignsignature_sign_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignsignatureAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignsignature_sign_v1_response_parseFromJSON(ObjectEzsignsignatureAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignsignatureAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignsignatureID);
    if (localVarSingleItemJSON_ezsignsignature_sign_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignsignature_sign_v1_request);
        localVarSingleItemJSON_ezsignsignature_sign_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

