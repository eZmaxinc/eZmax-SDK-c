#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzsignbulksendAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)

// Functions for enum EORDERBY for ObjectEzsignbulksendAPI_ezsignbulksendGetListV1

static char* ezsignbulksendGetListV1_EORDERBY_ToString(ezmax_api_definition_ezsignbulksendGetListV1_eOrderBy_e EORDERBY){
    char *EORDERBYArray[] =  { "NULL", "pkiEzsignbulksendID_ASC", "pkiEzsignbulksendID_DESC", "fkiEzsignfoldertypeID_ASC", "fkiEzsignfoldertypeID_DESC", "sEzsignbulksendDescription_ASC", "sEzsignbulksendDescription_DESC", "sEzsignfoldertypeNameX_ASC", "sEzsignfoldertypeNameX_DESC", "eEzsignfoldertypePrivacylevel_ASC", "eEzsignfoldertypePrivacylevel_DESC", "bEzsignbulksendIsactive_ASC", "bEzsignbulksendIsactive_DESC", "iEzsignbulksendtransmission_ASC", "iEzsignbulksendtransmission_DESC", "iEzsignfolder_ASC", "iEzsignfolder_DESC", "iEzsigndocument_ASC", "iEzsigndocument_DESC", "iEzsignsignature_ASC", "iEzsignsignature_DESC", "iEzsignsignatureSigned_ASC", "iEzsignsignatureSigned_DESC" };
    return EORDERBYArray[EORDERBY];
}

static ezmax_api_definition_ezsignbulksendGetListV1_eOrderBy_e ezsignbulksendGetListV1_EORDERBY_FromString(char* EORDERBY){
    int stringToReturn = 0;
    char *EORDERBYArray[] =  { "NULL", "pkiEzsignbulksendID_ASC", "pkiEzsignbulksendID_DESC", "fkiEzsignfoldertypeID_ASC", "fkiEzsignfoldertypeID_DESC", "sEzsignbulksendDescription_ASC", "sEzsignbulksendDescription_DESC", "sEzsignfoldertypeNameX_ASC", "sEzsignfoldertypeNameX_DESC", "eEzsignfoldertypePrivacylevel_ASC", "eEzsignfoldertypePrivacylevel_DESC", "bEzsignbulksendIsactive_ASC", "bEzsignbulksendIsactive_DESC", "iEzsignbulksendtransmission_ASC", "iEzsignbulksendtransmission_DESC", "iEzsignfolder_ASC", "iEzsignfolder_DESC", "iEzsigndocument_ASC", "iEzsigndocument_DESC", "iEzsignsignature_ASC", "iEzsignsignature_DESC", "iEzsignsignatureSigned_ASC", "iEzsignsignatureSigned_DESC" };
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
// Function ezsignbulksendGetListV1_EORDERBY_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *ezsignbulksendGetListV1_EORDERBY_convertToJSON(ezmax_api_definition_ezsignbulksendGetListV1_eOrderBy_e EORDERBY) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "eOrderBy", ezsignbulksendGetListV1_EORDERBY_ToString(EORDERBY)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function ezsignbulksendGetListV1_EORDERBY_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition_ezsignbulksendGetListV1_eOrderBy_e ezsignbulksendGetListV1_EORDERBY_parseFromJSON(cJSON* EORDERBYJSON) {
    ezmax_api_definition_ezsignbulksendGetListV1_eOrderBy_e EORDERBYVariable = 0;
    cJSON *EORDERBYVar = cJSON_GetObjectItemCaseSensitive(EORDERBYJSON, "eOrderBy");
    if(!cJSON_IsString(EORDERBYVar) || (EORDERBYVar->valuestring == NULL))
    {
        goto end;
    }
    EORDERBYVariable = ezsignbulksendGetListV1_EORDERBY_FromString(EORDERBYVar->valuestring);
    return EORDERBYVariable;
end:
    return 0;
}
*/

// Functions for enum  for ObjectEzsignbulksendAPI_ezsignbulksendGetListV1

static char* ezsignbulksendGetListV1__ToString(ezmax_api_definition_ezsignbulksendGetListV1_Accept-Language_e ){
    char *Array[] =  { "NULL", "*", "en", "fr" };
    return Array[];
}

