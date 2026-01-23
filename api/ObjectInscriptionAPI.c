#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "ObjectInscriptionAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define MAX_NUMBER_LENGTH_LONG 21

// Functions for enum EORDERBY for ObjectInscriptionAPI_inscriptionGetListV1

static char* inscriptionGetListV1_EORDERBY_ToString(ezmax_api_definition__full_inscriptionGetListV1_eOrderBy_e EORDERBY){
    char *EORDERBYArray[] =  { "NULL", "pkiInscriptionID_ASC", "pkiInscriptionID_DESC", "pkiInscriptionnotauthenticatedID_ASC", "pkiInscriptionnotauthenticatedID_DESC", "fkiInscriptiontypeID_ASC", "fkiInscriptiontypeID_DESC", "sInscriptiontypeNameX_ASC", "sInscriptiontypeNameX_DESC", "eInscriptionStep_ASC", "eInscriptionStep_DESC", "sInscriptionCivicend_ASC", "sInscriptionCivicend_DESC", "sInscriptionMLS_ASC", "sInscriptionMLS_DESC", "dInscriptionSaleprice_ASC", "dInscriptionSaleprice_DESC", "dInscriptionRentprice_ASC", "dInscriptionRentprice_DESC", "dtInscriptionDate_ASC", "dtInscriptionDate_DESC", "dtInscriptionExpirationdate_ASC", "dtInscriptionExpirationdate_DESC", "dtInscriptionNotarydate_ASC", "dtInscriptionNotarydate_DESC", "bInscriptionInspection_ASC", "bInscriptionInspection_DESC", "bInscriptionIsactive_ASC", "bInscriptionIsactive_DESC", "dtInscriptionnotauthenticatedNotaryscheduledate_ASC", "dtInscriptionnotauthenticatedNotaryscheduledate_DESC", "dtInscriptionnotauthenticatedTransactiondate_ASC", "dtInscriptionnotauthenticatedTransactiondate_DESC", "dtInscriptionnotauthenticatedTransactiondateReal_ASC", "dtInscriptionnotauthenticatedTransactiondateReal_DESC", "bInscriptionnotauthenticatedConditional_ASC", "bInscriptionnotauthenticatedConditional_DESC", "bInscriptionnotauthenticatedIsactive_ASC", "bInscriptionnotauthenticatedIsactive_DESC", "sAddressCivic_ASC", "sAddressCivic_DESC", "sAddressStreet_ASC", "sAddressStreet_DESC", "sAddressSuite_ASC", "sAddressSuite_DESC", "sAddressCity_ASC", "sAddressCity_DESC", "sAddressZip_ASC", "sAddressZip_DESC", "sProvinceNameX_ASC", "sProvinceNameX_DESC", "sCountryNameX_ASC", "sCountryNameX_DESC", "iInscriptionnotauthenticatedCanceled_ASC", "iInscriptionnotauthenticatedCanceled_DESC", "bAllowedCopyintoinscriptionedm_ASC", "bAllowedCopyintoinscriptionedm_DESC" };
    return EORDERBYArray[EORDERBY];
}

