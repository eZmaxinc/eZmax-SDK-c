#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectSignatureAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Create a new Signature
//
// The endpoint allows to create one or many elements at once.
//
signature_create_object_v1_response_t*
ObjectSignatureAPI_signatureCreateObjectV1(apiClient_t *apiClient, signature_create_object_v1_request_t *signature_create_object_v1_request)
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
    char *localVarPath = strdup("/1/object/signature");





    // Body Param
    cJSON *localVarSingleItemJSON_signature_create_object_v1_request = NULL;
    if (signature_create_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_signature_create_object_v1_request = signature_create_object_v1_request_convertToJSON(signature_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_signature_create_object_v1_request);
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
    signature_create_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectSignatureAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = signature_create_object_v1_response_parseFromJSON(ObjectSignatureAPIlocalVarJSON);
        cJSON_Delete(ObjectSignatureAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_signature_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_signature_create_object_v1_request);
        localVarSingleItemJSON_signature_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an existing Signature
//
// 
//
signature_delete_object_v1_response_t*
ObjectSignatureAPI_signatureDeleteObjectV1(apiClient_t *apiClient, int *pkiSignatureID)
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
    char *localVarPath = strdup("/1/object/signature/{pkiSignatureID}");



    // Path Params
    long sizeOfPathParams_pkiSignatureID =  + sizeof("{ pkiSignatureID }") - 1;
    if(pkiSignatureID == 0){
        goto end;
    }
    char* localVarToReplace_pkiSignatureID = malloc(sizeOfPathParams_pkiSignatureID);
    snprintf(localVarToReplace_pkiSignatureID, sizeOfPathParams_pkiSignatureID, "{%s}", "pkiSignatureID");

    char localVarBuff_pkiSignatureID[256];
    snprintf(localVarBuff_pkiSignatureID, sizeof localVarBuff_pkiSignatureID, "%ld", (long)*pkiSignatureID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiSignatureID, localVarBuff_pkiSignatureID);



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
    signature_delete_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectSignatureAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = signature_delete_object_v1_response_parseFromJSON(ObjectSignatureAPIlocalVarJSON);
        cJSON_Delete(ObjectSignatureAPIlocalVarJSON);
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
    free(localVarToReplace_pkiSignatureID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Edit an existing Signature
//
// 
//
signature_edit_object_v1_response_t*
ObjectSignatureAPI_signatureEditObjectV1(apiClient_t *apiClient, int *pkiSignatureID, signature_edit_object_v1_request_t *signature_edit_object_v1_request)
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
    char *localVarPath = strdup("/1/object/signature/{pkiSignatureID}");



    // Path Params
    long sizeOfPathParams_pkiSignatureID =  + sizeof("{ pkiSignatureID }") - 1;
    if(pkiSignatureID == 0){
        goto end;
    }
    char* localVarToReplace_pkiSignatureID = malloc(sizeOfPathParams_pkiSignatureID);
    snprintf(localVarToReplace_pkiSignatureID, sizeOfPathParams_pkiSignatureID, "{%s}", "pkiSignatureID");

    char localVarBuff_pkiSignatureID[256];
    snprintf(localVarBuff_pkiSignatureID, sizeof localVarBuff_pkiSignatureID, "%ld", (long)*pkiSignatureID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiSignatureID, localVarBuff_pkiSignatureID);




    // Body Param
    cJSON *localVarSingleItemJSON_signature_edit_object_v1_request = NULL;
    if (signature_edit_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_signature_edit_object_v1_request = signature_edit_object_v1_request_convertToJSON(signature_edit_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_signature_edit_object_v1_request);
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
    signature_edit_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectSignatureAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = signature_edit_object_v1_response_parseFromJSON(ObjectSignatureAPIlocalVarJSON);
        cJSON_Delete(ObjectSignatureAPIlocalVarJSON);
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
    free(localVarToReplace_pkiSignatureID);
    if (localVarSingleItemJSON_signature_edit_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_signature_edit_object_v1_request);
        localVarSingleItemJSON_signature_edit_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Signature
//
// 
//
signature_get_object_v2_response_t*
ObjectSignatureAPI_signatureGetObjectV2(apiClient_t *apiClient, int *pkiSignatureID)
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
    char *localVarPath = strdup("/2/object/signature/{pkiSignatureID}");



    // Path Params
    long sizeOfPathParams_pkiSignatureID =  + sizeof("{ pkiSignatureID }") - 1;
    if(pkiSignatureID == 0){
        goto end;
    }
    char* localVarToReplace_pkiSignatureID = malloc(sizeOfPathParams_pkiSignatureID);
    snprintf(localVarToReplace_pkiSignatureID, sizeOfPathParams_pkiSignatureID, "{%s}", "pkiSignatureID");

    char localVarBuff_pkiSignatureID[256];
    snprintf(localVarBuff_pkiSignatureID, sizeof localVarBuff_pkiSignatureID, "%ld", (long)*pkiSignatureID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiSignatureID, localVarBuff_pkiSignatureID);



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
    signature_get_object_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectSignatureAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = signature_get_object_v2_response_parseFromJSON(ObjectSignatureAPIlocalVarJSON);
        cJSON_Delete(ObjectSignatureAPIlocalVarJSON);
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
    free(localVarToReplace_pkiSignatureID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Signature
//
// 
//
signature_get_object_v3_response_t*
ObjectSignatureAPI_signatureGetObjectV3(apiClient_t *apiClient, int *pkiSignatureID)
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
    char *localVarPath = strdup("/3/object/signature/{pkiSignatureID}");



    // Path Params
    long sizeOfPathParams_pkiSignatureID =  + sizeof("{ pkiSignatureID }") - 1;
    if(pkiSignatureID == 0){
        goto end;
    }
    char* localVarToReplace_pkiSignatureID = malloc(sizeOfPathParams_pkiSignatureID);
    snprintf(localVarToReplace_pkiSignatureID, sizeOfPathParams_pkiSignatureID, "{%s}", "pkiSignatureID");

    char localVarBuff_pkiSignatureID[256];
    snprintf(localVarBuff_pkiSignatureID, sizeof localVarBuff_pkiSignatureID, "%ld", (long)*pkiSignatureID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiSignatureID, localVarBuff_pkiSignatureID);



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
    signature_get_object_v3_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectSignatureAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = signature_get_object_v3_response_parseFromJSON(ObjectSignatureAPIlocalVarJSON);
        cJSON_Delete(ObjectSignatureAPIlocalVarJSON);
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
    free(localVarToReplace_pkiSignatureID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Signature initial SVG
//
// 
//
void
ObjectSignatureAPI_signatureGetSVGInitialsV1(apiClient_t *apiClient, int *pkiSignatureID)
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
    char *localVarPath = strdup("/1/object/signature/{pkiSignatureID}/getSVGInitials");



    // Path Params
    long sizeOfPathParams_pkiSignatureID =  + sizeof("{ pkiSignatureID }") - 1;
    if(pkiSignatureID == 0){
        goto end;
    }
    char* localVarToReplace_pkiSignatureID = malloc(sizeOfPathParams_pkiSignatureID);
    snprintf(localVarToReplace_pkiSignatureID, sizeOfPathParams_pkiSignatureID, "{%s}", "pkiSignatureID");

    char localVarBuff_pkiSignatureID[256];
    snprintf(localVarBuff_pkiSignatureID, sizeof localVarBuff_pkiSignatureID, "%ld", (long)*pkiSignatureID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiSignatureID, localVarBuff_pkiSignatureID);



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
    //if (apiClient->response_code == 302) {
    //    printf("%s\n","The user has been redirected");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_pkiSignatureID);

}

// Retrieve an existing Signature SVG
//
// 
//
void
ObjectSignatureAPI_signatureGetSVGSignatureV1(apiClient_t *apiClient, int *pkiSignatureID)
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
    char *localVarPath = strdup("/1/object/signature/{pkiSignatureID}/getSVGSignature");



    // Path Params
    long sizeOfPathParams_pkiSignatureID =  + sizeof("{ pkiSignatureID }") - 1;
    if(pkiSignatureID == 0){
        goto end;
    }
    char* localVarToReplace_pkiSignatureID = malloc(sizeOfPathParams_pkiSignatureID);
    snprintf(localVarToReplace_pkiSignatureID, sizeOfPathParams_pkiSignatureID, "{%s}", "pkiSignatureID");

    char localVarBuff_pkiSignatureID[256];
    snprintf(localVarBuff_pkiSignatureID, sizeof localVarBuff_pkiSignatureID, "%ld", (long)*pkiSignatureID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiSignatureID, localVarBuff_pkiSignatureID);



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
    //if (apiClient->response_code == 302) {
    //    printf("%s\n","The user has been redirected");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_pkiSignatureID);

}

