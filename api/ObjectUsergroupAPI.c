#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectUsergroupAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)

// Functions for enum SSELECTOR for ObjectUsergroupAPI_usergroupGetAutocompleteV2

static char* usergroupGetAutocompleteV2_SSELECTOR_ToString(ezmax_api_definition__full_usergroupGetAutocompleteV2_sSelector_e SSELECTOR){
    char *SSELECTORArray[] =  { "NULL", "All" };
    return SSELECTORArray[SSELECTOR];
}

static ezmax_api_definition__full_usergroupGetAutocompleteV2_sSelector_e usergroupGetAutocompleteV2_SSELECTOR_FromString(char* SSELECTOR){
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
// Function usergroupGetAutocompleteV2_SSELECTOR_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *usergroupGetAutocompleteV2_SSELECTOR_convertToJSON(ezmax_api_definition__full_usergroupGetAutocompleteV2_sSelector_e SSELECTOR) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "sSelector", usergroupGetAutocompleteV2_SSELECTOR_ToString(SSELECTOR)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function usergroupGetAutocompleteV2_SSELECTOR_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_usergroupGetAutocompleteV2_sSelector_e usergroupGetAutocompleteV2_SSELECTOR_parseFromJSON(cJSON* SSELECTORJSON) {
    ezmax_api_definition__full_usergroupGetAutocompleteV2_sSelector_e SSELECTORVariable = 0;
    cJSON *SSELECTORVar = cJSON_GetObjectItemCaseSensitive(SSELECTORJSON, "sSelector");
    if(!cJSON_IsString(SSELECTORVar) || (SSELECTORVar->valuestring == NULL))
    {
        goto end;
    }
    SSELECTORVariable = usergroupGetAutocompleteV2_SSELECTOR_FromString(SSELECTORVar->valuestring);
    return SSELECTORVariable;
end:
    return 0;
}
*/

// Functions for enum EFILTERACTIVE for ObjectUsergroupAPI_usergroupGetAutocompleteV2

static char* usergroupGetAutocompleteV2_EFILTERACTIVE_ToString(ezmax_api_definition__full_usergroupGetAutocompleteV2_eFilterActive_e EFILTERACTIVE){
    char *EFILTERACTIVEArray[] =  { "NULL", "All", "Active", "Inactive" };
    return EFILTERACTIVEArray[EFILTERACTIVE];
}

static ezmax_api_definition__full_usergroupGetAutocompleteV2_eFilterActive_e usergroupGetAutocompleteV2_EFILTERACTIVE_FromString(char* EFILTERACTIVE){
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
// Function usergroupGetAutocompleteV2_EFILTERACTIVE_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *usergroupGetAutocompleteV2_EFILTERACTIVE_convertToJSON(ezmax_api_definition__full_usergroupGetAutocompleteV2_eFilterActive_e EFILTERACTIVE) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "eFilterActive", usergroupGetAutocompleteV2_EFILTERACTIVE_ToString(EFILTERACTIVE)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function usergroupGetAutocompleteV2_EFILTERACTIVE_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_usergroupGetAutocompleteV2_eFilterActive_e usergroupGetAutocompleteV2_EFILTERACTIVE_parseFromJSON(cJSON* EFILTERACTIVEJSON) {
    ezmax_api_definition__full_usergroupGetAutocompleteV2_eFilterActive_e EFILTERACTIVEVariable = 0;
    cJSON *EFILTERACTIVEVar = cJSON_GetObjectItemCaseSensitive(EFILTERACTIVEJSON, "eFilterActive");
    if(!cJSON_IsString(EFILTERACTIVEVar) || (EFILTERACTIVEVar->valuestring == NULL))
    {
        goto end;
    }
    EFILTERACTIVEVariable = usergroupGetAutocompleteV2_EFILTERACTIVE_FromString(EFILTERACTIVEVar->valuestring);
    return EFILTERACTIVEVariable;
end:
    return 0;
}
*/

// Functions for enum  for ObjectUsergroupAPI_usergroupGetAutocompleteV2

static char* usergroupGetAutocompleteV2__ToString(ezmax_api_definition__full_usergroupGetAutocompleteV2_Accept-Language_e ){
    char *Array[] =  { "NULL", "*", "en", "fr" };
    return Array[];
}