static ezmax_api_definition_ezsignbulksendGetListV1_Accept-Language_e ezsignbulksendGetListV1__FromString(char* ){
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
// Function ezsignbulksendGetListV1__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *ezsignbulksendGetListV1__convertToJSON(ezmax_api_definition_ezsignbulksendGetListV1_Accept-Language_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function ezsignbulksendGetListV1__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition_ezsignbulksendGetListV1_Accept-Language_e ezsignbulksendGetListV1__parseFromJSON(cJSON* JSON) {
    ezmax_api_definition_ezsignbulksendGetListV1_Accept-Language_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/


// Retrieve an existing Ezsignbulksend's Ezsignbulksendtransmissions
//
// 
//
ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_t*
ObjectEzsignbulksendAPI_ezsignbulksendGetEzsignbulksendtransmissionsV1(apiClient_t *apiClient, int pkiEzsignbulksendID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignbulksend/{pkiEzsignbulksendID}/getEzsignbulksendtransmissions")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignbulksend/{pkiEzsignbulksendID}/getEzsignbulksendtransmissions");


    // Path Params
    long sizeOfPathParams_pkiEzsignbulksendID =  + strlen("{ pkiEzsignbulksendID }");
    if(pkiEzsignbulksendID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignbulksendID = malloc(sizeOfPathParams_pkiEzsignbulksendID);
    snprintf(localVarToReplace_pkiEzsignbulksendID, sizeOfPathParams_pkiEzsignbulksendID, "{%s}", "pkiEzsignbulksendID");

    char localVarBuff_pkiEzsignbulksendID[256];
    intToStr(localVarBuff_pkiEzsignbulksendID, pkiEzsignbulksendID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignbulksendID, localVarBuff_pkiEzsignbulksendID);



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
    cJSON *ObjectEzsignbulksendAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_t *elementToReturn = ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_parseFromJSON(ObjectEzsignbulksendAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignbulksendAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignbulksendID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Ezsignbulksend list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eEzsignfoldertypePrivacylevel | User<br>Usergroup |
//
ezsignbulksend_get_list_v1_response_t*
ObjectEzsignbulksendAPI_ezsignbulksendGetListV1(apiClient_t *apiClient, ezmax_api_definition_ezsignbulksendGetListV1_eOrderBy_e eOrderBy , int iRowMax , int iRowOffset , header_accept_language_e Accept_Language , char * sFilter )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignbulksend/getList")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignbulksend/getList");




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
    ezmax_api_definition_ezsignbulksendGetListV1_eOrderBy_e valueQuery_eOrderBy ;
    keyValuePair_t *keyPairQuery_eOrderBy = 0;
    if (eOrderBy)
    {
        keyQuery_eOrderBy = strdup("eOrderBy");
        valueQuery_eOrderBy = (eOrderBy);
        keyPairQuery_eOrderBy = keyValuePair_create(keyQuery_eOrderBy, (void *)strdup(ezsignbulksendGetListV1_EORDERBY_ToString(
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
        snprintf(valueQuery_iRowMax, MAX_NUMBER_LENGTH, "%d", iRowMax);
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

    if (apiClient->response_code == 200) {
        printf("%s\n","Successful response");
    }
    if (apiClient->response_code == 406) {
        printf("%s\n","One of the accept header is not defined or invalid.");
    }
    //nonprimitive not container
    cJSON *ObjectEzsignbulksendAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignbulksend_get_list_v1_response_t *elementToReturn = ezsignbulksend_get_list_v1_response_parseFromJSON(ObjectEzsignbulksendAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignbulksendAPIlocalVarJSON);
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

// Retrieve an existing Ezsignbulksend
//
// 
//
ezsignbulksend_get_object_v1_response_t*
ObjectEzsignbulksendAPI_ezsignbulksendGetObjectV1(apiClient_t *apiClient, int pkiEzsignbulksendID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignbulksend/{pkiEzsignbulksendID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignbulksend/{pkiEzsignbulksendID}");


    // Path Params
    long sizeOfPathParams_pkiEzsignbulksendID =  + strlen("{ pkiEzsignbulksendID }");
    if(pkiEzsignbulksendID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignbulksendID = malloc(sizeOfPathParams_pkiEzsignbulksendID);
    snprintf(localVarToReplace_pkiEzsignbulksendID, sizeOfPathParams_pkiEzsignbulksendID, "{%s}", "pkiEzsignbulksendID");

    char localVarBuff_pkiEzsignbulksendID[256];
    intToStr(localVarBuff_pkiEzsignbulksendID, pkiEzsignbulksendID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignbulksendID, localVarBuff_pkiEzsignbulksendID);



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
    cJSON *ObjectEzsignbulksendAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignbulksend_get_object_v1_response_t *elementToReturn = ezsignbulksend_get_object_v1_response_parseFromJSON(ObjectEzsignbulksendAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignbulksendAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignbulksendID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

