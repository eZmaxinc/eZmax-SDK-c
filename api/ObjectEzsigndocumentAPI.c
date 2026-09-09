#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "ObjectEzsigndocumentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define MAX_NUMBER_LENGTH_LONG 21

// Functions for enum ESIGNERTYPE for ObjectEzsigndocumentAPI_ezsigndocumentGetActionableElementsForSignerV1

static char* ezsigndocumentGetActionableElementsForSignerV1_ESIGNERTYPE_ToString(ezmax_api_definition__full_ezsigndocumentGetActionableElementsForSignerV1_eSignerType_e ESIGNERTYPE){
    char *ESIGNERTYPEArray[] =  { "NULL", "Ezsignsigner", "User" };
    return ESIGNERTYPEArray[ESIGNERTYPE];
}

static ezmax_api_definition__full_ezsigndocumentGetActionableElementsForSignerV1_eSignerType_e ezsigndocumentGetActionableElementsForSignerV1_ESIGNERTYPE_FromString(char* ESIGNERTYPE){
    int stringToReturn = 0;
    char *ESIGNERTYPEArray[] =  { "NULL", "Ezsignsigner", "User" };
    size_t sizeofArray = sizeof(ESIGNERTYPEArray) / sizeof(ESIGNERTYPEArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(ESIGNERTYPE, ESIGNERTYPEArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function ezsigndocumentGetActionableElementsForSignerV1_ESIGNERTYPE_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *ezsigndocumentGetActionableElementsForSignerV1_ESIGNERTYPE_convertToJSON(ezmax_api_definition__full_ezsigndocumentGetActionableElementsForSignerV1_eSignerType_e ESIGNERTYPE) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "eSignerType", ezsigndocumentGetActionableElementsForSignerV1_ESIGNERTYPE_ToString(ESIGNERTYPE)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function ezsigndocumentGetActionableElementsForSignerV1_ESIGNERTYPE_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_ezsigndocumentGetActionableElementsForSignerV1_eSignerType_e ezsigndocumentGetActionableElementsForSignerV1_ESIGNERTYPE_parseFromJSON(cJSON* ESIGNERTYPEJSON) {
    ezmax_api_definition__full_ezsigndocumentGetActionableElementsForSignerV1_eSignerType_e ESIGNERTYPEVariable = 0;
    cJSON *ESIGNERTYPEVar = cJSON_GetObjectItemCaseSensitive(ESIGNERTYPEJSON, "eSignerType");
    if(!cJSON_IsString(ESIGNERTYPEVar) || (ESIGNERTYPEVar->valuestring == NULL))
    {
        goto end;
    }
    ESIGNERTYPEVariable = ezsigndocumentGetActionableElementsForSignerV1_ESIGNERTYPE_FromString(ESIGNERTYPEVar->valuestring);
    return ESIGNERTYPEVariable;
end:
    return 0;
}
*/

// Functions for enum EDOCUMENTTYPE for ObjectEzsigndocumentAPI_ezsigndocumentGetDownloadUrlV1

static char* ezsigndocumentGetDownloadUrlV1_EDOCUMENTTYPE_ToString(ezmax_api_definition__full_ezsigndocumentGetDownloadUrlV1_eDocumentType_e EDOCUMENTTYPE){
    char *EDOCUMENTTYPEArray[] =  { "NULL", "Original", "Initial", "SignatureReady", "Signed", "Proof", "Proofdocument" };
    return EDOCUMENTTYPEArray[EDOCUMENTTYPE];
}

static ezmax_api_definition__full_ezsigndocumentGetDownloadUrlV1_eDocumentType_e ezsigndocumentGetDownloadUrlV1_EDOCUMENTTYPE_FromString(char* EDOCUMENTTYPE){
    int stringToReturn = 0;
    char *EDOCUMENTTYPEArray[] =  { "NULL", "Original", "Initial", "SignatureReady", "Signed", "Proof", "Proofdocument" };
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
static cJSON *ezsigndocumentGetDownloadUrlV1_EDOCUMENTTYPE_convertToJSON(ezmax_api_definition__full_ezsigndocumentGetDownloadUrlV1_eDocumentType_e EDOCUMENTTYPE) {
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
static ezmax_api_definition__full_ezsigndocumentGetDownloadUrlV1_eDocumentType_e ezsigndocumentGetDownloadUrlV1_EDOCUMENTTYPE_parseFromJSON(cJSON* EDOCUMENTTYPEJSON) {
    ezmax_api_definition__full_ezsigndocumentGetDownloadUrlV1_eDocumentType_e EDOCUMENTTYPEVariable = 0;
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


// Apply an Ezsigntemplate to the Ezsigndocument
//
// This function is deprecated. Please use *applyEzsigntemplate* instead which is doing the same thing but with a capital \"E\" to normalize the nomenclature.  This endpoint applies a predefined template to the ezsign document. This allows to automatically apply all the form and signature fields on a document in a single step.  The document must not already have fields otherwise an error will be returned.
//
ezsigndocument_apply_ezsigntemplate_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentApplyEzsigntemplateV1(apiClient_t *apiClient, int *pkiEzsigndocumentID, ezsigndocument_apply_ezsigntemplate_v1_request_t *ezsigndocument_apply_ezsigntemplate_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsigndocument/{pkiEzsigndocumentID}/applyezsigntemplate");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigndocumentID, localVarBuff_pkiEzsigndocumentID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigndocument_apply_ezsigntemplate_v1_request = NULL;
    if (ezsigndocument_apply_ezsigntemplate_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsigndocument_apply_ezsigntemplate_v1_request = ezsigndocument_apply_ezsigntemplate_v1_request_convertToJSON(ezsigndocument_apply_ezsigntemplate_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigndocument_apply_ezsigntemplate_v1_request);
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_apply_ezsigntemplate_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_apply_ezsigntemplate_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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

// Apply an Ezsigntemplate to the Ezsigndocument
//
// This endpoint applies a predefined template to the ezsign document. This allows to automatically apply all the form and signature fields on a document in a single step.  The document must not already have fields otherwise an error will be returned.
//
ezsigndocument_apply_ezsigntemplate_v2_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentApplyEzsigntemplateV2(apiClient_t *apiClient, int *pkiEzsigndocumentID, ezsigndocument_apply_ezsigntemplate_v2_request_t *ezsigndocument_apply_ezsigntemplate_v2_request)
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
    char *localVarPath = strdup("/2/object/ezsigndocument/{pkiEzsigndocumentID}/applyEzsigntemplate");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigndocumentID, localVarBuff_pkiEzsigndocumentID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigndocument_apply_ezsigntemplate_v2_request = NULL;
    if (ezsigndocument_apply_ezsigntemplate_v2_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsigndocument_apply_ezsigntemplate_v2_request = ezsigndocument_apply_ezsigntemplate_v2_request_convertToJSON(ezsigndocument_apply_ezsigntemplate_v2_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigndocument_apply_ezsigntemplate_v2_request);
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_apply_ezsigntemplate_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_apply_ezsigntemplate_v2_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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

// Apply an Ezsigntemplate to the Ezsigndocument
//
// This endpoint applies a predefined template to the ezsign document. This allows to automatically apply all the form and signature fields on a document in a single step.  The document must not already have fields otherwise an error will be returned.
//
ezsigndocument_apply_ezsigntemplate_v3_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentApplyEzsigntemplateV3(apiClient_t *apiClient, int *pkiEzsigndocumentID, ezsigndocument_apply_ezsigntemplate_v3_request_t *ezsigndocument_apply_ezsigntemplate_v3_request)
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
    char *localVarPath = strdup("/3/object/ezsigndocument/{pkiEzsigndocumentID}/applyEzsigntemplate");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigndocumentID, localVarBuff_pkiEzsigndocumentID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigndocument_apply_ezsigntemplate_v3_request = NULL;
    if (ezsigndocument_apply_ezsigntemplate_v3_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsigndocument_apply_ezsigntemplate_v3_request = ezsigndocument_apply_ezsigntemplate_v3_request_convertToJSON(ezsigndocument_apply_ezsigntemplate_v3_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigndocument_apply_ezsigntemplate_v3_request);
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_apply_ezsigntemplate_v3_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_apply_ezsigntemplate_v3_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    if (localVarSingleItemJSON_ezsigndocument_apply_ezsigntemplate_v3_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigndocument_apply_ezsigntemplate_v3_request);
        localVarSingleItemJSON_ezsigndocument_apply_ezsigntemplate_v3_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Apply an Ezsigntemplateglobal to the Ezsigndocument
//
// This endpoint applies a predefined template to the ezsign document. This allows to automatically apply all the form and signature fields on a document in a single step.  The document must not already have fields otherwise an error will be returned.
//
ezsigndocument_apply_ezsigntemplateglobal_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentApplyEzsigntemplateglobalV1(apiClient_t *apiClient, int *pkiEzsigndocumentID, ezsigndocument_apply_ezsigntemplateglobal_v1_request_t *ezsigndocument_apply_ezsigntemplateglobal_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsigndocument/{pkiEzsigndocumentID}/applyEzsigntemplateglobal");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigndocumentID, localVarBuff_pkiEzsigndocumentID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigndocument_apply_ezsigntemplateglobal_v1_request = NULL;
    if (ezsigndocument_apply_ezsigntemplateglobal_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsigndocument_apply_ezsigntemplateglobal_v1_request = ezsigndocument_apply_ezsigntemplateglobal_v1_request_convertToJSON(ezsigndocument_apply_ezsigntemplateglobal_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigndocument_apply_ezsigntemplateglobal_v1_request);
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_apply_ezsigntemplateglobal_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_apply_ezsigntemplateglobal_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    if (localVarSingleItemJSON_ezsigndocument_apply_ezsigntemplateglobal_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigndocument_apply_ezsigntemplateglobal_v1_request);
        localVarSingleItemJSON_ezsigndocument_apply_ezsigntemplateglobal_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Apply an Ezsigntemplateglobal to the Ezsigndocument
//
// This endpoint applies a predefined template to the ezsign document. This allows to automatically apply all the form and signature fields on a document in a single step.  The document must not already have fields otherwise an error will be returned.
//
ezsigndocument_apply_ezsigntemplateglobal_v2_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentApplyEzsigntemplateglobalV2(apiClient_t *apiClient, int *pkiEzsigndocumentID, ezsigndocument_apply_ezsigntemplateglobal_v2_request_t *ezsigndocument_apply_ezsigntemplateglobal_v2_request)
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
    char *localVarPath = strdup("/2/object/ezsigndocument/{pkiEzsigndocumentID}/applyEzsigntemplateglobal");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigndocumentID, localVarBuff_pkiEzsigndocumentID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigndocument_apply_ezsigntemplateglobal_v2_request = NULL;
    if (ezsigndocument_apply_ezsigntemplateglobal_v2_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsigndocument_apply_ezsigntemplateglobal_v2_request = ezsigndocument_apply_ezsigntemplateglobal_v2_request_convertToJSON(ezsigndocument_apply_ezsigntemplateglobal_v2_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigndocument_apply_ezsigntemplateglobal_v2_request);
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_apply_ezsigntemplateglobal_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_apply_ezsigntemplateglobal_v2_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    if (localVarSingleItemJSON_ezsigndocument_apply_ezsigntemplateglobal_v2_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigndocument_apply_ezsigntemplateglobal_v2_request);
        localVarSingleItemJSON_ezsigndocument_apply_ezsigntemplateglobal_v2_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Create multiple Ezsignsignatures/Ezsignformfieldgroups
//
// Using this endpoint, you can create multiple Ezsignsignatures/Ezsignformfieldgroups positioned by word at the same time.  Major step overhaul.  Endpoints that existed before version 1.3 do not allow you to combine forms and signatures in the same step. The step numbers are different from those indicated by endpoints added since version 1.3. This endpoint is compatible with endpoints that existed before 1.3 but are not compatible with those added since 1.3.
//
ezsigndocument_create_ezsignelements_positioned_by_word_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentCreateEzsignelementsPositionedByWordV1(apiClient_t *apiClient, int *pkiEzsigndocumentID, ezsigndocument_create_ezsignelements_positioned_by_word_v1_request_t *ezsigndocument_create_ezsignelements_positioned_by_word_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsigndocument/{pkiEzsigndocumentID}/createEzsignelementsPositionedByWord");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigndocumentID, localVarBuff_pkiEzsigndocumentID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigndocument_create_ezsignelements_positioned_by_word_v1_request = NULL;
    if (ezsigndocument_create_ezsignelements_positioned_by_word_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsigndocument_create_ezsignelements_positioned_by_word_v1_request = ezsigndocument_create_ezsignelements_positioned_by_word_v1_request_convertToJSON(ezsigndocument_create_ezsignelements_positioned_by_word_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigndocument_create_ezsignelements_positioned_by_word_v1_request);
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_create_ezsignelements_positioned_by_word_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_create_ezsignelements_positioned_by_word_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    if (localVarSingleItemJSON_ezsigndocument_create_ezsignelements_positioned_by_word_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigndocument_create_ezsignelements_positioned_by_word_v1_request);
        localVarSingleItemJSON_ezsigndocument_create_ezsignelements_positioned_by_word_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Create multiple Ezsignsignatures/Ezsignformfieldgroups
//
// Using this endpoint, you can create multiple Ezsignsignatures/Ezsignformfieldgroups positioned by word at the same time.
//
ezsigndocument_create_ezsignelements_positioned_by_word_v2_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentCreateEzsignelementsPositionedByWordV2(apiClient_t *apiClient, int *pkiEzsigndocumentID, ezsigndocument_create_ezsignelements_positioned_by_word_v2_request_t *ezsigndocument_create_ezsignelements_positioned_by_word_v2_request)
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
    char *localVarPath = strdup("/2/object/ezsigndocument/{pkiEzsigndocumentID}/createEzsignelementsPositionedByWord");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigndocumentID, localVarBuff_pkiEzsigndocumentID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigndocument_create_ezsignelements_positioned_by_word_v2_request = NULL;
    if (ezsigndocument_create_ezsignelements_positioned_by_word_v2_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsigndocument_create_ezsignelements_positioned_by_word_v2_request = ezsigndocument_create_ezsignelements_positioned_by_word_v2_request_convertToJSON(ezsigndocument_create_ezsignelements_positioned_by_word_v2_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigndocument_create_ezsignelements_positioned_by_word_v2_request);
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_create_ezsignelements_positioned_by_word_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_create_ezsignelements_positioned_by_word_v2_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    if (localVarSingleItemJSON_ezsigndocument_create_ezsignelements_positioned_by_word_v2_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigndocument_create_ezsignelements_positioned_by_word_v2_request);
        localVarSingleItemJSON_ezsigndocument_create_ezsignelements_positioned_by_word_v2_request = NULL;
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
ObjectEzsigndocumentAPI_ezsigndocumentCreateObjectV1(apiClient_t *apiClient, list_t *ezsigndocument_create_object_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsigndocument");





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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 413) {
    //    printf("%s\n","The request was large. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body. If the error is recoverable sTemporaryFileUrl will be set and you can use this url to try a new request without sending the file over again.");
    //}
    //nonprimitive not container
    ezsigndocument_create_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_create_object_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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

// Create a new Ezsigndocument
//
// The endpoint allows to create one or many elements at once.
//
ezsigndocument_create_object_v2_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentCreateObjectV2(apiClient_t *apiClient, ezsigndocument_create_object_v2_request_t *ezsigndocument_create_object_v2_request)
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
    char *localVarPath = strdup("/2/object/ezsigndocument");





    // Body Param
    cJSON *localVarSingleItemJSON_ezsigndocument_create_object_v2_request = NULL;
    if (ezsigndocument_create_object_v2_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsigndocument_create_object_v2_request = ezsigndocument_create_object_v2_request_convertToJSON(ezsigndocument_create_object_v2_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigndocument_create_object_v2_request);
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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body. If the error is recoverable sTemporaryFileUrl will be set and you can use this url to try a new request without sending the file over again.");
    //}
    //nonprimitive not container
    ezsigndocument_create_object_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_create_object_v2_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_ezsigndocument_create_object_v2_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigndocument_create_object_v2_request);
        localVarSingleItemJSON_ezsigndocument_create_object_v2_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Create a new Ezsigndocument
//
// The endpoint allows to create one or many elements at once.
//
ezsigndocument_create_object_v3_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentCreateObjectV3(apiClient_t *apiClient, ezsigndocument_create_object_v3_request_t *ezsigndocument_create_object_v3_request)
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
    char *localVarPath = strdup("/3/object/ezsigndocument");





    // Body Param
    cJSON *localVarSingleItemJSON_ezsigndocument_create_object_v3_request = NULL;
    if (ezsigndocument_create_object_v3_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsigndocument_create_object_v3_request = ezsigndocument_create_object_v3_request_convertToJSON(ezsigndocument_create_object_v3_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigndocument_create_object_v3_request);
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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body. If the error is recoverable sTemporaryFileUrl will be set and you can use this url to try a new request without sending the file over again.");
    //}
    //nonprimitive not container
    ezsigndocument_create_object_v3_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_create_object_v3_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_ezsigndocument_create_object_v3_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigndocument_create_object_v3_request);
        localVarSingleItemJSON_ezsigndocument_create_object_v3_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Decline to sign
//
// Decline to sign
//
ezsigndocument_decline_to_sign_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentDeclineToSignV1(apiClient_t *apiClient, int *pkiEzsigndocumentID, ezsigndocument_decline_to_sign_v1_request_t *ezsigndocument_decline_to_sign_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsigndocument/{pkiEzsigndocumentID}/declineToSign");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigndocumentID, localVarBuff_pkiEzsigndocumentID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigndocument_decline_to_sign_v1_request = NULL;
    if (ezsigndocument_decline_to_sign_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsigndocument_decline_to_sign_v1_request = ezsigndocument_decline_to_sign_v1_request_convertToJSON(ezsigndocument_decline_to_sign_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigndocument_decline_to_sign_v1_request);
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_decline_to_sign_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_decline_to_sign_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    if (localVarSingleItemJSON_ezsigndocument_decline_to_sign_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigndocument_decline_to_sign_v1_request);
        localVarSingleItemJSON_ezsigndocument_decline_to_sign_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an existing Ezsigndocument
//
// 
//
ezsigndocument_delete_object_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsigndocumentID)
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
    char *localVarPath = strdup("/1/object/ezsigndocument/{pkiEzsigndocumentID}");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

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
                    localVarBodyLength,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_delete_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_delete_object_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Edit multiple Ezsignannotations
//
// Using this endpoint, you can edit multiple Ezsignannotations at the same time.
//
ezsigndocument_edit_ezsignannotations_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentEditEzsignannotationsV1(apiClient_t *apiClient, int *pkiEzsigndocumentID, ezsigndocument_edit_ezsignannotations_v1_request_t *ezsigndocument_edit_ezsignannotations_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsigndocument/{pkiEzsigndocumentID}/editEzsignannotations");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigndocumentID, localVarBuff_pkiEzsigndocumentID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigndocument_edit_ezsignannotations_v1_request = NULL;
    if (ezsigndocument_edit_ezsignannotations_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsigndocument_edit_ezsignannotations_v1_request = ezsigndocument_edit_ezsignannotations_v1_request_convertToJSON(ezsigndocument_edit_ezsignannotations_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigndocument_edit_ezsignannotations_v1_request);
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_edit_ezsignannotations_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_edit_ezsignannotations_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    if (localVarSingleItemJSON_ezsigndocument_edit_ezsignannotations_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigndocument_edit_ezsignannotations_v1_request);
        localVarSingleItemJSON_ezsigndocument_edit_ezsignannotations_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Edit multiple Ezsignformfieldgroups
//
// Using this endpoint, you can edit multiple Ezsignformfieldgroups at the same time.
//
ezsigndocument_edit_ezsignformfieldgroups_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentEditEzsignformfieldgroupsV1(apiClient_t *apiClient, int *pkiEzsigndocumentID, ezsigndocument_edit_ezsignformfieldgroups_v1_request_t *ezsigndocument_edit_ezsignformfieldgroups_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsigndocument/{pkiEzsigndocumentID}/editEzsignformfieldgroups");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigndocumentID, localVarBuff_pkiEzsigndocumentID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigndocument_edit_ezsignformfieldgroups_v1_request = NULL;
    if (ezsigndocument_edit_ezsignformfieldgroups_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsigndocument_edit_ezsignformfieldgroups_v1_request = ezsigndocument_edit_ezsignformfieldgroups_v1_request_convertToJSON(ezsigndocument_edit_ezsignformfieldgroups_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigndocument_edit_ezsignformfieldgroups_v1_request);
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_edit_ezsignformfieldgroups_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_edit_ezsignformfieldgroups_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    if (localVarSingleItemJSON_ezsigndocument_edit_ezsignformfieldgroups_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigndocument_edit_ezsignformfieldgroups_v1_request);
        localVarSingleItemJSON_ezsigndocument_edit_ezsignformfieldgroups_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Edit multiple Ezsignformfieldgroups
//
// Using this endpoint, you can edit multiple Ezsignformfieldgroups at the same time.
//
ezsigndocument_edit_ezsignformfieldgroups_v2_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentEditEzsignformfieldgroupsV2(apiClient_t *apiClient, int *pkiEzsigndocumentID, ezsigndocument_edit_ezsignformfieldgroups_v2_request_t *ezsigndocument_edit_ezsignformfieldgroups_v2_request)
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
    char *localVarPath = strdup("/2/object/ezsigndocument/{pkiEzsigndocumentID}/editEzsignformfieldgroups");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigndocumentID, localVarBuff_pkiEzsigndocumentID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigndocument_edit_ezsignformfieldgroups_v2_request = NULL;
    if (ezsigndocument_edit_ezsignformfieldgroups_v2_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsigndocument_edit_ezsignformfieldgroups_v2_request = ezsigndocument_edit_ezsignformfieldgroups_v2_request_convertToJSON(ezsigndocument_edit_ezsignformfieldgroups_v2_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigndocument_edit_ezsignformfieldgroups_v2_request);
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_edit_ezsignformfieldgroups_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_edit_ezsignformfieldgroups_v2_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    if (localVarSingleItemJSON_ezsigndocument_edit_ezsignformfieldgroups_v2_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigndocument_edit_ezsignformfieldgroups_v2_request);
        localVarSingleItemJSON_ezsigndocument_edit_ezsignformfieldgroups_v2_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Edit multiple Ezsignsignatures
//
// Using this endpoint, you can edit multiple Ezsignsignatures at the same time.  Major step overhaul.  Endpoints that existed before version 1.3 do not allow you to combine forms and signatures in the same step. The step numbers are different from those indicated by endpoints added since version 1.3. This endpoint is compatible with endpoints that existed before 1.3 but are not compatible with those added since 1.3.
//
ezsigndocument_edit_ezsignsignatures_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentEditEzsignsignaturesV1(apiClient_t *apiClient, int *pkiEzsigndocumentID, ezsigndocument_edit_ezsignsignatures_v1_request_t *ezsigndocument_edit_ezsignsignatures_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsigndocument/{pkiEzsigndocumentID}/editEzsignsignatures");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigndocumentID, localVarBuff_pkiEzsigndocumentID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigndocument_edit_ezsignsignatures_v1_request = NULL;
    if (ezsigndocument_edit_ezsignsignatures_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsigndocument_edit_ezsignsignatures_v1_request = ezsigndocument_edit_ezsignsignatures_v1_request_convertToJSON(ezsigndocument_edit_ezsignsignatures_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigndocument_edit_ezsignsignatures_v1_request);
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_edit_ezsignsignatures_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_edit_ezsignsignatures_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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

// Edit multiple Ezsignsignatures
//
// Using this endpoint, you can edit multiple Ezsignsignatures at the same time.
//
ezsigndocument_edit_ezsignsignatures_v2_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentEditEzsignsignaturesV2(apiClient_t *apiClient, int *pkiEzsigndocumentID, ezsigndocument_edit_ezsignsignatures_v2_request_t *ezsigndocument_edit_ezsignsignatures_v2_request)
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
    char *localVarPath = strdup("/2/object/ezsigndocument/{pkiEzsigndocumentID}/editEzsignsignatures");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigndocumentID, localVarBuff_pkiEzsigndocumentID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigndocument_edit_ezsignsignatures_v2_request = NULL;
    if (ezsigndocument_edit_ezsignsignatures_v2_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsigndocument_edit_ezsignsignatures_v2_request = ezsigndocument_edit_ezsignsignatures_v2_request_convertToJSON(ezsigndocument_edit_ezsignsignatures_v2_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigndocument_edit_ezsignsignatures_v2_request);
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_edit_ezsignsignatures_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_edit_ezsignsignatures_v2_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    if (localVarSingleItemJSON_ezsigndocument_edit_ezsignsignatures_v2_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigndocument_edit_ezsignsignatures_v2_request);
        localVarSingleItemJSON_ezsigndocument_edit_ezsignsignatures_v2_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Edit an existing Ezsigndocument
//
// 
//
ezsigndocument_edit_object_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentEditObjectV1(apiClient_t *apiClient, int *pkiEzsigndocumentID, ezsigndocument_edit_object_v1_request_t *ezsigndocument_edit_object_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsigndocument/{pkiEzsigndocumentID}");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigndocumentID, localVarBuff_pkiEzsigndocumentID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigndocument_edit_object_v1_request = NULL;
    if (ezsigndocument_edit_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsigndocument_edit_object_v1_request = ezsigndocument_edit_object_v1_request_convertToJSON(ezsigndocument_edit_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigndocument_edit_object_v1_request);
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body. If the error is recoverable sTemporaryFileUrl will be set and you can use this url to try a new request without sending the file over again.");
    //}
    //nonprimitive not container
    ezsigndocument_edit_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_edit_object_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    if (localVarSingleItemJSON_ezsigndocument_edit_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigndocument_edit_object_v1_request);
        localVarSingleItemJSON_ezsigndocument_edit_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// End prematurely
//
// End prematurely an Ezsigndocument when some signatures are still required
//
ezsigndocument_end_prematurely_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentEndPrematurelyV1(apiClient_t *apiClient, int *pkiEzsigndocumentID, object_t *body)
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
    char *localVarPath = strdup("/1/object/ezsigndocument/{pkiEzsigndocumentID}/endPrematurely");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigndocumentID, localVarBuff_pkiEzsigndocumentID);




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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_end_prematurely_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_end_prematurely_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
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

// Extract text from Ezsigndocument area
//
// Extract text from Ezsigndocument area
//
ezsigndocument_extract_text_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentExtractTextV1(apiClient_t *apiClient, int *pkiEzsigndocumentID, ezsigndocument_extract_text_v1_request_t *ezsigndocument_extract_text_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsigndocument/{pkiEzsigndocumentID}/extractText");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigndocumentID, localVarBuff_pkiEzsigndocumentID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigndocument_extract_text_v1_request = NULL;
    if (ezsigndocument_extract_text_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsigndocument_extract_text_v1_request = ezsigndocument_extract_text_v1_request_convertToJSON(ezsigndocument_extract_text_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigndocument_extract_text_v1_request);
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_extract_text_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_extract_text_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    if (localVarSingleItemJSON_ezsigndocument_extract_text_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigndocument_extract_text_v1_request);
        localVarSingleItemJSON_ezsigndocument_extract_text_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Flatten
//
// Flatten an Ezsigndocument signatures, forms and annotations. This process finalizes the PDF so that the forms and annotations become part of the document content and cannot be edited.
//
ezsigndocument_flatten_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentFlattenV1(apiClient_t *apiClient, int *pkiEzsigndocumentID, object_t *body)
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
    char *localVarPath = strdup("/1/object/ezsigndocument/{pkiEzsigndocumentID}/flatten");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigndocumentID, localVarBuff_pkiEzsigndocumentID);




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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_flatten_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_flatten_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
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

// Retrieve actionable elements of a user for the Ezsigndocument
//
// Return the Ezsignsignatures that can be signed and Ezsignformfieldgroups that can be filled by a user at the current step in the process
//
ezsigndocument_get_actionable_elements_for_signer_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetActionableElementsForSignerV1(apiClient_t *apiClient, int *pkiEzsigndocumentID, ezmax_api_definition__full_ezsigndocumentGetActionableElementsForSignerV1_eSignerType_e eSignerType, int *fkiEzsignsignerID, int *fkiUserID)
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
    char *localVarPath = strdup("/1/object/ezsigndocument/{pkiEzsigndocumentID}/getActionableElementsForSigner");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigndocumentID, localVarBuff_pkiEzsigndocumentID);




    // query parameters
    char *keyQuery_eSignerType = NULL;
    ezmax_api_definition__full_ezsigndocumentGetActionableElementsForSignerV1_eSignerType_e valueQuery_eSignerType ;
    keyValuePair_t *keyPairQuery_eSignerType = 0;
    if (eSignerType)
    {
        keyQuery_eSignerType = strdup("eSignerType");
        valueQuery_eSignerType = (eSignerType);
        keyPairQuery_eSignerType = keyValuePair_create(keyQuery_eSignerType, strdup(ezsigndocumentGetActionableElementsForSignerV1_ESIGNERTYPE_ToString(
        valueQuery_eSignerType)));
        list_addElement(localVarQueryParameters,keyPairQuery_eSignerType);
    }

    // query parameters
    char *keyQuery_fkiEzsignsignerID = NULL;
    char * valueQuery_fkiEzsignsignerID = NULL;
    keyValuePair_t *keyPairQuery_fkiEzsignsignerID = 0;
    if (fkiEzsignsignerID)
    {
        keyQuery_fkiEzsignsignerID = strdup("fkiEzsignsignerID");
        valueQuery_fkiEzsignsignerID = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_fkiEzsignsignerID, MAX_NUMBER_LENGTH, "%d", *fkiEzsignsignerID);
        keyPairQuery_fkiEzsignsignerID = keyValuePair_create(keyQuery_fkiEzsignsignerID, valueQuery_fkiEzsignsignerID);
        list_addElement(localVarQueryParameters,keyPairQuery_fkiEzsignsignerID);
    }

    // query parameters
    char *keyQuery_fkiUserID = NULL;
    char * valueQuery_fkiUserID = NULL;
    keyValuePair_t *keyPairQuery_fkiUserID = 0;
    if (fkiUserID)
    {
        keyQuery_fkiUserID = strdup("fkiUserID");
        valueQuery_fkiUserID = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_fkiUserID, MAX_NUMBER_LENGTH, "%d", *fkiUserID);
        keyPairQuery_fkiUserID = keyValuePair_create(keyQuery_fkiUserID, valueQuery_fkiUserID);
        list_addElement(localVarQueryParameters,keyPairQuery_fkiUserID);
    }
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_get_actionable_elements_for_signer_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_get_actionable_elements_for_signer_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_pkiEzsigndocumentID);
    if(keyQuery_eSignerType){
        free(keyQuery_eSignerType);
        keyQuery_eSignerType = NULL;
    }
    if(keyPairQuery_eSignerType){
        keyValuePair_free(keyPairQuery_eSignerType);
        keyPairQuery_eSignerType = NULL;
    }
    if(keyQuery_fkiEzsignsignerID){
        free(keyQuery_fkiEzsignsignerID);
        keyQuery_fkiEzsignsignerID = NULL;
    }
    if(valueQuery_fkiEzsignsignerID){
        free(valueQuery_fkiEzsignsignerID);
        valueQuery_fkiEzsignsignerID = NULL;
    }
    if(keyPairQuery_fkiEzsignsignerID){
        keyValuePair_free(keyPairQuery_fkiEzsignsignerID);
        keyPairQuery_fkiEzsignsignerID = NULL;
    }
    if(keyQuery_fkiUserID){
        free(keyQuery_fkiUserID);
        keyQuery_fkiUserID = NULL;
    }
    if(valueQuery_fkiUserID){
        free(valueQuery_fkiUserID);
        valueQuery_fkiUserID = NULL;
    }
    if(keyPairQuery_fkiUserID){
        keyValuePair_free(keyPairQuery_fkiUserID);
        keyPairQuery_fkiUserID = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve actionable elements for the Ezsigndocument
//
// Return the Ezsignsignatures that can be signed and Ezsignformfieldgroups that can be filled by the current user at the current step in the process.  Major step overhaul.  Endpoints that existed before version 1.3 do not allow you to combine forms and signatures in the same step. The step numbers are different from those indicated by endpoints added since version 1.3. This endpoint is compatible with endpoints that existed before 1.3 but are not compatible with those added since 1.3. 
//
ezsigndocument_get_actionable_elements_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetActionableElementsV1(apiClient_t *apiClient, int *pkiEzsigndocumentID)
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
    char *localVarPath = strdup("/1/object/ezsigndocument/{pkiEzsigndocumentID}/getActionableElements");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

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
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_get_actionable_elements_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_get_actionable_elements_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve actionable elements for the Ezsigndocument
//
// Return the Ezsignsignatures that can be signed and Ezsignformfieldgroups that can be filled by the current user at the current step in the process
//
ezsigndocument_get_actionable_elements_v2_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetActionableElementsV2(apiClient_t *apiClient, int *pkiEzsigndocumentID)
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
    char *localVarPath = strdup("/2/object/ezsigndocument/{pkiEzsigndocumentID}/getActionableElements");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

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
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_get_actionable_elements_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_get_actionable_elements_v2_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve actionable elements for the Ezsigndocument
//
// Return the Ezsignsignatures that can be signed and Ezsignformfieldgroups that can be filled by the current user at the current step in the process
//
ezsigndocument_get_actionable_elements_v3_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetActionableElementsV3(apiClient_t *apiClient, int *pkiEzsigndocumentID)
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
    char *localVarPath = strdup("/3/object/ezsigndocument/{pkiEzsigndocumentID}/getActionableElements");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

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
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_get_actionable_elements_v3_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_get_actionable_elements_v3_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Ezsigndocument's Attachments
//
// 
//
ezsigndocument_get_attachments_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetAttachmentsV1(apiClient_t *apiClient, int *pkiEzsigndocumentID)
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
    char *localVarPath = strdup("/1/object/ezsigndocument/{pkiEzsigndocumentID}/getAttachments");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

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
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_get_attachments_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_get_attachments_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve completed elements for the Ezsigndocument
//
// Return the completed Ezsignsignatures, Ezsignformfieldgroups and Ezsignannotations at the current step in the process  Major step overhaul.  Endpoints that existed before version 1.3 do not allow you to combine forms and signatures in the same step. The step numbers are different from those indicated by endpoints added since version 1.3. This endpoint is compatible with endpoints that existed before 1.3 but are not compatible with those added since 1.3.
//
ezsigndocument_get_completed_elements_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetCompletedElementsV1(apiClient_t *apiClient, int *pkiEzsigndocumentID)
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
    char *localVarPath = strdup("/1/object/ezsigndocument/{pkiEzsigndocumentID}/getCompletedElements");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

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
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_get_completed_elements_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_get_completed_elements_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve completed elements for the Ezsigndocument
//
// Return the completed Ezsignsignatures, Ezsignformfieldgroups and Ezsignannotations at the current step in the process
//
ezsigndocument_get_completed_elements_v2_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetCompletedElementsV2(apiClient_t *apiClient, int *pkiEzsigndocumentID)
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
    char *localVarPath = strdup("/2/object/ezsigndocument/{pkiEzsigndocumentID}/getCompletedElements");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

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
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_get_completed_elements_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_get_completed_elements_v2_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve a URL to download documents
//
// This endpoint returns URLs to different files that can be downloaded during the signing process.  These links will expire after 5 minutes so the download of the file should be made soon after retrieving the link.
//
ezsigndocument_get_download_url_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetDownloadUrlV1(apiClient_t *apiClient, int *pkiEzsigndocumentID, ezmax_api_definition__full_ezsigndocumentGetDownloadUrlV1_eDocumentType_e eDocumentType)
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
    char *localVarPath = strdup("/1/object/ezsigndocument/{pkiEzsigndocumentID}/getDownloadUrl/{eDocumentType}");

    if(!eDocumentType)
        goto end;


    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + strlen(ezsigndocumentGetDownloadUrlV1_EDOCUMENTTYPE_ToString(eDocumentType))+3 + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigndocumentID, localVarBuff_pkiEzsigndocumentID);


    // Path Params
    long sizeOfPathParams_eDocumentType =  + strlen(ezsigndocumentGetDownloadUrlV1_EDOCUMENTTYPE_ToString(eDocumentType))+3 + sizeof("{ eDocumentType }") - 1;
    if(eDocumentType == 0) {
        goto end;
    }
    char* localVarToReplace_eDocumentType = malloc(sizeOfPathParams_eDocumentType);
    sprintf(localVarToReplace_eDocumentType, "{%s}", "eDocumentType");

    localVarPath = strReplace(localVarPath, localVarToReplace_eDocumentType, ezsigndocumentGetDownloadUrlV1_EDOCUMENTTYPE_ToString(eDocumentType));


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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_get_download_url_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_get_download_url_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    free(localVarToReplace_eDocumentType);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsigndocument's Ezsignannotations
//
// 
//
ezsigndocument_get_ezsignannotations_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetEzsignannotationsV1(apiClient_t *apiClient, int *pkiEzsigndocumentID)
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
    char *localVarPath = strdup("/1/object/ezsigndocument/{pkiEzsigndocumentID}/getEzsignannotations");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

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
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_get_ezsignannotations_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_get_ezsignannotations_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsigndocument's Ezsigndiscussions
//
// 
//
ezsigndocument_get_ezsigndiscussions_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetEzsigndiscussionsV1(apiClient_t *apiClient, int *pkiEzsigndocumentID)
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
    char *localVarPath = strdup("/1/object/ezsigndocument/{pkiEzsigndocumentID}/getEzsigndiscussions");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

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
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_get_ezsigndiscussions_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_get_ezsigndiscussions_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsigndocument's Ezsignformfieldgroups
//
// 
//
ezsigndocument_get_ezsignformfieldgroups_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetEzsignformfieldgroupsV1(apiClient_t *apiClient, int *pkiEzsigndocumentID)
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
    char *localVarPath = strdup("/1/object/ezsigndocument/{pkiEzsigndocumentID}/getEzsignformfieldgroups");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

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
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_get_ezsignformfieldgroups_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_get_ezsignformfieldgroups_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsigndocument's Ezsignpages
//
// 
//
ezsigndocument_get_ezsignpages_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetEzsignpagesV1(apiClient_t *apiClient, int *pkiEzsigndocumentID)
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
    char *localVarPath = strdup("/1/object/ezsigndocument/{pkiEzsigndocumentID}/getEzsignpages");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

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
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_get_ezsignpages_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_get_ezsignpages_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsigndocument's automatic Ezsignsignatures
//
// Return the Ezsignsignatures that can be signed by the current user at the current step in the process
//
ezsigndocument_get_ezsignsignatures_automatic_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetEzsignsignaturesAutomaticV1(apiClient_t *apiClient, int *pkiEzsigndocumentID)
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
    char *localVarPath = strdup("/1/object/ezsigndocument/{pkiEzsigndocumentID}/getEzsignsignaturesAutomatic");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

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
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_get_ezsignsignatures_automatic_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_get_ezsignsignatures_automatic_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsigndocument's Ezsignsignatures
//
// Major step overhaul.  Endpoints that existed before version 1.3 do not allow you to combine forms and signatures in the same step. The step numbers are different from those indicated by endpoints added since version 1.3. This endpoint is compatible with endpoints that existed before 1.3 but are not compatible with those added since 1.3.
//
ezsigndocument_get_ezsignsignatures_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetEzsignsignaturesV1(apiClient_t *apiClient, int *pkiEzsigndocumentID)
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
    char *localVarPath = strdup("/1/object/ezsigndocument/{pkiEzsigndocumentID}/getEzsignsignatures");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

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
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_get_ezsignsignatures_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_get_ezsignsignatures_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsigndocument's Ezsignsignatures
//
// 
//
ezsigndocument_get_ezsignsignatures_v2_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetEzsignsignaturesV2(apiClient_t *apiClient, int *pkiEzsigndocumentID)
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
    char *localVarPath = strdup("/2/object/ezsigndocument/{pkiEzsigndocumentID}/getEzsignsignatures");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

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
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_get_ezsignsignatures_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_get_ezsignsignatures_v2_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsigndocument's Form Data
//
// 
//
ezsigndocument_get_form_data_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetFormDataV1(apiClient_t *apiClient, int *pkiEzsigndocumentID)
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
    char *localVarPath = strdup("/1/object/ezsigndocument/{pkiEzsigndocumentID}/getFormData");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

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
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 406) {
    //    printf("%s\n","The URL is valid, but one of the Accept header is not defined or invalid. For example, you set the header \&quot;Accept: application/json\&quot; but the function can only return \&quot;Content-type: image/png\&quot;");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_get_form_data_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_get_form_data_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsigndocument
//
// Major step overhaul.  Endpoints that existed before version 1.3 do not allow you to combine forms and signatures in the same step. The step numbers are different from those indicated by endpoints added since version 1.3. This endpoint is compatible with endpoints that existed before 1.3 but are not compatible with those added since 1.3.
//
ezsigndocument_get_object_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetObjectV1(apiClient_t *apiClient, int *pkiEzsigndocumentID)
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
    char *localVarPath = strdup("/1/object/ezsigndocument/{pkiEzsigndocumentID}");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

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
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_get_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_get_object_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsigndocument
//
// Major step overhaul.  Endpoints that existed before version 1.3 do not allow you to combine forms and signatures in the same step. The step numbers are different from those indicated by endpoints added since version 1.3. This endpoint is compatible with endpoints that existed before 1.3 but are not compatible with those added since 1.3.
//
ezsigndocument_get_object_v2_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetObjectV2(apiClient_t *apiClient, int *pkiEzsigndocumentID)
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
    char *localVarPath = strdup("/2/object/ezsigndocument/{pkiEzsigndocumentID}");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

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
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_get_object_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_get_object_v2_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsigndocument
//
// 
//
ezsigndocument_get_object_v3_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetObjectV3(apiClient_t *apiClient, int *pkiEzsigndocumentID)
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
    char *localVarPath = strdup("/3/object/ezsigndocument/{pkiEzsigndocumentID}");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

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
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_get_object_v3_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_get_object_v3_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve the temporary proof
//
// Retrieve the temporary proof while the Ezsigndocument is being processed since the proof isn't available until the Ezsigndocument is completed
//
ezsigndocument_get_temporary_proof_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetTemporaryProofV1(apiClient_t *apiClient, int *pkiEzsigndocumentID)
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
    char *localVarPath = strdup("/1/object/ezsigndocument/{pkiEzsigndocumentID}/getTemporaryProof");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

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
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_get_temporary_proof_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_get_temporary_proof_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve positions X,Y of given words from a Ezsigndocument
//
// 
//
ezsigndocument_get_words_positions_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetWordsPositionsV1(apiClient_t *apiClient, int *pkiEzsigndocumentID, ezsigndocument_get_words_positions_v1_request_t *ezsigndocument_get_words_positions_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsigndocument/{pkiEzsigndocumentID}/getWordsPositions");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigndocumentID, localVarBuff_pkiEzsigndocumentID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigndocument_get_words_positions_v1_request = NULL;
    if (ezsigndocument_get_words_positions_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsigndocument_get_words_positions_v1_request = ezsigndocument_get_words_positions_v1_request_convertToJSON(ezsigndocument_get_words_positions_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigndocument_get_words_positions_v1_request);
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_get_words_positions_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_get_words_positions_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
// 
//
ezsigndocument_patch_object_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentPatchObjectV1(apiClient_t *apiClient, int *pkiEzsigndocumentID, ezsigndocument_patch_object_v1_request_t *ezsigndocument_patch_object_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsigndocument/{pkiEzsigndocumentID}");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigndocumentID, localVarBuff_pkiEzsigndocumentID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigndocument_patch_object_v1_request = NULL;
    if (ezsigndocument_patch_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsigndocument_patch_object_v1_request = ezsigndocument_patch_object_v1_request_convertToJSON(ezsigndocument_patch_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigndocument_patch_object_v1_request);
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_patch_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_patch_object_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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

// Prefill an Ezsignform
//
// Using this endpoint, you can prefill an Ezsignform.  To fill Ezsignformfield with type **Dropdown**, **Text**, **Textarea**, **Checkbox**, **Date**, **Number**, you must provide properties sEzsignformfieldgroupLabel and sEzsignformfieldLabel.  To fill Ezsignformfield with type **Radio**, you must provide only the property sEzsignformfieldgroupLabel.  In **PowerAutomate** if you need to add a line feed in sEzsignformfieldEnteredvalue, you should do it like this: concat('string1',decodeUriComponent('%0A'),'string2',decodeUriComponent('%0A'),'string3')
//
ezsigndocument_prefill_ezsignform_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentPrefillEzsignformV1(apiClient_t *apiClient, int *pkiEzsigndocumentID, ezsigndocument_prefill_ezsignform_v1_request_t *ezsigndocument_prefill_ezsignform_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsigndocument/{pkiEzsigndocumentID}/prefillEzsignform");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigndocumentID, localVarBuff_pkiEzsigndocumentID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigndocument_prefill_ezsignform_v1_request = NULL;
    if (ezsigndocument_prefill_ezsignform_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsigndocument_prefill_ezsignform_v1_request = ezsigndocument_prefill_ezsignform_v1_request_convertToJSON(ezsigndocument_prefill_ezsignform_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigndocument_prefill_ezsignform_v1_request);
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_prefill_ezsignform_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_prefill_ezsignform_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    if (localVarSingleItemJSON_ezsigndocument_prefill_ezsignform_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigndocument_prefill_ezsignform_v1_request);
        localVarSingleItemJSON_ezsigndocument_prefill_ezsignform_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Submit the Ezsignform
//
// 
//
ezsigndocument_submit_ezsignform_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentSubmitEzsignformV1(apiClient_t *apiClient, int *pkiEzsigndocumentID, ezsigndocument_submit_ezsignform_v1_request_t *ezsigndocument_submit_ezsignform_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsigndocument/{pkiEzsigndocumentID}/submitEzsignform");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigndocumentID, localVarBuff_pkiEzsigndocumentID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigndocument_submit_ezsignform_v1_request = NULL;
    if (ezsigndocument_submit_ezsignform_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsigndocument_submit_ezsignform_v1_request = ezsigndocument_submit_ezsignform_v1_request_convertToJSON(ezsigndocument_submit_ezsignform_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigndocument_submit_ezsignform_v1_request);
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_submit_ezsignform_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_submit_ezsignform_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
    if (localVarSingleItemJSON_ezsigndocument_submit_ezsignform_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigndocument_submit_ezsignform_v1_request);
        localVarSingleItemJSON_ezsigndocument_submit_ezsignform_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Unsend the Ezsigndocument
//
// Once an Ezsigndocument has been sent to signatories, it cannot be modified.  Using this endpoint, you can unsend the Ezsigndocument and make it modifiable again.  Signatories will receive an email informing them the signature process was aborted and they might receive a new invitation to sign.  âš ï¸ Warning: Any signature previously made by signatories on this Ezsigndocumentswill be lost.
//
ezsigndocument_unsend_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentUnsendV1(apiClient_t *apiClient, int *pkiEzsigndocumentID, object_t *body)
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
    char *localVarPath = strdup("/1/object/ezsigndocument/{pkiEzsigndocumentID}/unsend");



    // Path Params
    long sizeOfPathParams_pkiEzsigndocumentID =  + sizeof("{ pkiEzsigndocumentID }") - 1;
    if(pkiEzsigndocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigndocumentID = malloc(sizeOfPathParams_pkiEzsigndocumentID);
    snprintf(localVarToReplace_pkiEzsigndocumentID, sizeOfPathParams_pkiEzsigndocumentID, "{%s}", "pkiEzsigndocumentID");

    char localVarBuff_pkiEzsigndocumentID[256];
    snprintf(localVarBuff_pkiEzsigndocumentID, sizeof localVarBuff_pkiEzsigndocumentID, "%ld", (long)*pkiEzsigndocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigndocumentID, localVarBuff_pkiEzsigndocumentID);




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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezsigndocument_unsend_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigndocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigndocument_unsend_v1_response_parseFromJSON(ObjectEzsigndocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigndocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigndocumentID);
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

