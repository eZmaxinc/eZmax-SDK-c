#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectBrandingAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096

// Functions for enum SSELECTOR for ObjectBrandingAPI_brandingGetAutocompleteV2

static char* brandingGetAutocompleteV2_SSELECTOR_ToString(ezmax_api_definition__full_brandingGetAutocompleteV2_sSelector_e SSELECTOR){
    char *SSELECTORArray[] =  { "NULL", "All" };
    return SSELECTORArray[SSELECTOR];
}

static ezmax_api_definition__full_brandingGetAutocompleteV2_sSelector_e brandingGetAutocompleteV2_SSELECTOR_FromString(char* SSELECTOR){
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
// Function brandingGetAutocompleteV2_SSELECTOR_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *brandingGetAutocompleteV2_SSELECTOR_convertToJSON(ezmax_api_definition__full_brandingGetAutocompleteV2_sSelector_e SSELECTOR) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "sSelector", brandingGetAutocompleteV2_SSELECTOR_ToString(SSELECTOR)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function brandingGetAutocompleteV2_SSELECTOR_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_brandingGetAutocompleteV2_sSelector_e brandingGetAutocompleteV2_SSELECTOR_parseFromJSON(cJSON* SSELECTORJSON) {
    ezmax_api_definition__full_brandingGetAutocompleteV2_sSelector_e SSELECTORVariable = 0;
    cJSON *SSELECTORVar = cJSON_GetObjectItemCaseSensitive(SSELECTORJSON, "sSelector");
    if(!cJSON_IsString(SSELECTORVar) || (SSELECTORVar->valuestring == NULL))
    {
        goto end;
    }
    SSELECTORVariable = brandingGetAutocompleteV2_SSELECTOR_FromString(SSELECTORVar->valuestring);
    return SSELECTORVariable;
end:
    return 0;
}
*/

// Functions for enum EFILTERACTIVE for ObjectBrandingAPI_brandingGetAutocompleteV2

static char* brandingGetAutocompleteV2_EFILTERACTIVE_ToString(ezmax_api_definition__full_brandingGetAutocompleteV2_eFilterActive_e EFILTERACTIVE){
    char *EFILTERACTIVEArray[] =  { "NULL", "All", "Active", "Inactive" };
    return EFILTERACTIVEArray[EFILTERACTIVE];
}

static ezmax_api_definition__full_brandingGetAutocompleteV2_eFilterActive_e brandingGetAutocompleteV2_EFILTERACTIVE_FromString(char* EFILTERACTIVE){
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
// Function brandingGetAutocompleteV2_EFILTERACTIVE_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *brandingGetAutocompleteV2_EFILTERACTIVE_convertToJSON(ezmax_api_definition__full_brandingGetAutocompleteV2_eFilterActive_e EFILTERACTIVE) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "eFilterActive", brandingGetAutocompleteV2_EFILTERACTIVE_ToString(EFILTERACTIVE)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function brandingGetAutocompleteV2_EFILTERACTIVE_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_brandingGetAutocompleteV2_eFilterActive_e brandingGetAutocompleteV2_EFILTERACTIVE_parseFromJSON(cJSON* EFILTERACTIVEJSON) {
    ezmax_api_definition__full_brandingGetAutocompleteV2_eFilterActive_e EFILTERACTIVEVariable = 0;
    cJSON *EFILTERACTIVEVar = cJSON_GetObjectItemCaseSensitive(EFILTERACTIVEJSON, "eFilterActive");
    if(!cJSON_IsString(EFILTERACTIVEVar) || (EFILTERACTIVEVar->valuestring == NULL))
    {
        goto end;
    }
    EFILTERACTIVEVariable = brandingGetAutocompleteV2_EFILTERACTIVE_FromString(EFILTERACTIVEVar->valuestring);
    return EFILTERACTIVEVariable;
end:
    return 0;
}
*/

// Functions for enum  for ObjectBrandingAPI_brandingGetAutocompleteV2