static ezmax_api_definition__full_inscriptionGetListV1_eOrderBy_e inscriptionGetListV1_EORDERBY_FromString(char* EORDERBY){
    int stringToReturn = 0;
    char *EORDERBYArray[] =  { "NULL", "pkiInscriptionID_ASC", "pkiInscriptionID_DESC", "pkiInscriptionnotauthenticatedID_ASC", "pkiInscriptionnotauthenticatedID_DESC", "fkiInscriptiontypeID_ASC", "fkiInscriptiontypeID_DESC", "sInscriptiontypeNameX_ASC", "sInscriptiontypeNameX_DESC", "eInscriptionStep_ASC", "eInscriptionStep_DESC", "sInscriptionCivicend_ASC", "sInscriptionCivicend_DESC", "sInscriptionMLS_ASC", "sInscriptionMLS_DESC", "dInscriptionSaleprice_ASC", "dInscriptionSaleprice_DESC", "dInscriptionRentprice_ASC", "dInscriptionRentprice_DESC", "dtInscriptionDate_ASC", "dtInscriptionDate_DESC", "dtInscriptionExpirationdate_ASC", "dtInscriptionExpirationdate_DESC", "dtInscriptionNotarydate_ASC", "dtInscriptionNotarydate_DESC", "bInscriptionInspection_ASC", "bInscriptionInspection_DESC", "bInscriptionIsactive_ASC", "bInscriptionIsactive_DESC", "dtInscriptionnotauthenticatedNotaryscheduledate_ASC", "dtInscriptionnotauthenticatedNotaryscheduledate_DESC", "dtInscriptionnotauthenticatedTransactiondate_ASC", "dtInscriptionnotauthenticatedTransactiondate_DESC", "dtInscriptionnotauthenticatedTransactiondateReal_ASC", "dtInscriptionnotauthenticatedTransactiondateReal_DESC", "bInscriptionnotauthenticatedConditional_ASC", "bInscriptionnotauthenticatedConditional_DESC", "bInscriptionnotauthenticatedIsactive_ASC", "bInscriptionnotauthenticatedIsactive_DESC", "sAddressCivic_ASC", "sAddressCivic_DESC", "sAddressStreet_ASC", "sAddressStreet_DESC", "sAddressSuite_ASC", "sAddressSuite_DESC", "sAddressCity_ASC", "sAddressCity_DESC", "sAddressZip_ASC", "sAddressZip_DESC", "sProvinceNameX_ASC", "sProvinceNameX_DESC", "sCountryNameX_ASC", "sCountryNameX_DESC", "iInscriptionnotauthenticatedCanceled_ASC", "iInscriptionnotauthenticatedCanceled_DESC", "bAllowedCopyintoinscriptionedm_ASC", "bAllowedCopyintoinscriptionedm_DESC" };
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
// Function inscriptionGetListV1_EORDERBY_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *inscriptionGetListV1_EORDERBY_convertToJSON(ezmax_api_definition__full_inscriptionGetListV1_eOrderBy_e EORDERBY) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "eOrderBy", inscriptionGetListV1_EORDERBY_ToString(EORDERBY)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function inscriptionGetListV1_EORDERBY_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_inscriptionGetListV1_eOrderBy_e inscriptionGetListV1_EORDERBY_parseFromJSON(cJSON* EORDERBYJSON) {
    ezmax_api_definition__full_inscriptionGetListV1_eOrderBy_e EORDERBYVariable = 0;
    cJSON *EORDERBYVar = cJSON_GetObjectItemCaseSensitive(EORDERBYJSON, "eOrderBy");
    if(!cJSON_IsString(EORDERBYVar) || (EORDERBYVar->valuestring == NULL))
    {
        goto end;
    }
    EORDERBYVariable = inscriptionGetListV1_EORDERBY_FromString(EORDERBYVar->valuestring);
    return EORDERBYVariable;
end:
    return 0;
}
*/

// Functions for enum  for ObjectInscriptionAPI_inscriptionGetListV1

static char* inscriptionGetListV1__ToString(ezmax_api_definition__full_inscriptionGetListV1_Accept-Language_e ){
    char *Array[] =  { "NULL", "*", "en", "fr" };
    return Array[];
}

