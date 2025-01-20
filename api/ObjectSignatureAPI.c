#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectSignatureAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


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

    // create the path
    long sizeOfPath = strlen("/1/object/signature")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/signature");




    // Body Param
    cJSON *localVarSingleItemJSON_signature_create_object_v1_request = NULL;
    if (signature_create_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_signature_create_object_v1_request = signature_create_object_v1_request_convertToJSON(signature_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_signature_create_object_v1_request);
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
    cJSON *ObjectSignatureAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    signature_create_object_v1_response_t *elementToReturn = signature_create_object_v1_response_parseFromJSON(ObjectSignatureAPIlocalVarJSON);
    cJSON_Delete(ObjectSignatureAPIlocalVarJSON);
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
common_response_t*
ObjectSignatureAPI_signatureDeleteObjectV1(apiClient_t *apiClient, int *pkiSignatureID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/signature/{pkiSignatureID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/signature/{pkiSignatureID}");


    // Path Params
    long sizeOfPathParams_pkiSignatureID =  + strlen("{ pkiSignatureID }");
    if(pkiSignatureID == 0){
        goto end;
    }
    char* localVarToReplace_pkiSignatureID = malloc(sizeOfPathParams_pkiSignatureID);
    snprintf(localVarToReplace_pkiSignatureID, sizeOfPathParams_pkiSignatureID, "{%s}", "pkiSignatureID");

    char localVarBuff_pkiSignatureID[256];
    intToStr(localVarBuff_pkiSignatureID, *pkiSignatureID);

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
    cJSON *ObjectSignatureAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    common_response_t *elementToReturn = common_response_parseFromJSON(ObjectSignatureAPIlocalVarJSON);
    cJSON_Delete(ObjectSignatureAPIlocalVarJSON);
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
common_response_t*
ObjectSignatureAPI_signatureEditObjectV1(apiClient_t *apiClient, int *pkiSignatureID, signature_edit_object_v1_request_t *signature_edit_object_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/signature/{pkiSignatureID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/signature/{pkiSignatureID}");


    // Path Params
    long sizeOfPathParams_pkiSignatureID =  + strlen("{ pkiSignatureID }");
    if(pkiSignatureID == 0){
        goto end;
    }
    char* localVarToReplace_pkiSignatureID = malloc(sizeOfPathParams_pkiSignatureID);
    snprintf(localVarToReplace_pkiSignatureID, sizeOfPathParams_pkiSignatureID, "{%s}", "pkiSignatureID");

    char localVarBuff_pkiSignatureID[256];
    intToStr(localVarBuff_pkiSignatureID, *pkiSignatureID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiSignatureID, localVarBuff_pkiSignatureID);




    // Body Param
    cJSON *localVarSingleItemJSON_signature_edit_object_v1_request = NULL;
    if (signature_edit_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_signature_edit_object_v1_request = signature_edit_object_v1_request_convertToJSON(signature_edit_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_signature_edit_object_v1_request);
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
    cJSON *ObjectSignatureAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    common_response_t *elementToReturn = common_response_parseFromJSON(ObjectSignatureAPIlocalVarJSON);
    cJSON_Delete(ObjectSignatureAPIlocalVarJSON);
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

    // create the path
    long sizeOfPath = strlen("/2/object/signature/{pkiSignatureID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/2/object/signature/{pkiSignatureID}");


    // Path Params
    long sizeOfPathParams_pkiSignatureID =  + strlen("{ pkiSignatureID }");
    if(pkiSignatureID == 0){
        goto end;
    }
    char* localVarToReplace_pkiSignatureID = malloc(sizeOfPathParams_pkiSignatureID);
    snprintf(localVarToReplace_pkiSignatureID, sizeOfPathParams_pkiSignatureID, "{%s}", "pkiSignatureID");

    char localVarBuff_pkiSignatureID[256];
    intToStr(localVarBuff_pkiSignatureID, *pkiSignatureID);

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
    cJSON *ObjectSignatureAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    signature_get_object_v2_response_t *elementToReturn = signature_get_object_v2_response_parseFromJSON(ObjectSignatureAPIlocalVarJSON);
    cJSON_Delete(ObjectSignatureAPIlocalVarJSON);
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

    // create the path
    long sizeOfPath = strlen("/3/object/signature/{pkiSignatureID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/3/object/signature/{pkiSignatureID}");


    // Path Params
    long sizeOfPathParams_pkiSignatureID =  + strlen("{ pkiSignatureID }");
    if(pkiSignatureID == 0){
        goto end;
    }
    char* localVarToReplace_pkiSignatureID = malloc(sizeOfPathParams_pkiSignatureID);
    snprintf(localVarToReplace_pkiSignatureID, sizeOfPathParams_pkiSignatureID, "{%s}", "pkiSignatureID");

    char localVarBuff_pkiSignatureID[256];
    intToStr(localVarBuff_pkiSignatureID, *pkiSignatureID);

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
    cJSON *ObjectSignatureAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    signature_get_object_v3_response_t *elementToReturn = signature_get_object_v3_response_parseFromJSON(ObjectSignatureAPIlocalVarJSON);
    cJSON_Delete(ObjectSignatureAPIlocalVarJSON);
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

    // create the path
    long sizeOfPath = strlen("/1/object/signature/{pkiSignatureID}/getSVGInitials")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/signature/{pkiSignatureID}/getSVGInitials");


    // Path Params
    long sizeOfPathParams_pkiSignatureID =  + strlen("{ pkiSignatureID }");
    if(pkiSignatureID == 0){
        goto end;
    }
    char* localVarToReplace_pkiSignatureID = malloc(sizeOfPathParams_pkiSignatureID);
    snprintf(localVarToReplace_pkiSignatureID, sizeOfPathParams_pkiSignatureID, "{%s}", "pkiSignatureID");

    char localVarBuff_pkiSignatureID[256];
    intToStr(localVarBuff_pkiSignatureID, *pkiSignatureID);

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

    // create the path
    long sizeOfPath = strlen("/1/object/signature/{pkiSignatureID}/getSVGSignature")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/signature/{pkiSignatureID}/getSVGSignature");


    // Path Params
    long sizeOfPathParams_pkiSignatureID =  + strlen("{ pkiSignatureID }");
    if(pkiSignatureID == 0){
        goto end;
    }
    char* localVarToReplace_pkiSignatureID = malloc(sizeOfPathParams_pkiSignatureID);
    snprintf(localVarToReplace_pkiSignatureID, sizeOfPathParams_pkiSignatureID, "{%s}", "pkiSignatureID");

    char localVarBuff_pkiSignatureID[256];
    intToStr(localVarBuff_pkiSignatureID, *pkiSignatureID);

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

