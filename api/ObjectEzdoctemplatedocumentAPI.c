#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzdoctemplatedocumentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096

// Functions for enum SSELECTOR for ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentGetAutocompleteV2

static char* ezdoctemplatedocumentGetAutocompleteV2_SSELECTOR_ToString(ezmax_api_definition__full_ezdoctemplatedocumentGetAutocompleteV2_sSelector_e SSELECTOR){
    char *SSELECTORArray[] =  { "NULL", "All", "Ezsignfolder", "Ezsignfoldersignerassociations" };
    return SSELECTORArray[SSELECTOR];
}

static ezmax_api_definition__full_ezdoctemplatedocumentGetAutocompleteV2_sSelector_e ezdoctemplatedocumentGetAutocompleteV2_SSELECTOR_FromString(char* SSELECTOR){
    int stringToReturn = 0;
    char *SSELECTORArray[] =  { "NULL", "All", "Ezsignfolder", "Ezsignfoldersignerassociations" };
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
// Function ezdoctemplatedocumentGetAutocompleteV2_SSELECTOR_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *ezdoctemplatedocumentGetAutocompleteV2_SSELECTOR_convertToJSON(ezmax_api_definition__full_ezdoctemplatedocumentGetAutocompleteV2_sSelector_e SSELECTOR) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "sSelector", ezdoctemplatedocumentGetAutocompleteV2_SSELECTOR_ToString(SSELECTOR)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function ezdoctemplatedocumentGetAutocompleteV2_SSELECTOR_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_ezdoctemplatedocumentGetAutocompleteV2_sSelector_e ezdoctemplatedocumentGetAutocompleteV2_SSELECTOR_parseFromJSON(cJSON* SSELECTORJSON) {
    ezmax_api_definition__full_ezdoctemplatedocumentGetAutocompleteV2_sSelector_e SSELECTORVariable = 0;
    cJSON *SSELECTORVar = cJSON_GetObjectItemCaseSensitive(SSELECTORJSON, "sSelector");
    if(!cJSON_IsString(SSELECTORVar) || (SSELECTORVar->valuestring == NULL))
    {
        goto end;
    }
    SSELECTORVariable = ezdoctemplatedocumentGetAutocompleteV2_SSELECTOR_FromString(SSELECTORVar->valuestring);
    return SSELECTORVariable;
end:
    return 0;
}
*/

// Functions for enum ETYPE for ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentGetAutocompleteV2

static char* ezdoctemplatedocumentGetAutocompleteV2_ETYPE_ToString(ezmax_api_definition__full_ezdoctemplatedocumentGetAutocompleteV2_eType_e ETYPE){
    char *ETYPEArray[] =  { "NULL", "User", "Company", "Ezsignfoldertype", "CompanyUser", "CompanyEzsignfoldertype" };
    return ETYPEArray[ETYPE];
}

static ezmax_api_definition__full_ezdoctemplatedocumentGetAutocompleteV2_eType_e ezdoctemplatedocumentGetAutocompleteV2_ETYPE_FromString(char* ETYPE){
    int stringToReturn = 0;
    char *ETYPEArray[] =  { "NULL", "User", "Company", "Ezsignfoldertype", "CompanyUser", "CompanyEzsignfoldertype" };
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
// Function ezdoctemplatedocumentGetAutocompleteV2_ETYPE_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *ezdoctemplatedocumentGetAutocompleteV2_ETYPE_convertToJSON(ezmax_api_definition__full_ezdoctemplatedocumentGetAutocompleteV2_eType_e ETYPE) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "eType", ezdoctemplatedocumentGetAutocompleteV2_ETYPE_ToString(ETYPE)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function ezdoctemplatedocumentGetAutocompleteV2_ETYPE_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_ezdoctemplatedocumentGetAutocompleteV2_eType_e ezdoctemplatedocumentGetAutocompleteV2_ETYPE_parseFromJSON(cJSON* ETYPEJSON) {
    ezmax_api_definition__full_ezdoctemplatedocumentGetAutocompleteV2_eType_e ETYPEVariable = 0;
    cJSON *ETYPEVar = cJSON_GetObjectItemCaseSensitive(ETYPEJSON, "eType");
    if(!cJSON_IsString(ETYPEVar) || (ETYPEVar->valuestring == NULL))
    {
        goto end;
    }
    ETYPEVariable = ezdoctemplatedocumentGetAutocompleteV2_ETYPE_FromString(ETYPEVar->valuestring);
    return ETYPEVariable;
end:
    return 0;
}
*/