static ezmax_api_definition__full_inscriptionGetListV1_Accept-Language_e inscriptionGetListV1__FromString(char* ){
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
// Function inscriptionGetListV1__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *inscriptionGetListV1__convertToJSON(ezmax_api_definition__full_inscriptionGetListV1_Accept-Language_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function inscriptionGetListV1__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_inscriptionGetListV1_Accept-Language_e inscriptionGetListV1__parseFromJSON(cJSON* JSON) {
    ezmax_api_definition__full_inscriptionGetListV1_Accept-Language_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/


// Retrieve Inscription's Attachments
//
// 
//
inscription_get_attachments_v1_response_t*
ObjectInscriptionAPI_inscriptionGetAttachmentsV1(apiClient_t *apiClient, int *pkiInscriptionID)
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
    char *localVarPath = strdup("/1/object/inscription/{pkiInscriptionID}/getAttachments");



    // Path Params
    long sizeOfPathParams_pkiInscriptionID =  + sizeof("{ pkiInscriptionID }") - 1;
    if(pkiInscriptionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiInscriptionID = malloc(sizeOfPathParams_pkiInscriptionID);
    snprintf(localVarToReplace_pkiInscriptionID, sizeOfPathParams_pkiInscriptionID, "{%s}", "pkiInscriptionID");

    char localVarBuff_pkiInscriptionID[256];
    snprintf(localVarBuff_pkiInscriptionID, sizeof localVarBuff_pkiInscriptionID, "%ld", (long)*pkiInscriptionID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiInscriptionID, localVarBuff_pkiInscriptionID);



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
    inscription_get_attachments_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectInscriptionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = inscription_get_attachments_v1_response_parseFromJSON(ObjectInscriptionAPIlocalVarJSON);
        cJSON_Delete(ObjectInscriptionAPIlocalVarJSON);
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
    free(localVarToReplace_pkiInscriptionID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Communication count
//
// 
//
inscription_get_communication_count_v1_response_t*
ObjectInscriptionAPI_inscriptionGetCommunicationCountV1(apiClient_t *apiClient, int *pkiInscriptionID)
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
    char *localVarPath = strdup("/1/object/inscription/{pkiInscriptionID}/getCommunicationCount");



    // Path Params
    long sizeOfPathParams_pkiInscriptionID =  + sizeof("{ pkiInscriptionID }") - 1;
    if(pkiInscriptionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiInscriptionID = malloc(sizeOfPathParams_pkiInscriptionID);
    snprintf(localVarToReplace_pkiInscriptionID, sizeOfPathParams_pkiInscriptionID, "{%s}", "pkiInscriptionID");

    char localVarBuff_pkiInscriptionID[256];
    snprintf(localVarBuff_pkiInscriptionID, sizeof localVarBuff_pkiInscriptionID, "%ld", (long)*pkiInscriptionID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiInscriptionID, localVarBuff_pkiInscriptionID);



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
    inscription_get_communication_count_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectInscriptionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = inscription_get_communication_count_v1_response_parseFromJSON(ObjectInscriptionAPIlocalVarJSON);
        cJSON_Delete(ObjectInscriptionAPIlocalVarJSON);
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
    free(localVarToReplace_pkiInscriptionID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Communication list
//
// 
//
inscription_get_communication_list_v1_response_t*
ObjectInscriptionAPI_inscriptionGetCommunicationListV1(apiClient_t *apiClient, int *pkiInscriptionID)
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
    char *localVarPath = strdup("/1/object/inscription/{pkiInscriptionID}/getCommunicationList");



    // Path Params
    long sizeOfPathParams_pkiInscriptionID =  + sizeof("{ pkiInscriptionID }") - 1;
    if(pkiInscriptionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiInscriptionID = malloc(sizeOfPathParams_pkiInscriptionID);
    snprintf(localVarToReplace_pkiInscriptionID, sizeOfPathParams_pkiInscriptionID, "{%s}", "pkiInscriptionID");

    char localVarBuff_pkiInscriptionID[256];
    snprintf(localVarBuff_pkiInscriptionID, sizeof localVarBuff_pkiInscriptionID, "%ld", (long)*pkiInscriptionID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiInscriptionID, localVarBuff_pkiInscriptionID);



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
    inscription_get_communication_list_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectInscriptionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = inscription_get_communication_list_v1_response_parseFromJSON(ObjectInscriptionAPIlocalVarJSON);
        cJSON_Delete(ObjectInscriptionAPIlocalVarJSON);
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
    free(localVarToReplace_pkiInscriptionID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Inscription's Communicationrecipient
//
// 
//
inscription_get_communicationrecipients_v1_response_t*
ObjectInscriptionAPI_inscriptionGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiInscriptionID)
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
    char *localVarPath = strdup("/1/object/inscription/{pkiInscriptionID}/getCommunicationrecipients");



    // Path Params
    long sizeOfPathParams_pkiInscriptionID =  + sizeof("{ pkiInscriptionID }") - 1;
    if(pkiInscriptionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiInscriptionID = malloc(sizeOfPathParams_pkiInscriptionID);
    snprintf(localVarToReplace_pkiInscriptionID, sizeOfPathParams_pkiInscriptionID, "{%s}", "pkiInscriptionID");

    char localVarBuff_pkiInscriptionID[256];
    snprintf(localVarBuff_pkiInscriptionID, sizeof localVarBuff_pkiInscriptionID, "%ld", (long)*pkiInscriptionID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiInscriptionID, localVarBuff_pkiInscriptionID);



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
    inscription_get_communicationrecipients_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectInscriptionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = inscription_get_communicationrecipients_v1_response_parseFromJSON(ObjectInscriptionAPIlocalVarJSON);
        cJSON_Delete(ObjectInscriptionAPIlocalVarJSON);
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
    free(localVarToReplace_pkiInscriptionID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Inscription's Communicationsender
//
// 
//
inscription_get_communicationsenders_v1_response_t*
ObjectInscriptionAPI_inscriptionGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiInscriptionID)
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
    char *localVarPath = strdup("/1/object/inscription/{pkiInscriptionID}/getCommunicationsenders");



    // Path Params
    long sizeOfPathParams_pkiInscriptionID =  + sizeof("{ pkiInscriptionID }") - 1;
    if(pkiInscriptionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiInscriptionID = malloc(sizeOfPathParams_pkiInscriptionID);
    snprintf(localVarToReplace_pkiInscriptionID, sizeOfPathParams_pkiInscriptionID, "{%s}", "pkiInscriptionID");

    char localVarBuff_pkiInscriptionID[256];
    snprintf(localVarBuff_pkiInscriptionID, sizeof localVarBuff_pkiInscriptionID, "%ld", (long)*pkiInscriptionID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiInscriptionID, localVarBuff_pkiInscriptionID);



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
    inscription_get_communicationsenders_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectInscriptionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = inscription_get_communicationsenders_v1_response_parseFromJSON(ObjectInscriptionAPIlocalVarJSON);
        cJSON_Delete(ObjectInscriptionAPIlocalVarJSON);
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
    free(localVarToReplace_pkiInscriptionID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Inscription list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eInscriptionStep | TemporaryNotAuthenticated<br>ImportedInscription<br>Inscription<br>ModifiedInscription<br>ContractEnded<br>ExpiredInscription<br>Out-market<br>ImportedNotauthenticated<br>NotAuthenticated<br>ModifiedNotauthenticated<br>Authenticated |
//
inscription_get_list_v1_response_t*
ObjectInscriptionAPI_inscriptionGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_inscriptionGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter)
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
    char *localVarPath = strdup("/1/object/inscription/getList");





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
    ezmax_api_definition__full_inscriptionGetListV1_eOrderBy_e valueQuery_eOrderBy ;
    keyValuePair_t *keyPairQuery_eOrderBy = 0;
    if (eOrderBy)
    {
        keyQuery_eOrderBy = strdup("eOrderBy");
        valueQuery_eOrderBy = (eOrderBy);
        keyPairQuery_eOrderBy = keyValuePair_create(keyQuery_eOrderBy, strdup(inscriptionGetListV1_EORDERBY_ToString(
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
    inscription_get_list_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectInscriptionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = inscription_get_list_v1_response_parseFromJSON(ObjectInscriptionAPIlocalVarJSON);
        cJSON_Delete(ObjectInscriptionAPIlocalVarJSON);
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

// Import attachments into the Inscription
//
// 
//
inscription_import_into_edm_v1_response_t*
ObjectInscriptionAPI_inscriptionImportIntoEDMV1(apiClient_t *apiClient, int *pkiInscriptionID, inscription_import_into_edm_v1_request_t *inscription_import_into_edm_v1_request)
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
    char *localVarPath = strdup("/1/object/inscription/{pkiInscriptionID}/importIntoEDM");



    // Path Params
    long sizeOfPathParams_pkiInscriptionID =  + sizeof("{ pkiInscriptionID }") - 1;
    if(pkiInscriptionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiInscriptionID = malloc(sizeOfPathParams_pkiInscriptionID);
    snprintf(localVarToReplace_pkiInscriptionID, sizeOfPathParams_pkiInscriptionID, "{%s}", "pkiInscriptionID");

    char localVarBuff_pkiInscriptionID[256];
    snprintf(localVarBuff_pkiInscriptionID, sizeof localVarBuff_pkiInscriptionID, "%ld", (long)*pkiInscriptionID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiInscriptionID, localVarBuff_pkiInscriptionID);




    // Body Param
    cJSON *localVarSingleItemJSON_inscription_import_into_edm_v1_request = NULL;
    if (inscription_import_into_edm_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_inscription_import_into_edm_v1_request = inscription_import_into_edm_v1_request_convertToJSON(inscription_import_into_edm_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_inscription_import_into_edm_v1_request);
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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    inscription_import_into_edm_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectInscriptionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = inscription_import_into_edm_v1_response_parseFromJSON(ObjectInscriptionAPIlocalVarJSON);
        cJSON_Delete(ObjectInscriptionAPIlocalVarJSON);
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
    free(localVarToReplace_pkiInscriptionID);
    if (localVarSingleItemJSON_inscription_import_into_edm_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_inscription_import_into_edm_v1_request);
        localVarSingleItemJSON_inscription_import_into_edm_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Prepares file transfer into EDM
//
// 
//
inscription_prepare_files_transfer_v1_response_t*
ObjectInscriptionAPI_inscriptionPrepareFilesTransferV1(apiClient_t *apiClient, int *pkiInscriptionID, inscription_prepare_files_transfer_v1_request_t *inscription_prepare_files_transfer_v1_request)
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
    char *localVarPath = strdup("/1/object/inscription/{pkiInscriptionID}/prepareFilesTransfer");



    // Path Params
    long sizeOfPathParams_pkiInscriptionID =  + sizeof("{ pkiInscriptionID }") - 1;
    if(pkiInscriptionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiInscriptionID = malloc(sizeOfPathParams_pkiInscriptionID);
    snprintf(localVarToReplace_pkiInscriptionID, sizeOfPathParams_pkiInscriptionID, "{%s}", "pkiInscriptionID");

    char localVarBuff_pkiInscriptionID[256];
    snprintf(localVarBuff_pkiInscriptionID, sizeof localVarBuff_pkiInscriptionID, "%ld", (long)*pkiInscriptionID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiInscriptionID, localVarBuff_pkiInscriptionID);




    // Body Param
    cJSON *localVarSingleItemJSON_inscription_prepare_files_transfer_v1_request = NULL;
    if (inscription_prepare_files_transfer_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_inscription_prepare_files_transfer_v1_request = inscription_prepare_files_transfer_v1_request_convertToJSON(inscription_prepare_files_transfer_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_inscription_prepare_files_transfer_v1_request);
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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    inscription_prepare_files_transfer_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectInscriptionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = inscription_prepare_files_transfer_v1_response_parseFromJSON(ObjectInscriptionAPIlocalVarJSON);
        cJSON_Delete(ObjectInscriptionAPIlocalVarJSON);
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
    free(localVarToReplace_pkiInscriptionID);
    if (localVarSingleItemJSON_inscription_prepare_files_transfer_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_inscription_prepare_files_transfer_v1_request);
        localVarSingleItemJSON_inscription_prepare_files_transfer_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

