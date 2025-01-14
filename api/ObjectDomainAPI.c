#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectDomainAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)

// Functions for enum EORDERBY for ObjectDomainAPI_domainGetListV1

static char* domainGetListV1_EORDERBY_ToString(ezmax_api_definition__full_domainGetListV1_eOrderBy_e EORDERBY){
    char *EORDERBYArray[] =  { "NULL", "pkiDomainID_ASC", "pkiDomainID_DESC", "sDomainName_ASC", "sDomainName_DESC" };
    return EORDERBYArray[EORDERBY];
}

static ezmax_api_definition__full_domainGetListV1_eOrderBy_e domainGetListV1_EORDERBY_FromString(char* EORDERBY){
    int stringToReturn = 0;
    char *EORDERBYArray[] =  { "NULL", "pkiDomainID_ASC", "pkiDomainID_DESC", "sDomainName_ASC", "sDomainName_DESC" };
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
// Function domainGetListV1_EORDERBY_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *domainGetListV1_EORDERBY_convertToJSON(ezmax_api_definition__full_domainGetListV1_eOrderBy_e EORDERBY) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "eOrderBy", domainGetListV1_EORDERBY_ToString(EORDERBY)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function domainGetListV1_EORDERBY_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_domainGetListV1_eOrderBy_e domainGetListV1_EORDERBY_parseFromJSON(cJSON* EORDERBYJSON) {
    ezmax_api_definition__full_domainGetListV1_eOrderBy_e EORDERBYVariable = 0;
    cJSON *EORDERBYVar = cJSON_GetObjectItemCaseSensitive(EORDERBYJSON, "eOrderBy");
    if(!cJSON_IsString(EORDERBYVar) || (EORDERBYVar->valuestring == NULL))
    {
        goto end;
    }
    EORDERBYVariable = domainGetListV1_EORDERBY_FromString(EORDERBYVar->valuestring);
    return EORDERBYVariable;
end:
    return 0;
}
*/

// Functions for enum  for ObjectDomainAPI_domainGetListV1

static char* domainGetListV1__ToString(ezmax_api_definition__full_domainGetListV1_Accept-Language_e ){
    char *Array[] =  { "NULL", "*", "en", "fr" };
    return Array[];
}

static ezmax_api_definition__full_domainGetListV1_Accept-Language_e domainGetListV1__FromString(char* ){
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
// Function domainGetListV1__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *domainGetListV1__convertToJSON(ezmax_api_definition__full_domainGetListV1_Accept-Language_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function domainGetListV1__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_domainGetListV1_Accept-Language_e domainGetListV1__parseFromJSON(cJSON* JSON) {
    ezmax_api_definition__full_domainGetListV1_Accept-Language_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/


// Create a new Domain
//
// The endpoint allows to create one or many elements at once.
//
domain_create_object_v1_response_t*
ObjectDomainAPI_domainCreateObjectV1(apiClient_t *apiClient, domain_create_object_v1_request_t *domain_create_object_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/domain")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/domain");




    // Body Param
    cJSON *localVarSingleItemJSON_domain_create_object_v1_request = NULL;
    if (domain_create_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_domain_create_object_v1_request = domain_create_object_v1_request_convertToJSON(domain_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_domain_create_object_v1_request);
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
    cJSON *ObjectDomainAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    domain_create_object_v1_response_t *elementToReturn = domain_create_object_v1_response_parseFromJSON(ObjectDomainAPIlocalVarJSON);
    cJSON_Delete(ObjectDomainAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_domain_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_domain_create_object_v1_request);
        localVarSingleItemJSON_domain_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an existing Domain
//
// 
//
domain_delete_object_v1_response_t*
ObjectDomainAPI_domainDeleteObjectV1(apiClient_t *apiClient, int *pkiDomainID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/domain/{pkiDomainID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/domain/{pkiDomainID}");


    // Path Params
    long sizeOfPathParams_pkiDomainID =  + strlen("{ pkiDomainID }");
    if(pkiDomainID == 0){
        goto end;
    }
    char* localVarToReplace_pkiDomainID = malloc(sizeOfPathParams_pkiDomainID);
    snprintf(localVarToReplace_pkiDomainID, sizeOfPathParams_pkiDomainID, "{%s}", "pkiDomainID");

    char localVarBuff_pkiDomainID[256];
    intToStr(localVarBuff_pkiDomainID, *pkiDomainID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiDomainID, localVarBuff_pkiDomainID);



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    cJSON *ObjectDomainAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    domain_delete_object_v1_response_t *elementToReturn = domain_delete_object_v1_response_parseFromJSON(ObjectDomainAPIlocalVarJSON);
    cJSON_Delete(ObjectDomainAPIlocalVarJSON);
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
    free(localVarToReplace_pkiDomainID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Domain list
//
// 
//
domain_get_list_v1_response_t*
ObjectDomainAPI_domainGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_domainGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/domain/getList")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/domain/getList");




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
    ezmax_api_definition__full_domainGetListV1_eOrderBy_e valueQuery_eOrderBy ;
    keyValuePair_t *keyPairQuery_eOrderBy = 0;
    if (eOrderBy)
    {
        keyQuery_eOrderBy = strdup("eOrderBy");
        valueQuery_eOrderBy = (eOrderBy);
        keyPairQuery_eOrderBy = keyValuePair_create(keyQuery_eOrderBy, (void *)strdup(domainGetListV1_EORDERBY_ToString(
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
    cJSON *ObjectDomainAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    domain_get_list_v1_response_t *elementToReturn = domain_get_list_v1_response_parseFromJSON(ObjectDomainAPIlocalVarJSON);
    cJSON_Delete(ObjectDomainAPIlocalVarJSON);
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

// Retrieve an existing Domain
//
// 
//
domain_get_object_v2_response_t*
ObjectDomainAPI_domainGetObjectV2(apiClient_t *apiClient, int *pkiDomainID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/2/object/domain/{pkiDomainID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/2/object/domain/{pkiDomainID}");


    // Path Params
    long sizeOfPathParams_pkiDomainID =  + strlen("{ pkiDomainID }");
    if(pkiDomainID == 0){
        goto end;
    }
    char* localVarToReplace_pkiDomainID = malloc(sizeOfPathParams_pkiDomainID);
    snprintf(localVarToReplace_pkiDomainID, sizeOfPathParams_pkiDomainID, "{%s}", "pkiDomainID");

    char localVarBuff_pkiDomainID[256];
    intToStr(localVarBuff_pkiDomainID, *pkiDomainID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiDomainID, localVarBuff_pkiDomainID);



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
    cJSON *ObjectDomainAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    domain_get_object_v2_response_t *elementToReturn = domain_get_object_v2_response_parseFromJSON(ObjectDomainAPIlocalVarJSON);
    cJSON_Delete(ObjectDomainAPIlocalVarJSON);
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
    free(localVarToReplace_pkiDomainID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

