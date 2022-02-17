#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzsigndocumentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)

// Functions for enum EDOCUMENTTYPE for ObjectEzsigndocumentAPI_ezsigndocumentGetDownloadUrlV1

static char* ezsigndocumentGetDownloadUrlV1_EDOCUMENTTYPE_ToString(ezmax_api_definition_ezsigndocumentGetDownloadUrlV1_eDocumentType_e EDOCUMENTTYPE){
    char *EDOCUMENTTYPEArray[] =  { "NULL", "Initial", "Signed", "Proof", "Proofdocument" };
    return EDOCUMENTTYPEArray[EDOCUMENTTYPE];
}

static ezmax_api_definition_ezsigndocumentGetDownloadUrlV1_eDocumentType_e ezsigndocumentGetDownloadUrlV1_EDOCUMENTTYPE_FromString(char* EDOCUMENTTYPE){
    int stringToReturn = 0;
    char *EDOCUMENTTYPEArray[] =  { "NULL", "Initial", "Signed", "Proof", "Proofdocument" };
    size_t sizeofArray = sizeof(EDOCUMENTTYPEArray) / sizeof(EDOCUMENTTYPEArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(EDOCUMENTTYPE, EDOCUMENTTYPEArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function ezsigndocumentGetDownloadUrlV1_EDOCUMENTTYPE_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *ezsigndocumentGetDownloadUrlV1_EDOCUMENTTYPE_convertToJSON(ezmax_api_definition_ezsigndocumentGetDownloadUrlV1_eDocumentType_e EDOCUMENTTYPE) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "eDocumentType", ezsigndocumentGetDownloadUrlV1_EDOCUMENTTYPE_ToString(EDOCUMENTTYPE)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function ezsigndocumentGetDownloadUrlV1_EDOCUMENTTYPE_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition_ezsigndocumentGetDownloadUrlV1_eDocumentType_e ezsigndocumentGetDownloadUrlV1_EDOCUMENTTYPE_parseFromJSON(cJSON* EDOCUMENTTYPEJSON) {
    ezmax_api_definition_ezsigndocumentGetDownloadUrlV1_eDocumentType_e EDOCUMENTTYPEVariable = 0;
    cJSON *EDOCUMENTTYPEVar = cJSON_GetObjectItemCaseSensitive(EDOCUMENTTYPEJSON, "eDocumentType");
    if(!cJSON_IsString(EDOCUMENTTYPEVar) || (EDOCUMENTTYPEVar->valuestring == NULL))
    {
        goto end;
    }
    EDOCUMENTTYPEVariable = ezsigndocumentGetDownloadUrlV1_EDOCUMENTTYPE_FromString(EDOCUMENTTYPEVar->valuestring);
    return EDOCUMENTTYPEVariable;
end:
    return 0;
}
*/


// Apply an Ezsign Template to the Ezsigndocument.
//
// This function is deprecated. Please use *applyEzsigntemplate* instead which is doing the same thing but with a capital \"E\" to normalize the nomenclature.  This endpoint applies a predefined template to the ezsign document. This allows to automatically apply all the form and signature fields on a document in a single step.  The document must not already have fields otherwise an error will be returned.
//
ezsigndocument_apply_ezsigntemplate_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentApplyEzsigntemplateV1(apiClient_t *apiClient, int pkiEzsigndocumentID , ezsigndocument_apply_ezsigntemplate_v1_request_t * ezsigndocument_apply_ezsigntemplate_v1_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsigndocument/{pkiEzsigndocumentID}/applyezsigntemplate")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsigndocument/{pkiEzsigndocumentID}/applyezsigntemplate");


    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + strlen("{ pkiEzsigndocumentID }");
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    intToStr(localVarBuff_pkiEzsigndocumentID, pkiEzsigndocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigndocumentID, localVarBuff_pkiEzsigndocumentID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigndocument_apply_ezsigntemplate_v1_request = NULL;
    if (ezsigndocument_apply_ezsigntemplate_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsigndocument_apply_ezsigntemplate_v1_request = ezsigndocument_apply_ezsigntemplate_v1_request_convertToJSON(ezsigndocument_apply_ezsigntemplate_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigndocument_apply_ezsigntemplate_v1_request);
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

    if (apiClient->response_code == 200) {
        printf("%s\n","Successful response");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","The element you are trying to work on does not exist");
    }
    if (apiClient->response_code == 422) {
        printf("%s\n","The syntax of the request is valid but the request cannot be completed. Look for detail in body.");
    }
    //nonprimitive not container
    cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigndocument_apply_ezsigntemplate_v1_response_t *elementToReturn = ezsigndocument_apply_ezsigntemplate_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    if (localVarSingleItemJSON_ezsigndocument_apply_ezsigntemplate_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigndocument_apply_ezsigntemplate_v1_request);
        localVarSingleItemJSON_ezsigndocument_apply_ezsigntemplate_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Apply an Ezsign Template to the Ezsigndocument.
//
// This endpoint applies a predefined template to the ezsign document. This allows to automatically apply all the form and signature fields on a document in a single step.  The document must not already have fields otherwise an error will be returned.
//
ezsigndocument_apply_ezsigntemplate_v2_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentApplyEzsigntemplateV2(apiClient_t *apiClient, int pkiEzsigndocumentID , ezsigndocument_apply_ezsigntemplate_v2_request_t * ezsigndocument_apply_ezsigntemplate_v2_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/2/object/ezsigndocument/{pkiEzsigndocumentID}/applyEzsigntemplate")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/2/object/ezsigndocument/{pkiEzsigndocumentID}/applyEzsigntemplate");


    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + strlen("{ pkiEzsigndocumentID }");
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    intToStr(localVarBuff_pkiEzsigndocumentID, pkiEzsigndocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigndocumentID, localVarBuff_pkiEzsigndocumentID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigndocument_apply_ezsigntemplate_v2_request = NULL;
    if (ezsigndocument_apply_ezsigntemplate_v2_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsigndocument_apply_ezsigntemplate_v2_request = ezsigndocument_apply_ezsigntemplate_v2_request_convertToJSON(ezsigndocument_apply_ezsigntemplate_v2_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigndocument_apply_ezsigntemplate_v2_request);
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

    if (apiClient->response_code == 200) {
        printf("%s\n","Successful response");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","The element you are trying to work on does not exist");
    }
    if (apiClient->response_code == 422) {
        printf("%s\n","The syntax of the request is valid but the request cannot be completed. Look for detail in body.");
    }
    //nonprimitive not container
    cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigndocument_apply_ezsigntemplate_v2_response_t *elementToReturn = ezsigndocument_apply_ezsigntemplate_v2_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    if (localVarSingleItemJSON_ezsigndocument_apply_ezsigntemplate_v2_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigndocument_apply_ezsigntemplate_v2_request);
        localVarSingleItemJSON_ezsigndocument_apply_ezsigntemplate_v2_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Create a new Ezsigndocument
//
// The endpoint allows to create one or many elements at once.  The array can contain simple (Just the object) or compound (The object and its child) objects.  Creating compound elements allows to reduce the multiple requests to create all child objects.
//
ezsigndocument_create_object_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentCreateObjectV1(apiClient_t *apiClient, list_t * ezsigndocument_create_object_v1_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsigndocument")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsigndocument");




    // Body Param
    //notstring
    cJSON *localVar_ezsigndocument_create_object_v1_request = NULL;
    cJSON *localVarItemJSON_ezsigndocument_create_object_v1_request = NULL;
    cJSON *localVarSingleItemJSON_ezsigndocument_create_object_v1_request = NULL;
    if (ezsigndocument_create_object_v1_request != NULL)
    {
        localVarItemJSON_ezsigndocument_create_object_v1_request = cJSON_CreateObject();
        localVarSingleItemJSON_ezsigndocument_create_object_v1_request = cJSON_AddArrayToObject(localVarItemJSON_ezsigndocument_create_object_v1_request, "ezsigndocument_create_object_v1_request");
        if (localVarSingleItemJSON_ezsigndocument_create_object_v1_request == NULL)
        {
            // nonprimitive container

            goto end;
        }
    }

    listEntry_t *ezsigndocument_create_object_v1_requestBodyListEntry;
    list_ForEach(ezsigndocument_create_object_v1_requestBodyListEntry, ezsigndocument_create_object_v1_request)
    {
        localVar_ezsigndocument_create_object_v1_request = ezsigndocument_create_object_v1_request_convertToJSON(ezsigndocument_create_object_v1_requestBodyListEntry->data);
        if(localVar_ezsigndocument_create_object_v1_request == NULL)
        {
            goto end;
        }
        cJSON_AddItemToArray(localVarSingleItemJSON_ezsigndocument_create_object_v1_request, localVar_ezsigndocument_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarItemJSON_ezsigndocument_create_object_v1_request);
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

    if (apiClient->response_code == 201) {
        printf("%s\n","Successful response");
    }
    if (apiClient->response_code == 422) {
        printf("%s\n","The syntax of the request is valid but the request cannot be completed. Look for detail in body. If the error is recoverable sTemporaryFileUrl will be set and you can use this url to try a new request without sending the file over again");
    }
    //nonprimitive not container
    cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigndocument_create_object_v1_response_t *elementToReturn = ezsigndocument_create_object_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    if (localVarItemJSON_ezsigndocument_create_object_v1_request) {
        cJSON_Delete(localVarItemJSON_ezsigndocument_create_object_v1_request);
        localVarItemJSON_ezsigndocument_create_object_v1_request = NULL;
    }
    if (localVarSingleItemJSON_ezsigndocument_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigndocument_create_object_v1_request);
        localVarSingleItemJSON_ezsigndocument_create_object_v1_request = NULL;
    }
    if (localVar_ezsigndocument_create_object_v1_request) {
        cJSON_Delete(localVar_ezsigndocument_create_object_v1_request);
        localVar_ezsigndocument_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an existing Ezsigndocument
//
ezsigndocument_delete_object_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentDeleteObjectV1(apiClient_t *apiClient, int pkiEzsigndocumentID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsigndocument/{pkiEzsigndocumentID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsigndocument/{pkiEzsigndocumentID}");


    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + strlen("{ pkiEzsigndocumentID }");
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    intToStr(localVarBuff_pkiEzsigndocumentID, pkiEzsigndocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigndocumentID, localVarBuff_pkiEzsigndocumentID);



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

    if (apiClient->response_code == 200) {
        printf("%s\n","Successful response");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","The element you are trying to work on does not exist");
    }
    if (apiClient->response_code == 422) {
        printf("%s\n","The syntax of the request is valid but the request cannot be completed. Look for detail in body.");
    }
    //nonprimitive not container
    cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigndocument_delete_object_v1_response_t *elementToReturn = ezsigndocument_delete_object_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Edit multiple ezsignsignatures
//
// Using this endpoint, you can edit multiple ezsignsignatures at the same time.
//
ezsigndocument_edit_ezsignsignatures_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentEditEzsignsignaturesV1(apiClient_t *apiClient, int pkiEzsigndocumentID , ezsigndocument_edit_ezsignsignatures_v1_request_t * ezsigndocument_edit_ezsignsignatures_v1_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsigndocument/{pkiEzsigndocumentID}/editEzsignsignatures")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsigndocument/{pkiEzsigndocumentID}/editEzsignsignatures");


    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + strlen("{ pkiEzsigndocumentID }");
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    intToStr(localVarBuff_pkiEzsigndocumentID, pkiEzsigndocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigndocumentID, localVarBuff_pkiEzsigndocumentID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigndocument_edit_ezsignsignatures_v1_request = NULL;
    if (ezsigndocument_edit_ezsignsignatures_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsigndocument_edit_ezsignsignatures_v1_request = ezsigndocument_edit_ezsignsignatures_v1_request_convertToJSON(ezsigndocument_edit_ezsignsignatures_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigndocument_edit_ezsignsignatures_v1_request);
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

    if (apiClient->response_code == 200) {
        printf("%s\n","Successful response");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","The element you are trying to work on does not exist");
    }
    if (apiClient->response_code == 422) {
        printf("%s\n","The syntax of the request is valid but the request cannot be completed. Look for detail in body.");
    }
    //nonprimitive not container
    cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigndocument_edit_ezsignsignatures_v1_response_t *elementToReturn = ezsigndocument_edit_ezsignsignatures_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    if (localVarSingleItemJSON_ezsigndocument_edit_ezsignsignatures_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigndocument_edit_ezsignsignatures_v1_request);
        localVarSingleItemJSON_ezsigndocument_edit_ezsignsignatures_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve a URL to download documents.
//
// This endpoint returns URLs to different files that can be downloaded during the signing process.  These links will expire after 5 minutes so the download of the file should be made soon after retrieving the link.
//
ezsigndocument_get_download_url_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetDownloadUrlV1(apiClient_t *apiClient, int pkiEzsigndocumentID , ezmax_api_definition_ezsigndocumentGetDownloadUrlV1_eDocumentType_e eDocumentType )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsigndocument/{pkiEzsigndocumentID}/getDownloadUrl/{eDocumentType}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsigndocument/{pkiEzsigndocumentID}/getDownloadUrl/{eDocumentType}");


    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + strlen(eDocumentType)+3 + strlen("{ pkiEzsigndocumentID }");
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    intToStr(localVarBuff_pkiEzsigndocumentID, pkiEzsigndocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigndocumentID, localVarBuff_pkiEzsigndocumentID);


    // Path Params
    long sizeOfPathParams_eDocumentType =  + strlen(eDocumentType)+3 + strlen("{ eDocumentType }");
    if(eDocumentType == NULL) {
        goto end;
    }
    char* localVarToReplace_eDocumentType = malloc(sizeOfPathParams_eDocumentType);
    sprintf(localVarToReplace_eDocumentType, "{%s}", "eDocumentType");

    localVarPath = strReplace(localVarPath, localVarToReplace_eDocumentType, eDocumentType);


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

    if (apiClient->response_code == 200) {
        printf("%s\n","Successful response");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","The element you are trying to work on does not exist");
    }
    if (apiClient->response_code == 422) {
        printf("%s\n","The syntax of the request is valid but the request cannot be completed. Look for detail in body.");
    }
    //nonprimitive not container
    cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigndocument_get_download_url_v1_response_t *elementToReturn = ezsigndocument_get_download_url_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    free(localVarToReplace_eDocumentType);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsigndocument's Ezsignpages
//
ezsigndocument_get_ezsignpages_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetEzsignpagesV1(apiClient_t *apiClient, int pkiEzsigndocumentID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsigndocument/{pkiEzsigndocumentID}/getEzsignpages")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsigndocument/{pkiEzsigndocumentID}/getEzsignpages");


    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + strlen("{ pkiEzsigndocumentID }");
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    intToStr(localVarBuff_pkiEzsigndocumentID, pkiEzsigndocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigndocumentID, localVarBuff_pkiEzsigndocumentID);



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

    if (apiClient->response_code == 200) {
        printf("%s\n","Successful response");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","The element you are trying to work on does not exist");
    }
    if (apiClient->response_code == 422) {
        printf("%s\n","The syntax of the request is valid but the request cannot be completed. Look for detail in body.");
    }
    //nonprimitive not container
    cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigndocument_get_ezsignpages_v1_response_t *elementToReturn = ezsigndocument_get_ezsignpages_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsigndocument's Form Data
//
ezsigndocument_get_form_data_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetFormDataV1(apiClient_t *apiClient, int pkiEzsigndocumentID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsigndocument/{pkiEzsigndocumentID}/getFormData")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsigndocument/{pkiEzsigndocumentID}/getFormData");


    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + strlen("{ pkiEzsigndocumentID }");
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    intToStr(localVarBuff_pkiEzsigndocumentID, pkiEzsigndocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigndocumentID, localVarBuff_pkiEzsigndocumentID);



    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/zip"); //produces
    list_addElement(localVarHeaderType,"text/csv"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    if (apiClient->response_code == 200) {
        printf("%s\n","Successful response");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","The element you are trying to work on does not exist");
    }
    if (apiClient->response_code == 406) {
        printf("%s\n","One of the accept header is not defined or invalid.");
    }
    if (apiClient->response_code == 422) {
        printf("%s\n","The syntax of the request is valid but the request cannot be completed. Look for detail in body.");
    }
    //nonprimitive not container
    cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigndocument_get_form_data_v1_response_t *elementToReturn = ezsigndocument_get_form_data_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsigndocument
//
// ## ⚠️EARLY ADOPTERS WARNING  ### This endpoint is not officially released. Its definition might still change and it might not be available in every environment and region.
//
ezsigndocument_get_object_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetObjectV1(apiClient_t *apiClient, int pkiEzsigndocumentID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsigndocument/{pkiEzsigndocumentID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsigndocument/{pkiEzsigndocumentID}");


    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + strlen("{ pkiEzsigndocumentID }");
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    intToStr(localVarBuff_pkiEzsigndocumentID, pkiEzsigndocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigndocumentID, localVarBuff_pkiEzsigndocumentID);



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

    if (apiClient->response_code == 200) {
        printf("%s\n","Successful response");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","The element you are trying to work on does not exist");
    }
    //nonprimitive not container
    cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigndocument_get_object_v1_response_t *elementToReturn = ezsigndocument_get_object_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve positions X,Y of given words from a Ezsigndocument
//
ezsigndocument_get_words_positions_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetWordsPositionsV1(apiClient_t *apiClient, int pkiEzsigndocumentID , ezsigndocument_get_words_positions_v1_request_t * ezsigndocument_get_words_positions_v1_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsigndocument/{pkiEzsigndocumentID}/getWordsPositions")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsigndocument/{pkiEzsigndocumentID}/getWordsPositions");


    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + strlen("{ pkiEzsigndocumentID }");
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    intToStr(localVarBuff_pkiEzsigndocumentID, pkiEzsigndocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigndocumentID, localVarBuff_pkiEzsigndocumentID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigndocument_get_words_positions_v1_request = NULL;
    if (ezsigndocument_get_words_positions_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsigndocument_get_words_positions_v1_request = ezsigndocument_get_words_positions_v1_request_convertToJSON(ezsigndocument_get_words_positions_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigndocument_get_words_positions_v1_request);
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

    if (apiClient->response_code == 200) {
        printf("%s\n","Successful response");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","The element you are trying to work on does not exist");
    }
    if (apiClient->response_code == 422) {
        printf("%s\n","The syntax of the request is valid but the request cannot be completed. Look for detail in body.");
    }
    //nonprimitive not container
    cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigndocument_get_words_positions_v1_response_t *elementToReturn = ezsigndocument_get_words_positions_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    if (localVarSingleItemJSON_ezsigndocument_get_words_positions_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigndocument_get_words_positions_v1_request);
        localVarSingleItemJSON_ezsigndocument_get_words_positions_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Patch an existing Ezsigndocument
//
ezsigndocument_patch_object_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentPatchObjectV1(apiClient_t *apiClient, int pkiEzsigndocumentID , ezsigndocument_patch_object_v1_request_t * ezsigndocument_patch_object_v1_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsigndocument/{pkiEzsigndocumentID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsigndocument/{pkiEzsigndocumentID}");


    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + strlen("{ pkiEzsigndocumentID }");
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    intToStr(localVarBuff_pkiEzsigndocumentID, pkiEzsigndocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigndocumentID, localVarBuff_pkiEzsigndocumentID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigndocument_patch_object_v1_request = NULL;
    if (ezsigndocument_patch_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsigndocument_patch_object_v1_request = ezsigndocument_patch_object_v1_request_convertToJSON(ezsigndocument_patch_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigndocument_patch_object_v1_request);
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

    if (apiClient->response_code == 200) {
        printf("%s\n","Successful response");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","The element you are trying to work on does not exist");
    }
    if (apiClient->response_code == 422) {
        printf("%s\n","The syntax of the request is valid but the request cannot be completed. Look for detail in body.");
    }
    //nonprimitive not container
    cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigndocument_patch_object_v1_response_t *elementToReturn = ezsigndocument_patch_object_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    if (localVarSingleItemJSON_ezsigndocument_patch_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigndocument_patch_object_v1_request);
        localVarSingleItemJSON_ezsigndocument_patch_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