static char* brandingGetAutocompleteV2__ToString(ezmax_api_definition__full_brandingGetAutocompleteV2_Accept-Language_e ){
    char *Array[] =  { "NULL", "*", "en", "fr" };
    return Array[];
}

static ezmax_api_definition__full_brandingGetAutocompleteV2_Accept-Language_e brandingGetAutocompleteV2__FromString(char* ){
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
// Function brandingGetAutocompleteV2__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *brandingGetAutocompleteV2__convertToJSON(ezmax_api_definition__full_brandingGetAutocompleteV2_Accept-Language_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function brandingGetAutocompleteV2__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_brandingGetAutocompleteV2_Accept-Language_e brandingGetAutocompleteV2__parseFromJSON(cJSON* JSON) {
    ezmax_api_definition__full_brandingGetAutocompleteV2_Accept-Language_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/

// Functions for enum EORDERBY for ObjectBrandingAPI_brandingGetListV1

static char* brandingGetListV1_EORDERBY_ToString(ezmax_api_definition__full_brandingGetListV1_eOrderBy_e EORDERBY){
    char *EORDERBYArray[] =  { "NULL", "pkiBrandingID_ASC", "pkiBrandingID_DESC", "sBrandingDescriptionX_ASC", "sBrandingDescriptionX_DESC", "iBrandingColortext_ASC", "iBrandingColortext_DESC", "iBrandingColortextlinkbox_ASC", "iBrandingColortextlinkbox_DESC", "iBrandingColortextbutton_ASC", "iBrandingColortextbutton_DESC", "iBrandingColorbackground_ASC", "iBrandingColorbackground_DESC", "iBrandingColorbackgroundbutton_ASC", "iBrandingColorbackgroundbutton_DESC", "iBrandingColorbackgroundsmallbox_ASC", "iBrandingColorbackgroundsmallbox_DESC", "bBrandingIsactive_ASC", "bBrandingIsactive_DESC" };
    return EORDERBYArray[EORDERBY];
}

static ezmax_api_definition__full_brandingGetListV1_eOrderBy_e brandingGetListV1_EORDERBY_FromString(char* EORDERBY){
    int stringToReturn = 0;
    char *EORDERBYArray[] =  { "NULL", "pkiBrandingID_ASC", "pkiBrandingID_DESC", "sBrandingDescriptionX_ASC", "sBrandingDescriptionX_DESC", "iBrandingColortext_ASC", "iBrandingColortext_DESC", "iBrandingColortextlinkbox_ASC", "iBrandingColortextlinkbox_DESC", "iBrandingColortextbutton_ASC", "iBrandingColortextbutton_DESC", "iBrandingColorbackground_ASC", "iBrandingColorbackground_DESC", "iBrandingColorbackgroundbutton_ASC", "iBrandingColorbackgroundbutton_DESC", "iBrandingColorbackgroundsmallbox_ASC", "iBrandingColorbackgroundsmallbox_DESC", "bBrandingIsactive_ASC", "bBrandingIsactive_DESC" };
    size_t sizeofArray = sizeof(EORDERBYArray) / sizeof(EORDERBYArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(EORDERBY, EORDERBYArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function brandingGetListV1_EORDERBY_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *brandingGetListV1_EORDERBY_convertToJSON(ezmax_api_definition__full_brandingGetListV1_eOrderBy_e EORDERBY) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "eOrderBy", brandingGetListV1_EORDERBY_ToString(EORDERBY)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function brandingGetListV1_EORDERBY_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_brandingGetListV1_eOrderBy_e brandingGetListV1_EORDERBY_parseFromJSON(cJSON* EORDERBYJSON) {
    ezmax_api_definition__full_brandingGetListV1_eOrderBy_e EORDERBYVariable = 0;
    cJSON *EORDERBYVar = cJSON_GetObjectItemCaseSensitive(EORDERBYJSON, "eOrderBy");
    if(!cJSON_IsString(EORDERBYVar) || (EORDERBYVar->valuestring == NULL))
    {
        goto end;
    }
    EORDERBYVariable = brandingGetListV1_EORDERBY_FromString(EORDERBYVar->valuestring);
    return EORDERBYVariable;
end:
    return 0;
}
*/

// Functions for enum  for ObjectBrandingAPI_brandingGetListV1

static char* brandingGetListV1__ToString(ezmax_api_definition__full_brandingGetListV1_Accept-Language_e ){
    char *Array[] =  { "NULL", "*", "en", "fr" };
    return Array[];
}

static ezmax_api_definition__full_brandingGetListV1_Accept-Language_e brandingGetListV1__FromString(char* ){
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
// Function brandingGetListV1__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *brandingGetListV1__convertToJSON(ezmax_api_definition__full_brandingGetListV1_Accept-Language_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function brandingGetListV1__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_brandingGetListV1_Accept-Language_e brandingGetListV1__parseFromJSON(cJSON* JSON) {
    ezmax_api_definition__full_brandingGetListV1_Accept-Language_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/


// Create a new Branding
//
// The endpoint allows to create one or many elements at once.
//
branding_create_object_v2_response_t*
ObjectBrandingAPI_brandingCreateObjectV2(apiClient_t *apiClient, branding_create_object_v2_request_t *branding_create_object_v2_request)
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
    char *localVarPath = strdup("/2/object/branding");





    // Body Param
    cJSON *localVarSingleItemJSON_branding_create_object_v2_request = NULL;
    if (branding_create_object_v2_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_branding_create_object_v2_request = branding_create_object_v2_request_convertToJSON(branding_create_object_v2_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_branding_create_object_v2_request);
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
    branding_create_object_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectBrandingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = branding_create_object_v2_response_parseFromJSON(ObjectBrandingAPIlocalVarJSON);
        cJSON_Delete(ObjectBrandingAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_branding_create_object_v2_request) {
        cJSON_Delete(localVarSingleItemJSON_branding_create_object_v2_request);
        localVarSingleItemJSON_branding_create_object_v2_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Edit an existing Branding
//
// 
//
branding_edit_object_v2_response_t*
ObjectBrandingAPI_brandingEditObjectV2(apiClient_t *apiClient, int *pkiBrandingID, branding_edit_object_v2_request_t *branding_edit_object_v2_request)
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
    char *localVarPath = strdup("/2/object/branding/{pkiBrandingID}");



    // Path Params
    long sizeOfPathParams_pkiBrandingID =  + sizeof("{ pkiBrandingID }") - 1;
    if(pkiBrandingID == 0){
        goto end;
    }
    char* localVarToReplace_pkiBrandingID = malloc(sizeOfPathParams_pkiBrandingID);
    snprintf(localVarToReplace_pkiBrandingID, sizeOfPathParams_pkiBrandingID, "{%s}", "pkiBrandingID");

    char localVarBuff_pkiBrandingID[256];
    snprintf(localVarBuff_pkiBrandingID, sizeof localVarBuff_pkiBrandingID, "%ld", (long)*pkiBrandingID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiBrandingID, localVarBuff_pkiBrandingID);




    // Body Param
    cJSON *localVarSingleItemJSON_branding_edit_object_v2_request = NULL;
    if (branding_edit_object_v2_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_branding_edit_object_v2_request = branding_edit_object_v2_request_convertToJSON(branding_edit_object_v2_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_branding_edit_object_v2_request);
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
    //nonprimitive not container
    branding_edit_object_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectBrandingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = branding_edit_object_v2_response_parseFromJSON(ObjectBrandingAPIlocalVarJSON);
        cJSON_Delete(ObjectBrandingAPIlocalVarJSON);
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
    free(localVarToReplace_pkiBrandingID);
    if (localVarSingleItemJSON_branding_edit_object_v2_request) {
        cJSON_Delete(localVarSingleItemJSON_branding_edit_object_v2_request);
        localVarSingleItemJSON_branding_edit_object_v2_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Brandings and IDs
//
// Get the list of Branding to be used in a dropdown or autocomplete control.
//
branding_get_autocomplete_v2_response_t*
ObjectBrandingAPI_brandingGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_brandingGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_brandingGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language)
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
    char *localVarPath = strdup("/2/object/branding/getAutocomplete/{sSelector}");

    if(!sSelector)
        goto end;


    // Path Params
    long sizeOfPathParams_sSelector = strlen(brandingGetAutocompleteV2_SSELECTOR_ToString(sSelector))+3 + sizeof("{ sSelector }") - 1;
    if(sSelector == 0) {
        goto end;
    }
    char* localVarToReplace_sSelector = malloc(sizeOfPathParams_sSelector);
    sprintf(localVarToReplace_sSelector, "{%s}", "sSelector");

    localVarPath = strReplace(localVarPath, localVarToReplace_sSelector, brandingGetAutocompleteV2_SSELECTOR_ToString(sSelector));



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
    ezmax_api_definition__full_brandingGetAutocompleteV2_eFilterActive_e valueQuery_eFilterActive ;
    keyValuePair_t *keyPairQuery_eFilterActive = 0;
    if (eFilterActive)
    {
        keyQuery_eFilterActive = strdup("eFilterActive");
        valueQuery_eFilterActive = (eFilterActive);
        keyPairQuery_eFilterActive = keyValuePair_create(keyQuery_eFilterActive, strdup(brandingGetAutocompleteV2_EFILTERACTIVE_ToString(
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
    branding_get_autocomplete_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectBrandingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = branding_get_autocomplete_v2_response_parseFromJSON(ObjectBrandingAPIlocalVarJSON);
        cJSON_Delete(ObjectBrandingAPIlocalVarJSON);
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

// Retrieve Branding list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eBrandingLogo | Default<br>JPEG<br>PNG | | eBrandingLogointerface | Default<br>JPEG<br>PNG |
//
branding_get_list_v1_response_t*
ObjectBrandingAPI_brandingGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_brandingGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter)
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
    char *localVarPath = strdup("/1/object/branding/getList");





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
    char *keyQuery_eOrderBy = NULL;
    ezmax_api_definition__full_brandingGetListV1_eOrderBy_e valueQuery_eOrderBy ;
    keyValuePair_t *keyPairQuery_eOrderBy = 0;
    if (eOrderBy)
    {
        keyQuery_eOrderBy = strdup("eOrderBy");
        valueQuery_eOrderBy = (eOrderBy);
        keyPairQuery_eOrderBy = keyValuePair_create(keyQuery_eOrderBy, strdup(brandingGetListV1_EORDERBY_ToString(
        valueQuery_eOrderBy)));
        list_addElement(localVarQueryParameters,keyPairQuery_eOrderBy);
    }

    // query parameters
    char *keyQuery_iRowMax = NULL;
    char * valueQuery_iRowMax = NULL;
    keyValuePair_t *keyPairQuery_iRowMax = 0;
    if (iRowMax)
    {
        keyQuery_iRowMax = strdup("iRowMax");
        valueQuery_iRowMax = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_iRowMax, MAX_NUMBER_LENGTH, "%d", *iRowMax);
        keyPairQuery_iRowMax = keyValuePair_create(keyQuery_iRowMax, valueQuery_iRowMax);
        list_addElement(localVarQueryParameters,keyPairQuery_iRowMax);
    }

    // query parameters
    char *keyQuery_iRowOffset = NULL;
    char * valueQuery_iRowOffset = NULL;
    keyValuePair_t *keyPairQuery_iRowOffset = 0;
    if (iRowOffset)
    {
        keyQuery_iRowOffset = strdup("iRowOffset");
        valueQuery_iRowOffset = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_iRowOffset, MAX_NUMBER_LENGTH, "%d", *iRowOffset);
        keyPairQuery_iRowOffset = keyValuePair_create(keyQuery_iRowOffset, valueQuery_iRowOffset);
        list_addElement(localVarQueryParameters,keyPairQuery_iRowOffset);
    }

    // query parameters
    char *keyQuery_sFilter = NULL;
    char * valueQuery_sFilter = NULL;
    keyValuePair_t *keyPairQuery_sFilter = 0;
    if (sFilter)
    {
        keyQuery_sFilter = strdup("sFilter");
        valueQuery_sFilter = strdup((sFilter));
        keyPairQuery_sFilter = keyValuePair_create(keyQuery_sFilter, valueQuery_sFilter);
        list_addElement(localVarQueryParameters,keyPairQuery_sFilter);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/vnd.openxmlformats-officedocument.spreadsheetml.sheet"); //produces
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
    //if (apiClient->response_code == 406) {
    //    printf("%s\n","The URL is valid, but one of the Accept header is not defined or invalid. For example, you set the header \&quot;Accept: application/json\&quot; but the function can only return \&quot;Content-type: image/png\&quot;");
    //}
    //nonprimitive not container
    branding_get_list_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectBrandingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = branding_get_list_v1_response_parseFromJSON(ObjectBrandingAPIlocalVarJSON);
        cJSON_Delete(ObjectBrandingAPIlocalVarJSON);
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
    if (keyHeader_Accept_Language) {
        free(keyHeader_Accept_Language);
        keyHeader_Accept_Language = NULL;
    }
    free(keyPairHeader_Accept_Language);
    if(keyQuery_eOrderBy){
        free(keyQuery_eOrderBy);
        keyQuery_eOrderBy = NULL;
    }
    if(keyPairQuery_eOrderBy){
        keyValuePair_free(keyPairQuery_eOrderBy);
        keyPairQuery_eOrderBy = NULL;
    }
    if(keyQuery_iRowMax){
        free(keyQuery_iRowMax);
        keyQuery_iRowMax = NULL;
    }
    if(valueQuery_iRowMax){
        free(valueQuery_iRowMax);
        valueQuery_iRowMax = NULL;
    }
    if(keyPairQuery_iRowMax){
        keyValuePair_free(keyPairQuery_iRowMax);
        keyPairQuery_iRowMax = NULL;
    }
    if(keyQuery_iRowOffset){
        free(keyQuery_iRowOffset);
        keyQuery_iRowOffset = NULL;
    }
    if(valueQuery_iRowOffset){
        free(valueQuery_iRowOffset);
        valueQuery_iRowOffset = NULL;
    }
    if(keyPairQuery_iRowOffset){
        keyValuePair_free(keyPairQuery_iRowOffset);
        keyPairQuery_iRowOffset = NULL;
    }
    if(keyQuery_sFilter){
        free(keyQuery_sFilter);
        keyQuery_sFilter = NULL;
    }
    if(valueQuery_sFilter){
        free(valueQuery_sFilter);
        valueQuery_sFilter = NULL;
    }
    if(keyPairQuery_sFilter){
        keyValuePair_free(keyPairQuery_sFilter);
        keyPairQuery_sFilter = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Branding
//
// 
//
branding_get_object_v3_response_t*
ObjectBrandingAPI_brandingGetObjectV3(apiClient_t *apiClient, int *pkiBrandingID)
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
    char *localVarPath = strdup("/3/object/branding/{pkiBrandingID}");



    // Path Params
    long sizeOfPathParams_pkiBrandingID =  + sizeof("{ pkiBrandingID }") - 1;
    if(pkiBrandingID == 0){
        goto end;
    }
    char* localVarToReplace_pkiBrandingID = malloc(sizeOfPathParams_pkiBrandingID);
    snprintf(localVarToReplace_pkiBrandingID, sizeOfPathParams_pkiBrandingID, "{%s}", "pkiBrandingID");

    char localVarBuff_pkiBrandingID[256];
    snprintf(localVarBuff_pkiBrandingID, sizeof localVarBuff_pkiBrandingID, "%ld", (long)*pkiBrandingID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiBrandingID, localVarBuff_pkiBrandingID);



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
    branding_get_object_v3_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectBrandingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = branding_get_object_v3_response_parseFromJSON(ObjectBrandingAPIlocalVarJSON);
        cJSON_Delete(ObjectBrandingAPIlocalVarJSON);
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
    free(localVarToReplace_pkiBrandingID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

