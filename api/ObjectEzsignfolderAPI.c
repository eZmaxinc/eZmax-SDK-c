#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzsignfolderAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)

// Functions for enum EORDERBY for ObjectEzsignfolderAPI_ezsignfolderGetListV1

static char* ezsignfolderGetListV1_EORDERBY_ToString(ezmax_api_definition__full_ezsignfolderGetListV1_eOrderBy_e EORDERBY){
    char *EORDERBYArray[] =  { "NULL", "pkiEzsignfolderID_ASC", "pkiEzsignfolderID_DESC", "sEzsignfolderDescription_ASC", "sEzsignfolderDescription_DESC", "dtCreatedDate_ASC", "dtCreatedDate_DESC", "fkiEzsignfoldertypeID_ASC", "fkiEzsignfoldertypeID_DESC", "sEzsignfoldertypeNameX_ASC", "sEzsignfoldertypeNameX_DESC", "eEzsignfolderStep_ASC", "eEzsignfolderStep_DESC", "dtEzsignfolderSentdate_ASC", "dtEzsignfolderSentdate_DESC", "dtEzsignfolderDuedate_ASC", "dtEzsignfolderDuedate_DESC", "iEzsigndocument_ASC", "iEzsigndocument_DESC", "iEzsigndocumentEdm_ASC", "iEzsigndocumentEdm_DESC", "iEzsignsignature_ASC", "iEzsignsignature_DESC", "iEzsignsignatureSigned_ASC", "iEzsignsignatureSigned_DESC", "iEzsignformfieldgroup_ASC", "iEzsignformfieldgroup_DESC", "iEzsignformfieldgroupCompleted_ASC", "iEzsignformfieldgroupCompleted_DESC", "dEzsignfolderCompletedpercentage_ASC", "dEzsignfolderCompletedpercentage_DESC", "dEzsignfolderFormcompletedpercentage_ASC", "dEzsignfolderFormcompletedpercentage_DESC", "dEzsignfolderSignaturecompletedpercentage_ASC", "dEzsignfolderSignaturecompletedpercentagee_DESC" };
    return EORDERBYArray[EORDERBY];
}

static ezmax_api_definition__full_ezsignfolderGetListV1_eOrderBy_e ezsignfolderGetListV1_EORDERBY_FromString(char* EORDERBY){
    int stringToReturn = 0;
    char *EORDERBYArray[] =  { "NULL", "pkiEzsignfolderID_ASC", "pkiEzsignfolderID_DESC", "sEzsignfolderDescription_ASC", "sEzsignfolderDescription_DESC", "dtCreatedDate_ASC", "dtCreatedDate_DESC", "fkiEzsignfoldertypeID_ASC", "fkiEzsignfoldertypeID_DESC", "sEzsignfoldertypeNameX_ASC", "sEzsignfoldertypeNameX_DESC", "eEzsignfolderStep_ASC", "eEzsignfolderStep_DESC", "dtEzsignfolderSentdate_ASC", "dtEzsignfolderSentdate_DESC", "dtEzsignfolderDuedate_ASC", "dtEzsignfolderDuedate_DESC", "iEzsigndocument_ASC", "iEzsigndocument_DESC", "iEzsigndocumentEdm_ASC", "iEzsigndocumentEdm_DESC", "iEzsignsignature_ASC", "iEzsignsignature_DESC", "iEzsignsignatureSigned_ASC", "iEzsignsignatureSigned_DESC", "iEzsignformfieldgroup_ASC", "iEzsignformfieldgroup_DESC", "iEzsignformfieldgroupCompleted_ASC", "iEzsignformfieldgroupCompleted_DESC", "dEzsignfolderCompletedpercentage_ASC", "dEzsignfolderCompletedpercentage_DESC", "dEzsignfolderFormcompletedpercentage_ASC", "dEzsignfolderFormcompletedpercentage_DESC", "dEzsignfolderSignaturecompletedpercentage_ASC", "dEzsignfolderSignaturecompletedpercentagee_DESC" };
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
// Function ezsignfolderGetListV1_EORDERBY_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *ezsignfolderGetListV1_EORDERBY_convertToJSON(ezmax_api_definition__full_ezsignfolderGetListV1_eOrderBy_e EORDERBY) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "eOrderBy", ezsignfolderGetListV1_EORDERBY_ToString(EORDERBY)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function ezsignfolderGetListV1_EORDERBY_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_ezsignfolderGetListV1_eOrderBy_e ezsignfolderGetListV1_EORDERBY_parseFromJSON(cJSON* EORDERBYJSON) {
    ezmax_api_definition__full_ezsignfolderGetListV1_eOrderBy_e EORDERBYVariable = 0;
    cJSON *EORDERBYVar = cJSON_GetObjectItemCaseSensitive(EORDERBYJSON, "eOrderBy");
    if(!cJSON_IsString(EORDERBYVar) || (EORDERBYVar->valuestring == NULL))
    {
        goto end;
    }
    EORDERBYVariable = ezsignfolderGetListV1_EORDERBY_FromString(EORDERBYVar->valuestring);
    return EORDERBYVariable;
end:
    return 0;
}
*/

// Functions for enum  for ObjectEzsignfolderAPI_ezsignfolderGetListV1

static char* ezsignfolderGetListV1__ToString(ezmax_api_definition__full_ezsignfolderGetListV1_Accept-Language_e ){
    char *Array[] =  { "NULL", "*", "en", "fr" };
    return Array[];
}

