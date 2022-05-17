#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectFranchiseofficeAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)

// Functions for enum SSELECTOR for ObjectFranchiseofficeAPI_franchiseofficeGetAutocompleteV1

static char* franchiseofficeGetAutocompleteV1_SSELECTOR_ToString(ezmax_api_definition__full_franchiseofficeGetAutocompleteV1_sSelector_e SSELECTOR){
    char *SSELECTORArray[] =  { "NULL", "Active", "All" };
    return SSELECTORArray[SSELECTOR];
}

static ezmax_api_definition__full_franchiseofficeGetAutocompleteV1_sSelector_e franchiseofficeGetAutocompleteV1_SSELECTOR_FromString(char* SSELECTOR){
    int stringToReturn = 0;
    char *SSELECTORArray[] =  { "NULL", "Active", "All" };
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
// Function franchiseofficeGetAutocompleteV1_SSELECTOR_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *franchiseofficeGetAutocompleteV1_SSELECTOR_convertToJSON(ezmax_api_definition__full_franchiseofficeGetAutocompleteV1_sSelector_e SSELECTOR) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "sSelector", franchiseofficeGetAutocompleteV1_SSELECTOR_ToString(SSELECTOR)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function franchiseofficeGetAutocompleteV1_SSELECTOR_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_franchiseofficeGetAutocompleteV1_sSelector_e franchiseofficeGetAutocompleteV1_SSELECTOR_parseFromJSON(cJSON* SSELECTORJSON) {
    ezmax_api_definition__full_franchiseofficeGetAutocompleteV1_sSelector_e SSELECTORVariable = 0;
    cJSON *SSELECTORVar = cJSON_GetObjectItemCaseSensitive(SSELECTORJSON, "sSelector");
    if(!cJSON_IsString(SSELECTORVar) || (SSELECTORVar->valuestring == NULL))
    {
        goto end;
    }
    SSELECTORVariable = franchiseofficeGetAutocompleteV1_SSELECTOR_FromString(SSELECTORVar->valuestring);
    return SSELECTORVariable;
end:
    return 0;
}
*/

// Functions for enum  for ObjectFranchiseofficeAPI_franchiseofficeGetAutocompleteV1

static char* franchiseofficeGetAutocompleteV1__ToString(ezmax_api_definition__full_franchiseofficeGetAutocompleteV1_Accept-Language_e ){
    char *Array[] =  { "NULL", "*", "en", "fr" };
    return Array[];
}

static ezmax_api_definition__full_franchiseofficeGetAutocompleteV1_Accept-Language_e franchiseofficeGetAutocompleteV1__FromString(char* ){
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
// Function franchiseofficeGetAutocompleteV1__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *franchiseofficeGetAutocompleteV1__convertToJSON(ezmax_api_definition__full_franchiseofficeGetAutocompleteV1_Accept-Language_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function franchiseofficeGetAutocompleteV1__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_franchiseofficeGetAutocompleteV1_Accept-Language_e franchiseofficeGetAutocompleteV1__parseFromJSON(cJSON* JSON) {
    ezmax_api_definition__full_franchiseofficeGetAutocompleteV1_Accept-Language_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/


// Retrieve Franchiseoffices and IDs
//
// Get the list of Franchiseoffices to be used in a dropdown or autocomplete control.
//
common_get_autocomplete_v1_response_t*
ObjectFranchiseofficeAPI_franchiseofficeGetAutocompleteV1(apiClient_t *apiClient, ezmax_api_definition__full_franchiseofficeGetAutocompleteV1_sSelector_e sSelector , char * sQuery , header_accept_language_e Accept_Language )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/franchiseoffice/getAutocomplete/{sSelector}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/franchiseoffice/getAutocomplete/{sSelector}");


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
    cJSON *ObjectFranchiseofficeAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    common_get_autocomplete_v1_response_t *elementToReturn = common_get_autocomplete_v1_response_parseFromJSON(ObjectFranchiseofficeAPIlocalVarJSON);
    cJSON_Delete(ObjectFranchiseofficeAPIlocalVarJSON);
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

