#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzsigntemplatedocumentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create a new Ezsigntemplatedocument
//
// The endpoint allows to create one or many elements at once.
//
ezsigntemplatedocument_create_object_v1_response_t*
ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentCreateObjectV1(apiClient_t *apiClient, ezsigntemplatedocument_create_object_v1_request_t *ezsigntemplatedocument_create_object_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsigntemplatedocument")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsigntemplatedocument");




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigntemplatedocument_create_object_v1_request = NULL;
    if (ezsigntemplatedocument_create_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsigntemplatedocument_create_object_v1_request = ezsigntemplatedocument_create_object_v1_request_convertToJSON(ezsigntemplatedocument_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigntemplatedocument_create_object_v1_request);
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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 413) {
    //    printf("%s\n","The request was large. Look for detail about the error in the body");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body. If the error is recoverable sTemporaryFileUrl will be set and you can use this url to try a new request without sending the file over again");
    //}
    //nonprimitive not container
    cJSON *ObjectEzsigntemplatedocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigntemplatedocument_create_object_v1_response_t *elementToReturn = ezsigntemplatedocument_create_object_v1_response_parseFromJSON(ObjectEzsigntemplatedocumentAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigntemplatedocumentAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_ezsigntemplatedocument_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigntemplatedocument_create_object_v1_request);
        localVarSingleItemJSON_ezsigntemplatedocument_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Edit multiple Ezsigntemplatedocumentpagerecognitions
//
// Edit multiple Ezsigntemplatedocumentpagerecognitions
//
ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_response_t*
ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentEditEzsigntemplatedocumentpagerecognitionsV1(apiClient_t *apiClient, int *pkiEzsigntemplatedocumentID, ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request_t *ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}/editEzsigntemplatedocumentpagerecognitions")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}/editEzsigntemplatedocumentpagerecognitions");


    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatedocumentID =  + strlen("{ pkiEzsigntemplatedocumentID }");
    if(pkiEzsigntemplatedocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatedocumentID = malloc(sizeOfPathParams_pkiEzsigntemplatedocumentID);
    snprintf(localVarToReplace_pkiEzsigntemplatedocumentID, sizeOfPathParams_pkiEzsigntemplatedocumentID, "{%s}", "pkiEzsigntemplatedocumentID");

    char localVarBuff_pkiEzsigntemplatedocumentID[256];
    intToStr(localVarBuff_pkiEzsigntemplatedocumentID, *pkiEzsigntemplatedocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplatedocumentID, localVarBuff_pkiEzsigntemplatedocumentID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request = NULL;
    if (ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request = ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request_convertToJSON(ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request);
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
    cJSON *ObjectEzsigntemplatedocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_response_t *elementToReturn = ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_response_parseFromJSON(ObjectEzsigntemplatedocumentAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigntemplatedocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatedocumentID);
    if (localVarSingleItemJSON_ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request);
        localVarSingleItemJSON_ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Edit multiple Ezsigntemplateformfieldgroups
//
// Using this endpoint, you can edit multiple Ezsigntemplateformfieldgroups at the same time.
//
ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_t*
ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentEditEzsigntemplateformfieldgroupsV1(apiClient_t *apiClient, int *pkiEzsigntemplatedocumentID, ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request_t *ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}/editEzsigntemplateformfieldgroups")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}/editEzsigntemplateformfieldgroups");


    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatedocumentID =  + strlen("{ pkiEzsigntemplatedocumentID }");
    if(pkiEzsigntemplatedocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatedocumentID = malloc(sizeOfPathParams_pkiEzsigntemplatedocumentID);
    snprintf(localVarToReplace_pkiEzsigntemplatedocumentID, sizeOfPathParams_pkiEzsigntemplatedocumentID, "{%s}", "pkiEzsigntemplatedocumentID");

    char localVarBuff_pkiEzsigntemplatedocumentID[256];
    intToStr(localVarBuff_pkiEzsigntemplatedocumentID, *pkiEzsigntemplatedocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplatedocumentID, localVarBuff_pkiEzsigntemplatedocumentID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request = NULL;
    if (ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request = ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request_convertToJSON(ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request);
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
    cJSON *ObjectEzsigntemplatedocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_t *elementToReturn = ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_parseFromJSON(ObjectEzsigntemplatedocumentAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigntemplatedocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatedocumentID);
    if (localVarSingleItemJSON_ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request);
        localVarSingleItemJSON_ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Edit multiple Ezsigntemplatesignatures
//
// Using this endpoint, you can edit multiple Ezsigntemplatesignatures at the same time.
//
ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_t*
ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentEditEzsigntemplatesignaturesV1(apiClient_t *apiClient, int *pkiEzsigntemplatedocumentID, ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_t *ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}/editEzsigntemplatesignatures")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}/editEzsigntemplatesignatures");


    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatedocumentID =  + strlen("{ pkiEzsigntemplatedocumentID }");
    if(pkiEzsigntemplatedocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatedocumentID = malloc(sizeOfPathParams_pkiEzsigntemplatedocumentID);
    snprintf(localVarToReplace_pkiEzsigntemplatedocumentID, sizeOfPathParams_pkiEzsigntemplatedocumentID, "{%s}", "pkiEzsigntemplatedocumentID");

    char localVarBuff_pkiEzsigntemplatedocumentID[256];
    intToStr(localVarBuff_pkiEzsigntemplatedocumentID, *pkiEzsigntemplatedocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplatedocumentID, localVarBuff_pkiEzsigntemplatedocumentID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request = NULL;
    if (ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request = ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_convertToJSON(ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request);
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
    cJSON *ObjectEzsigntemplatedocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_t *elementToReturn = ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_parseFromJSON(ObjectEzsigntemplatedocumentAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigntemplatedocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatedocumentID);
    if (localVarSingleItemJSON_ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request);
        localVarSingleItemJSON_ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Edit an existing Ezsigntemplatedocument
//
// 
//
ezsigntemplatedocument_edit_object_v1_response_t*
ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentEditObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplatedocumentID, ezsigntemplatedocument_edit_object_v1_request_t *ezsigntemplatedocument_edit_object_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}");


    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatedocumentID =  + strlen("{ pkiEzsigntemplatedocumentID }");
    if(pkiEzsigntemplatedocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatedocumentID = malloc(sizeOfPathParams_pkiEzsigntemplatedocumentID);
    snprintf(localVarToReplace_pkiEzsigntemplatedocumentID, sizeOfPathParams_pkiEzsigntemplatedocumentID, "{%s}", "pkiEzsigntemplatedocumentID");

    char localVarBuff_pkiEzsigntemplatedocumentID[256];
    intToStr(localVarBuff_pkiEzsigntemplatedocumentID, *pkiEzsigntemplatedocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplatedocumentID, localVarBuff_pkiEzsigntemplatedocumentID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigntemplatedocument_edit_object_v1_request = NULL;
    if (ezsigntemplatedocument_edit_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsigntemplatedocument_edit_object_v1_request = ezsigntemplatedocument_edit_object_v1_request_convertToJSON(ezsigntemplatedocument_edit_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigntemplatedocument_edit_object_v1_request);
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
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body. If the error is recoverable sTemporaryFileUrl will be set and you can use this url to try a new request without sending the file over again");
    //}
    //nonprimitive not container
    cJSON *ObjectEzsigntemplatedocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigntemplatedocument_edit_object_v1_response_t *elementToReturn = ezsigntemplatedocument_edit_object_v1_response_parseFromJSON(ObjectEzsigntemplatedocumentAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigntemplatedocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatedocumentID);
    if (localVarSingleItemJSON_ezsigntemplatedocument_edit_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigntemplatedocument_edit_object_v1_request);
        localVarSingleItemJSON_ezsigntemplatedocument_edit_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Extract text from Ezsigntemplatedocument area
//
// Extract text from Ezsigntemplatedocument area
//
ezsigntemplatedocument_extract_text_v1_response_t*
ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentExtractTextV1(apiClient_t *apiClient, int *pkiEzsigntemplatedocumentID, ezsigntemplatedocument_extract_text_v1_request_t *ezsigntemplatedocument_extract_text_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}/extractText")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}/extractText");


    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatedocumentID =  + strlen("{ pkiEzsigntemplatedocumentID }");
    if(pkiEzsigntemplatedocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatedocumentID = malloc(sizeOfPathParams_pkiEzsigntemplatedocumentID);
    snprintf(localVarToReplace_pkiEzsigntemplatedocumentID, sizeOfPathParams_pkiEzsigntemplatedocumentID, "{%s}", "pkiEzsigntemplatedocumentID");

    char localVarBuff_pkiEzsigntemplatedocumentID[256];
    intToStr(localVarBuff_pkiEzsigntemplatedocumentID, *pkiEzsigntemplatedocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplatedocumentID, localVarBuff_pkiEzsigntemplatedocumentID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigntemplatedocument_extract_text_v1_request = NULL;
    if (ezsigntemplatedocument_extract_text_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsigntemplatedocument_extract_text_v1_request = ezsigntemplatedocument_extract_text_v1_request_convertToJSON(ezsigntemplatedocument_extract_text_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigntemplatedocument_extract_text_v1_request);
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
    cJSON *ObjectEzsigntemplatedocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigntemplatedocument_extract_text_v1_response_t *elementToReturn = ezsigntemplatedocument_extract_text_v1_response_parseFromJSON(ObjectEzsigntemplatedocumentAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigntemplatedocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatedocumentID);
    if (localVarSingleItemJSON_ezsigntemplatedocument_extract_text_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigntemplatedocument_extract_text_v1_request);
        localVarSingleItemJSON_ezsigntemplatedocument_extract_text_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Flatten
//
// Flatten an Ezsigntemplatedocument signatures, forms and annotations. This process finalizes the PDF so that the forms and annotations become part of the document content and cannot be edited.
//
ezsigntemplatedocument_flatten_v1_response_t*
ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentFlattenV1(apiClient_t *apiClient, int *pkiEzsigntemplatedocumentID, object_t *body)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}/flatten")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}/flatten");


    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatedocumentID =  + strlen("{ pkiEzsigntemplatedocumentID }");
    if(pkiEzsigntemplatedocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatedocumentID = malloc(sizeOfPathParams_pkiEzsigntemplatedocumentID);
    snprintf(localVarToReplace_pkiEzsigntemplatedocumentID, sizeOfPathParams_pkiEzsigntemplatedocumentID, "{%s}", "pkiEzsigntemplatedocumentID");

    char localVarBuff_pkiEzsigntemplatedocumentID[256];
    intToStr(localVarBuff_pkiEzsigntemplatedocumentID, *pkiEzsigntemplatedocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplatedocumentID, localVarBuff_pkiEzsigntemplatedocumentID);




    // Body Param
    cJSON *localVarSingleItemJSON_body = NULL;
    if (body != NULL)
    {
        //string
        localVarSingleItemJSON_body = object_convertToJSON(body);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_body);
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
    cJSON *ObjectEzsigntemplatedocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigntemplatedocument_flatten_v1_response_t *elementToReturn = ezsigntemplatedocument_flatten_v1_response_parseFromJSON(ObjectEzsigntemplatedocumentAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigntemplatedocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatedocumentID);
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

// Retrieve an existing Ezsigntemplatedocument's Ezsigntemplatedocumentpagerecognitions
//
// 
//
ezsigntemplatedocument_get_ezsigntemplatedocumentpagerecognitions_v1_response_t*
ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentGetEzsigntemplatedocumentpagerecognitionsV1(apiClient_t *apiClient, int *pkiEzsigntemplatedocumentID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}/getEzsigntemplatedocumentpagerecognitions")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}/getEzsigntemplatedocumentpagerecognitions");


    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatedocumentID =  + strlen("{ pkiEzsigntemplatedocumentID }");
    if(pkiEzsigntemplatedocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatedocumentID = malloc(sizeOfPathParams_pkiEzsigntemplatedocumentID);
    snprintf(localVarToReplace_pkiEzsigntemplatedocumentID, sizeOfPathParams_pkiEzsigntemplatedocumentID, "{%s}", "pkiEzsigntemplatedocumentID");

    char localVarBuff_pkiEzsigntemplatedocumentID[256];
    intToStr(localVarBuff_pkiEzsigntemplatedocumentID, *pkiEzsigntemplatedocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplatedocumentID, localVarBuff_pkiEzsigntemplatedocumentID);



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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    cJSON *ObjectEzsigntemplatedocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigntemplatedocument_get_ezsigntemplatedocumentpagerecognitions_v1_response_t *elementToReturn = ezsigntemplatedocument_get_ezsigntemplatedocumentpagerecognitions_v1_response_parseFromJSON(ObjectEzsigntemplatedocumentAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigntemplatedocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatedocumentID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsigntemplatedocument's Ezsigntemplatedocumentpages
//
// 
//
ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_t*
ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentGetEzsigntemplatedocumentpagesV1(apiClient_t *apiClient, int *pkiEzsigntemplatedocumentID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}/getEzsigntemplatedocumentpages")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}/getEzsigntemplatedocumentpages");


    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatedocumentID =  + strlen("{ pkiEzsigntemplatedocumentID }");
    if(pkiEzsigntemplatedocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatedocumentID = malloc(sizeOfPathParams_pkiEzsigntemplatedocumentID);
    snprintf(localVarToReplace_pkiEzsigntemplatedocumentID, sizeOfPathParams_pkiEzsigntemplatedocumentID, "{%s}", "pkiEzsigntemplatedocumentID");

    char localVarBuff_pkiEzsigntemplatedocumentID[256];
    intToStr(localVarBuff_pkiEzsigntemplatedocumentID, *pkiEzsigntemplatedocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplatedocumentID, localVarBuff_pkiEzsigntemplatedocumentID);



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
    cJSON *ObjectEzsigntemplatedocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_t *elementToReturn = ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_parseFromJSON(ObjectEzsigntemplatedocumentAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigntemplatedocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatedocumentID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsigntemplatedocument's Ezsigntemplateformfieldgroups
//
// 
//
ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_t*
ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentGetEzsigntemplateformfieldgroupsV1(apiClient_t *apiClient, int *pkiEzsigntemplatedocumentID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}/getEzsigntemplateformfieldgroups")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}/getEzsigntemplateformfieldgroups");


    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatedocumentID =  + strlen("{ pkiEzsigntemplatedocumentID }");
    if(pkiEzsigntemplatedocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatedocumentID = malloc(sizeOfPathParams_pkiEzsigntemplatedocumentID);
    snprintf(localVarToReplace_pkiEzsigntemplatedocumentID, sizeOfPathParams_pkiEzsigntemplatedocumentID, "{%s}", "pkiEzsigntemplatedocumentID");

    char localVarBuff_pkiEzsigntemplatedocumentID[256];
    intToStr(localVarBuff_pkiEzsigntemplatedocumentID, *pkiEzsigntemplatedocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplatedocumentID, localVarBuff_pkiEzsigntemplatedocumentID);



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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    cJSON *ObjectEzsigntemplatedocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_t *elementToReturn = ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_parseFromJSON(ObjectEzsigntemplatedocumentAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigntemplatedocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatedocumentID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsigntemplatedocument's Ezsigntemplatesignatures
//
// 
//
ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_t*
ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentGetEzsigntemplatesignaturesV1(apiClient_t *apiClient, int *pkiEzsigntemplatedocumentID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}/getEzsigntemplatesignatures")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}/getEzsigntemplatesignatures");


    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatedocumentID =  + strlen("{ pkiEzsigntemplatedocumentID }");
    if(pkiEzsigntemplatedocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatedocumentID = malloc(sizeOfPathParams_pkiEzsigntemplatedocumentID);
    snprintf(localVarToReplace_pkiEzsigntemplatedocumentID, sizeOfPathParams_pkiEzsigntemplatedocumentID, "{%s}", "pkiEzsigntemplatedocumentID");

    char localVarBuff_pkiEzsigntemplatedocumentID[256];
    intToStr(localVarBuff_pkiEzsigntemplatedocumentID, *pkiEzsigntemplatedocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplatedocumentID, localVarBuff_pkiEzsigntemplatedocumentID);



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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    cJSON *ObjectEzsigntemplatedocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_t *elementToReturn = ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_parseFromJSON(ObjectEzsigntemplatedocumentAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigntemplatedocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatedocumentID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsigntemplatedocument
//
// 
//
ezsigntemplatedocument_get_object_v2_response_t*
ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentGetObjectV2(apiClient_t *apiClient, int *pkiEzsigntemplatedocumentID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/2/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/2/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}");


    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatedocumentID =  + strlen("{ pkiEzsigntemplatedocumentID }");
    if(pkiEzsigntemplatedocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatedocumentID = malloc(sizeOfPathParams_pkiEzsigntemplatedocumentID);
    snprintf(localVarToReplace_pkiEzsigntemplatedocumentID, sizeOfPathParams_pkiEzsigntemplatedocumentID, "{%s}", "pkiEzsigntemplatedocumentID");

    char localVarBuff_pkiEzsigntemplatedocumentID[256];
    intToStr(localVarBuff_pkiEzsigntemplatedocumentID, *pkiEzsigntemplatedocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplatedocumentID, localVarBuff_pkiEzsigntemplatedocumentID);



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
    cJSON *ObjectEzsigntemplatedocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigntemplatedocument_get_object_v2_response_t *elementToReturn = ezsigntemplatedocument_get_object_v2_response_parseFromJSON(ObjectEzsigntemplatedocumentAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigntemplatedocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatedocumentID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve positions X,Y of given words from a Ezsigntemplatedocument
//
// 
//
ezsigntemplatedocument_get_words_positions_v1_response_t*
ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentGetWordsPositionsV1(apiClient_t *apiClient, int *pkiEzsigntemplatedocumentID, ezsigntemplatedocument_get_words_positions_v1_request_t *ezsigntemplatedocument_get_words_positions_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}/getWordsPositions")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}/getWordsPositions");


    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatedocumentID =  + strlen("{ pkiEzsigntemplatedocumentID }");
    if(pkiEzsigntemplatedocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatedocumentID = malloc(sizeOfPathParams_pkiEzsigntemplatedocumentID);
    snprintf(localVarToReplace_pkiEzsigntemplatedocumentID, sizeOfPathParams_pkiEzsigntemplatedocumentID, "{%s}", "pkiEzsigntemplatedocumentID");

    char localVarBuff_pkiEzsigntemplatedocumentID[256];
    intToStr(localVarBuff_pkiEzsigntemplatedocumentID, *pkiEzsigntemplatedocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplatedocumentID, localVarBuff_pkiEzsigntemplatedocumentID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigntemplatedocument_get_words_positions_v1_request = NULL;
    if (ezsigntemplatedocument_get_words_positions_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsigntemplatedocument_get_words_positions_v1_request = ezsigntemplatedocument_get_words_positions_v1_request_convertToJSON(ezsigntemplatedocument_get_words_positions_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigntemplatedocument_get_words_positions_v1_request);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    cJSON *ObjectEzsigntemplatedocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigntemplatedocument_get_words_positions_v1_response_t *elementToReturn = ezsigntemplatedocument_get_words_positions_v1_response_parseFromJSON(ObjectEzsigntemplatedocumentAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigntemplatedocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatedocumentID);
    if (localVarSingleItemJSON_ezsigntemplatedocument_get_words_positions_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigntemplatedocument_get_words_positions_v1_request);
        localVarSingleItemJSON_ezsigntemplatedocument_get_words_positions_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Patch an existing Ezsigntemplatedocument
//
// 
//
ezsigntemplatedocument_patch_object_v1_response_t*
ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentPatchObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplatedocumentID, ezsigntemplatedocument_patch_object_v1_request_t *ezsigntemplatedocument_patch_object_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}");


    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatedocumentID =  + strlen("{ pkiEzsigntemplatedocumentID }");
    if(pkiEzsigntemplatedocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatedocumentID = malloc(sizeOfPathParams_pkiEzsigntemplatedocumentID);
    snprintf(localVarToReplace_pkiEzsigntemplatedocumentID, sizeOfPathParams_pkiEzsigntemplatedocumentID, "{%s}", "pkiEzsigntemplatedocumentID");

    char localVarBuff_pkiEzsigntemplatedocumentID[256];
    intToStr(localVarBuff_pkiEzsigntemplatedocumentID, *pkiEzsigntemplatedocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplatedocumentID, localVarBuff_pkiEzsigntemplatedocumentID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigntemplatedocument_patch_object_v1_request = NULL;
    if (ezsigntemplatedocument_patch_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsigntemplatedocument_patch_object_v1_request = ezsigntemplatedocument_patch_object_v1_request_convertToJSON(ezsigntemplatedocument_patch_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigntemplatedocument_patch_object_v1_request);
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
                    "PATCH");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    cJSON *ObjectEzsigntemplatedocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigntemplatedocument_patch_object_v1_response_t *elementToReturn = ezsigntemplatedocument_patch_object_v1_response_parseFromJSON(ObjectEzsigntemplatedocumentAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigntemplatedocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatedocumentID);
    if (localVarSingleItemJSON_ezsigntemplatedocument_patch_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigntemplatedocument_patch_object_v1_request);
        localVarSingleItemJSON_ezsigntemplatedocument_patch_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