// Functions for enum EFILTERACTIVE for ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentGetAutocompleteV2

static char* ezdoctemplatedocumentGetAutocompleteV2_EFILTERACTIVE_ToString(ezmax_api_definition__full_ezdoctemplatedocumentGetAutocompleteV2_eFilterActive_e EFILTERACTIVE){
    char *EFILTERACTIVEArray[] =  { "NULL", "All", "Active", "Inactive" };
    return EFILTERACTIVEArray[EFILTERACTIVE];
}

static ezmax_api_definition__full_ezdoctemplatedocumentGetAutocompleteV2_eFilterActive_e ezdoctemplatedocumentGetAutocompleteV2_EFILTERACTIVE_FromString(char* EFILTERACTIVE){
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
// Function ezdoctemplatedocumentGetAutocompleteV2_EFILTERACTIVE_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *ezdoctemplatedocumentGetAutocompleteV2_EFILTERACTIVE_convertToJSON(ezmax_api_definition__full_ezdoctemplatedocumentGetAutocompleteV2_eFilterActive_e EFILTERACTIVE) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "eFilterActive", ezdoctemplatedocumentGetAutocompleteV2_EFILTERACTIVE_ToString(EFILTERACTIVE)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function ezdoctemplatedocumentGetAutocompleteV2_EFILTERACTIVE_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_ezdoctemplatedocumentGetAutocompleteV2_eFilterActive_e ezdoctemplatedocumentGetAutocompleteV2_EFILTERACTIVE_parseFromJSON(cJSON* EFILTERACTIVEJSON) {
    ezmax_api_definition__full_ezdoctemplatedocumentGetAutocompleteV2_eFilterActive_e EFILTERACTIVEVariable = 0;
    cJSON *EFILTERACTIVEVar = cJSON_GetObjectItemCaseSensitive(EFILTERACTIVEJSON, "eFilterActive");
    if(!cJSON_IsString(EFILTERACTIVEVar) || (EFILTERACTIVEVar->valuestring == NULL))
    {
        goto end;
    }
    EFILTERACTIVEVariable = ezdoctemplatedocumentGetAutocompleteV2_EFILTERACTIVE_FromString(EFILTERACTIVEVar->valuestring);
    return EFILTERACTIVEVariable;
end:
    return 0;
}
*/

// Functions for enum  for ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentGetAutocompleteV2

static char* ezdoctemplatedocumentGetAutocompleteV2__ToString(ezmax_api_definition__full_ezdoctemplatedocumentGetAutocompleteV2_Accept-Language_e ){
    char *Array[] =  { "NULL", "*", "en", "fr" };
    return Array[];
}