static ezmax_api_definition__full_ezsignfolderGetListV1_Accept-Language_e ezsignfolderGetListV1__FromString(char* ){
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
// Function ezsignfolderGetListV1__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *ezsignfolderGetListV1__convertToJSON(ezmax_api_definition__full_ezsignfolderGetListV1_Accept-Language_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function ezsignfolderGetListV1__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_ezsignfolderGetListV1_Accept-Language_e ezsignfolderGetListV1__parseFromJSON(cJSON* JSON) {
    ezmax_api_definition__full_ezsignfolderGetListV1_Accept-Language_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/


// Archive the Ezsignfolder
//
// 
//
ezsignfolder_archive_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderArchiveV1(apiClient_t *apiClient, int *pkiEzsignfolderID, object_t *body)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignfolder/{pkiEzsignfolderID}/archive")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignfolder/{pkiEzsignfolderID}/archive");


    // Path Params
    long sizeOfPathParams_pkiEzsignfolderID =  + strlen("{ pkiEzsignfolderID }");
    if(pkiEzsignfolderID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfolderID = malloc(sizeOfPathParams_pkiEzsignfolderID);
    snprintf(localVarToReplace_pkiEzsignfolderID, sizeOfPathParams_pkiEzsignfolderID, "{%s}", "pkiEzsignfolderID");

    char localVarBuff_pkiEzsignfolderID[256];
    intToStr(localVarBuff_pkiEzsignfolderID, *pkiEzsignfolderID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfolderID, localVarBuff_pkiEzsignfolderID);




    // Body Param
    cJSON *localVarSingleItemJSON_body = NULL;
    if (body != NULL)
    {
        //string
        localVarSingleItemJSON_body = object_convertToJSON(body);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_body);
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
    cJSON *ObjectEzsignfolderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfolder_archive_v1_response_t *elementToReturn = ezsignfolder_archive_v1_response_parseFromJSON(ObjectEzsignfolderAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfolderAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfolderID);
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

// Download multiples files from an Ezsignfolder
//
binary_t**
ObjectEzsignfolderAPI_ezsignfolderBatchDownloadV1(apiClient_t *apiClient, int *pkiEzsignfolderID, ezsignfolder_batch_download_v1_request_t *ezsignfolder_batch_download_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignfolder/{pkiEzsignfolderID}/batchDownload")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignfolder/{pkiEzsignfolderID}/batchDownload");


    // Path Params
    long sizeOfPathParams_pkiEzsignfolderID =  + strlen("{ pkiEzsignfolderID }");
    if(pkiEzsignfolderID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfolderID = malloc(sizeOfPathParams_pkiEzsignfolderID);
    snprintf(localVarToReplace_pkiEzsignfolderID, sizeOfPathParams_pkiEzsignfolderID, "{%s}", "pkiEzsignfolderID");

    char localVarBuff_pkiEzsignfolderID[256];
    intToStr(localVarBuff_pkiEzsignfolderID, *pkiEzsignfolderID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfolderID, localVarBuff_pkiEzsignfolderID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsignfolder_batch_download_v1_request = NULL;
    if (ezsignfolder_batch_download_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsignfolder_batch_download_v1_request = ezsignfolder_batch_download_v1_request_convertToJSON(ezsignfolder_batch_download_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignfolder_batch_download_v1_request);
    }
    list_addElement(localVarHeaderType,"application/zip"); //produces
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
    //primitive return type simple
    binary_t** elementToReturn =  strdup((binary_t**)apiClient->dataReceived);

    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_pkiEzsignfolderID);
    if (localVarSingleItemJSON_ezsignfolder_batch_download_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignfolder_batch_download_v1_request);
        localVarSingleItemJSON_ezsignfolder_batch_download_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Create a new Ezsignfolder
//
// The endpoint allows to create one or many elements at once.  The array can contain simple (Just the object) or compound (The object and its child) objects.  Creating compound elements allows to reduce the multiple requests to create all child objects.
//
ezsignfolder_create_object_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderCreateObjectV1(apiClient_t *apiClient, list_t *ezsignfolder_create_object_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignfolder")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignfolder");




    // Body Param
    //notstring
    cJSON *localVar_ezsignfolder_create_object_v1_request = NULL;
    cJSON *localVarItemJSON_ezsignfolder_create_object_v1_request = NULL;
    cJSON *localVarSingleItemJSON_ezsignfolder_create_object_v1_request = NULL;
    if (ezsignfolder_create_object_v1_request != NULL)
    {
        localVarItemJSON_ezsignfolder_create_object_v1_request = cJSON_CreateObject();
        localVarSingleItemJSON_ezsignfolder_create_object_v1_request = cJSON_AddArrayToObject(localVarItemJSON_ezsignfolder_create_object_v1_request, "ezsignfolder_create_object_v1_request");
        if (localVarSingleItemJSON_ezsignfolder_create_object_v1_request == NULL)
        {
            // nonprimitive container

            goto end;
        }
    }

    listEntry_t *ezsignfolder_create_object_v1_requestBodyListEntry;
    list_ForEach(ezsignfolder_create_object_v1_requestBodyListEntry, ezsignfolder_create_object_v1_request)
    {
        localVar_ezsignfolder_create_object_v1_request = ezsignfolder_create_object_v1_request_convertToJSON(ezsignfolder_create_object_v1_requestBodyListEntry->data);
        if(localVar_ezsignfolder_create_object_v1_request == NULL)
        {
            goto end;
        }
        cJSON_AddItemToArray(localVarSingleItemJSON_ezsignfolder_create_object_v1_request, localVar_ezsignfolder_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarItemJSON_ezsignfolder_create_object_v1_request);
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
    cJSON *ObjectEzsignfolderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfolder_create_object_v1_response_t *elementToReturn = ezsignfolder_create_object_v1_response_parseFromJSON(ObjectEzsignfolderAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfolderAPIlocalVarJSON);
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
    if (localVarItemJSON_ezsignfolder_create_object_v1_request) {
        cJSON_Delete(localVarItemJSON_ezsignfolder_create_object_v1_request);
        localVarItemJSON_ezsignfolder_create_object_v1_request = NULL;
    }
    if (localVarSingleItemJSON_ezsignfolder_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignfolder_create_object_v1_request);
        localVarSingleItemJSON_ezsignfolder_create_object_v1_request = NULL;
    }
    if (localVar_ezsignfolder_create_object_v1_request) {
        cJSON_Delete(localVar_ezsignfolder_create_object_v1_request);
        localVar_ezsignfolder_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Create a new Ezsignfolder
//
// The endpoint allows to create one or many elements at once.
//
ezsignfolder_create_object_v2_response_t*
ObjectEzsignfolderAPI_ezsignfolderCreateObjectV2(apiClient_t *apiClient, ezsignfolder_create_object_v2_request_t *ezsignfolder_create_object_v2_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/2/object/ezsignfolder")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/2/object/ezsignfolder");




    // Body Param
    cJSON *localVarSingleItemJSON_ezsignfolder_create_object_v2_request = NULL;
    if (ezsignfolder_create_object_v2_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsignfolder_create_object_v2_request = ezsignfolder_create_object_v2_request_convertToJSON(ezsignfolder_create_object_v2_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignfolder_create_object_v2_request);
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
    cJSON *ObjectEzsignfolderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfolder_create_object_v2_response_t *elementToReturn = ezsignfolder_create_object_v2_response_parseFromJSON(ObjectEzsignfolderAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfolderAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_ezsignfolder_create_object_v2_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignfolder_create_object_v2_request);
        localVarSingleItemJSON_ezsignfolder_create_object_v2_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Create a new Ezsignfolder
//
// The endpoint allows to create one or many elements at once.
//
ezsignfolder_create_object_v3_response_t*
ObjectEzsignfolderAPI_ezsignfolderCreateObjectV3(apiClient_t *apiClient, ezsignfolder_create_object_v3_request_t *ezsignfolder_create_object_v3_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/3/object/ezsignfolder")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/3/object/ezsignfolder");




    // Body Param
    cJSON *localVarSingleItemJSON_ezsignfolder_create_object_v3_request = NULL;
    if (ezsignfolder_create_object_v3_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsignfolder_create_object_v3_request = ezsignfolder_create_object_v3_request_convertToJSON(ezsignfolder_create_object_v3_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignfolder_create_object_v3_request);
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
    cJSON *ObjectEzsignfolderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfolder_create_object_v3_response_t *elementToReturn = ezsignfolder_create_object_v3_response_parseFromJSON(ObjectEzsignfolderAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfolderAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_ezsignfolder_create_object_v3_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignfolder_create_object_v3_request);
        localVarSingleItemJSON_ezsignfolder_create_object_v3_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an existing Ezsignfolder
//
ezsignfolder_delete_object_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsignfolderID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignfolder/{pkiEzsignfolderID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignfolder/{pkiEzsignfolderID}");


    // Path Params
    long sizeOfPathParams_pkiEzsignfolderID =  + strlen("{ pkiEzsignfolderID }");
    if(pkiEzsignfolderID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfolderID = malloc(sizeOfPathParams_pkiEzsignfolderID);
    snprintf(localVarToReplace_pkiEzsignfolderID, sizeOfPathParams_pkiEzsignfolderID, "{%s}", "pkiEzsignfolderID");

    char localVarBuff_pkiEzsignfolderID[256];
    intToStr(localVarBuff_pkiEzsignfolderID, *pkiEzsignfolderID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfolderID, localVarBuff_pkiEzsignfolderID);



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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    cJSON *ObjectEzsignfolderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfolder_delete_object_v1_response_t *elementToReturn = ezsignfolder_delete_object_v1_response_parseFromJSON(ObjectEzsignfolderAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfolderAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfolderID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Dispose Ezsignfolders
//
// 
//
ezsignfolder_dispose_ezsignfolders_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderDisposeEzsignfoldersV1(apiClient_t *apiClient, ezsignfolder_dispose_ezsignfolders_v1_request_t *ezsignfolder_dispose_ezsignfolders_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignfolder/disposeEzsignfolders")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignfolder/disposeEzsignfolders");




    // Body Param
    cJSON *localVarSingleItemJSON_ezsignfolder_dispose_ezsignfolders_v1_request = NULL;
    if (ezsignfolder_dispose_ezsignfolders_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsignfolder_dispose_ezsignfolders_v1_request = ezsignfolder_dispose_ezsignfolders_v1_request_convertToJSON(ezsignfolder_dispose_ezsignfolders_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignfolder_dispose_ezsignfolders_v1_request);
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
    cJSON *ObjectEzsignfolderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfolder_dispose_ezsignfolders_v1_response_t *elementToReturn = ezsignfolder_dispose_ezsignfolders_v1_response_parseFromJSON(ObjectEzsignfolderAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfolderAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_ezsignfolder_dispose_ezsignfolders_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignfolder_dispose_ezsignfolders_v1_request);
        localVarSingleItemJSON_ezsignfolder_dispose_ezsignfolders_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Dispose the Ezsignfolder
//
// 
//
ezsignfolder_dispose_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderDisposeV1(apiClient_t *apiClient, int *pkiEzsignfolderID, object_t *body)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignfolder/{pkiEzsignfolderID}/dispose")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignfolder/{pkiEzsignfolderID}/dispose");


    // Path Params
    long sizeOfPathParams_pkiEzsignfolderID =  + strlen("{ pkiEzsignfolderID }");
    if(pkiEzsignfolderID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfolderID = malloc(sizeOfPathParams_pkiEzsignfolderID);
    snprintf(localVarToReplace_pkiEzsignfolderID, sizeOfPathParams_pkiEzsignfolderID, "{%s}", "pkiEzsignfolderID");

    char localVarBuff_pkiEzsignfolderID[256];
    intToStr(localVarBuff_pkiEzsignfolderID, *pkiEzsignfolderID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfolderID, localVarBuff_pkiEzsignfolderID);




    // Body Param
    cJSON *localVarSingleItemJSON_body = NULL;
    if (body != NULL)
    {
        //string
        localVarSingleItemJSON_body = object_convertToJSON(body);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_body);
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
    cJSON *ObjectEzsignfolderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfolder_dispose_v1_response_t *elementToReturn = ezsignfolder_dispose_v1_response_parseFromJSON(ObjectEzsignfolderAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfolderAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfolderID);
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

// Edit an existing Ezsignfolder
//
// 
//
ezsignfolder_edit_object_v3_response_t*
ObjectEzsignfolderAPI_ezsignfolderEditObjectV3(apiClient_t *apiClient, int *pkiEzsignfolderID, ezsignfolder_edit_object_v3_request_t *ezsignfolder_edit_object_v3_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/3/object/ezsignfolder/{pkiEzsignfolderID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/3/object/ezsignfolder/{pkiEzsignfolderID}");


    // Path Params
    long sizeOfPathParams_pkiEzsignfolderID =  + strlen("{ pkiEzsignfolderID }");
    if(pkiEzsignfolderID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfolderID = malloc(sizeOfPathParams_pkiEzsignfolderID);
    snprintf(localVarToReplace_pkiEzsignfolderID, sizeOfPathParams_pkiEzsignfolderID, "{%s}", "pkiEzsignfolderID");

    char localVarBuff_pkiEzsignfolderID[256];
    intToStr(localVarBuff_pkiEzsignfolderID, *pkiEzsignfolderID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfolderID, localVarBuff_pkiEzsignfolderID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsignfolder_edit_object_v3_request = NULL;
    if (ezsignfolder_edit_object_v3_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsignfolder_edit_object_v3_request = ezsignfolder_edit_object_v3_request_convertToJSON(ezsignfolder_edit_object_v3_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignfolder_edit_object_v3_request);
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
    cJSON *ObjectEzsignfolderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfolder_edit_object_v3_response_t *elementToReturn = ezsignfolder_edit_object_v3_response_parseFromJSON(ObjectEzsignfolderAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfolderAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfolderID);
    if (localVarSingleItemJSON_ezsignfolder_edit_object_v3_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignfolder_edit_object_v3_request);
        localVarSingleItemJSON_ezsignfolder_edit_object_v3_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// End prematurely
//
// End prematurely all Ezsigndocument of Ezsignfolder when some signatures are still required
//
ezsignfolder_end_prematurely_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderEndPrematurelyV1(apiClient_t *apiClient, int *pkiEzsignfolderID, object_t *body)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignfolder/{pkiEzsignfolderID}/endPrematurely")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignfolder/{pkiEzsignfolderID}/endPrematurely");


    // Path Params
    long sizeOfPathParams_pkiEzsignfolderID =  + strlen("{ pkiEzsignfolderID }");
    if(pkiEzsignfolderID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfolderID = malloc(sizeOfPathParams_pkiEzsignfolderID);
    snprintf(localVarToReplace_pkiEzsignfolderID, sizeOfPathParams_pkiEzsignfolderID, "{%s}", "pkiEzsignfolderID");

    char localVarBuff_pkiEzsignfolderID[256];
    intToStr(localVarBuff_pkiEzsignfolderID, *pkiEzsignfolderID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfolderID, localVarBuff_pkiEzsignfolderID);




    // Body Param
    cJSON *localVarSingleItemJSON_body = NULL;
    if (body != NULL)
    {
        //string
        localVarSingleItemJSON_body = object_convertToJSON(body);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_body);
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
    cJSON *ObjectEzsignfolderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfolder_end_prematurely_v1_response_t *elementToReturn = ezsignfolder_end_prematurely_v1_response_parseFromJSON(ObjectEzsignfolderAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfolderAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfolderID);
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

// Retrieve actionable elements for the Ezsignfolder
//
// Return the Ezsignsignatures that can be signed and Ezsignformfieldgroups that can be filled by the current user at the current step in the process
//
ezsignfolder_get_actionable_elements_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderGetActionableElementsV1(apiClient_t *apiClient, int *pkiEzsignfolderID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignfolder/{pkiEzsignfolderID}/getActionableElements")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignfolder/{pkiEzsignfolderID}/getActionableElements");


    // Path Params
    long sizeOfPathParams_pkiEzsignfolderID =  + strlen("{ pkiEzsignfolderID }");
    if(pkiEzsignfolderID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfolderID = malloc(sizeOfPathParams_pkiEzsignfolderID);
    snprintf(localVarToReplace_pkiEzsignfolderID, sizeOfPathParams_pkiEzsignfolderID, "{%s}", "pkiEzsignfolderID");

    char localVarBuff_pkiEzsignfolderID[256];
    intToStr(localVarBuff_pkiEzsignfolderID, *pkiEzsignfolderID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfolderID, localVarBuff_pkiEzsignfolderID);



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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    cJSON *ObjectEzsignfolderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfolder_get_actionable_elements_v1_response_t *elementToReturn = ezsignfolder_get_actionable_elements_v1_response_parseFromJSON(ObjectEzsignfolderAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfolderAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfolderID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Attachment count
//
// 
//
ezsignfolder_get_attachment_count_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderGetAttachmentCountV1(apiClient_t *apiClient, int *pkiEzsignfolderID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignfolder/{pkiEzsignfolderID}/getAttachmentCount")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignfolder/{pkiEzsignfolderID}/getAttachmentCount");


    // Path Params
    long sizeOfPathParams_pkiEzsignfolderID =  + strlen("{ pkiEzsignfolderID }");
    if(pkiEzsignfolderID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfolderID = malloc(sizeOfPathParams_pkiEzsignfolderID);
    snprintf(localVarToReplace_pkiEzsignfolderID, sizeOfPathParams_pkiEzsignfolderID, "{%s}", "pkiEzsignfolderID");

    char localVarBuff_pkiEzsignfolderID[256];
    intToStr(localVarBuff_pkiEzsignfolderID, *pkiEzsignfolderID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfolderID, localVarBuff_pkiEzsignfolderID);



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
    cJSON *ObjectEzsignfolderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfolder_get_attachment_count_v1_response_t *elementToReturn = ezsignfolder_get_attachment_count_v1_response_parseFromJSON(ObjectEzsignfolderAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfolderAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfolderID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Ezsignfolder's Attachments
//
// 
//
ezsignfolder_get_attachments_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderGetAttachmentsV1(apiClient_t *apiClient, int *pkiEzsignfolderID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignfolder/{pkiEzsignfolderID}/getAttachments")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignfolder/{pkiEzsignfolderID}/getAttachments");


    // Path Params
    long sizeOfPathParams_pkiEzsignfolderID =  + strlen("{ pkiEzsignfolderID }");
    if(pkiEzsignfolderID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfolderID = malloc(sizeOfPathParams_pkiEzsignfolderID);
    snprintf(localVarToReplace_pkiEzsignfolderID, sizeOfPathParams_pkiEzsignfolderID, "{%s}", "pkiEzsignfolderID");

    char localVarBuff_pkiEzsignfolderID[256];
    intToStr(localVarBuff_pkiEzsignfolderID, *pkiEzsignfolderID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfolderID, localVarBuff_pkiEzsignfolderID);



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
    cJSON *ObjectEzsignfolderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfolder_get_attachments_v1_response_t *elementToReturn = ezsignfolder_get_attachments_v1_response_parseFromJSON(ObjectEzsignfolderAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfolderAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfolderID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Communication count
//
// 
//
ezsignfolder_get_communication_count_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderGetCommunicationCountV1(apiClient_t *apiClient, int *pkiEzsignfolderID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignfolder/{pkiEzsignfolderID}/getCommunicationCount")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignfolder/{pkiEzsignfolderID}/getCommunicationCount");


    // Path Params
    long sizeOfPathParams_pkiEzsignfolderID =  + strlen("{ pkiEzsignfolderID }");
    if(pkiEzsignfolderID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfolderID = malloc(sizeOfPathParams_pkiEzsignfolderID);
    snprintf(localVarToReplace_pkiEzsignfolderID, sizeOfPathParams_pkiEzsignfolderID, "{%s}", "pkiEzsignfolderID");

    char localVarBuff_pkiEzsignfolderID[256];
    intToStr(localVarBuff_pkiEzsignfolderID, *pkiEzsignfolderID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfolderID, localVarBuff_pkiEzsignfolderID);



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
    cJSON *ObjectEzsignfolderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfolder_get_communication_count_v1_response_t *elementToReturn = ezsignfolder_get_communication_count_v1_response_parseFromJSON(ObjectEzsignfolderAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfolderAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfolderID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Communication list
//
// 
//
ezsignfolder_get_communication_list_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderGetCommunicationListV1(apiClient_t *apiClient, int *pkiEzsignfolderID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignfolder/{pkiEzsignfolderID}/getCommunicationList")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignfolder/{pkiEzsignfolderID}/getCommunicationList");


    // Path Params
    long sizeOfPathParams_pkiEzsignfolderID =  + strlen("{ pkiEzsignfolderID }");
    if(pkiEzsignfolderID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfolderID = malloc(sizeOfPathParams_pkiEzsignfolderID);
    snprintf(localVarToReplace_pkiEzsignfolderID, sizeOfPathParams_pkiEzsignfolderID, "{%s}", "pkiEzsignfolderID");

    char localVarBuff_pkiEzsignfolderID[256];
    intToStr(localVarBuff_pkiEzsignfolderID, *pkiEzsignfolderID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfolderID, localVarBuff_pkiEzsignfolderID);



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
    cJSON *ObjectEzsignfolderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfolder_get_communication_list_v1_response_t *elementToReturn = ezsignfolder_get_communication_list_v1_response_parseFromJSON(ObjectEzsignfolderAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfolderAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfolderID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Ezsignfolder's Communicationrecipient
//
// 
//
ezsignfolder_get_communicationrecipients_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiEzsignfolderID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignfolder/{pkiEzsignfolderID}/getCommunicationrecipients")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignfolder/{pkiEzsignfolderID}/getCommunicationrecipients");


    // Path Params
    long sizeOfPathParams_pkiEzsignfolderID =  + strlen("{ pkiEzsignfolderID }");
    if(pkiEzsignfolderID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfolderID = malloc(sizeOfPathParams_pkiEzsignfolderID);
    snprintf(localVarToReplace_pkiEzsignfolderID, sizeOfPathParams_pkiEzsignfolderID, "{%s}", "pkiEzsignfolderID");

    char localVarBuff_pkiEzsignfolderID[256];
    intToStr(localVarBuff_pkiEzsignfolderID, *pkiEzsignfolderID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfolderID, localVarBuff_pkiEzsignfolderID);



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
    cJSON *ObjectEzsignfolderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfolder_get_communicationrecipients_v1_response_t *elementToReturn = ezsignfolder_get_communicationrecipients_v1_response_parseFromJSON(ObjectEzsignfolderAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfolderAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfolderID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Ezsignfolder's Communicationsender
//
// 
//
ezsignfolder_get_communicationsenders_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiEzsignfolderID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignfolder/{pkiEzsignfolderID}/getCommunicationsenders")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignfolder/{pkiEzsignfolderID}/getCommunicationsenders");


    // Path Params
    long sizeOfPathParams_pkiEzsignfolderID =  + strlen("{ pkiEzsignfolderID }");
    if(pkiEzsignfolderID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfolderID = malloc(sizeOfPathParams_pkiEzsignfolderID);
    snprintf(localVarToReplace_pkiEzsignfolderID, sizeOfPathParams_pkiEzsignfolderID, "{%s}", "pkiEzsignfolderID");

    char localVarBuff_pkiEzsignfolderID[256];
    intToStr(localVarBuff_pkiEzsignfolderID, *pkiEzsignfolderID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfolderID, localVarBuff_pkiEzsignfolderID);



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
    cJSON *ObjectEzsignfolderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfolder_get_communicationsenders_v1_response_t *elementToReturn = ezsignfolder_get_communicationsenders_v1_response_parseFromJSON(ObjectEzsignfolderAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfolderAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfolderID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsignfolder's Ezsigndocuments
//
// 
//
ezsignfolder_get_ezsigndocuments_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderGetEzsigndocumentsV1(apiClient_t *apiClient, int *pkiEzsignfolderID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignfolder/{pkiEzsignfolderID}/getEzsigndocuments")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignfolder/{pkiEzsignfolderID}/getEzsigndocuments");


    // Path Params
    long sizeOfPathParams_pkiEzsignfolderID =  + strlen("{ pkiEzsignfolderID }");
    if(pkiEzsignfolderID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfolderID = malloc(sizeOfPathParams_pkiEzsignfolderID);
    snprintf(localVarToReplace_pkiEzsignfolderID, sizeOfPathParams_pkiEzsignfolderID, "{%s}", "pkiEzsignfolderID");

    char localVarBuff_pkiEzsignfolderID[256];
    intToStr(localVarBuff_pkiEzsignfolderID, *pkiEzsignfolderID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfolderID, localVarBuff_pkiEzsignfolderID);



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
    cJSON *ObjectEzsignfolderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfolder_get_ezsigndocuments_v1_response_t *elementToReturn = ezsignfolder_get_ezsigndocuments_v1_response_parseFromJSON(ObjectEzsignfolderAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfolderAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfolderID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsignfolder's Ezsignfoldersignerassociations
//
// 
//
ezsignfolder_get_ezsignfoldersignerassociations_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderGetEzsignfoldersignerassociationsV1(apiClient_t *apiClient, int *pkiEzsignfolderID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignfolder/{pkiEzsignfolderID}/getEzsignfoldersignerassociations")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignfolder/{pkiEzsignfolderID}/getEzsignfoldersignerassociations");


    // Path Params
    long sizeOfPathParams_pkiEzsignfolderID =  + strlen("{ pkiEzsignfolderID }");
    if(pkiEzsignfolderID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfolderID = malloc(sizeOfPathParams_pkiEzsignfolderID);
    snprintf(localVarToReplace_pkiEzsignfolderID, sizeOfPathParams_pkiEzsignfolderID, "{%s}", "pkiEzsignfolderID");

    char localVarBuff_pkiEzsignfolderID[256];
    intToStr(localVarBuff_pkiEzsignfolderID, *pkiEzsignfolderID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfolderID, localVarBuff_pkiEzsignfolderID);



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
    cJSON *ObjectEzsignfolderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfolder_get_ezsignfoldersignerassociations_v1_response_t *elementToReturn = ezsignfolder_get_ezsignfoldersignerassociations_v1_response_parseFromJSON(ObjectEzsignfolderAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfolderAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfolderID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsignfolder's automatic Ezsignsignatures
//
// Return the Ezsignsignatures that can be signed by the current user at the current step in the process
//
ezsignfolder_get_ezsignsignatures_automatic_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderGetEzsignsignaturesAutomaticV1(apiClient_t *apiClient, int *pkiEzsignfolderID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignfolder/{pkiEzsignfolderID}/getEzsignsignaturesAutomatic")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignfolder/{pkiEzsignfolderID}/getEzsignsignaturesAutomatic");


    // Path Params
    long sizeOfPathParams_pkiEzsignfolderID =  + strlen("{ pkiEzsignfolderID }");
    if(pkiEzsignfolderID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfolderID = malloc(sizeOfPathParams_pkiEzsignfolderID);
    snprintf(localVarToReplace_pkiEzsignfolderID, sizeOfPathParams_pkiEzsignfolderID, "{%s}", "pkiEzsignfolderID");

    char localVarBuff_pkiEzsignfolderID[256];
    intToStr(localVarBuff_pkiEzsignfolderID, *pkiEzsignfolderID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfolderID, localVarBuff_pkiEzsignfolderID);



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
    cJSON *ObjectEzsignfolderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfolder_get_ezsignsignatures_automatic_v1_response_t *elementToReturn = ezsignfolder_get_ezsignsignatures_automatic_v1_response_parseFromJSON(ObjectEzsignfolderAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfolderAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfolderID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsignfolder's forms data
//
// 
//
ezsignfolder_get_forms_data_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderGetFormsDataV1(apiClient_t *apiClient, int *pkiEzsignfolderID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignfolder/{pkiEzsignfolderID}/getFormsData")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignfolder/{pkiEzsignfolderID}/getFormsData");


    // Path Params
    long sizeOfPathParams_pkiEzsignfolderID =  + strlen("{ pkiEzsignfolderID }");
    if(pkiEzsignfolderID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfolderID = malloc(sizeOfPathParams_pkiEzsignfolderID);
    snprintf(localVarToReplace_pkiEzsignfolderID, sizeOfPathParams_pkiEzsignfolderID, "{%s}", "pkiEzsignfolderID");

    char localVarBuff_pkiEzsignfolderID[256];
    intToStr(localVarBuff_pkiEzsignfolderID, *pkiEzsignfolderID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfolderID, localVarBuff_pkiEzsignfolderID);



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
    cJSON *ObjectEzsignfolderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfolder_get_forms_data_v1_response_t *elementToReturn = ezsignfolder_get_forms_data_v1_response_parseFromJSON(ObjectEzsignfolderAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfolderAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfolderID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Ezsignfolder list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eEzsignfolderStep | Unsent<br>Sent<br>PartiallySigned<br>Expired<br>Completed<br>Archived<br>Disposed| | eEzsignfoldertypePrivacylevel | User<br>Usergroup |  Advanced filters that can be used in query parameter *sFilter*:  | Variable | |---| | fkiUserID | | sContactFirstname | | sContactLastname | | sUserFirstname | | sUserLastname | | sEzsigndocumentName |
//
ezsignfolder_get_list_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_ezsignfolderGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignfolder/getList")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignfolder/getList");




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
    ezmax_api_definition__full_ezsignfolderGetListV1_eOrderBy_e valueQuery_eOrderBy ;
    keyValuePair_t *keyPairQuery_eOrderBy = 0;
    if (eOrderBy)
    {
        keyQuery_eOrderBy = strdup("eOrderBy");
        valueQuery_eOrderBy = (eOrderBy);
        keyPairQuery_eOrderBy = keyValuePair_create(keyQuery_eOrderBy, (void *)strdup(ezsignfolderGetListV1_EORDERBY_ToString(
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
    cJSON *ObjectEzsignfolderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfolder_get_list_v1_response_t *elementToReturn = ezsignfolder_get_list_v1_response_parseFromJSON(ObjectEzsignfolderAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfolderAPIlocalVarJSON);
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

// Retrieve an existing Ezsignfolder
//
ezsignfolder_get_object_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderGetObjectV1(apiClient_t *apiClient, int *pkiEzsignfolderID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignfolder/{pkiEzsignfolderID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignfolder/{pkiEzsignfolderID}");


    // Path Params
    long sizeOfPathParams_pkiEzsignfolderID =  + strlen("{ pkiEzsignfolderID }");
    if(pkiEzsignfolderID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfolderID = malloc(sizeOfPathParams_pkiEzsignfolderID);
    snprintf(localVarToReplace_pkiEzsignfolderID, sizeOfPathParams_pkiEzsignfolderID, "{%s}", "pkiEzsignfolderID");

    char localVarBuff_pkiEzsignfolderID[256];
    intToStr(localVarBuff_pkiEzsignfolderID, *pkiEzsignfolderID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfolderID, localVarBuff_pkiEzsignfolderID);



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
    cJSON *ObjectEzsignfolderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfolder_get_object_v1_response_t *elementToReturn = ezsignfolder_get_object_v1_response_parseFromJSON(ObjectEzsignfolderAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfolderAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfolderID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsignfolder
//
// 
//
ezsignfolder_get_object_v2_response_t*
ObjectEzsignfolderAPI_ezsignfolderGetObjectV2(apiClient_t *apiClient, int *pkiEzsignfolderID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/2/object/ezsignfolder/{pkiEzsignfolderID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/2/object/ezsignfolder/{pkiEzsignfolderID}");


    // Path Params
    long sizeOfPathParams_pkiEzsignfolderID =  + strlen("{ pkiEzsignfolderID }");
    if(pkiEzsignfolderID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfolderID = malloc(sizeOfPathParams_pkiEzsignfolderID);
    snprintf(localVarToReplace_pkiEzsignfolderID, sizeOfPathParams_pkiEzsignfolderID, "{%s}", "pkiEzsignfolderID");

    char localVarBuff_pkiEzsignfolderID[256];
    intToStr(localVarBuff_pkiEzsignfolderID, *pkiEzsignfolderID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfolderID, localVarBuff_pkiEzsignfolderID);



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
    cJSON *ObjectEzsignfolderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfolder_get_object_v2_response_t *elementToReturn = ezsignfolder_get_object_v2_response_parseFromJSON(ObjectEzsignfolderAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfolderAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfolderID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsignfolder
//
// 
//
ezsignfolder_get_object_v3_response_t*
ObjectEzsignfolderAPI_ezsignfolderGetObjectV3(apiClient_t *apiClient, int *pkiEzsignfolderID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/3/object/ezsignfolder/{pkiEzsignfolderID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/3/object/ezsignfolder/{pkiEzsignfolderID}");


    // Path Params
    long sizeOfPathParams_pkiEzsignfolderID =  + strlen("{ pkiEzsignfolderID }");
    if(pkiEzsignfolderID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfolderID = malloc(sizeOfPathParams_pkiEzsignfolderID);
    snprintf(localVarToReplace_pkiEzsignfolderID, sizeOfPathParams_pkiEzsignfolderID, "{%s}", "pkiEzsignfolderID");

    char localVarBuff_pkiEzsignfolderID[256];
    intToStr(localVarBuff_pkiEzsignfolderID, *pkiEzsignfolderID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfolderID, localVarBuff_pkiEzsignfolderID);



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
    cJSON *ObjectEzsignfolderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfolder_get_object_v3_response_t *elementToReturn = ezsignfolder_get_object_v3_response_parseFromJSON(ObjectEzsignfolderAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfolderAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfolderID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Import an existing Ezsignfoldersignerassociation into this Ezsignfolder
//
// 
//
ezsignfolder_import_ezsignfoldersignerassociations_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderImportEzsignfoldersignerassociationsV1(apiClient_t *apiClient, int *pkiEzsignfolderID, ezsignfolder_import_ezsignfoldersignerassociations_v1_request_t *ezsignfolder_import_ezsignfoldersignerassociations_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignfolder/{pkiEzsignfolderID}/importEzsignfoldersignerassociations")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignfolder/{pkiEzsignfolderID}/importEzsignfoldersignerassociations");


    // Path Params
    long sizeOfPathParams_pkiEzsignfolderID =  + strlen("{ pkiEzsignfolderID }");
    if(pkiEzsignfolderID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfolderID = malloc(sizeOfPathParams_pkiEzsignfolderID);
    snprintf(localVarToReplace_pkiEzsignfolderID, sizeOfPathParams_pkiEzsignfolderID, "{%s}", "pkiEzsignfolderID");

    char localVarBuff_pkiEzsignfolderID[256];
    intToStr(localVarBuff_pkiEzsignfolderID, *pkiEzsignfolderID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfolderID, localVarBuff_pkiEzsignfolderID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsignfolder_import_ezsignfoldersignerassociations_v1_request = NULL;
    if (ezsignfolder_import_ezsignfoldersignerassociations_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsignfolder_import_ezsignfoldersignerassociations_v1_request = ezsignfolder_import_ezsignfoldersignerassociations_v1_request_convertToJSON(ezsignfolder_import_ezsignfoldersignerassociations_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignfolder_import_ezsignfoldersignerassociations_v1_request);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","The request is not allowed to be executed. Look for detail about the error in the body");
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
    cJSON *ObjectEzsignfolderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfolder_import_ezsignfoldersignerassociations_v1_response_t *elementToReturn = ezsignfolder_import_ezsignfoldersignerassociations_v1_response_parseFromJSON(ObjectEzsignfolderAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfolderAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfolderID);
    if (localVarSingleItemJSON_ezsignfolder_import_ezsignfoldersignerassociations_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignfolder_import_ezsignfoldersignerassociations_v1_request);
        localVarSingleItemJSON_ezsignfolder_import_ezsignfoldersignerassociations_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Import an Ezsigntemplatepackage in the Ezsignfolder.
//
// This endpoint imports all of the Ezsigntemplates from the Ezsigntemplatepackage into the Ezsignfolder as Ezsigndocuments.  This allows to automatically apply all the Ezsigntemplateformfieldgroups and Ezsigntemplatesignatures on the newly created Ezsigndocuments in a single step.
//
ezsignfolder_import_ezsigntemplatepackage_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderImportEzsigntemplatepackageV1(apiClient_t *apiClient, int *pkiEzsignfolderID, ezsignfolder_import_ezsigntemplatepackage_v1_request_t *ezsignfolder_import_ezsigntemplatepackage_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignfolder/{pkiEzsignfolderID}/importEzsigntemplatepackage")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignfolder/{pkiEzsignfolderID}/importEzsigntemplatepackage");


    // Path Params
    long sizeOfPathParams_pkiEzsignfolderID =  + strlen("{ pkiEzsignfolderID }");
    if(pkiEzsignfolderID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfolderID = malloc(sizeOfPathParams_pkiEzsignfolderID);
    snprintf(localVarToReplace_pkiEzsignfolderID, sizeOfPathParams_pkiEzsignfolderID, "{%s}", "pkiEzsignfolderID");

    char localVarBuff_pkiEzsignfolderID[256];
    intToStr(localVarBuff_pkiEzsignfolderID, *pkiEzsignfolderID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfolderID, localVarBuff_pkiEzsignfolderID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsignfolder_import_ezsigntemplatepackage_v1_request = NULL;
    if (ezsignfolder_import_ezsigntemplatepackage_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsignfolder_import_ezsigntemplatepackage_v1_request = ezsignfolder_import_ezsigntemplatepackage_v1_request_convertToJSON(ezsignfolder_import_ezsigntemplatepackage_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignfolder_import_ezsigntemplatepackage_v1_request);
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
    cJSON *ObjectEzsignfolderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfolder_import_ezsigntemplatepackage_v1_response_t *elementToReturn = ezsignfolder_import_ezsigntemplatepackage_v1_response_parseFromJSON(ObjectEzsignfolderAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfolderAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfolderID);
    if (localVarSingleItemJSON_ezsignfolder_import_ezsigntemplatepackage_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignfolder_import_ezsigntemplatepackage_v1_request);
        localVarSingleItemJSON_ezsignfolder_import_ezsigntemplatepackage_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Reorder Ezsigndocuments in the Ezsignfolder
//
ezsignfolder_reorder_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderReorderV1(apiClient_t *apiClient, int *pkiEzsignfolderID, ezsignfolder_reorder_v1_request_t *ezsignfolder_reorder_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignfolder/{pkiEzsignfolderID}/reorder")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignfolder/{pkiEzsignfolderID}/reorder");


    // Path Params
    long sizeOfPathParams_pkiEzsignfolderID =  + strlen("{ pkiEzsignfolderID }");
    if(pkiEzsignfolderID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfolderID = malloc(sizeOfPathParams_pkiEzsignfolderID);
    snprintf(localVarToReplace_pkiEzsignfolderID, sizeOfPathParams_pkiEzsignfolderID, "{%s}", "pkiEzsignfolderID");

    char localVarBuff_pkiEzsignfolderID[256];
    intToStr(localVarBuff_pkiEzsignfolderID, *pkiEzsignfolderID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfolderID, localVarBuff_pkiEzsignfolderID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsignfolder_reorder_v1_request = NULL;
    if (ezsignfolder_reorder_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsignfolder_reorder_v1_request = ezsignfolder_reorder_v1_request_convertToJSON(ezsignfolder_reorder_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignfolder_reorder_v1_request);
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
    cJSON *ObjectEzsignfolderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfolder_reorder_v1_response_t *elementToReturn = ezsignfolder_reorder_v1_response_parseFromJSON(ObjectEzsignfolderAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfolderAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfolderID);
    if (localVarSingleItemJSON_ezsignfolder_reorder_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignfolder_reorder_v1_request);
        localVarSingleItemJSON_ezsignfolder_reorder_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Reorder Ezsigndocuments in the Ezsignfolder
//
ezsignfolder_reorder_v2_response_t*
ObjectEzsignfolderAPI_ezsignfolderReorderV2(apiClient_t *apiClient, int *pkiEzsignfolderID, ezsignfolder_reorder_v2_request_t *ezsignfolder_reorder_v2_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/2/object/ezsignfolder/{pkiEzsignfolderID}/reorder")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/2/object/ezsignfolder/{pkiEzsignfolderID}/reorder");


    // Path Params
    long sizeOfPathParams_pkiEzsignfolderID =  + strlen("{ pkiEzsignfolderID }");
    if(pkiEzsignfolderID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfolderID = malloc(sizeOfPathParams_pkiEzsignfolderID);
    snprintf(localVarToReplace_pkiEzsignfolderID, sizeOfPathParams_pkiEzsignfolderID, "{%s}", "pkiEzsignfolderID");

    char localVarBuff_pkiEzsignfolderID[256];
    intToStr(localVarBuff_pkiEzsignfolderID, *pkiEzsignfolderID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfolderID, localVarBuff_pkiEzsignfolderID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsignfolder_reorder_v2_request = NULL;
    if (ezsignfolder_reorder_v2_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsignfolder_reorder_v2_request = ezsignfolder_reorder_v2_request_convertToJSON(ezsignfolder_reorder_v2_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignfolder_reorder_v2_request);
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
    cJSON *ObjectEzsignfolderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfolder_reorder_v2_response_t *elementToReturn = ezsignfolder_reorder_v2_response_parseFromJSON(ObjectEzsignfolderAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfolderAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfolderID);
    if (localVarSingleItemJSON_ezsignfolder_reorder_v2_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignfolder_reorder_v2_request);
        localVarSingleItemJSON_ezsignfolder_reorder_v2_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Send the Ezsignfolder to the signatories for signature
//
// 
//
ezsignfolder_send_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderSendV1(apiClient_t *apiClient, int *pkiEzsignfolderID, ezsignfolder_send_v1_request_t *ezsignfolder_send_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignfolder/{pkiEzsignfolderID}/send")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignfolder/{pkiEzsignfolderID}/send");


    // Path Params
    long sizeOfPathParams_pkiEzsignfolderID =  + strlen("{ pkiEzsignfolderID }");
    if(pkiEzsignfolderID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfolderID = malloc(sizeOfPathParams_pkiEzsignfolderID);
    snprintf(localVarToReplace_pkiEzsignfolderID, sizeOfPathParams_pkiEzsignfolderID, "{%s}", "pkiEzsignfolderID");

    char localVarBuff_pkiEzsignfolderID[256];
    intToStr(localVarBuff_pkiEzsignfolderID, *pkiEzsignfolderID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfolderID, localVarBuff_pkiEzsignfolderID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsignfolder_send_v1_request = NULL;
    if (ezsignfolder_send_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsignfolder_send_v1_request = ezsignfolder_send_v1_request_convertToJSON(ezsignfolder_send_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignfolder_send_v1_request);
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
    cJSON *ObjectEzsignfolderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfolder_send_v1_response_t *elementToReturn = ezsignfolder_send_v1_response_parseFromJSON(ObjectEzsignfolderAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfolderAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfolderID);
    if (localVarSingleItemJSON_ezsignfolder_send_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignfolder_send_v1_request);
        localVarSingleItemJSON_ezsignfolder_send_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Send the Ezsignfolder to the signatories for signature
//
// 
//
ezsignfolder_send_v3_response_t*
ObjectEzsignfolderAPI_ezsignfolderSendV3(apiClient_t *apiClient, int *pkiEzsignfolderID, ezsignfolder_send_v3_request_t *ezsignfolder_send_v3_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/3/object/ezsignfolder/{pkiEzsignfolderID}/send")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/3/object/ezsignfolder/{pkiEzsignfolderID}/send");


    // Path Params
    long sizeOfPathParams_pkiEzsignfolderID =  + strlen("{ pkiEzsignfolderID }");
    if(pkiEzsignfolderID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfolderID = malloc(sizeOfPathParams_pkiEzsignfolderID);
    snprintf(localVarToReplace_pkiEzsignfolderID, sizeOfPathParams_pkiEzsignfolderID, "{%s}", "pkiEzsignfolderID");

    char localVarBuff_pkiEzsignfolderID[256];
    intToStr(localVarBuff_pkiEzsignfolderID, *pkiEzsignfolderID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfolderID, localVarBuff_pkiEzsignfolderID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsignfolder_send_v3_request = NULL;
    if (ezsignfolder_send_v3_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsignfolder_send_v3_request = ezsignfolder_send_v3_request_convertToJSON(ezsignfolder_send_v3_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignfolder_send_v3_request);
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
    cJSON *ObjectEzsignfolderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfolder_send_v3_response_t *elementToReturn = ezsignfolder_send_v3_response_parseFromJSON(ObjectEzsignfolderAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfolderAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfolderID);
    if (localVarSingleItemJSON_ezsignfolder_send_v3_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignfolder_send_v3_request);
        localVarSingleItemJSON_ezsignfolder_send_v3_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Unsend the Ezsignfolder
//
// Once an Ezsignfolder has been sent to signatories, it cannot be modified.  Using this endpoint, you can unsend the Ezsignfolder and make it modifiable again.  Signatories will receive an email informing them the signature process was aborted and they might receive a new invitation to sign.  ⚠️ Warning: Any signature previously made by signatories on \"Non-completed\" Ezsigndocuments will be lost.
//
ezsignfolder_unsend_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderUnsendV1(apiClient_t *apiClient, int *pkiEzsignfolderID, object_t *body)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignfolder/{pkiEzsignfolderID}/unsend")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignfolder/{pkiEzsignfolderID}/unsend");


    // Path Params
    long sizeOfPathParams_pkiEzsignfolderID =  + strlen("{ pkiEzsignfolderID }");
    if(pkiEzsignfolderID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfolderID = malloc(sizeOfPathParams_pkiEzsignfolderID);
    snprintf(localVarToReplace_pkiEzsignfolderID, sizeOfPathParams_pkiEzsignfolderID, "{%s}", "pkiEzsignfolderID");

    char localVarBuff_pkiEzsignfolderID[256];
    intToStr(localVarBuff_pkiEzsignfolderID, *pkiEzsignfolderID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfolderID, localVarBuff_pkiEzsignfolderID);




    // Body Param
    cJSON *localVarSingleItemJSON_body = NULL;
    if (body != NULL)
    {
        //string
        localVarSingleItemJSON_body = object_convertToJSON(body);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_body);
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
    cJSON *ObjectEzsignfolderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfolder_unsend_v1_response_t *elementToReturn = ezsignfolder_unsend_v1_response_parseFromJSON(ObjectEzsignfolderAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfolderAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfolderID);
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

