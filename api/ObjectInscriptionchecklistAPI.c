#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectInscriptionchecklistAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096

// Functions for enum SSELECTOR for ObjectInscriptionchecklistAPI_inscriptionchecklistGetAutocompleteV2

static char* inscriptionchecklistGetAutocompleteV2_SSELECTOR_ToString(ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV2_sSelector_e SSELECTOR){
    char *SSELECTORArray[] =  { "NULL", "All" };
    return SSELECTORArray[SSELECTOR];
}

static ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV2_sSelector_e inscriptionchecklistGetAutocompleteV2_SSELECTOR_FromString(char* SSELECTOR){
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
// Function inscriptionchecklistGetAutocompleteV2_SSELECTOR_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *inscriptionchecklistGetAutocompleteV2_SSELECTOR_convertToJSON(ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV2_sSelector_e SSELECTOR) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "sSelector", inscriptionchecklistGetAutocompleteV2_SSELECTOR_ToString(SSELECTOR)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function inscriptionchecklistGetAutocompleteV2_SSELECTOR_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV2_sSelector_e inscriptionchecklistGetAutocompleteV2_SSELECTOR_parseFromJSON(cJSON* SSELECTORJSON) {
    ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV2_sSelector_e SSELECTORVariable = 0;
    cJSON *SSELECTORVar = cJSON_GetObjectItemCaseSensitive(SSELECTORJSON, "sSelector");
    if(!cJSON_IsString(SSELECTORVar) || (SSELECTORVar->valuestring == NULL))
    {
        goto end;
    }
    SSELECTORVariable = inscriptionchecklistGetAutocompleteV2_SSELECTOR_FromString(SSELECTORVar->valuestring);
    return SSELECTORVariable;
end:
    return 0;
}
*/

// Functions for enum ETYPE for ObjectInscriptionchecklistAPI_inscriptionchecklistGetAutocompleteV2

static char* inscriptionchecklistGetAutocompleteV2_ETYPE_ToString(ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV2_eType_e ETYPE){
    char *ETYPEArray[] =  { "NULL", "Buyercontract", "Inscription", "Inscriptionnotauthenticated", "Inscriptiontemp", "Agent", "Broker", "Otherincome", "Rejectedoffertopurchase" };
    return ETYPEArray[ETYPE];
}

static ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV2_eType_e inscriptionchecklistGetAutocompleteV2_ETYPE_FromString(char* ETYPE){
    int stringToReturn = 0;
    char *ETYPEArray[] =  { "NULL", "Buyercontract", "Inscription", "Inscriptionnotauthenticated", "Inscriptiontemp", "Agent", "Broker", "Otherincome", "Rejectedoffertopurchase" };
    size_t sizeofArray = sizeof(ETYPEArray) / sizeof(ETYPEArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(ETYPE, ETYPEArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function inscriptionchecklistGetAutocompleteV2_ETYPE_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *inscriptionchecklistGetAutocompleteV2_ETYPE_convertToJSON(ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV2_eType_e ETYPE) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "eType", inscriptionchecklistGetAutocompleteV2_ETYPE_ToString(ETYPE)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function inscriptionchecklistGetAutocompleteV2_ETYPE_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV2_eType_e inscriptionchecklistGetAutocompleteV2_ETYPE_parseFromJSON(cJSON* ETYPEJSON) {
    ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV2_eType_e ETYPEVariable = 0;
    cJSON *ETYPEVar = cJSON_GetObjectItemCaseSensitive(ETYPEJSON, "eType");
    if(!cJSON_IsString(ETYPEVar) || (ETYPEVar->valuestring == NULL))
    {
        goto end;
    }
    ETYPEVariable = inscriptionchecklistGetAutocompleteV2_ETYPE_FromString(ETYPEVar->valuestring);
    return ETYPEVariable;
end:
    return 0;
}
*/

// Functions for enum EFILTERACTIVE for ObjectInscriptionchecklistAPI_inscriptionchecklistGetAutocompleteV2

static char* inscriptionchecklistGetAutocompleteV2_EFILTERACTIVE_ToString(ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV2_eFilterActive_e EFILTERACTIVE){
    char *EFILTERACTIVEArray[] =  { "NULL", "All", "Active", "Inactive" };
    return EFILTERACTIVEArray[EFILTERACTIVE];
}

static ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV2_eFilterActive_e inscriptionchecklistGetAutocompleteV2_EFILTERACTIVE_FromString(char* EFILTERACTIVE){
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
// Function inscriptionchecklistGetAutocompleteV2_EFILTERACTIVE_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *inscriptionchecklistGetAutocompleteV2_EFILTERACTIVE_convertToJSON(ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV2_eFilterActive_e EFILTERACTIVE) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "eFilterActive", inscriptionchecklistGetAutocompleteV2_EFILTERACTIVE_ToString(EFILTERACTIVE)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function inscriptionchecklistGetAutocompleteV2_EFILTERACTIVE_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV2_eFilterActive_e inscriptionchecklistGetAutocompleteV2_EFILTERACTIVE_parseFromJSON(cJSON* EFILTERACTIVEJSON) {
    ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV2_eFilterActive_e EFILTERACTIVEVariable = 0;
    cJSON *EFILTERACTIVEVar = cJSON_GetObjectItemCaseSensitive(EFILTERACTIVEJSON, "eFilterActive");
    if(!cJSON_IsString(EFILTERACTIVEVar) || (EFILTERACTIVEVar->valuestring == NULL))
    {
        goto end;
    }
    EFILTERACTIVEVariable = inscriptionchecklistGetAutocompleteV2_EFILTERACTIVE_FromString(EFILTERACTIVEVar->valuestring);
    return EFILTERACTIVEVariable;
end:
    return 0;
}
*/

// Functions for enum  for ObjectInscriptionchecklistAPI_inscriptionchecklistGetAutocompleteV2

static char* inscriptionchecklistGetAutocompleteV2__ToString(ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV2_Accept-Language_e ){
    char *Array[] =  { "NULL", "*", "en", "fr" };
    return Array[];
}

static ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV2_Accept-Language_e inscriptionchecklistGetAutocompleteV2__FromString(char* ){
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
// Function inscriptionchecklistGetAutocompleteV2__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *inscriptionchecklistGetAutocompleteV2__convertToJSON(ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV2_Accept-Language_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function inscriptionchecklistGetAutocompleteV2__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV2_Accept-Language_e inscriptionchecklistGetAutocompleteV2__parseFromJSON(cJSON* JSON) {
    ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV2_Accept-Language_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/

// Functions for enum SSELECTOR for ObjectInscriptionchecklistAPI_inscriptionchecklistGetAutocompleteV3

static char* inscriptionchecklistGetAutocompleteV3_SSELECTOR_ToString(ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV3_sSelector_e SSELECTOR){
    char *SSELECTORArray[] =  { "NULL", "All" };
    return SSELECTORArray[SSELECTOR];
}

static ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV3_sSelector_e inscriptionchecklistGetAutocompleteV3_SSELECTOR_FromString(char* SSELECTOR){
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
// Function inscriptionchecklistGetAutocompleteV3_SSELECTOR_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *inscriptionchecklistGetAutocompleteV3_SSELECTOR_convertToJSON(ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV3_sSelector_e SSELECTOR) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "sSelector", inscriptionchecklistGetAutocompleteV3_SSELECTOR_ToString(SSELECTOR)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function inscriptionchecklistGetAutocompleteV3_SSELECTOR_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV3_sSelector_e inscriptionchecklistGetAutocompleteV3_SSELECTOR_parseFromJSON(cJSON* SSELECTORJSON) {
    ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV3_sSelector_e SSELECTORVariable = 0;
    cJSON *SSELECTORVar = cJSON_GetObjectItemCaseSensitive(SSELECTORJSON, "sSelector");
    if(!cJSON_IsString(SSELECTORVar) || (SSELECTORVar->valuestring == NULL))
    {
        goto end;
    }
    SSELECTORVariable = inscriptionchecklistGetAutocompleteV3_SSELECTOR_FromString(SSELECTORVar->valuestring);
    return SSELECTORVariable;
end:
    return 0;
}
*/

// Functions for enum EFILTERACTIVE for ObjectInscriptionchecklistAPI_inscriptionchecklistGetAutocompleteV3

static char* inscriptionchecklistGetAutocompleteV3_EFILTERACTIVE_ToString(ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV3_eFilterActive_e EFILTERACTIVE){
    char *EFILTERACTIVEArray[] =  { "NULL", "All", "Active", "Inactive" };
    return EFILTERACTIVEArray[EFILTERACTIVE];
}

static ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV3_eFilterActive_e inscriptionchecklistGetAutocompleteV3_EFILTERACTIVE_FromString(char* EFILTERACTIVE){
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
// Function inscriptionchecklistGetAutocompleteV3_EFILTERACTIVE_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *inscriptionchecklistGetAutocompleteV3_EFILTERACTIVE_convertToJSON(ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV3_eFilterActive_e EFILTERACTIVE) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "eFilterActive", inscriptionchecklistGetAutocompleteV3_EFILTERACTIVE_ToString(EFILTERACTIVE)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function inscriptionchecklistGetAutocompleteV3_EFILTERACTIVE_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV3_eFilterActive_e inscriptionchecklistGetAutocompleteV3_EFILTERACTIVE_parseFromJSON(cJSON* EFILTERACTIVEJSON) {
    ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV3_eFilterActive_e EFILTERACTIVEVariable = 0;
    cJSON *EFILTERACTIVEVar = cJSON_GetObjectItemCaseSensitive(EFILTERACTIVEJSON, "eFilterActive");
    if(!cJSON_IsString(EFILTERACTIVEVar) || (EFILTERACTIVEVar->valuestring == NULL))
    {
        goto end;
    }
    EFILTERACTIVEVariable = inscriptionchecklistGetAutocompleteV3_EFILTERACTIVE_FromString(EFILTERACTIVEVar->valuestring);
    return EFILTERACTIVEVariable;
end:
    return 0;
}
*/

// Functions for enum  for ObjectInscriptionchecklistAPI_inscriptionchecklistGetAutocompleteV3

static char* inscriptionchecklistGetAutocompleteV3__ToString(ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV3_Accept-Language_e ){
    char *Array[] =  { "NULL", "*", "en", "fr" };
    return Array[];
}

static ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV3_Accept-Language_e inscriptionchecklistGetAutocompleteV3__FromString(char* ){
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
// Function inscriptionchecklistGetAutocompleteV3__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *inscriptionchecklistGetAutocompleteV3__convertToJSON(ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV3_Accept-Language_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function inscriptionchecklistGetAutocompleteV3__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV3_Accept-Language_e inscriptionchecklistGetAutocompleteV3__parseFromJSON(cJSON* JSON) {
    ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV3_Accept-Language_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/


// Retrieve Inscriptionchecklists and IDs
//
// Get the list of Inscriptionchecklist to be used in a dropdown or autocomplete control.
//
inscriptionchecklist_get_autocomplete_v2_response_t*
ObjectInscriptionchecklistAPI_inscriptionchecklistGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV2_sSelector_e sSelector, char *fkiID, ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV2_eType_e eType, ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language)
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
    char *localVarPath = strdup("/2/object/inscriptionchecklist/getAutocomplete/{sSelector}");

    if(!sSelector)
        goto end;


    // Path Params
    long sizeOfPathParams_sSelector = strlen(inscriptionchecklistGetAutocompleteV2_SSELECTOR_ToString(sSelector))+3 + sizeof("{ sSelector }") - 1;
    if(sSelector == 0) {
        goto end;
    }
    char* localVarToReplace_sSelector = malloc(sizeOfPathParams_sSelector);
    sprintf(localVarToReplace_sSelector, "{%s}", "sSelector");

    localVarPath = strReplace(localVarPath, localVarToReplace_sSelector, inscriptionchecklistGetAutocompleteV2_SSELECTOR_ToString(sSelector));



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
    char *keyQuery_fkiID = NULL;
    char * valueQuery_fkiID = NULL;
    keyValuePair_t *keyPairQuery_fkiID = 0;
    if (fkiID)
    {
        keyQuery_fkiID = strdup("fkiID");
        valueQuery_fkiID = strdup((fkiID));
        keyPairQuery_fkiID = keyValuePair_create(keyQuery_fkiID, valueQuery_fkiID);
        list_addElement(localVarQueryParameters,keyPairQuery_fkiID);
    }

    // query parameters
    char *keyQuery_eType = NULL;
    ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV2_eType_e valueQuery_eType ;
    keyValuePair_t *keyPairQuery_eType = 0;
    if (eType)
    {
        keyQuery_eType = strdup("eType");
        valueQuery_eType = (eType);
        keyPairQuery_eType = keyValuePair_create(keyQuery_eType, strdup(inscriptionchecklistGetAutocompleteV2_ETYPE_ToString(
        valueQuery_eType)));
        list_addElement(localVarQueryParameters,keyPairQuery_eType);
    }

    // query parameters
    char *keyQuery_eFilterActive = NULL;
    ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV2_eFilterActive_e valueQuery_eFilterActive ;
    keyValuePair_t *keyPairQuery_eFilterActive = 0;
    if (eFilterActive)
    {
        keyQuery_eFilterActive = strdup("eFilterActive");
        valueQuery_eFilterActive = (eFilterActive);
        keyPairQuery_eFilterActive = keyValuePair_create(keyQuery_eFilterActive, strdup(inscriptionchecklistGetAutocompleteV2_EFILTERACTIVE_ToString(
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
    inscriptionchecklist_get_autocomplete_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectInscriptionchecklistAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = inscriptionchecklist_get_autocomplete_v2_response_parseFromJSON(ObjectInscriptionchecklistAPIlocalVarJSON);
        cJSON_Delete(ObjectInscriptionchecklistAPIlocalVarJSON);
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
    if(keyQuery_fkiID){
        free(keyQuery_fkiID);
        keyQuery_fkiID = NULL;
    }
    if(valueQuery_fkiID){
        free(valueQuery_fkiID);
        valueQuery_fkiID = NULL;
    }
    if(keyPairQuery_fkiID){
        keyValuePair_free(keyPairQuery_fkiID);
        keyPairQuery_fkiID = NULL;
    }
    if(keyQuery_eType){
        free(keyQuery_eType);
        keyQuery_eType = NULL;
    }
    if(keyPairQuery_eType){
        keyValuePair_free(keyPairQuery_eType);
        keyPairQuery_eType = NULL;
    }
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

// Retrieve Inscriptionchecklists and IDs
//
// Get the list of Inscriptionchecklist to be used in a dropdown or autocomplete control.
//
inscriptionchecklist_get_autocomplete_v3_response_t*
ObjectInscriptionchecklistAPI_inscriptionchecklistGetAutocompleteV3(apiClient_t *apiClient, ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV3_sSelector_e sSelector, char *fkiBuyercontractID, char *fkiInscriptionID, char *fkiInscriptionnotauthenticatedID, char *fkiInscriptiontempID, char *fkiAgentID, char *fkiBrokerID, char *fkiOtherincomeID, char *fkiRejectedoffertopurchaseID, ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV3_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language)
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
    char *localVarPath = strdup("/3/object/inscriptionchecklist/getAutocomplete/{sSelector}");

    if(!sSelector)
        goto end;


    // Path Params
    long sizeOfPathParams_sSelector = strlen(inscriptionchecklistGetAutocompleteV3_SSELECTOR_ToString(sSelector))+3 + sizeof("{ sSelector }") - 1;
    if(sSelector == 0) {
        goto end;
    }
    char* localVarToReplace_sSelector = malloc(sizeOfPathParams_sSelector);
    sprintf(localVarToReplace_sSelector, "{%s}", "sSelector");

    localVarPath = strReplace(localVarPath, localVarToReplace_sSelector, inscriptionchecklistGetAutocompleteV3_SSELECTOR_ToString(sSelector));



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
    char *keyQuery_fkiBuyercontractID = NULL;
    char * valueQuery_fkiBuyercontractID = NULL;
    keyValuePair_t *keyPairQuery_fkiBuyercontractID = 0;
    if (fkiBuyercontractID)
    {
        keyQuery_fkiBuyercontractID = strdup("fkiBuyercontractID");
        valueQuery_fkiBuyercontractID = strdup((fkiBuyercontractID));
        keyPairQuery_fkiBuyercontractID = keyValuePair_create(keyQuery_fkiBuyercontractID, valueQuery_fkiBuyercontractID);
        list_addElement(localVarQueryParameters,keyPairQuery_fkiBuyercontractID);
    }

    // query parameters
    char *keyQuery_fkiInscriptionID = NULL;
    char * valueQuery_fkiInscriptionID = NULL;
    keyValuePair_t *keyPairQuery_fkiInscriptionID = 0;
    if (fkiInscriptionID)
    {
        keyQuery_fkiInscriptionID = strdup("fkiInscriptionID");
        valueQuery_fkiInscriptionID = strdup((fkiInscriptionID));
        keyPairQuery_fkiInscriptionID = keyValuePair_create(keyQuery_fkiInscriptionID, valueQuery_fkiInscriptionID);
        list_addElement(localVarQueryParameters,keyPairQuery_fkiInscriptionID);
    }

    // query parameters
    char *keyQuery_fkiInscriptionnotauthenticatedID = NULL;
    char * valueQuery_fkiInscriptionnotauthenticatedID = NULL;
    keyValuePair_t *keyPairQuery_fkiInscriptionnotauthenticatedID = 0;
    if (fkiInscriptionnotauthenticatedID)
    {
        keyQuery_fkiInscriptionnotauthenticatedID = strdup("fkiInscriptionnotauthenticatedID");
        valueQuery_fkiInscriptionnotauthenticatedID = strdup((fkiInscriptionnotauthenticatedID));
        keyPairQuery_fkiInscriptionnotauthenticatedID = keyValuePair_create(keyQuery_fkiInscriptionnotauthenticatedID, valueQuery_fkiInscriptionnotauthenticatedID);
        list_addElement(localVarQueryParameters,keyPairQuery_fkiInscriptionnotauthenticatedID);
    }

    // query parameters
    char *keyQuery_fkiInscriptiontempID = NULL;
    char * valueQuery_fkiInscriptiontempID = NULL;
    keyValuePair_t *keyPairQuery_fkiInscriptiontempID = 0;
    if (fkiInscriptiontempID)
    {
        keyQuery_fkiInscriptiontempID = strdup("fkiInscriptiontempID");
        valueQuery_fkiInscriptiontempID = strdup((fkiInscriptiontempID));
        keyPairQuery_fkiInscriptiontempID = keyValuePair_create(keyQuery_fkiInscriptiontempID, valueQuery_fkiInscriptiontempID);
        list_addElement(localVarQueryParameters,keyPairQuery_fkiInscriptiontempID);
    }

    // query parameters
    char *keyQuery_fkiAgentID = NULL;
    char * valueQuery_fkiAgentID = NULL;
    keyValuePair_t *keyPairQuery_fkiAgentID = 0;
    if (fkiAgentID)
    {
        keyQuery_fkiAgentID = strdup("fkiAgentID");
        valueQuery_fkiAgentID = strdup((fkiAgentID));
        keyPairQuery_fkiAgentID = keyValuePair_create(keyQuery_fkiAgentID, valueQuery_fkiAgentID);
        list_addElement(localVarQueryParameters,keyPairQuery_fkiAgentID);
    }

    // query parameters
    char *keyQuery_fkiBrokerID = NULL;
    char * valueQuery_fkiBrokerID = NULL;
    keyValuePair_t *keyPairQuery_fkiBrokerID = 0;
    if (fkiBrokerID)
    {
        keyQuery_fkiBrokerID = strdup("fkiBrokerID");
        valueQuery_fkiBrokerID = strdup((fkiBrokerID));
        keyPairQuery_fkiBrokerID = keyValuePair_create(keyQuery_fkiBrokerID, valueQuery_fkiBrokerID);
        list_addElement(localVarQueryParameters,keyPairQuery_fkiBrokerID);
    }

    // query parameters
    char *keyQuery_fkiOtherincomeID = NULL;
    char * valueQuery_fkiOtherincomeID = NULL;
    keyValuePair_t *keyPairQuery_fkiOtherincomeID = 0;
    if (fkiOtherincomeID)
    {
        keyQuery_fkiOtherincomeID = strdup("fkiOtherincomeID");
        valueQuery_fkiOtherincomeID = strdup((fkiOtherincomeID));
        keyPairQuery_fkiOtherincomeID = keyValuePair_create(keyQuery_fkiOtherincomeID, valueQuery_fkiOtherincomeID);
        list_addElement(localVarQueryParameters,keyPairQuery_fkiOtherincomeID);
    }

    // query parameters
    char *keyQuery_fkiRejectedoffertopurchaseID = NULL;
    char * valueQuery_fkiRejectedoffertopurchaseID = NULL;
    keyValuePair_t *keyPairQuery_fkiRejectedoffertopurchaseID = 0;
    if (fkiRejectedoffertopurchaseID)
    {
        keyQuery_fkiRejectedoffertopurchaseID = strdup("fkiRejectedoffertopurchaseID");
        valueQuery_fkiRejectedoffertopurchaseID = strdup((fkiRejectedoffertopurchaseID));
        keyPairQuery_fkiRejectedoffertopurchaseID = keyValuePair_create(keyQuery_fkiRejectedoffertopurchaseID, valueQuery_fkiRejectedoffertopurchaseID);
        list_addElement(localVarQueryParameters,keyPairQuery_fkiRejectedoffertopurchaseID);
    }

    // query parameters
    char *keyQuery_eFilterActive = NULL;
    ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV3_eFilterActive_e valueQuery_eFilterActive ;
    keyValuePair_t *keyPairQuery_eFilterActive = 0;
    if (eFilterActive)
    {
        keyQuery_eFilterActive = strdup("eFilterActive");
        valueQuery_eFilterActive = (eFilterActive);
        keyPairQuery_eFilterActive = keyValuePair_create(keyQuery_eFilterActive, strdup(inscriptionchecklistGetAutocompleteV3_EFILTERACTIVE_ToString(
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
    inscriptionchecklist_get_autocomplete_v3_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectInscriptionchecklistAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = inscriptionchecklist_get_autocomplete_v3_response_parseFromJSON(ObjectInscriptionchecklistAPIlocalVarJSON);
        cJSON_Delete(ObjectInscriptionchecklistAPIlocalVarJSON);
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
    if(keyQuery_fkiBuyercontractID){
        free(keyQuery_fkiBuyercontractID);
        keyQuery_fkiBuyercontractID = NULL;
    }
    if(valueQuery_fkiBuyercontractID){
        free(valueQuery_fkiBuyercontractID);
        valueQuery_fkiBuyercontractID = NULL;
    }
    if(keyPairQuery_fkiBuyercontractID){
        keyValuePair_free(keyPairQuery_fkiBuyercontractID);
        keyPairQuery_fkiBuyercontractID = NULL;
    }
    if(keyQuery_fkiInscriptionID){
        free(keyQuery_fkiInscriptionID);
        keyQuery_fkiInscriptionID = NULL;
    }
    if(valueQuery_fkiInscriptionID){
        free(valueQuery_fkiInscriptionID);
        valueQuery_fkiInscriptionID = NULL;
    }
    if(keyPairQuery_fkiInscriptionID){
        keyValuePair_free(keyPairQuery_fkiInscriptionID);
        keyPairQuery_fkiInscriptionID = NULL;
    }
    if(keyQuery_fkiInscriptionnotauthenticatedID){
        free(keyQuery_fkiInscriptionnotauthenticatedID);
        keyQuery_fkiInscriptionnotauthenticatedID = NULL;
    }
    if(valueQuery_fkiInscriptionnotauthenticatedID){
        free(valueQuery_fkiInscriptionnotauthenticatedID);
        valueQuery_fkiInscriptionnotauthenticatedID = NULL;
    }
    if(keyPairQuery_fkiInscriptionnotauthenticatedID){
        keyValuePair_free(keyPairQuery_fkiInscriptionnotauthenticatedID);
        keyPairQuery_fkiInscriptionnotauthenticatedID = NULL;
    }
    if(keyQuery_fkiInscriptiontempID){
        free(keyQuery_fkiInscriptiontempID);
        keyQuery_fkiInscriptiontempID = NULL;
    }
    if(valueQuery_fkiInscriptiontempID){
        free(valueQuery_fkiInscriptiontempID);
        valueQuery_fkiInscriptiontempID = NULL;
    }
    if(keyPairQuery_fkiInscriptiontempID){
        keyValuePair_free(keyPairQuery_fkiInscriptiontempID);
        keyPairQuery_fkiInscriptiontempID = NULL;
    }
    if(keyQuery_fkiAgentID){
        free(keyQuery_fkiAgentID);
        keyQuery_fkiAgentID = NULL;
    }
    if(valueQuery_fkiAgentID){
        free(valueQuery_fkiAgentID);
        valueQuery_fkiAgentID = NULL;
    }
    if(keyPairQuery_fkiAgentID){
        keyValuePair_free(keyPairQuery_fkiAgentID);
        keyPairQuery_fkiAgentID = NULL;
    }
    if(keyQuery_fkiBrokerID){
        free(keyQuery_fkiBrokerID);
        keyQuery_fkiBrokerID = NULL;
    }
    if(valueQuery_fkiBrokerID){
        free(valueQuery_fkiBrokerID);
        valueQuery_fkiBrokerID = NULL;
    }
    if(keyPairQuery_fkiBrokerID){
        keyValuePair_free(keyPairQuery_fkiBrokerID);
        keyPairQuery_fkiBrokerID = NULL;
    }
    if(keyQuery_fkiOtherincomeID){
        free(keyQuery_fkiOtherincomeID);
        keyQuery_fkiOtherincomeID = NULL;
    }
    if(valueQuery_fkiOtherincomeID){
        free(valueQuery_fkiOtherincomeID);
        valueQuery_fkiOtherincomeID = NULL;
    }
    if(keyPairQuery_fkiOtherincomeID){
        keyValuePair_free(keyPairQuery_fkiOtherincomeID);
        keyPairQuery_fkiOtherincomeID = NULL;
    }
    if(keyQuery_fkiRejectedoffertopurchaseID){
        free(keyQuery_fkiRejectedoffertopurchaseID);
        keyQuery_fkiRejectedoffertopurchaseID = NULL;
    }
    if(valueQuery_fkiRejectedoffertopurchaseID){
        free(valueQuery_fkiRejectedoffertopurchaseID);
        valueQuery_fkiRejectedoffertopurchaseID = NULL;
    }
    if(keyPairQuery_fkiRejectedoffertopurchaseID){
        keyValuePair_free(keyPairQuery_fkiRejectedoffertopurchaseID);
        keyPairQuery_fkiRejectedoffertopurchaseID = NULL;
    }
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

