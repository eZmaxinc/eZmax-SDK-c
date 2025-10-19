#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzsignbulksendtransmissionAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Retrieve file to download documents in batch
//
binary_t*
ObjectEzsignbulksendtransmissionAPI_ezsignbulksendtransmissionGetBatchFileV1(apiClient_t *apiClient, int *pkiEzsignbulksendtransmissionID, int *bIncludeSigned, int *bIncludeAttachment, int *bIncludeProofdocument, int *bIncludeProof)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/1/object/ezsignbulksendtransmission/{pkiEzsignbulksendtransmissionID}/getBatchFile");



    // Path Params
    long sizeOfPathParams_pkiEzsignbulksendtransmissionID =  + sizeof("{ pkiEzsignbulksendtransmissionID }") - 1;
    if(pkiEzsignbulksendtransmissionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignbulksendtransmissionID = malloc(sizeOfPathParams_pkiEzsignbulksendtransmissionID);
    snprintf(localVarToReplace_pkiEzsignbulksendtransmissionID, sizeOfPathParams_pkiEzsignbulksendtransmissionID, "{%s}", "pkiEzsignbulksendtransmissionID");

    char localVarBuff_pkiEzsignbulksendtransmissionID[256];
    snprintf(localVarBuff_pkiEzsignbulksendtransmissionID, sizeof localVarBuff_pkiEzsignbulksendtransmissionID, "%ld", (long)*pkiEzsignbulksendtransmissionID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignbulksendtransmissionID, localVarBuff_pkiEzsignbulksendtransmissionID);




    // query parameters
    char *keyQuery_bIncludeSigned = NULL;
    char * valueQuery_bIncludeSigned = NULL;
    keyValuePair_t *keyPairQuery_bIncludeSigned = 0;
    if (bIncludeSigned)
    {
        keyQuery_bIncludeSigned = strdup("bIncludeSigned");
        valueQuery_bIncludeSigned = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_bIncludeSigned, MAX_NUMBER_LENGTH, "%d", *bIncludeSigned);
        keyPairQuery_bIncludeSigned = keyValuePair_create(keyQuery_bIncludeSigned, valueQuery_bIncludeSigned);
        list_addElement(localVarQueryParameters,keyPairQuery_bIncludeSigned);
    }

    // query parameters
    char *keyQuery_bIncludeAttachment = NULL;
    char * valueQuery_bIncludeAttachment = NULL;
    keyValuePair_t *keyPairQuery_bIncludeAttachment = 0;
    if (bIncludeAttachment)
    {
        keyQuery_bIncludeAttachment = strdup("bIncludeAttachment");
        valueQuery_bIncludeAttachment = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_bIncludeAttachment, MAX_NUMBER_LENGTH, "%d", *bIncludeAttachment);
        keyPairQuery_bIncludeAttachment = keyValuePair_create(keyQuery_bIncludeAttachment, valueQuery_bIncludeAttachment);
        list_addElement(localVarQueryParameters,keyPairQuery_bIncludeAttachment);
    }

    // query parameters
    char *keyQuery_bIncludeProofdocument = NULL;
    char * valueQuery_bIncludeProofdocument = NULL;
    keyValuePair_t *keyPairQuery_bIncludeProofdocument = 0;
    if (bIncludeProofdocument)
    {
        keyQuery_bIncludeProofdocument = strdup("bIncludeProofdocument");
        valueQuery_bIncludeProofdocument = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_bIncludeProofdocument, MAX_NUMBER_LENGTH, "%d", *bIncludeProofdocument);
        keyPairQuery_bIncludeProofdocument = keyValuePair_create(keyQuery_bIncludeProofdocument, valueQuery_bIncludeProofdocument);
        list_addElement(localVarQueryParameters,keyPairQuery_bIncludeProofdocument);
    }

    // query parameters
    char *keyQuery_bIncludeProof = NULL;
    char * valueQuery_bIncludeProof = NULL;
    keyValuePair_t *keyPairQuery_bIncludeProof = 0;
    if (bIncludeProof)
    {
        keyQuery_bIncludeProof = strdup("bIncludeProof");
        valueQuery_bIncludeProof = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_bIncludeProof, MAX_NUMBER_LENGTH, "%d", *bIncludeProof);
        keyPairQuery_bIncludeProof = keyValuePair_create(keyQuery_bIncludeProof, valueQuery_bIncludeProof);
        list_addElement(localVarQueryParameters,keyPairQuery_bIncludeProof);
    }
    list_addElement(localVarHeaderType,"text/xml"); //produces
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
    //if (apiClient->response_code == 406) {
    //    printf("%s\n","The URL is valid, but one of the Accept header is not defined or invalid. For example, you set the header \&quot;Accept: application/json\&quot; but the function can only return \&quot;Content-type: image/png\&quot;");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body");
    //}
    //primitive return type simple binary
    binary_t* elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300)
        elementToReturn = instantiate_binary_t(apiClient->dataReceived, apiClient->dataReceivedLen);

    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_pkiEzsignbulksendtransmissionID);
    if(keyQuery_bIncludeSigned){
        free(keyQuery_bIncludeSigned);
        keyQuery_bIncludeSigned = NULL;
    }
    if(valueQuery_bIncludeSigned){
        free(valueQuery_bIncludeSigned);
        valueQuery_bIncludeSigned = NULL;
    }
    if(keyPairQuery_bIncludeSigned){
        keyValuePair_free(keyPairQuery_bIncludeSigned);
        keyPairQuery_bIncludeSigned = NULL;
    }
    if(keyQuery_bIncludeAttachment){
        free(keyQuery_bIncludeAttachment);
        keyQuery_bIncludeAttachment = NULL;
    }
    if(valueQuery_bIncludeAttachment){
        free(valueQuery_bIncludeAttachment);
        valueQuery_bIncludeAttachment = NULL;
    }
    if(keyPairQuery_bIncludeAttachment){
        keyValuePair_free(keyPairQuery_bIncludeAttachment);
        keyPairQuery_bIncludeAttachment = NULL;
    }
    if(keyQuery_bIncludeProofdocument){
        free(keyQuery_bIncludeProofdocument);
        keyQuery_bIncludeProofdocument = NULL;
    }
    if(valueQuery_bIncludeProofdocument){
        free(valueQuery_bIncludeProofdocument);
        valueQuery_bIncludeProofdocument = NULL;
    }
    if(keyPairQuery_bIncludeProofdocument){
        keyValuePair_free(keyPairQuery_bIncludeProofdocument);
        keyPairQuery_bIncludeProofdocument = NULL;
    }
    if(keyQuery_bIncludeProof){
        free(keyQuery_bIncludeProof);
        keyQuery_bIncludeProof = NULL;
    }
    if(valueQuery_bIncludeProof){
        free(valueQuery_bIncludeProof);
        valueQuery_bIncludeProof = NULL;
    }
    if(keyPairQuery_bIncludeProof){
        keyValuePair_free(keyPairQuery_bIncludeProof);
        keyPairQuery_bIncludeProof = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsignbulksendtransmission's Csv containing errors
//
// 
//
char*
ObjectEzsignbulksendtransmissionAPI_ezsignbulksendtransmissionGetCsvErrorsV1(apiClient_t *apiClient, int *pkiEzsignbulksendtransmissionID)
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
    char *localVarPath = strdup("/1/object/ezsignbulksendtransmission/{pkiEzsignbulksendtransmissionID}/getCsvErrors");



    // Path Params
    long sizeOfPathParams_pkiEzsignbulksendtransmissionID =  + sizeof("{ pkiEzsignbulksendtransmissionID }") - 1;
    if(pkiEzsignbulksendtransmissionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignbulksendtransmissionID = malloc(sizeOfPathParams_pkiEzsignbulksendtransmissionID);
    snprintf(localVarToReplace_pkiEzsignbulksendtransmissionID, sizeOfPathParams_pkiEzsignbulksendtransmissionID, "{%s}", "pkiEzsignbulksendtransmissionID");

    char localVarBuff_pkiEzsignbulksendtransmissionID[256];
    snprintf(localVarBuff_pkiEzsignbulksendtransmissionID, sizeof localVarBuff_pkiEzsignbulksendtransmissionID, "%ld", (long)*pkiEzsignbulksendtransmissionID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignbulksendtransmissionID, localVarBuff_pkiEzsignbulksendtransmissionID);



    list_addElement(localVarHeaderType,"text/csv"); //produces
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
    //if (apiClient->response_code == 406) {
    //    printf("%s\n","The URL is valid, but one of the Accept header is not defined or invalid. For example, you set the header \&quot;Accept: application/json\&quot; but the function can only return \&quot;Content-type: image/png\&quot;");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body");
    //}
    //primitive return type simple string
    char* elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300)
        elementToReturn = strdup((char*)apiClient->dataReceived);

    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_pkiEzsignbulksendtransmissionID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsignbulksendtransmission's automatic Ezsignsignatures
//
// Return the Ezsignsignatures that can be signed by the current user at the current step in the process
//
ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response_t*
ObjectEzsignbulksendtransmissionAPI_ezsignbulksendtransmissionGetEzsignsignaturesAutomaticV1(apiClient_t *apiClient, int *pkiEzsignbulksendtransmissionID)
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
    char *localVarPath = strdup("/1/object/ezsignbulksendtransmission/{pkiEzsignbulksendtransmissionID}/getEzsignsignaturesAutomatic");



    // Path Params
    long sizeOfPathParams_pkiEzsignbulksendtransmissionID =  + sizeof("{ pkiEzsignbulksendtransmissionID }") - 1;
    if(pkiEzsignbulksendtransmissionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignbulksendtransmissionID = malloc(sizeOfPathParams_pkiEzsignbulksendtransmissionID);
    snprintf(localVarToReplace_pkiEzsignbulksendtransmissionID, sizeOfPathParams_pkiEzsignbulksendtransmissionID, "{%s}", "pkiEzsignbulksendtransmissionID");

    char localVarBuff_pkiEzsignbulksendtransmissionID[256];
    snprintf(localVarBuff_pkiEzsignbulksendtransmissionID, sizeof localVarBuff_pkiEzsignbulksendtransmissionID, "%ld", (long)*pkiEzsignbulksendtransmissionID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignbulksendtransmissionID, localVarBuff_pkiEzsignbulksendtransmissionID);



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
    ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignbulksendtransmissionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response_parseFromJSON(ObjectEzsignbulksendtransmissionAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignbulksendtransmissionAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignbulksendtransmissionID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsignbulksendtransmission's forms data
//
// 
//
ezsignbulksendtransmission_get_forms_data_v1_response_t*
ObjectEzsignbulksendtransmissionAPI_ezsignbulksendtransmissionGetFormsDataV1(apiClient_t *apiClient, int *pkiEzsignbulksendtransmissionID)
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
    char *localVarPath = strdup("/1/object/ezsignbulksendtransmission/{pkiEzsignbulksendtransmissionID}/getFormsData");



    // Path Params
    long sizeOfPathParams_pkiEzsignbulksendtransmissionID =  + sizeof("{ pkiEzsignbulksendtransmissionID }") - 1;
    if(pkiEzsignbulksendtransmissionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignbulksendtransmissionID = malloc(sizeOfPathParams_pkiEzsignbulksendtransmissionID);
    snprintf(localVarToReplace_pkiEzsignbulksendtransmissionID, sizeOfPathParams_pkiEzsignbulksendtransmissionID, "{%s}", "pkiEzsignbulksendtransmissionID");

    char localVarBuff_pkiEzsignbulksendtransmissionID[256];
    snprintf(localVarBuff_pkiEzsignbulksendtransmissionID, sizeof localVarBuff_pkiEzsignbulksendtransmissionID, "%ld", (long)*pkiEzsignbulksendtransmissionID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignbulksendtransmissionID, localVarBuff_pkiEzsignbulksendtransmissionID);



    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/zip"); //produces
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
    //if (apiClient->response_code == 406) {
    //    printf("%s\n","The URL is valid, but one of the Accept header is not defined or invalid. For example, you set the header \&quot;Accept: application/json\&quot; but the function can only return \&quot;Content-type: image/png\&quot;");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    ezsignbulksendtransmission_get_forms_data_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignbulksendtransmissionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignbulksendtransmission_get_forms_data_v1_response_parseFromJSON(ObjectEzsignbulksendtransmissionAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignbulksendtransmissionAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignbulksendtransmissionID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsignbulksendtransmission
//
// 
//
ezsignbulksendtransmission_get_object_v2_response_t*
ObjectEzsignbulksendtransmissionAPI_ezsignbulksendtransmissionGetObjectV2(apiClient_t *apiClient, int *pkiEzsignbulksendtransmissionID)
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
    char *localVarPath = strdup("/2/object/ezsignbulksendtransmission/{pkiEzsignbulksendtransmissionID}");



    // Path Params
    long sizeOfPathParams_pkiEzsignbulksendtransmissionID =  + sizeof("{ pkiEzsignbulksendtransmissionID }") - 1;
    if(pkiEzsignbulksendtransmissionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignbulksendtransmissionID = malloc(sizeOfPathParams_pkiEzsignbulksendtransmissionID);
    snprintf(localVarToReplace_pkiEzsignbulksendtransmissionID, sizeOfPathParams_pkiEzsignbulksendtransmissionID, "{%s}", "pkiEzsignbulksendtransmissionID");

    char localVarBuff_pkiEzsignbulksendtransmissionID[256];
    snprintf(localVarBuff_pkiEzsignbulksendtransmissionID, sizeof localVarBuff_pkiEzsignbulksendtransmissionID, "%ld", (long)*pkiEzsignbulksendtransmissionID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignbulksendtransmissionID, localVarBuff_pkiEzsignbulksendtransmissionID);



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
    ezsignbulksendtransmission_get_object_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignbulksendtransmissionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignbulksendtransmission_get_object_v2_response_parseFromJSON(ObjectEzsignbulksendtransmissionAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignbulksendtransmissionAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignbulksendtransmissionID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

