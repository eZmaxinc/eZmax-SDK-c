#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzsigntemplatepublicAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096

// Functions for enum EORDERBY for ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicGetListV1

static char* ezsigntemplatepublicGetListV1_EORDERBY_ToString(ezmax_api_definition__full_ezsigntemplatepublicGetListV1_eOrderBy_e EORDERBY){
    char *EORDERBYArray[] =  { "NULL", "pkiEzsigntemplatepublicID_ASC", "pkiEzsigntemplatepublicID_DESC", "fkiEzsignfoldertypeID_ASC", "fkiEzsignfoldertypeID_DESC", "sEzsignfoldertypeNameX_ASC", "sEzsignfoldertypeNameX_DESC", "fkiUserlogintypeID_ASC", "fkiUserlogintypeID_DESC", "fkiEzsigntemplateID_ASC", "fkiEzsigntemplateID_DESC", "fkiEzsigntemplatepackageID_ASC", "fkiEzsigntemplatepackageID_DESC", "sEzsigntemplatepublicDescription_ASC", "sEzsigntemplatepublicDescription_DESC", "bEzsigntemplatepublicIsactive_ASC", "bEzsigntemplatepublicIsactive_DESC", "tEzsigntemplatepublicNote_ASC", "tEzsigntemplatepublicNote_DESC", "eEzsigntemplatepublicLimittype_ASC", "eEzsigntemplatepublicLimittype_DESC", "iEzsigntemplatepublicLimit_ASC", "iEzsigntemplatepublicLimit_DESC", "iEzsigntemplatepublicLimitexceeded_ASC", "iEzsigntemplatepublicLimitexceeded_DESC", "dtEzsigntemplatepublicLimitexceededsince_ASC", "dtEzsigntemplatepublicLimitexceededsince_DESC", "iEzsignfolder_ASC", "iEzsignfolder_DESC", "iEzsigndocument_ASC", "iEzsigndocument_DESC", "sEzsigntemplatepublicEzsigntemplatedescription_ASC", "sEzsigntemplatepublicEzsigntemplatedescription_DESC" };
    return EORDERBYArray[EORDERBY];
}

static ezmax_api_definition__full_ezsigntemplatepublicGetListV1_eOrderBy_e ezsigntemplatepublicGetListV1_EORDERBY_FromString(char* EORDERBY){
    int stringToReturn = 0;
    char *EORDERBYArray[] =  { "NULL", "pkiEzsigntemplatepublicID_ASC", "pkiEzsigntemplatepublicID_DESC", "fkiEzsignfoldertypeID_ASC", "fkiEzsignfoldertypeID_DESC", "sEzsignfoldertypeNameX_ASC", "sEzsignfoldertypeNameX_DESC", "fkiUserlogintypeID_ASC", "fkiUserlogintypeID_DESC", "fkiEzsigntemplateID_ASC", "fkiEzsigntemplateID_DESC", "fkiEzsigntemplatepackageID_ASC", "fkiEzsigntemplatepackageID_DESC", "sEzsigntemplatepublicDescription_ASC", "sEzsigntemplatepublicDescription_DESC", "bEzsigntemplatepublicIsactive_ASC", "bEzsigntemplatepublicIsactive_DESC", "tEzsigntemplatepublicNote_ASC", "tEzsigntemplatepublicNote_DESC", "eEzsigntemplatepublicLimittype_ASC", "eEzsigntemplatepublicLimittype_DESC", "iEzsigntemplatepublicLimit_ASC", "iEzsigntemplatepublicLimit_DESC", "iEzsigntemplatepublicLimitexceeded_ASC", "iEzsigntemplatepublicLimitexceeded_DESC", "dtEzsigntemplatepublicLimitexceededsince_ASC", "dtEzsigntemplatepublicLimitexceededsince_DESC", "iEzsignfolder_ASC", "iEzsignfolder_DESC", "iEzsigndocument_ASC", "iEzsigndocument_DESC", "sEzsigntemplatepublicEzsigntemplatedescription_ASC", "sEzsigntemplatepublicEzsigntemplatedescription_DESC" };
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
// Function ezsigntemplatepublicGetListV1_EORDERBY_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *ezsigntemplatepublicGetListV1_EORDERBY_convertToJSON(ezmax_api_definition__full_ezsigntemplatepublicGetListV1_eOrderBy_e EORDERBY) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "eOrderBy", ezsigntemplatepublicGetListV1_EORDERBY_ToString(EORDERBY)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function ezsigntemplatepublicGetListV1_EORDERBY_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_ezsigntemplatepublicGetListV1_eOrderBy_e ezsigntemplatepublicGetListV1_EORDERBY_parseFromJSON(cJSON* EORDERBYJSON) {
    ezmax_api_definition__full_ezsigntemplatepublicGetListV1_eOrderBy_e EORDERBYVariable = 0;
    cJSON *EORDERBYVar = cJSON_GetObjectItemCaseSensitive(EORDERBYJSON, "eOrderBy");
    if(!cJSON_IsString(EORDERBYVar) || (EORDERBYVar->valuestring == NULL))
    {
        goto end;
    }
    EORDERBYVariable = ezsigntemplatepublicGetListV1_EORDERBY_FromString(EORDERBYVar->valuestring);
    return EORDERBYVariable;
end:
    return 0;
}
*/