static ezmax_api_definition__full_ezdoctemplatedocumentGetAutocompleteV2_Accept-Language_e ezdoctemplatedocumentGetAutocompleteV2__FromString(char* ){
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
// Function ezdoctemplatedocumentGetAutocompleteV2__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *ezdoctemplatedocumentGetAutocompleteV2__convertToJSON(ezmax_api_definition__full_ezdoctemplatedocumentGetAutocompleteV2_Accept-Language_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function ezdoctemplatedocumentGetAutocompleteV2__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_ezdoctemplatedocumentGetAutocompleteV2_Accept-Language_e ezdoctemplatedocumentGetAutocompleteV2__parseFromJSON(cJSON* JSON) {
    ezmax_api_definition__full_ezdoctemplatedocumentGetAutocompleteV2_Accept-Language_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/

// Functions for enum EORDERBY for ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentGetListV1

static char* ezdoctemplatedocumentGetListV1_EORDERBY_ToString(ezmax_api_definition__full_ezdoctemplatedocumentGetListV1_eOrderBy_e EORDERBY){
    char *EORDERBYArray[] =  { "NULL", "pkiEzdoctemplatedocumentID_ASC", "pkiEzdoctemplatedocumentID_DESC", "fkiLanguageID_ASC", "fkiLanguageID_DESC", "fkiEzdoctemplatetypeID_ASC", "fkiEzdoctemplatetypeID_DESC", "fkiEzdoctemplatefieldtypecategoryID_ASC", "fkiEzdoctemplatefieldtypecategoryID_DESC", "bEzdoctemplatedocumentIsactive_ASC", "bEzdoctemplatedocumentIsactive_DESC", "sEzdoctemplatedocumentNameX_ASC", "sEzdoctemplatedocumentNameX_DESC" };
    return EORDERBYArray[EORDERBY];
}

static ezmax_api_definition__full_ezdoctemplatedocumentGetListV1_eOrderBy_e ezdoctemplatedocumentGetListV1_EORDERBY_FromString(char* EORDERBY){
    int stringToReturn = 0;
    char *EORDERBYArray[] =  { "NULL", "pkiEzdoctemplatedocumentID_ASC", "pkiEzdoctemplatedocumentID_DESC", "fkiLanguageID_ASC", "fkiLanguageID_DESC", "fkiEzdoctemplatetypeID_ASC", "fkiEzdoctemplatetypeID_DESC", "fkiEzdoctemplatefieldtypecategoryID_ASC", "fkiEzdoctemplatefieldtypecategoryID_DESC", "bEzdoctemplatedocumentIsactive_ASC", "bEzdoctemplatedocumentIsactive_DESC", "sEzdoctemplatedocumentNameX_ASC", "sEzdoctemplatedocumentNameX_DESC" };
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
// Function ezdoctemplatedocumentGetListV1_EORDERBY_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *ezdoctemplatedocumentGetListV1_EORDERBY_convertToJSON(ezmax_api_definition__full_ezdoctemplatedocumentGetListV1_eOrderBy_e EORDERBY) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "eOrderBy", ezdoctemplatedocumentGetListV1_EORDERBY_ToString(EORDERBY)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function ezdoctemplatedocumentGetListV1_EORDERBY_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_ezdoctemplatedocumentGetListV1_eOrderBy_e ezdoctemplatedocumentGetListV1_EORDERBY_parseFromJSON(cJSON* EORDERBYJSON) {
    ezmax_api_definition__full_ezdoctemplatedocumentGetListV1_eOrderBy_e EORDERBYVariable = 0;
    cJSON *EORDERBYVar = cJSON_GetObjectItemCaseSensitive(EORDERBYJSON, "eOrderBy");
    if(!cJSON_IsString(EORDERBYVar) || (EORDERBYVar->valuestring == NULL))
    {
        goto end;
    }
    EORDERBYVariable = ezdoctemplatedocumentGetListV1_EORDERBY_FromString(EORDERBYVar->valuestring);
    return EORDERBYVariable;
end:
    return 0;
}
*/

// Functions for enum  for ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentGetListV1

static char* ezdoctemplatedocumentGetListV1__ToString(ezmax_api_definition__full_ezdoctemplatedocumentGetListV1_Accept-Language_e ){
    char *Array[] =  { "NULL", "*", "en", "fr" };
    return Array[];
}

static ezmax_api_definition__full_ezdoctemplatedocumentGetListV1_Accept-Language_e ezdoctemplatedocumentGetListV1__FromString(char* ){
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
// Function ezdoctemplatedocumentGetListV1__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *ezdoctemplatedocumentGetListV1__convertToJSON(ezmax_api_definition__full_ezdoctemplatedocumentGetListV1_Accept-Language_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function ezdoctemplatedocumentGetListV1__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_ezdoctemplatedocumentGetListV1_Accept-Language_e ezdoctemplatedocumentGetListV1__parseFromJSON(cJSON* JSON) {
    ezmax_api_definition__full_ezdoctemplatedocumentGetListV1_Accept-Language_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/


// Create a new Ezdoctemplatedocument
//
// The endpoint allows to create one or many elements at once.
//
ezdoctemplatedocument_create_object_v1_response_t*
ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentCreateObjectV1(apiClient_t *apiClient, ezdoctemplatedocument_create_object_v1_request_t *ezdoctemplatedocument_create_object_v1_request)
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
    char *localVarPath = strdup("/1/object/ezdoctemplatedocument");





    // Body Param
    cJSON *localVarSingleItemJSON_ezdoctemplatedocument_create_object_v1_request = NULL;
    if (ezdoctemplatedocument_create_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezdoctemplatedocument_create_object_v1_request = ezdoctemplatedocument_create_object_v1_request_convertToJSON(ezdoctemplatedocument_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezdoctemplatedocument_create_object_v1_request);
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
    ezdoctemplatedocument_create_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzdoctemplatedocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezdoctemplatedocument_create_object_v1_response_parseFromJSON(ObjectEzdoctemplatedocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzdoctemplatedocumentAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_ezdoctemplatedocument_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezdoctemplatedocument_create_object_v1_request);
        localVarSingleItemJSON_ezdoctemplatedocument_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve the content
//
// Using this endpoint, you can retrieve the content of an ezdoctemplatedocument.
//
void
ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentDownloadV1(apiClient_t *apiClient, int *pkiEzdoctemplatedocumentID)
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
    char *localVarPath = strdup("/1/object/ezdoctemplatedocument/{pkiEzdoctemplatedocumentID}/download");



    // Path Params
    long sizeOfPathParams_pkiEzdoctemplatedocumentID =  + sizeof("{ pkiEzdoctemplatedocumentID }") - 1;
    if(pkiEzdoctemplatedocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzdoctemplatedocumentID = malloc(sizeOfPathParams_pkiEzdoctemplatedocumentID);
    snprintf(localVarToReplace_pkiEzdoctemplatedocumentID, sizeOfPathParams_pkiEzdoctemplatedocumentID, "{%s}", "pkiEzdoctemplatedocumentID");

    char localVarBuff_pkiEzdoctemplatedocumentID[256];
    snprintf(localVarBuff_pkiEzdoctemplatedocumentID, sizeof localVarBuff_pkiEzdoctemplatedocumentID, "%ld", (long)*pkiEzdoctemplatedocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzdoctemplatedocumentID, localVarBuff_pkiEzdoctemplatedocumentID);



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
    free(localVarToReplace_pkiEzdoctemplatedocumentID);

}

// Edit an existing Ezdoctemplatedocument
//
// 
//
ezdoctemplatedocument_edit_object_v1_response_t*
ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentEditObjectV1(apiClient_t *apiClient, int *pkiEzdoctemplatedocumentID, ezdoctemplatedocument_edit_object_v1_request_t *ezdoctemplatedocument_edit_object_v1_request)
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
    char *localVarPath = strdup("/1/object/ezdoctemplatedocument/{pkiEzdoctemplatedocumentID}");



    // Path Params
    long sizeOfPathParams_pkiEzdoctemplatedocumentID =  + sizeof("{ pkiEzdoctemplatedocumentID }") - 1;
    if(pkiEzdoctemplatedocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzdoctemplatedocumentID = malloc(sizeOfPathParams_pkiEzdoctemplatedocumentID);
    snprintf(localVarToReplace_pkiEzdoctemplatedocumentID, sizeOfPathParams_pkiEzdoctemplatedocumentID, "{%s}", "pkiEzdoctemplatedocumentID");

    char localVarBuff_pkiEzdoctemplatedocumentID[256];
    snprintf(localVarBuff_pkiEzdoctemplatedocumentID, sizeof localVarBuff_pkiEzdoctemplatedocumentID, "%ld", (long)*pkiEzdoctemplatedocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzdoctemplatedocumentID, localVarBuff_pkiEzdoctemplatedocumentID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezdoctemplatedocument_edit_object_v1_request = NULL;
    if (ezdoctemplatedocument_edit_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezdoctemplatedocument_edit_object_v1_request = ezdoctemplatedocument_edit_object_v1_request_convertToJSON(ezdoctemplatedocument_edit_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezdoctemplatedocument_edit_object_v1_request);
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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    ezdoctemplatedocument_edit_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzdoctemplatedocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezdoctemplatedocument_edit_object_v1_response_parseFromJSON(ObjectEzdoctemplatedocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzdoctemplatedocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzdoctemplatedocumentID);
    if (localVarSingleItemJSON_ezdoctemplatedocument_edit_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezdoctemplatedocument_edit_object_v1_request);
        localVarSingleItemJSON_ezdoctemplatedocument_edit_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Ezdoctemplatedocuments and IDs
//
// Get the list of Ezdoctemplatedocument to be used in a dropdown or autocomplete control.
//
ezdoctemplatedocument_get_autocomplete_v2_response_t*
ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_ezdoctemplatedocumentGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_ezdoctemplatedocumentGetAutocompleteV2_eType_e eType, char *fkiEzsignfoldertypeID, ezmax_api_definition__full_ezdoctemplatedocumentGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language)
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
    char *localVarPath = strdup("/2/object/ezdoctemplatedocument/getAutocomplete/{sSelector}");

    if(!sSelector)
        goto end;


    // Path Params
    long sizeOfPathParams_sSelector = strlen(ezdoctemplatedocumentGetAutocompleteV2_SSELECTOR_ToString(sSelector))+3 + sizeof("{ sSelector }") - 1;
    if(sSelector == 0) {
        goto end;
    }
    char* localVarToReplace_sSelector = malloc(sizeOfPathParams_sSelector);
    sprintf(localVarToReplace_sSelector, "{%s}", "sSelector");

    localVarPath = strReplace(localVarPath, localVarToReplace_sSelector, ezdoctemplatedocumentGetAutocompleteV2_SSELECTOR_ToString(sSelector));



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
    char *keyQuery_fkiEzsignfoldertypeID = NULL;
    char * valueQuery_fkiEzsignfoldertypeID = NULL;
    keyValuePair_t *keyPairQuery_fkiEzsignfoldertypeID = 0;
    if (fkiEzsignfoldertypeID)
    {
        keyQuery_fkiEzsignfoldertypeID = strdup("fkiEzsignfoldertypeID");
        valueQuery_fkiEzsignfoldertypeID = strdup((fkiEzsignfoldertypeID));
        keyPairQuery_fkiEzsignfoldertypeID = keyValuePair_create(keyQuery_fkiEzsignfoldertypeID, valueQuery_fkiEzsignfoldertypeID);
        list_addElement(localVarQueryParameters,keyPairQuery_fkiEzsignfoldertypeID);
    }

    // query parameters
    char *keyQuery_eType = NULL;
    ezmax_api_definition__full_ezdoctemplatedocumentGetAutocompleteV2_eType_e valueQuery_eType ;
    keyValuePair_t *keyPairQuery_eType = 0;
    if (eType)
    {
        keyQuery_eType = strdup("eType");
        valueQuery_eType = (eType);
        keyPairQuery_eType = keyValuePair_create(keyQuery_eType, strdup(ezdoctemplatedocumentGetAutocompleteV2_ETYPE_ToString(
        valueQuery_eType)));
        list_addElement(localVarQueryParameters,keyPairQuery_eType);
    }

    // query parameters
    char *keyQuery_eFilterActive = NULL;
    ezmax_api_definition__full_ezdoctemplatedocumentGetAutocompleteV2_eFilterActive_e valueQuery_eFilterActive ;
    keyValuePair_t *keyPairQuery_eFilterActive = 0;
    if (eFilterActive)
    {
        keyQuery_eFilterActive = strdup("eFilterActive");
        valueQuery_eFilterActive = (eFilterActive);
        keyPairQuery_eFilterActive = keyValuePair_create(keyQuery_eFilterActive, strdup(ezdoctemplatedocumentGetAutocompleteV2_EFILTERACTIVE_ToString(
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
    ezdoctemplatedocument_get_autocomplete_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzdoctemplatedocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezdoctemplatedocument_get_autocomplete_v2_response_parseFromJSON(ObjectEzdoctemplatedocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzdoctemplatedocumentAPIlocalVarJSON);
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
    if(keyQuery_fkiEzsignfoldertypeID){
        free(keyQuery_fkiEzsignfoldertypeID);
        keyQuery_fkiEzsignfoldertypeID = NULL;
    }
    if(valueQuery_fkiEzsignfoldertypeID){
        free(valueQuery_fkiEzsignfoldertypeID);
        valueQuery_fkiEzsignfoldertypeID = NULL;
    }
    if(keyPairQuery_fkiEzsignfoldertypeID){
        keyValuePair_free(keyPairQuery_fkiEzsignfoldertypeID);
        keyPairQuery_fkiEzsignfoldertypeID = NULL;
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

// Retrieve Ezdoctemplatedocument list
//
// 
//
ezdoctemplatedocument_get_list_v1_response_t*
ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_ezdoctemplatedocumentGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter)
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
    char *localVarPath = strdup("/1/object/ezdoctemplatedocument/getList");





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
    ezmax_api_definition__full_ezdoctemplatedocumentGetListV1_eOrderBy_e valueQuery_eOrderBy ;
    keyValuePair_t *keyPairQuery_eOrderBy = 0;
    if (eOrderBy)
    {
        keyQuery_eOrderBy = strdup("eOrderBy");
        valueQuery_eOrderBy = (eOrderBy);
        keyPairQuery_eOrderBy = keyValuePair_create(keyQuery_eOrderBy, strdup(ezdoctemplatedocumentGetListV1_EORDERBY_ToString(
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
    ezdoctemplatedocument_get_list_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzdoctemplatedocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezdoctemplatedocument_get_list_v1_response_parseFromJSON(ObjectEzdoctemplatedocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzdoctemplatedocumentAPIlocalVarJSON);
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

// Retrieve an existing Ezdoctemplatedocument
//
// 
//
ezdoctemplatedocument_get_object_v2_response_t*
ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentGetObjectV2(apiClient_t *apiClient, int *pkiEzdoctemplatedocumentID)
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
    char *localVarPath = strdup("/2/object/ezdoctemplatedocument/{pkiEzdoctemplatedocumentID}");



    // Path Params
    long sizeOfPathParams_pkiEzdoctemplatedocumentID =  + sizeof("{ pkiEzdoctemplatedocumentID }") - 1;
    if(pkiEzdoctemplatedocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzdoctemplatedocumentID = malloc(sizeOfPathParams_pkiEzdoctemplatedocumentID);
    snprintf(localVarToReplace_pkiEzdoctemplatedocumentID, sizeOfPathParams_pkiEzdoctemplatedocumentID, "{%s}", "pkiEzdoctemplatedocumentID");

    char localVarBuff_pkiEzdoctemplatedocumentID[256];
    snprintf(localVarBuff_pkiEzdoctemplatedocumentID, sizeof localVarBuff_pkiEzdoctemplatedocumentID, "%ld", (long)*pkiEzdoctemplatedocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzdoctemplatedocumentID, localVarBuff_pkiEzdoctemplatedocumentID);



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
    ezdoctemplatedocument_get_object_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzdoctemplatedocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezdoctemplatedocument_get_object_v2_response_parseFromJSON(ObjectEzdoctemplatedocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzdoctemplatedocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzdoctemplatedocumentID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Patch an existing Ezdoctemplatedocument
//
// 
//
ezdoctemplatedocument_patch_object_v1_response_t*
ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentPatchObjectV1(apiClient_t *apiClient, int *pkiEzdoctemplatedocumentID, ezdoctemplatedocument_patch_object_v1_request_t *ezdoctemplatedocument_patch_object_v1_request)
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
    char *localVarPath = strdup("/1/object/ezdoctemplatedocument/{pkiEzdoctemplatedocumentID}");



    // Path Params
    long sizeOfPathParams_pkiEzdoctemplatedocumentID =  + sizeof("{ pkiEzdoctemplatedocumentID }") - 1;
    if(pkiEzdoctemplatedocumentID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzdoctemplatedocumentID = malloc(sizeOfPathParams_pkiEzdoctemplatedocumentID);
    snprintf(localVarToReplace_pkiEzdoctemplatedocumentID, sizeOfPathParams_pkiEzdoctemplatedocumentID, "{%s}", "pkiEzdoctemplatedocumentID");

    char localVarBuff_pkiEzdoctemplatedocumentID[256];
    snprintf(localVarBuff_pkiEzdoctemplatedocumentID, sizeof localVarBuff_pkiEzdoctemplatedocumentID, "%ld", (long)*pkiEzdoctemplatedocumentID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzdoctemplatedocumentID, localVarBuff_pkiEzdoctemplatedocumentID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezdoctemplatedocument_patch_object_v1_request = NULL;
    if (ezdoctemplatedocument_patch_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezdoctemplatedocument_patch_object_v1_request = ezdoctemplatedocument_patch_object_v1_request_convertToJSON(ezdoctemplatedocument_patch_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezdoctemplatedocument_patch_object_v1_request);
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    ezdoctemplatedocument_patch_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzdoctemplatedocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezdoctemplatedocument_patch_object_v1_response_parseFromJSON(ObjectEzdoctemplatedocumentAPIlocalVarJSON);
        cJSON_Delete(ObjectEzdoctemplatedocumentAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzdoctemplatedocumentID);
    if (localVarSingleItemJSON_ezdoctemplatedocument_patch_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezdoctemplatedocument_patch_object_v1_request);
        localVarSingleItemJSON_ezdoctemplatedocument_patch_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

