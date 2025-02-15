#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectBillingentityexternalAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096

// Functions for enum SSELECTOR for ObjectBillingentityexternalAPI_billingentityexternalGetAutocompleteV2

static char* billingentityexternalGetAutocompleteV2_SSELECTOR_ToString(ezmax_api_definition__full_billingentityexternalGetAutocompleteV2_sSelector_e SSELECTOR){
    char *SSELECTORArray[] =  { "NULL", "All" };
    return SSELECTORArray[SSELECTOR];
}

static ezmax_api_definition__full_billingentityexternalGetAutocompleteV2_sSelector_e billingentityexternalGetAutocompleteV2_SSELECTOR_FromString(char* SSELECTOR){
    int stringToReturn = 0;
    char *SSELECTORArray[] =  { "NULL", "All" };
    size_t sizeofArray = sizeof(SSELECTORArray) / sizeof(SSELECTORArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(SSELECTOR, SSELECTORArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function billingentityexternalGetAutocompleteV2_SSELECTOR_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *billingentityexternalGetAutocompleteV2_SSELECTOR_convertToJSON(ezmax_api_definition__full_billingentityexternalGetAutocompleteV2_sSelector_e SSELECTOR) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "sSelector", billingentityexternalGetAutocompleteV2_SSELECTOR_ToString(SSELECTOR)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function billingentityexternalGetAutocompleteV2_SSELECTOR_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_billingentityexternalGetAutocompleteV2_sSelector_e billingentityexternalGetAutocompleteV2_SSELECTOR_parseFromJSON(cJSON* SSELECTORJSON) {
    ezmax_api_definition__full_billingentityexternalGetAutocompleteV2_sSelector_e SSELECTORVariable = 0;
    cJSON *SSELECTORVar = cJSON_GetObjectItemCaseSensitive(SSELECTORJSON, "sSelector");
    if(!cJSON_IsString(SSELECTORVar) || (SSELECTORVar->valuestring == NULL))
    {
        goto end;
    }
    SSELECTORVariable = billingentityexternalGetAutocompleteV2_SSELECTOR_FromString(SSELECTORVar->valuestring);
    return SSELECTORVariable;
end:
    return 0;
}
*/

// Functions for enum EFILTERACTIVE for ObjectBillingentityexternalAPI_billingentityexternalGetAutocompleteV2

static char* billingentityexternalGetAutocompleteV2_EFILTERACTIVE_ToString(ezmax_api_definition__full_billingentityexternalGetAutocompleteV2_eFilterActive_e EFILTERACTIVE){
    char *EFILTERACTIVEArray[] =  { "NULL", "All", "Active", "Inactive" };
    return EFILTERACTIVEArray[EFILTERACTIVE];
}

static ezmax_api_definition__full_billingentityexternalGetAutocompleteV2_eFilterActive_e billingentityexternalGetAutocompleteV2_EFILTERACTIVE_FromString(char* EFILTERACTIVE){
    int stringToReturn = 0;
    char *EFILTERACTIVEArray[] =  { "NULL", "All", "Active", "Inactive" };
    size_t sizeofArray = sizeof(EFILTERACTIVEArray) / sizeof(EFILTERACTIVEArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(EFILTERACTIVE, EFILTERACTIVEArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function billingentityexternalGetAutocompleteV2_EFILTERACTIVE_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *billingentityexternalGetAutocompleteV2_EFILTERACTIVE_convertToJSON(ezmax_api_definition__full_billingentityexternalGetAutocompleteV2_eFilterActive_e EFILTERACTIVE) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "eFilterActive", billingentityexternalGetAutocompleteV2_EFILTERACTIVE_ToString(EFILTERACTIVE)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function billingentityexternalGetAutocompleteV2_EFILTERACTIVE_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_billingentityexternalGetAutocompleteV2_eFilterActive_e billingentityexternalGetAutocompleteV2_EFILTERACTIVE_parseFromJSON(cJSON* EFILTERACTIVEJSON) {
    ezmax_api_definition__full_billingentityexternalGetAutocompleteV2_eFilterActive_e EFILTERACTIVEVariable = 0;
    cJSON *EFILTERACTIVEVar = cJSON_GetObjectItemCaseSensitive(EFILTERACTIVEJSON, "eFilterActive");
    if(!cJSON_IsString(EFILTERACTIVEVar) || (EFILTERACTIVEVar->valuestring == NULL))
    {
        goto end;
    }
    EFILTERACTIVEVariable = billingentityexternalGetAutocompleteV2_EFILTERACTIVE_FromString(EFILTERACTIVEVar->valuestring);
    return EFILTERACTIVEVariable;
end:
    return 0;
}
*/

// Functions for enum  for ObjectBillingentityexternalAPI_billingentityexternalGetAutocompleteV2

static char* billingentityexternalGetAutocompleteV2__ToString(ezmax_api_definition__full_billingentityexternalGetAutocompleteV2_Accept-Language_e ){
    char *Array[] =  { "NULL", "*", "en", "fr" };
    return Array[];
}

static ezmax_api_definition__full_billingentityexternalGetAutocompleteV2_Accept-Language_e billingentityexternalGetAutocompleteV2__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "*", "en", "fr" };
    size_t sizeofArray = sizeof(Array) / sizeof(Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(, Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function billingentityexternalGetAutocompleteV2__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *billingentityexternalGetAutocompleteV2__convertToJSON(ezmax_api_definition__full_billingentityexternalGetAutocompleteV2_Accept-Language_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function billingentityexternalGetAutocompleteV2__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_billingentityexternalGetAutocompleteV2_Accept-Language_e billingentityexternalGetAutocompleteV2__parseFromJSON(cJSON* JSON) {
    ezmax_api_definition__full_billingentityexternalGetAutocompleteV2_Accept-Language_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/


// Generate a federation token
//
// 
//
billingentityexternal_generate_federation_token_v1_response_t*
ObjectBillingentityexternalAPI_billingentityexternalGenerateFederationTokenV1(apiClient_t *apiClient, int *pkiBillingentityexternalID, billingentityexternal_generate_federation_token_v1_request_t *billingentityexternal_generate_federation_token_v1_request)
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
    char *localVarPath = strdup("/1/object/billingentityexternal/{pkiBillingentityexternalID}/generateFederationToken");



    // Path Params
    long sizeOfPathParams_pkiBillingentityexternalID =  + sizeof("{ pkiBillingentityexternalID }") - 1;
    if(pkiBillingentityexternalID == 0){
        goto end;
    }
    char* localVarToReplace_pkiBillingentityexternalID = malloc(sizeOfPathParams_pkiBillingentityexternalID);
    snprintf(localVarToReplace_pkiBillingentityexternalID, sizeOfPathParams_pkiBillingentityexternalID, "{%s}", "pkiBillingentityexternalID");

    char localVarBuff_pkiBillingentityexternalID[256];
    snprintf(localVarBuff_pkiBillingentityexternalID, sizeof localVarBuff_pkiBillingentityexternalID, "%ld", (long)*pkiBillingentityexternalID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiBillingentityexternalID, localVarBuff_pkiBillingentityexternalID);




    // Body Param
    cJSON *localVarSingleItemJSON_billingentityexternal_generate_federation_token_v1_request = NULL;
    if (billingentityexternal_generate_federation_token_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_billingentityexternal_generate_federation_token_v1_request = billingentityexternal_generate_federation_token_v1_request_convertToJSON(billingentityexternal_generate_federation_token_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_billingentityexternal_generate_federation_token_v1_request);
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
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    billingentityexternal_generate_federation_token_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectBillingentityexternalAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = billingentityexternal_generate_federation_token_v1_response_parseFromJSON(ObjectBillingentityexternalAPIlocalVarJSON);
        cJSON_Delete(ObjectBillingentityexternalAPIlocalVarJSON);
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
    free(localVarToReplace_pkiBillingentityexternalID);
    if (localVarSingleItemJSON_billingentityexternal_generate_federation_token_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_billingentityexternal_generate_federation_token_v1_request);
        localVarSingleItemJSON_billingentityexternal_generate_federation_token_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Billingentityexternals and IDs
//
// Get the list of Billingentityexternal to be used in a dropdown or autocomplete control.
//
billingentityexternal_get_autocomplete_v2_response_t*
ObjectBillingentityexternalAPI_billingentityexternalGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_billingentityexternalGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_billingentityexternalGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/2/object/billingentityexternal/getAutocomplete/{sSelector}");

    if(!sSelector)
        goto end;


    // Path Params
    long sizeOfPathParams_sSelector = strlen(billingentityexternalGetAutocompleteV2_SSELECTOR_ToString(sSelector))+3 + sizeof("{ sSelector }") - 1;
    if(sSelector == 0) {
        goto end;
    }
    char* localVarToReplace_sSelector = malloc(sizeOfPathParams_sSelector);
    sprintf(localVarToReplace_sSelector, "{%s}", "sSelector");

    localVarPath = strReplace(localVarPath, localVarToReplace_sSelector, billingentityexternalGetAutocompleteV2_SSELECTOR_ToString(sSelector));



    // header parameters
    char *keyHeader_Accept_Language = NULL;
    header_accept_language_e valueHeader_Accept_Language = 0;
    keyValuePair_t *keyPairHeader_Accept_Language = 0;
    if (Accept_Language) {
        keyHeader_Accept_Language = strdup("Accept-Language");
        valueHeader_Accept_Language = (Accept_Language);
        keyPairHeader_Accept_Language = keyValuePair_create(keyHeader_Accept_Language, (void *)&valueHeader_Accept_Language);
        list_addElement(localVarHeaderParameters,keyPairHeader_Accept_Language);
    }


    // query parameters
    char *keyQuery_eFilterActive = NULL;
    ezmax_api_definition__full_billingentityexternalGetAutocompleteV2_eFilterActive_e valueQuery_eFilterActive ;
    keyValuePair_t *keyPairQuery_eFilterActive = 0;
    if (eFilterActive)
    {
        keyQuery_eFilterActive = strdup("eFilterActive");
        valueQuery_eFilterActive = (eFilterActive);
        keyPairQuery_eFilterActive = keyValuePair_create(keyQuery_eFilterActive, strdup(billingentityexternalGetAutocompleteV2_EFILTERACTIVE_ToString(
        valueQuery_eFilterActive)));
        list_addElement(localVarQueryParameters,keyPairQuery_eFilterActive);
    }

    // query parameters
    char *keyQuery_sQuery = NULL;
    char * valueQuery_sQuery = NULL;
    keyValuePair_t *keyPairQuery_sQuery = 0;
    if (sQuery)
    {
        keyQuery_sQuery = strdup("sQuery");
        valueQuery_sQuery = strdup((sQuery));
        keyPairQuery_sQuery = keyValuePair_create(keyQuery_sQuery, valueQuery_sQuery);
        list_addElement(localVarQueryParameters,keyPairQuery_sQuery);
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
    //nonprimitive not container
    billingentityexternal_get_autocomplete_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectBillingentityexternalAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = billingentityexternal_get_autocomplete_v2_response_parseFromJSON(ObjectBillingentityexternalAPIlocalVarJSON);
        cJSON_Delete(ObjectBillingentityexternalAPIlocalVarJSON);
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
    list_freeList(localVarHeaderParameters);
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_sSelector);
    if (keyHeader_Accept_Language) {
        free(keyHeader_Accept_Language);
        keyHeader_Accept_Language = NULL;
    }
    free(keyPairHeader_Accept_Language);
    if(keyQuery_eFilterActive){
        free(keyQuery_eFilterActive);
        keyQuery_eFilterActive = NULL;
    }
    if(keyPairQuery_eFilterActive){
        keyValuePair_free(keyPairQuery_eFilterActive);
        keyPairQuery_eFilterActive = NULL;
    }
    if(keyQuery_sQuery){
        free(keyQuery_sQuery);
        keyQuery_sQuery = NULL;
    }
    if(valueQuery_sQuery){
        free(valueQuery_sQuery);
        valueQuery_sQuery = NULL;
    }
    if(keyPairQuery_sQuery){
        keyValuePair_free(keyPairQuery_sQuery);
        keyPairQuery_sQuery = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