// Functions for enum  for ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicGetListV1

static char* ezsigntemplatepublicGetListV1__ToString(ezmax_api_definition__full_ezsigntemplatepublicGetListV1_Accept-Language_e ){
    char *Array[] =  { "NULL", "*", "en", "fr" };
    return Array[];
}

static ezmax_api_definition__full_ezsigntemplatepublicGetListV1_Accept-Language_e ezsigntemplatepublicGetListV1__FromString(char* ){
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
// Function ezsigntemplatepublicGetListV1__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *ezsigntemplatepublicGetListV1__convertToJSON(ezmax_api_definition__full_ezsigntemplatepublicGetListV1_Accept-Language_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function ezsigntemplatepublicGetListV1__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_ezsigntemplatepublicGetListV1_Accept-Language_e ezsigntemplatepublicGetListV1__parseFromJSON(cJSON* JSON) {
    ezmax_api_definition__full_ezsigntemplatepublicGetListV1_Accept-Language_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/


// Create an Ezsignfolder
//
// Create an Ezsignfolder
//
ezsigntemplatepublic_create_ezsignfolder_v1_response_t*
ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicCreateEzsignfolderV1(apiClient_t *apiClient, ezsigntemplatepublic_create_ezsignfolder_v1_request_t *ezsigntemplatepublic_create_ezsignfolder_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsigntemplatepublic/createEzsignfolder");





    // Body Param
    cJSON *localVarSingleItemJSON_ezsigntemplatepublic_create_ezsignfolder_v1_request = NULL;
    if (ezsigntemplatepublic_create_ezsignfolder_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsigntemplatepublic_create_ezsignfolder_v1_request = ezsigntemplatepublic_create_ezsignfolder_v1_request_convertToJSON(ezsigntemplatepublic_create_ezsignfolder_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigntemplatepublic_create_ezsignfolder_v1_request);
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
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    ezsigntemplatepublic_create_ezsignfolder_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigntemplatepublicAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigntemplatepublic_create_ezsignfolder_v1_response_parseFromJSON(ObjectEzsigntemplatepublicAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigntemplatepublicAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_ezsigntemplatepublic_create_ezsignfolder_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigntemplatepublic_create_ezsignfolder_v1_request);
        localVarSingleItemJSON_ezsigntemplatepublic_create_ezsignfolder_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Create a new Ezsigntemplatepublic
//
// The endpoint allows to create one or many elements at once.
//
ezsigntemplatepublic_create_object_v1_response_t*
ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicCreateObjectV1(apiClient_t *apiClient, ezsigntemplatepublic_create_object_v1_request_t *ezsigntemplatepublic_create_object_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsigntemplatepublic");





    // Body Param
    cJSON *localVarSingleItemJSON_ezsigntemplatepublic_create_object_v1_request = NULL;
    if (ezsigntemplatepublic_create_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsigntemplatepublic_create_object_v1_request = ezsigntemplatepublic_create_object_v1_request_convertToJSON(ezsigntemplatepublic_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigntemplatepublic_create_object_v1_request);
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
    ezsigntemplatepublic_create_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigntemplatepublicAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigntemplatepublic_create_object_v1_response_parseFromJSON(ObjectEzsigntemplatepublicAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigntemplatepublicAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_ezsigntemplatepublic_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigntemplatepublic_create_object_v1_request);
        localVarSingleItemJSON_ezsigntemplatepublic_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an existing Ezsigntemplatepublic
//
// 
//
ezsigntemplatepublic_delete_object_v1_response_t*
ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplatepublicID)
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
    char *localVarPath = strdup("/1/object/ezsigntemplatepublic/{pkiEzsigntemplatepublicID}");



    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatepublicID =  + sizeof("{ pkiEzsigntemplatepublicID }") - 1;
    if(pkiEzsigntemplatepublicID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatepublicID = malloc(sizeOfPathParams_pkiEzsigntemplatepublicID);
    snprintf(localVarToReplace_pkiEzsigntemplatepublicID, sizeOfPathParams_pkiEzsigntemplatepublicID, "{%s}", "pkiEzsigntemplatepublicID");

    char localVarBuff_pkiEzsigntemplatepublicID[256];
    snprintf(localVarBuff_pkiEzsigntemplatepublicID, sizeof localVarBuff_pkiEzsigntemplatepublicID, "%ld", (long)*pkiEzsigntemplatepublicID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplatepublicID, localVarBuff_pkiEzsigntemplatepublicID);



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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    ezsigntemplatepublic_delete_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigntemplatepublicAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigntemplatepublic_delete_object_v1_response_parseFromJSON(ObjectEzsigntemplatepublicAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigntemplatepublicAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatepublicID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Edit an existing Ezsigntemplatepublic
//
// 
//
ezsigntemplatepublic_edit_object_v1_response_t*
ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicEditObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplatepublicID, ezsigntemplatepublic_edit_object_v1_request_t *ezsigntemplatepublic_edit_object_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsigntemplatepublic/{pkiEzsigntemplatepublicID}");



    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatepublicID =  + sizeof("{ pkiEzsigntemplatepublicID }") - 1;
    if(pkiEzsigntemplatepublicID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatepublicID = malloc(sizeOfPathParams_pkiEzsigntemplatepublicID);
    snprintf(localVarToReplace_pkiEzsigntemplatepublicID, sizeOfPathParams_pkiEzsigntemplatepublicID, "{%s}", "pkiEzsigntemplatepublicID");

    char localVarBuff_pkiEzsigntemplatepublicID[256];
    snprintf(localVarBuff_pkiEzsigntemplatepublicID, sizeof localVarBuff_pkiEzsigntemplatepublicID, "%ld", (long)*pkiEzsigntemplatepublicID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplatepublicID, localVarBuff_pkiEzsigntemplatepublicID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigntemplatepublic_edit_object_v1_request = NULL;
    if (ezsigntemplatepublic_edit_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsigntemplatepublic_edit_object_v1_request = ezsigntemplatepublic_edit_object_v1_request_convertToJSON(ezsigntemplatepublic_edit_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigntemplatepublic_edit_object_v1_request);
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
    ezsigntemplatepublic_edit_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigntemplatepublicAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigntemplatepublic_edit_object_v1_response_parseFromJSON(ObjectEzsigntemplatepublicAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigntemplatepublicAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatepublicID);
    if (localVarSingleItemJSON_ezsigntemplatepublic_edit_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigntemplatepublic_edit_object_v1_request);
        localVarSingleItemJSON_ezsigntemplatepublic_edit_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve the Ezsigntemplatepublic details
//
// Retrieve the Ezsigntemplatepublic details
//
ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_t*
ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicGetEzsigntemplatepublicDetailsV1(apiClient_t *apiClient, ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_t *ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsigntemplatepublic/getEzsigntemplatepublicDetails");





    // Body Param
    cJSON *localVarSingleItemJSON_ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request = NULL;
    if (ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request = ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_convertToJSON(ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request);
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
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigntemplatepublicAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_parseFromJSON(ObjectEzsigntemplatepublicAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigntemplatepublicAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request);
        localVarSingleItemJSON_ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsigntemplatepublic's forms data
//
// 
//
ezsigntemplatepublic_get_forms_data_v1_response_t*
ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicGetFormsDataV1(apiClient_t *apiClient, int *pkiEzsigntemplatepublicID)
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
    char *localVarPath = strdup("/1/object/ezsigntemplatepublic/{pkiEzsigntemplatepublicID}/getFormsData");



    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatepublicID =  + sizeof("{ pkiEzsigntemplatepublicID }") - 1;
    if(pkiEzsigntemplatepublicID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatepublicID = malloc(sizeOfPathParams_pkiEzsigntemplatepublicID);
    snprintf(localVarToReplace_pkiEzsigntemplatepublicID, sizeOfPathParams_pkiEzsigntemplatepublicID, "{%s}", "pkiEzsigntemplatepublicID");

    char localVarBuff_pkiEzsigntemplatepublicID[256];
    snprintf(localVarBuff_pkiEzsigntemplatepublicID, sizeof localVarBuff_pkiEzsigntemplatepublicID, "%ld", (long)*pkiEzsigntemplatepublicID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplatepublicID, localVarBuff_pkiEzsigntemplatepublicID);



    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/zip"); //produces
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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 406) {
    //    printf("%s\n","The URL is valid, but one of the Accept header is not defined or invalid. For example, you set the header \&quot;Accept: application/json\&quot; but the function can only return \&quot;Content-type: image/png\&quot;");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    ezsigntemplatepublic_get_forms_data_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigntemplatepublicAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigntemplatepublic_get_forms_data_v1_response_parseFromJSON(ObjectEzsigntemplatepublicAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigntemplatepublicAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatepublicID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Ezsigntemplatepublic list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eEzsigntemplatepublicLimittype | Hour<br>Day<br>Month<br>Total |
//
ezsigntemplatepublic_get_list_v1_response_t*
ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_ezsigntemplatepublicGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter)
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
    char *localVarPath = strdup("/1/object/ezsigntemplatepublic/getList");





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
    ezmax_api_definition__full_ezsigntemplatepublicGetListV1_eOrderBy_e valueQuery_eOrderBy ;
    keyValuePair_t *keyPairQuery_eOrderBy = 0;
    if (eOrderBy)
    {
        keyQuery_eOrderBy = strdup("eOrderBy");
        valueQuery_eOrderBy = (eOrderBy);
        keyPairQuery_eOrderBy = keyValuePair_create(keyQuery_eOrderBy, strdup(ezsigntemplatepublicGetListV1_EORDERBY_ToString(
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
    ezsigntemplatepublic_get_list_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigntemplatepublicAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigntemplatepublic_get_list_v1_response_parseFromJSON(ObjectEzsigntemplatepublicAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigntemplatepublicAPIlocalVarJSON);
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

// Retrieve an existing Ezsigntemplatepublic
//
// 
//
ezsigntemplatepublic_get_object_v2_response_t*
ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicGetObjectV2(apiClient_t *apiClient, int *pkiEzsigntemplatepublicID)
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
    char *localVarPath = strdup("/2/object/ezsigntemplatepublic/{pkiEzsigntemplatepublicID}");



    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatepublicID =  + sizeof("{ pkiEzsigntemplatepublicID }") - 1;
    if(pkiEzsigntemplatepublicID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatepublicID = malloc(sizeOfPathParams_pkiEzsigntemplatepublicID);
    snprintf(localVarToReplace_pkiEzsigntemplatepublicID, sizeOfPathParams_pkiEzsigntemplatepublicID, "{%s}", "pkiEzsigntemplatepublicID");

    char localVarBuff_pkiEzsigntemplatepublicID[256];
    snprintf(localVarBuff_pkiEzsigntemplatepublicID, sizeof localVarBuff_pkiEzsigntemplatepublicID, "%ld", (long)*pkiEzsigntemplatepublicID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplatepublicID, localVarBuff_pkiEzsigntemplatepublicID);



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
    ezsigntemplatepublic_get_object_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigntemplatepublicAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigntemplatepublic_get_object_v2_response_parseFromJSON(ObjectEzsigntemplatepublicAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigntemplatepublicAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatepublicID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Reset the limit exceeded counter
//
// 
//
ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_t*
ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicResetLimitExceededCounterV1(apiClient_t *apiClient, int *pkiEzsigntemplatepublicID, object_t *body)
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
    char *localVarPath = strdup("/1/object/ezsigntemplatepublic/{pkiEzsigntemplatepublicID}/resetLimitExceededCounter");



    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatepublicID =  + sizeof("{ pkiEzsigntemplatepublicID }") - 1;
    if(pkiEzsigntemplatepublicID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatepublicID = malloc(sizeOfPathParams_pkiEzsigntemplatepublicID);
    snprintf(localVarToReplace_pkiEzsigntemplatepublicID, sizeOfPathParams_pkiEzsigntemplatepublicID, "{%s}", "pkiEzsigntemplatepublicID");

    char localVarBuff_pkiEzsigntemplatepublicID[256];
    snprintf(localVarBuff_pkiEzsigntemplatepublicID, sizeof localVarBuff_pkiEzsigntemplatepublicID, "%ld", (long)*pkiEzsigntemplatepublicID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplatepublicID, localVarBuff_pkiEzsigntemplatepublicID);




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
    //nonprimitive not container
    ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigntemplatepublicAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_parseFromJSON(ObjectEzsigntemplatepublicAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigntemplatepublicAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatepublicID);
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

// Reset the Ezsigntemplatepublic url
//
// 
//
ezsigntemplatepublic_reset_url_v1_response_t*
ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicResetUrlV1(apiClient_t *apiClient, int *pkiEzsigntemplatepublicID, object_t *body)
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
    char *localVarPath = strdup("/1/object/ezsigntemplatepublic/{pkiEzsigntemplatepublicID}/resetUrl");



    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatepublicID =  + sizeof("{ pkiEzsigntemplatepublicID }") - 1;
    if(pkiEzsigntemplatepublicID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatepublicID = malloc(sizeOfPathParams_pkiEzsigntemplatepublicID);
    snprintf(localVarToReplace_pkiEzsigntemplatepublicID, sizeOfPathParams_pkiEzsigntemplatepublicID, "{%s}", "pkiEzsigntemplatepublicID");

    char localVarBuff_pkiEzsigntemplatepublicID[256];
    snprintf(localVarBuff_pkiEzsigntemplatepublicID, sizeof localVarBuff_pkiEzsigntemplatepublicID, "%ld", (long)*pkiEzsigntemplatepublicID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplatepublicID, localVarBuff_pkiEzsigntemplatepublicID);




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
    //nonprimitive not container
    ezsigntemplatepublic_reset_url_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigntemplatepublicAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigntemplatepublic_reset_url_v1_response_parseFromJSON(ObjectEzsigntemplatepublicAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigntemplatepublicAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatepublicID);
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