static ezmax_api_definition__full_usergroupGetAutocompleteV2_Accept-Language_e usergroupGetAutocompleteV2__FromString(char* ){
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
// Function usergroupGetAutocompleteV2__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *usergroupGetAutocompleteV2__convertToJSON(ezmax_api_definition__full_usergroupGetAutocompleteV2_Accept-Language_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function usergroupGetAutocompleteV2__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_usergroupGetAutocompleteV2_Accept-Language_e usergroupGetAutocompleteV2__parseFromJSON(cJSON* JSON) {
    ezmax_api_definition__full_usergroupGetAutocompleteV2_Accept-Language_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/

// Functions for enum EORDERBY for ObjectUsergroupAPI_usergroupGetListV1

static char* usergroupGetListV1_EORDERBY_ToString(ezmax_api_definition__full_usergroupGetListV1_eOrderBy_e EORDERBY){
    char *EORDERBYArray[] =  { "NULL", "pkiUsergroupID_ASC", "pkiUsergroupID_DESC", "sUsergroupNameX_ASC", "sUsergroupNameX_DESC", "iCountUser_ASC", "iCountUser_DESC" };
    return EORDERBYArray[EORDERBY];
}

static ezmax_api_definition__full_usergroupGetListV1_eOrderBy_e usergroupGetListV1_EORDERBY_FromString(char* EORDERBY){
    int stringToReturn = 0;
    char *EORDERBYArray[] =  { "NULL", "pkiUsergroupID_ASC", "pkiUsergroupID_DESC", "sUsergroupNameX_ASC", "sUsergroupNameX_DESC", "iCountUser_ASC", "iCountUser_DESC" };
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
// Function usergroupGetListV1_EORDERBY_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *usergroupGetListV1_EORDERBY_convertToJSON(ezmax_api_definition__full_usergroupGetListV1_eOrderBy_e EORDERBY) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "eOrderBy", usergroupGetListV1_EORDERBY_ToString(EORDERBY)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function usergroupGetListV1_EORDERBY_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_usergroupGetListV1_eOrderBy_e usergroupGetListV1_EORDERBY_parseFromJSON(cJSON* EORDERBYJSON) {
    ezmax_api_definition__full_usergroupGetListV1_eOrderBy_e EORDERBYVariable = 0;
    cJSON *EORDERBYVar = cJSON_GetObjectItemCaseSensitive(EORDERBYJSON, "eOrderBy");
    if(!cJSON_IsString(EORDERBYVar) || (EORDERBYVar->valuestring == NULL))
    {
        goto end;
    }
    EORDERBYVariable = usergroupGetListV1_EORDERBY_FromString(EORDERBYVar->valuestring);
    return EORDERBYVariable;
end:
    return 0;
}
*/

// Functions for enum  for ObjectUsergroupAPI_usergroupGetListV1

static char* usergroupGetListV1__ToString(ezmax_api_definition__full_usergroupGetListV1_Accept-Language_e ){
    char *Array[] =  { "NULL", "*", "en", "fr" };
    return Array[];
}

static ezmax_api_definition__full_usergroupGetListV1_Accept-Language_e usergroupGetListV1__FromString(char* ){
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
// Function usergroupGetListV1__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *usergroupGetListV1__convertToJSON(ezmax_api_definition__full_usergroupGetListV1_Accept-Language_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function usergroupGetListV1__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_usergroupGetListV1_Accept-Language_e usergroupGetListV1__parseFromJSON(cJSON* JSON) {
    ezmax_api_definition__full_usergroupGetListV1_Accept-Language_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/


// Create a new Usergroup
//
// The endpoint allows to create one or many elements at once.
//
usergroup_create_object_v1_response_t*
ObjectUsergroupAPI_usergroupCreateObjectV1(apiClient_t *apiClient, usergroup_create_object_v1_request_t * usergroup_create_object_v1_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/usergroup")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/usergroup");




    // Body Param
    cJSON *localVarSingleItemJSON_usergroup_create_object_v1_request = NULL;
    if (usergroup_create_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_usergroup_create_object_v1_request = usergroup_create_object_v1_request_convertToJSON(usergroup_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_usergroup_create_object_v1_request);
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
    //nonprimitive not container
    cJSON *ObjectUsergroupAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    usergroup_create_object_v1_response_t *elementToReturn = usergroup_create_object_v1_response_parseFromJSON(ObjectUsergroupAPIlocalVarJSON);
    cJSON_Delete(ObjectUsergroupAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_usergroup_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_usergroup_create_object_v1_request);
        localVarSingleItemJSON_usergroup_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Edit an existing Usergroup
//
// 
//
usergroup_edit_object_v1_response_t*
ObjectUsergroupAPI_usergroupEditObjectV1(apiClient_t *apiClient, int pkiUsergroupID , usergroup_edit_object_v1_request_t * usergroup_edit_object_v1_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/usergroup/{pkiUsergroupID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/usergroup/{pkiUsergroupID}");


    // Path Params
    long sizeOfPathParams_pkiUsergroupID =  + strlen("{ pkiUsergroupID }");
    if(pkiUsergroupID == 0){
        goto end;
    }
    char* localVarToReplace_pkiUsergroupID = malloc(sizeOfPathParams_pkiUsergroupID);
    snprintf(localVarToReplace_pkiUsergroupID, sizeOfPathParams_pkiUsergroupID, "{%s}", "pkiUsergroupID");

    char localVarBuff_pkiUsergroupID[256];
    intToStr(localVarBuff_pkiUsergroupID, pkiUsergroupID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiUsergroupID, localVarBuff_pkiUsergroupID);




    // Body Param
    cJSON *localVarSingleItemJSON_usergroup_edit_object_v1_request = NULL;
    if (usergroup_edit_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_usergroup_edit_object_v1_request = usergroup_edit_object_v1_request_convertToJSON(usergroup_edit_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_usergroup_edit_object_v1_request);
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
    cJSON *ObjectUsergroupAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    usergroup_edit_object_v1_response_t *elementToReturn = usergroup_edit_object_v1_response_parseFromJSON(ObjectUsergroupAPIlocalVarJSON);
    cJSON_Delete(ObjectUsergroupAPIlocalVarJSON);
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
    free(localVarToReplace_pkiUsergroupID);
    if (localVarSingleItemJSON_usergroup_edit_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_usergroup_edit_object_v1_request);
        localVarSingleItemJSON_usergroup_edit_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Edit multiple Permissions
//
// Using this endpoint, you can edit multiple Permissions at the same time.
//
usergroup_edit_permissions_v1_response_t*
ObjectUsergroupAPI_usergroupEditPermissionsV1(apiClient_t *apiClient, int pkiUsergroupID , usergroup_edit_permissions_v1_request_t * usergroup_edit_permissions_v1_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/usergroup/{pkiUsergroupID}/editPermissions")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/usergroup/{pkiUsergroupID}/editPermissions");


    // Path Params
    long sizeOfPathParams_pkiUsergroupID =  + strlen("{ pkiUsergroupID }");
    if(pkiUsergroupID == 0){
        goto end;
    }
    char* localVarToReplace_pkiUsergroupID = malloc(sizeOfPathParams_pkiUsergroupID);
    snprintf(localVarToReplace_pkiUsergroupID, sizeOfPathParams_pkiUsergroupID, "{%s}", "pkiUsergroupID");

    char localVarBuff_pkiUsergroupID[256];
    intToStr(localVarBuff_pkiUsergroupID, pkiUsergroupID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiUsergroupID, localVarBuff_pkiUsergroupID);




    // Body Param
    cJSON *localVarSingleItemJSON_usergroup_edit_permissions_v1_request = NULL;
    if (usergroup_edit_permissions_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_usergroup_edit_permissions_v1_request = usergroup_edit_permissions_v1_request_convertToJSON(usergroup_edit_permissions_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_usergroup_edit_permissions_v1_request);
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
    cJSON *ObjectUsergroupAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    usergroup_edit_permissions_v1_response_t *elementToReturn = usergroup_edit_permissions_v1_response_parseFromJSON(ObjectUsergroupAPIlocalVarJSON);
    cJSON_Delete(ObjectUsergroupAPIlocalVarJSON);
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
    free(localVarToReplace_pkiUsergroupID);
    if (localVarSingleItemJSON_usergroup_edit_permissions_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_usergroup_edit_permissions_v1_request);
        localVarSingleItemJSON_usergroup_edit_permissions_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Edit multiple Usergroupdelegations
//
// Edit multiple Usergroupdelegations
//
usergroup_edit_usergroupdelegations_v1_response_t*
ObjectUsergroupAPI_usergroupEditUsergroupdelegationsV1(apiClient_t *apiClient, int pkiUsergroupID , usergroup_edit_usergroupdelegations_v1_request_t * usergroup_edit_usergroupdelegations_v1_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/usergroup/{pkiUsergroupID}/editUsergroupdelegations")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/usergroup/{pkiUsergroupID}/editUsergroupdelegations");


    // Path Params
    long sizeOfPathParams_pkiUsergroupID =  + strlen("{ pkiUsergroupID }");
    if(pkiUsergroupID == 0){
        goto end;
    }
    char* localVarToReplace_pkiUsergroupID = malloc(sizeOfPathParams_pkiUsergroupID);
    snprintf(localVarToReplace_pkiUsergroupID, sizeOfPathParams_pkiUsergroupID, "{%s}", "pkiUsergroupID");

    char localVarBuff_pkiUsergroupID[256];
    intToStr(localVarBuff_pkiUsergroupID, pkiUsergroupID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiUsergroupID, localVarBuff_pkiUsergroupID);




    // Body Param
    cJSON *localVarSingleItemJSON_usergroup_edit_usergroupdelegations_v1_request = NULL;
    if (usergroup_edit_usergroupdelegations_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_usergroup_edit_usergroupdelegations_v1_request = usergroup_edit_usergroupdelegations_v1_request_convertToJSON(usergroup_edit_usergroupdelegations_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_usergroup_edit_usergroupdelegations_v1_request);
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
    cJSON *ObjectUsergroupAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    usergroup_edit_usergroupdelegations_v1_response_t *elementToReturn = usergroup_edit_usergroupdelegations_v1_response_parseFromJSON(ObjectUsergroupAPIlocalVarJSON);
    cJSON_Delete(ObjectUsergroupAPIlocalVarJSON);
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
    free(localVarToReplace_pkiUsergroupID);
    if (localVarSingleItemJSON_usergroup_edit_usergroupdelegations_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_usergroup_edit_usergroupdelegations_v1_request);
        localVarSingleItemJSON_usergroup_edit_usergroupdelegations_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Edit multiple Usergroupmemberships
//
// Using this endpoint, you can edit multiple Usergroupmemberships at the same time.
//
usergroup_edit_usergroupmemberships_v1_response_t*
ObjectUsergroupAPI_usergroupEditUsergroupmembershipsV1(apiClient_t *apiClient, int pkiUsergroupID , usergroup_edit_usergroupmemberships_v1_request_t * usergroup_edit_usergroupmemberships_v1_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/usergroup/{pkiUsergroupID}/editUsergroupmemberships")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/usergroup/{pkiUsergroupID}/editUsergroupmemberships");


    // Path Params
    long sizeOfPathParams_pkiUsergroupID =  + strlen("{ pkiUsergroupID }");
    if(pkiUsergroupID == 0){
        goto end;
    }
    char* localVarToReplace_pkiUsergroupID = malloc(sizeOfPathParams_pkiUsergroupID);
    snprintf(localVarToReplace_pkiUsergroupID, sizeOfPathParams_pkiUsergroupID, "{%s}", "pkiUsergroupID");

    char localVarBuff_pkiUsergroupID[256];
    intToStr(localVarBuff_pkiUsergroupID, pkiUsergroupID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiUsergroupID, localVarBuff_pkiUsergroupID);




    // Body Param
    cJSON *localVarSingleItemJSON_usergroup_edit_usergroupmemberships_v1_request = NULL;
    if (usergroup_edit_usergroupmemberships_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_usergroup_edit_usergroupmemberships_v1_request = usergroup_edit_usergroupmemberships_v1_request_convertToJSON(usergroup_edit_usergroupmemberships_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_usergroup_edit_usergroupmemberships_v1_request);
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
    cJSON *ObjectUsergroupAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    usergroup_edit_usergroupmemberships_v1_response_t *elementToReturn = usergroup_edit_usergroupmemberships_v1_response_parseFromJSON(ObjectUsergroupAPIlocalVarJSON);
    cJSON_Delete(ObjectUsergroupAPIlocalVarJSON);
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
    free(localVarToReplace_pkiUsergroupID);
    if (localVarSingleItemJSON_usergroup_edit_usergroupmemberships_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_usergroup_edit_usergroupmemberships_v1_request);
        localVarSingleItemJSON_usergroup_edit_usergroupmemberships_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Usergroups and IDs
//
// Get the list of Usergroup to be used in a dropdown or autocomplete control.
//
usergroup_get_autocomplete_v2_response_t*
ObjectUsergroupAPI_usergroupGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_usergroupGetAutocompleteV2_sSelector_e sSelector , ezmax_api_definition__full_usergroupGetAutocompleteV2_eFilterActive_e eFilterActive , char * sQuery , header_accept_language_e Accept_Language )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/2/object/usergroup/getAutocomplete/{sSelector}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/2/object/usergroup/getAutocomplete/{sSelector}");


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
    ezmax_api_definition__full_usergroupGetAutocompleteV2_eFilterActive_e valueQuery_eFilterActive ;
    keyValuePair_t *keyPairQuery_eFilterActive = 0;
    if (eFilterActive)
    {
        keyQuery_eFilterActive = strdup("eFilterActive");
        valueQuery_eFilterActive = (eFilterActive);
        keyPairQuery_eFilterActive = keyValuePair_create(keyQuery_eFilterActive, (void *)strdup(usergroupGetAutocompleteV2_EFILTERACTIVE_ToString(
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
    cJSON *ObjectUsergroupAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    usergroup_get_autocomplete_v2_response_t *elementToReturn = usergroup_get_autocomplete_v2_response_parseFromJSON(ObjectUsergroupAPIlocalVarJSON);
    cJSON_Delete(ObjectUsergroupAPIlocalVarJSON);
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

// Retrieve Usergroup list
//
// 
//
usergroup_get_list_v1_response_t*
ObjectUsergroupAPI_usergroupGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_usergroupGetListV1_eOrderBy_e eOrderBy , int iRowMax , int iRowOffset , header_accept_language_e Accept_Language , char * sFilter )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/usergroup/getList")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/usergroup/getList");




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
    ezmax_api_definition__full_usergroupGetListV1_eOrderBy_e valueQuery_eOrderBy ;
    keyValuePair_t *keyPairQuery_eOrderBy = 0;
    if (eOrderBy)
    {
        keyQuery_eOrderBy = strdup("eOrderBy");
        valueQuery_eOrderBy = (eOrderBy);
        keyPairQuery_eOrderBy = keyValuePair_create(keyQuery_eOrderBy, (void *)strdup(usergroupGetListV1_EORDERBY_ToString(
		valueQuery_eOrderBy)));
        list_addElement(localVarQueryParameters,keyPairQuery_eOrderBy);
    }

    // query parameters
    char *keyQuery_iRowMax = NULL;
    char * valueQuery_iRowMax = NULL;
    keyValuePair_t *keyPairQuery_iRowMax = 0;
    if (1) // Always send integer parameters to the API server
    {
        keyQuery_iRowMax = strdup("iRowMax");
        valueQuery_iRowMax = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_iRowMax, MAX_NUMBER_LENGTH, "%d", iRowMax);
        keyPairQuery_iRowMax = keyValuePair_create(keyQuery_iRowMax, valueQuery_iRowMax);
        list_addElement(localVarQueryParameters,keyPairQuery_iRowMax);
    }

    // query parameters
    char *keyQuery_iRowOffset = NULL;
    char * valueQuery_iRowOffset = NULL;
    keyValuePair_t *keyPairQuery_iRowOffset = 0;
    if (1) // Always send integer parameters to the API server
    {
        keyQuery_iRowOffset = strdup("iRowOffset");
        valueQuery_iRowOffset = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_iRowOffset, MAX_NUMBER_LENGTH, "%d", iRowOffset);
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
    cJSON *ObjectUsergroupAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    usergroup_get_list_v1_response_t *elementToReturn = usergroup_get_list_v1_response_parseFromJSON(ObjectUsergroupAPIlocalVarJSON);
    cJSON_Delete(ObjectUsergroupAPIlocalVarJSON);
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

// Retrieve an existing Usergroup
//
// 
//
usergroup_get_object_v2_response_t*
ObjectUsergroupAPI_usergroupGetObjectV2(apiClient_t *apiClient, int pkiUsergroupID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/2/object/usergroup/{pkiUsergroupID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/2/object/usergroup/{pkiUsergroupID}");


    // Path Params
    long sizeOfPathParams_pkiUsergroupID =  + strlen("{ pkiUsergroupID }");
    if(pkiUsergroupID == 0){
        goto end;
    }
    char* localVarToReplace_pkiUsergroupID = malloc(sizeOfPathParams_pkiUsergroupID);
    snprintf(localVarToReplace_pkiUsergroupID, sizeOfPathParams_pkiUsergroupID, "{%s}", "pkiUsergroupID");

    char localVarBuff_pkiUsergroupID[256];
    intToStr(localVarBuff_pkiUsergroupID, pkiUsergroupID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiUsergroupID, localVarBuff_pkiUsergroupID);



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
    cJSON *ObjectUsergroupAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    usergroup_get_object_v2_response_t *elementToReturn = usergroup_get_object_v2_response_parseFromJSON(ObjectUsergroupAPIlocalVarJSON);
    cJSON_Delete(ObjectUsergroupAPIlocalVarJSON);
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
    free(localVarToReplace_pkiUsergroupID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Usergroup's Permissions
//
usergroup_get_permissions_v1_response_t*
ObjectUsergroupAPI_usergroupGetPermissionsV1(apiClient_t *apiClient, int pkiUsergroupID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/usergroup/{pkiUsergroupID}/getPermissions")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/usergroup/{pkiUsergroupID}/getPermissions");


    // Path Params
    long sizeOfPathParams_pkiUsergroupID =  + strlen("{ pkiUsergroupID }");
    if(pkiUsergroupID == 0){
        goto end;
    }
    char* localVarToReplace_pkiUsergroupID = malloc(sizeOfPathParams_pkiUsergroupID);
    snprintf(localVarToReplace_pkiUsergroupID, sizeOfPathParams_pkiUsergroupID, "{%s}", "pkiUsergroupID");

    char localVarBuff_pkiUsergroupID[256];
    intToStr(localVarBuff_pkiUsergroupID, pkiUsergroupID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiUsergroupID, localVarBuff_pkiUsergroupID);



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
    cJSON *ObjectUsergroupAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    usergroup_get_permissions_v1_response_t *elementToReturn = usergroup_get_permissions_v1_response_parseFromJSON(ObjectUsergroupAPIlocalVarJSON);
    cJSON_Delete(ObjectUsergroupAPIlocalVarJSON);
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
    free(localVarToReplace_pkiUsergroupID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Usergroup's Usergroupdelegations
//
usergroup_get_usergroupdelegations_v1_response_t*
ObjectUsergroupAPI_usergroupGetUsergroupdelegationsV1(apiClient_t *apiClient, int pkiUsergroupID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/usergroup/{pkiUsergroupID}/getUsergroupdelegations")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/usergroup/{pkiUsergroupID}/getUsergroupdelegations");


    // Path Params
    long sizeOfPathParams_pkiUsergroupID =  + strlen("{ pkiUsergroupID }");
    if(pkiUsergroupID == 0){
        goto end;
    }
    char* localVarToReplace_pkiUsergroupID = malloc(sizeOfPathParams_pkiUsergroupID);
    snprintf(localVarToReplace_pkiUsergroupID, sizeOfPathParams_pkiUsergroupID, "{%s}", "pkiUsergroupID");

    char localVarBuff_pkiUsergroupID[256];
    intToStr(localVarBuff_pkiUsergroupID, pkiUsergroupID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiUsergroupID, localVarBuff_pkiUsergroupID);



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
    cJSON *ObjectUsergroupAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    usergroup_get_usergroupdelegations_v1_response_t *elementToReturn = usergroup_get_usergroupdelegations_v1_response_parseFromJSON(ObjectUsergroupAPIlocalVarJSON);
    cJSON_Delete(ObjectUsergroupAPIlocalVarJSON);
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
    free(localVarToReplace_pkiUsergroupID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Usergroup's Usergroupmemberships
//
usergroup_get_usergroupmemberships_v1_response_t*
ObjectUsergroupAPI_usergroupGetUsergroupmembershipsV1(apiClient_t *apiClient, int pkiUsergroupID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/usergroup/{pkiUsergroupID}/getUsergroupmemberships")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/usergroup/{pkiUsergroupID}/getUsergroupmemberships");


    // Path Params
    long sizeOfPathParams_pkiUsergroupID =  + strlen("{ pkiUsergroupID }");
    if(pkiUsergroupID == 0){
        goto end;
    }
    char* localVarToReplace_pkiUsergroupID = malloc(sizeOfPathParams_pkiUsergroupID);
    snprintf(localVarToReplace_pkiUsergroupID, sizeOfPathParams_pkiUsergroupID, "{%s}", "pkiUsergroupID");

    char localVarBuff_pkiUsergroupID[256];
    intToStr(localVarBuff_pkiUsergroupID, pkiUsergroupID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiUsergroupID, localVarBuff_pkiUsergroupID);



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
    cJSON *ObjectUsergroupAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    usergroup_get_usergroupmemberships_v1_response_t *elementToReturn = usergroup_get_usergroupmemberships_v1_response_parseFromJSON(ObjectUsergroupAPIlocalVarJSON);
    cJSON_Delete(ObjectUsergroupAPIlocalVarJSON);
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
    free(localVarToReplace_pkiUsergroupID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

