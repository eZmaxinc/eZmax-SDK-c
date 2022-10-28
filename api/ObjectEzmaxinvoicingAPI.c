#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzmaxinvoicingAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)

// Functions for enum SSELECTOR for ObjectEzmaxinvoicingAPI_ezmaxinvoicingGetAutocompleteV1

static char* ezmaxinvoicingGetAutocompleteV1_SSELECTOR_ToString(ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV1_sSelector_e SSELECTOR){
    char *SSELECTORArray[] =  { "NULL", "All" };
    return SSELECTORArray[SSELECTOR];
}

static ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV1_sSelector_e ezmaxinvoicingGetAutocompleteV1_SSELECTOR_FromString(char* SSELECTOR){
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
// Function ezmaxinvoicingGetAutocompleteV1_SSELECTOR_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *ezmaxinvoicingGetAutocompleteV1_SSELECTOR_convertToJSON(ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV1_sSelector_e SSELECTOR) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "sSelector", ezmaxinvoicingGetAutocompleteV1_SSELECTOR_ToString(SSELECTOR)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function ezmaxinvoicingGetAutocompleteV1_SSELECTOR_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV1_sSelector_e ezmaxinvoicingGetAutocompleteV1_SSELECTOR_parseFromJSON(cJSON* SSELECTORJSON) {
    ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV1_sSelector_e SSELECTORVariable = 0;
    cJSON *SSELECTORVar = cJSON_GetObjectItemCaseSensitive(SSELECTORJSON, "sSelector");
    if(!cJSON_IsString(SSELECTORVar) || (SSELECTORVar->valuestring == NULL))
    {
        goto end;
    }
    SSELECTORVariable = ezmaxinvoicingGetAutocompleteV1_SSELECTOR_FromString(SSELECTORVar->valuestring);
    return SSELECTORVariable;
end:
    return 0;
}
*/

// Functions for enum EFILTERACTIVE for ObjectEzmaxinvoicingAPI_ezmaxinvoicingGetAutocompleteV1

static char* ezmaxinvoicingGetAutocompleteV1_EFILTERACTIVE_ToString(ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV1_eFilterActive_e EFILTERACTIVE){
    char *EFILTERACTIVEArray[] =  { "NULL", "All", "Active", "Inactive" };
    return EFILTERACTIVEArray[EFILTERACTIVE];
}

static ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV1_eFilterActive_e ezmaxinvoicingGetAutocompleteV1_EFILTERACTIVE_FromString(char* EFILTERACTIVE){
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
// Function ezmaxinvoicingGetAutocompleteV1_EFILTERACTIVE_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *ezmaxinvoicingGetAutocompleteV1_EFILTERACTIVE_convertToJSON(ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV1_eFilterActive_e EFILTERACTIVE) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "eFilterActive", ezmaxinvoicingGetAutocompleteV1_EFILTERACTIVE_ToString(EFILTERACTIVE)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function ezmaxinvoicingGetAutocompleteV1_EFILTERACTIVE_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV1_eFilterActive_e ezmaxinvoicingGetAutocompleteV1_EFILTERACTIVE_parseFromJSON(cJSON* EFILTERACTIVEJSON) {
    ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV1_eFilterActive_e EFILTERACTIVEVariable = 0;
    cJSON *EFILTERACTIVEVar = cJSON_GetObjectItemCaseSensitive(EFILTERACTIVEJSON, "eFilterActive");
    if(!cJSON_IsString(EFILTERACTIVEVar) || (EFILTERACTIVEVar->valuestring == NULL))
    {
        goto end;
    }
    EFILTERACTIVEVariable = ezmaxinvoicingGetAutocompleteV1_EFILTERACTIVE_FromString(EFILTERACTIVEVar->valuestring);
    return EFILTERACTIVEVariable;
end:
    return 0;
}
*/

// Functions for enum  for ObjectEzmaxinvoicingAPI_ezmaxinvoicingGetAutocompleteV1

static char* ezmaxinvoicingGetAutocompleteV1__ToString(ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV1_Accept-Language_e ){
    char *Array[] =  { "NULL", "*", "en", "fr" };
    return Array[];
}

static ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV1_Accept-Language_e ezmaxinvoicingGetAutocompleteV1__FromString(char* ){
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
// Function ezmaxinvoicingGetAutocompleteV1__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *ezmaxinvoicingGetAutocompleteV1__convertToJSON(ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV1_Accept-Language_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function ezmaxinvoicingGetAutocompleteV1__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV1_Accept-Language_e ezmaxinvoicingGetAutocompleteV1__parseFromJSON(cJSON* JSON) {
    ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV1_Accept-Language_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/

// Functions for enum SSELECTOR for ObjectEzmaxinvoicingAPI_ezmaxinvoicingGetAutocompleteV2

static char* ezmaxinvoicingGetAutocompleteV2_SSELECTOR_ToString(ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV2_sSelector_e SSELECTOR){
    char *SSELECTORArray[] =  { "NULL", "All" };
    return SSELECTORArray[SSELECTOR];
}

static ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV2_sSelector_e ezmaxinvoicingGetAutocompleteV2_SSELECTOR_FromString(char* SSELECTOR){
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
// Function ezmaxinvoicingGetAutocompleteV2_SSELECTOR_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *ezmaxinvoicingGetAutocompleteV2_SSELECTOR_convertToJSON(ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV2_sSelector_e SSELECTOR) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "sSelector", ezmaxinvoicingGetAutocompleteV2_SSELECTOR_ToString(SSELECTOR)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function ezmaxinvoicingGetAutocompleteV2_SSELECTOR_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV2_sSelector_e ezmaxinvoicingGetAutocompleteV2_SSELECTOR_parseFromJSON(cJSON* SSELECTORJSON) {
    ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV2_sSelector_e SSELECTORVariable = 0;
    cJSON *SSELECTORVar = cJSON_GetObjectItemCaseSensitive(SSELECTORJSON, "sSelector");
    if(!cJSON_IsString(SSELECTORVar) || (SSELECTORVar->valuestring == NULL))
    {
        goto end;
    }
    SSELECTORVariable = ezmaxinvoicingGetAutocompleteV2_SSELECTOR_FromString(SSELECTORVar->valuestring);
    return SSELECTORVariable;
end:
    return 0;
}
*/

// Functions for enum EFILTERACTIVE for ObjectEzmaxinvoicingAPI_ezmaxinvoicingGetAutocompleteV2

static char* ezmaxinvoicingGetAutocompleteV2_EFILTERACTIVE_ToString(ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV2_eFilterActive_e EFILTERACTIVE){
    char *EFILTERACTIVEArray[] =  { "NULL", "All", "Active", "Inactive" };
    return EFILTERACTIVEArray[EFILTERACTIVE];
}

static ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV2_eFilterActive_e ezmaxinvoicingGetAutocompleteV2_EFILTERACTIVE_FromString(char* EFILTERACTIVE){
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
// Function ezmaxinvoicingGetAutocompleteV2_EFILTERACTIVE_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *ezmaxinvoicingGetAutocompleteV2_EFILTERACTIVE_convertToJSON(ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV2_eFilterActive_e EFILTERACTIVE) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "eFilterActive", ezmaxinvoicingGetAutocompleteV2_EFILTERACTIVE_ToString(EFILTERACTIVE)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function ezmaxinvoicingGetAutocompleteV2_EFILTERACTIVE_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV2_eFilterActive_e ezmaxinvoicingGetAutocompleteV2_EFILTERACTIVE_parseFromJSON(cJSON* EFILTERACTIVEJSON) {
    ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV2_eFilterActive_e EFILTERACTIVEVariable = 0;
    cJSON *EFILTERACTIVEVar = cJSON_GetObjectItemCaseSensitive(EFILTERACTIVEJSON, "eFilterActive");
    if(!cJSON_IsString(EFILTERACTIVEVar) || (EFILTERACTIVEVar->valuestring == NULL))
    {
        goto end;
    }
    EFILTERACTIVEVariable = ezmaxinvoicingGetAutocompleteV2_EFILTERACTIVE_FromString(EFILTERACTIVEVar->valuestring);
    return EFILTERACTIVEVariable;
end:
    return 0;
}
*/

// Functions for enum  for ObjectEzmaxinvoicingAPI_ezmaxinvoicingGetAutocompleteV2

static char* ezmaxinvoicingGetAutocompleteV2__ToString(ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV2_Accept-Language_e ){
    char *Array[] =  { "NULL", "*", "en", "fr" };
    return Array[];
}

static ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV2_Accept-Language_e ezmaxinvoicingGetAutocompleteV2__FromString(char* ){
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
// Function ezmaxinvoicingGetAutocompleteV2__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *ezmaxinvoicingGetAutocompleteV2__convertToJSON(ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV2_Accept-Language_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function ezmaxinvoicingGetAutocompleteV2__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV2_Accept-Language_e ezmaxinvoicingGetAutocompleteV2__parseFromJSON(cJSON* JSON) {
    ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV2_Accept-Language_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/


// Retrieve Ezmaxinvoicings and IDs
//
// Get the list of Ezmaxinvoicing to be used in a dropdown or autocomplete control.
//
common_get_autocomplete_v1_response_t*
ObjectEzmaxinvoicingAPI_ezmaxinvoicingGetAutocompleteV1(apiClient_t *apiClient, ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV1_sSelector_e sSelector , ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV1_eFilterActive_e eFilterActive , char * sQuery , header_accept_language_e Accept_Language )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezmaxinvoicing/getAutocomplete/{sSelector}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezmaxinvoicing/getAutocomplete/{sSelector}");


    // Path Params
    long sizeOfPathParams_sSelector = strlen(sSelector)+3 + strlen("{ sSelector }");
    if(sSelector == NULL) {
        goto end;
    }
    char* localVarToReplace_sSelector = malloc(sizeOfPathParams_sSelector);
    sprintf(localVarToReplace_sSelector, "{%s}", "sSelector");

    localVarPath = strReplace(localVarPath, localVarToReplace_sSelector, sSelector);



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
    ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV1_eFilterActive_e valueQuery_eFilterActive ;
    keyValuePair_t *keyPairQuery_eFilterActive = 0;
    if (eFilterActive)
    {
        keyQuery_eFilterActive = strdup("eFilterActive");
        valueQuery_eFilterActive = (eFilterActive);
        keyPairQuery_eFilterActive = keyValuePair_create(keyQuery_eFilterActive, (void *)strdup(ezmaxinvoicingGetAutocompleteV1_EFILTERACTIVE_ToString(
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
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    //nonprimitive not container
    cJSON *ObjectEzmaxinvoicingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    common_get_autocomplete_v1_response_t *elementToReturn = common_get_autocomplete_v1_response_parseFromJSON(ObjectEzmaxinvoicingAPIlocalVarJSON);
    cJSON_Delete(ObjectEzmaxinvoicingAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
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

// Retrieve Ezmaxinvoicings and IDs
//
// Get the list of Ezmaxinvoicing to be used in a dropdown or autocomplete control.
//
ezmaxinvoicing_get_autocomplete_v2_response_t*
ObjectEzmaxinvoicingAPI_ezmaxinvoicingGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV2_sSelector_e sSelector , ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV2_eFilterActive_e eFilterActive , char * sQuery , header_accept_language_e Accept_Language )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/2/object/ezmaxinvoicing/getAutocomplete/{sSelector}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/2/object/ezmaxinvoicing/getAutocomplete/{sSelector}");


    // Path Params
    long sizeOfPathParams_sSelector = strlen(sSelector)+3 + strlen("{ sSelector }");
    if(sSelector == NULL) {
        goto end;
    }
    char* localVarToReplace_sSelector = malloc(sizeOfPathParams_sSelector);
    sprintf(localVarToReplace_sSelector, "{%s}", "sSelector");

    localVarPath = strReplace(localVarPath, localVarToReplace_sSelector, sSelector);



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
    ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV2_eFilterActive_e valueQuery_eFilterActive ;
    keyValuePair_t *keyPairQuery_eFilterActive = 0;
    if (eFilterActive)
    {
        keyQuery_eFilterActive = strdup("eFilterActive");
        valueQuery_eFilterActive = (eFilterActive);
        keyPairQuery_eFilterActive = keyValuePair_create(keyQuery_eFilterActive, (void *)strdup(ezmaxinvoicingGetAutocompleteV2_EFILTERACTIVE_ToString(
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
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    //nonprimitive not container
    cJSON *ObjectEzmaxinvoicingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezmaxinvoicing_get_autocomplete_v2_response_t *elementToReturn = ezmaxinvoicing_get_autocomplete_v2_response_parseFromJSON(ObjectEzmaxinvoicingAPIlocalVarJSON);
    cJSON_Delete(ObjectEzmaxinvoicingAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
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

// Retrieve an existing Ezmaxinvoicing
//
// 
//
ezmaxinvoicing_get_object_v1_response_t*
ObjectEzmaxinvoicingAPI_ezmaxinvoicingGetObjectV1(apiClient_t *apiClient, int pkiEzmaxinvoicingID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezmaxinvoicing/{pkiEzmaxinvoicingID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezmaxinvoicing/{pkiEzmaxinvoicingID}");


    // Path Params
    long sizeOfPathParams_pkiEzmaxinvoicingID =  + strlen("{ pkiEzmaxinvoicingID }");
    if(pkiEzmaxinvoicingID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzmaxinvoicingID = malloc(sizeOfPathParams_pkiEzmaxinvoicingID);
    snprintf(localVarToReplace_pkiEzmaxinvoicingID, sizeOfPathParams_pkiEzmaxinvoicingID, "{%s}", "pkiEzmaxinvoicingID");

    char localVarBuff_pkiEzmaxinvoicingID[256];
    intToStr(localVarBuff_pkiEzmaxinvoicingID, pkiEzmaxinvoicingID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzmaxinvoicingID, localVarBuff_pkiEzmaxinvoicingID);



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
    cJSON *ObjectEzmaxinvoicingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezmaxinvoicing_get_object_v1_response_t *elementToReturn = ezmaxinvoicing_get_object_v1_response_parseFromJSON(ObjectEzmaxinvoicingAPIlocalVarJSON);
    cJSON_Delete(ObjectEzmaxinvoicingAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzmaxinvoicingID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezmaxinvoicing
//
// 
//
ezmaxinvoicing_get_object_v2_response_t*
ObjectEzmaxinvoicingAPI_ezmaxinvoicingGetObjectV2(apiClient_t *apiClient, int pkiEzmaxinvoicingID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/2/object/ezmaxinvoicing/{pkiEzmaxinvoicingID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/2/object/ezmaxinvoicing/{pkiEzmaxinvoicingID}");


    // Path Params
    long sizeOfPathParams_pkiEzmaxinvoicingID =  + strlen("{ pkiEzmaxinvoicingID }");
    if(pkiEzmaxinvoicingID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzmaxinvoicingID = malloc(sizeOfPathParams_pkiEzmaxinvoicingID);
    snprintf(localVarToReplace_pkiEzmaxinvoicingID, sizeOfPathParams_pkiEzmaxinvoicingID, "{%s}", "pkiEzmaxinvoicingID");

    char localVarBuff_pkiEzmaxinvoicingID[256];
    intToStr(localVarBuff_pkiEzmaxinvoicingID, pkiEzmaxinvoicingID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzmaxinvoicingID, localVarBuff_pkiEzmaxinvoicingID);



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
    cJSON *ObjectEzmaxinvoicingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezmaxinvoicing_get_object_v2_response_t *elementToReturn = ezmaxinvoicing_get_object_v2_response_parseFromJSON(ObjectEzmaxinvoicingAPIlocalVarJSON);
    cJSON_Delete(ObjectEzmaxinvoicingAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzmaxinvoicingID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve provisional Ezmaxinvoicing
//
// 
//
ezmaxinvoicing_get_provisional_v1_response_t*
ObjectEzmaxinvoicingAPI_ezmaxinvoicingGetProvisionalV1(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezmaxinvoicing/getProvisional")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezmaxinvoicing/getProvisional");



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
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    cJSON *ObjectEzmaxinvoicingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezmaxinvoicing_get_provisional_v1_response_t *elementToReturn = ezmaxinvoicing_get_provisional_v1_response_parseFromJSON(ObjectEzmaxinvoicingAPIlocalVarJSON);
    cJSON_Delete(ObjectEzmaxinvoicingAPIlocalVarJSON);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

