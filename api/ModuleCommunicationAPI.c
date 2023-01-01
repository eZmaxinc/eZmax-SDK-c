#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ModuleCommunicationAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)

// Functions for enum ECOMMUNICATIONMODULE for ModuleCommunicationAPI_communicationGetCommunicationCountV1

static char* communicationGetCommunicationCountV1_ECOMMUNICATIONMODULE_ToString(ezmax_api_definition__full_communicationGetCommunicationCountV1_eCommunicationModule_e ECOMMUNICATIONMODULE){
    char *ECOMMUNICATIONMODULEArray[] =  { "NULL", "Ezsignfolder" };
    return ECOMMUNICATIONMODULEArray[ECOMMUNICATIONMODULE];
}

static ezmax_api_definition__full_communicationGetCommunicationCountV1_eCommunicationModule_e communicationGetCommunicationCountV1_ECOMMUNICATIONMODULE_FromString(char* ECOMMUNICATIONMODULE){
    int stringToReturn = 0;
    char *ECOMMUNICATIONMODULEArray[] =  { "NULL", "Ezsignfolder" };
    size_t sizeofArray = sizeof(ECOMMUNICATIONMODULEArray) / sizeof(ECOMMUNICATIONMODULEArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(ECOMMUNICATIONMODULE, ECOMMUNICATIONMODULEArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function communicationGetCommunicationCountV1_ECOMMUNICATIONMODULE_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *communicationGetCommunicationCountV1_ECOMMUNICATIONMODULE_convertToJSON(ezmax_api_definition__full_communicationGetCommunicationCountV1_eCommunicationModule_e ECOMMUNICATIONMODULE) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "eCommunicationModule", communicationGetCommunicationCountV1_ECOMMUNICATIONMODULE_ToString(ECOMMUNICATIONMODULE)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function communicationGetCommunicationCountV1_ECOMMUNICATIONMODULE_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_communicationGetCommunicationCountV1_eCommunicationModule_e communicationGetCommunicationCountV1_ECOMMUNICATIONMODULE_parseFromJSON(cJSON* ECOMMUNICATIONMODULEJSON) {
    ezmax_api_definition__full_communicationGetCommunicationCountV1_eCommunicationModule_e ECOMMUNICATIONMODULEVariable = 0;
    cJSON *ECOMMUNICATIONMODULEVar = cJSON_GetObjectItemCaseSensitive(ECOMMUNICATIONMODULEJSON, "eCommunicationModule");
    if(!cJSON_IsString(ECOMMUNICATIONMODULEVar) || (ECOMMUNICATIONMODULEVar->valuestring == NULL))
    {
        goto end;
    }
    ECOMMUNICATIONMODULEVariable = communicationGetCommunicationCountV1_ECOMMUNICATIONMODULE_FromString(ECOMMUNICATIONMODULEVar->valuestring);
    return ECOMMUNICATIONMODULEVariable;
end:
    return 0;
}
*/

// Functions for enum ECOMMUNICATIONMODULE for ModuleCommunicationAPI_communicationGetCommunicationListV1

static char* communicationGetCommunicationListV1_ECOMMUNICATIONMODULE_ToString(ezmax_api_definition__full_communicationGetCommunicationListV1_eCommunicationModule_e ECOMMUNICATIONMODULE){
    char *ECOMMUNICATIONMODULEArray[] =  { "NULL", "Ezsignfolder" };
    return ECOMMUNICATIONMODULEArray[ECOMMUNICATIONMODULE];
}

static ezmax_api_definition__full_communicationGetCommunicationListV1_eCommunicationModule_e communicationGetCommunicationListV1_ECOMMUNICATIONMODULE_FromString(char* ECOMMUNICATIONMODULE){
    int stringToReturn = 0;
    char *ECOMMUNICATIONMODULEArray[] =  { "NULL", "Ezsignfolder" };
    size_t sizeofArray = sizeof(ECOMMUNICATIONMODULEArray) / sizeof(ECOMMUNICATIONMODULEArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(ECOMMUNICATIONMODULE, ECOMMUNICATIONMODULEArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function communicationGetCommunicationListV1_ECOMMUNICATIONMODULE_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *communicationGetCommunicationListV1_ECOMMUNICATIONMODULE_convertToJSON(ezmax_api_definition__full_communicationGetCommunicationListV1_eCommunicationModule_e ECOMMUNICATIONMODULE) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "eCommunicationModule", communicationGetCommunicationListV1_ECOMMUNICATIONMODULE_ToString(ECOMMUNICATIONMODULE)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function communicationGetCommunicationListV1_ECOMMUNICATIONMODULE_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_communicationGetCommunicationListV1_eCommunicationModule_e communicationGetCommunicationListV1_ECOMMUNICATIONMODULE_parseFromJSON(cJSON* ECOMMUNICATIONMODULEJSON) {
    ezmax_api_definition__full_communicationGetCommunicationListV1_eCommunicationModule_e ECOMMUNICATIONMODULEVariable = 0;
    cJSON *ECOMMUNICATIONMODULEVar = cJSON_GetObjectItemCaseSensitive(ECOMMUNICATIONMODULEJSON, "eCommunicationModule");
    if(!cJSON_IsString(ECOMMUNICATIONMODULEVar) || (ECOMMUNICATIONMODULEVar->valuestring == NULL))
    {
        goto end;
    }
    ECOMMUNICATIONMODULEVariable = communicationGetCommunicationListV1_ECOMMUNICATIONMODULE_FromString(ECOMMUNICATIONMODULEVar->valuestring);
    return ECOMMUNICATIONMODULEVariable;
end:
    return 0;
}
*/


// Get the number of communication
//
// Get the number of communication in specified module
//
communication_get_count_v1_response_t*
ModuleCommunicationAPI_communicationGetCommunicationCountV1(apiClient_t *apiClient, ezmax_api_definition__full_communicationGetCommunicationCountV1_eCommunicationModule_e eCommunicationModule , int pkiEzsignfolderID )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/module/communication/getCommunicationCount")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/module/communication/getCommunicationCount");




    // query parameters
    char *keyQuery_eCommunicationModule = NULL;
    ezmax_api_definition__full_communicationGetCommunicationCountV1_eCommunicationModule_e valueQuery_eCommunicationModule ;
    keyValuePair_t *keyPairQuery_eCommunicationModule = 0;
    if (eCommunicationModule)
    {
        keyQuery_eCommunicationModule = strdup("eCommunicationModule");
        valueQuery_eCommunicationModule = (eCommunicationModule);
        keyPairQuery_eCommunicationModule = keyValuePair_create(keyQuery_eCommunicationModule, (void *)strdup(communicationGetCommunicationCountV1_ECOMMUNICATIONMODULE_ToString(
		valueQuery_eCommunicationModule)));
        list_addElement(localVarQueryParameters,keyPairQuery_eCommunicationModule);
    }

    // query parameters
    char *keyQuery_pkiEzsignfolderID = NULL;
    char * valueQuery_pkiEzsignfolderID = NULL;
    keyValuePair_t *keyPairQuery_pkiEzsignfolderID = 0;
    if (pkiEzsignfolderID)
    {
        keyQuery_pkiEzsignfolderID = strdup("pkiEzsignfolderID");
        valueQuery_pkiEzsignfolderID = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_pkiEzsignfolderID, MAX_NUMBER_LENGTH, "%d", pkiEzsignfolderID);
        keyPairQuery_pkiEzsignfolderID = keyValuePair_create(keyQuery_pkiEzsignfolderID, valueQuery_pkiEzsignfolderID);
        list_addElement(localVarQueryParameters,keyPairQuery_pkiEzsignfolderID);
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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    cJSON *ModuleCommunicationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    communication_get_count_v1_response_t *elementToReturn = communication_get_count_v1_response_parseFromJSON(ModuleCommunicationAPIlocalVarJSON);
    cJSON_Delete(ModuleCommunicationAPIlocalVarJSON);
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
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_eCommunicationModule){
        free(keyQuery_eCommunicationModule);
        keyQuery_eCommunicationModule = NULL;
    }
    if(keyPairQuery_eCommunicationModule){
        keyValuePair_free(keyPairQuery_eCommunicationModule);
        keyPairQuery_eCommunicationModule = NULL;
    }
    if(keyQuery_pkiEzsignfolderID){
        free(keyQuery_pkiEzsignfolderID);
        keyQuery_pkiEzsignfolderID = NULL;
    }
    if(valueQuery_pkiEzsignfolderID){
        free(valueQuery_pkiEzsignfolderID);
        valueQuery_pkiEzsignfolderID = NULL;
    }
    if(keyPairQuery_pkiEzsignfolderID){
        keyValuePair_free(keyPairQuery_pkiEzsignfolderID);
        keyPairQuery_pkiEzsignfolderID = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve communication list
//
// Retrieve communication list
//
communication_get_list_v1_response_t*
ModuleCommunicationAPI_communicationGetCommunicationListV1(apiClient_t *apiClient, ezmax_api_definition__full_communicationGetCommunicationListV1_eCommunicationModule_e eCommunicationModule , int pkiEzsignfolderID )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/module/communication/getCommunicationList")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/module/communication/getCommunicationList");




    // query parameters
    char *keyQuery_eCommunicationModule = NULL;
    ezmax_api_definition__full_communicationGetCommunicationListV1_eCommunicationModule_e valueQuery_eCommunicationModule ;
    keyValuePair_t *keyPairQuery_eCommunicationModule = 0;
    if (eCommunicationModule)
    {
        keyQuery_eCommunicationModule = strdup("eCommunicationModule");
        valueQuery_eCommunicationModule = (eCommunicationModule);
        keyPairQuery_eCommunicationModule = keyValuePair_create(keyQuery_eCommunicationModule, (void *)strdup(communicationGetCommunicationListV1_ECOMMUNICATIONMODULE_ToString(
		valueQuery_eCommunicationModule)));
        list_addElement(localVarQueryParameters,keyPairQuery_eCommunicationModule);
    }

    // query parameters
    char *keyQuery_pkiEzsignfolderID = NULL;
    char * valueQuery_pkiEzsignfolderID = NULL;
    keyValuePair_t *keyPairQuery_pkiEzsignfolderID = 0;
    if (pkiEzsignfolderID)
    {
        keyQuery_pkiEzsignfolderID = strdup("pkiEzsignfolderID");
        valueQuery_pkiEzsignfolderID = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_pkiEzsignfolderID, MAX_NUMBER_LENGTH, "%d", pkiEzsignfolderID);
        keyPairQuery_pkiEzsignfolderID = keyValuePair_create(keyQuery_pkiEzsignfolderID, valueQuery_pkiEzsignfolderID);
        list_addElement(localVarQueryParameters,keyPairQuery_pkiEzsignfolderID);
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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    cJSON *ModuleCommunicationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    communication_get_list_v1_response_t *elementToReturn = communication_get_list_v1_response_parseFromJSON(ModuleCommunicationAPIlocalVarJSON);
    cJSON_Delete(ModuleCommunicationAPIlocalVarJSON);
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
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_eCommunicationModule){
        free(keyQuery_eCommunicationModule);
        keyQuery_eCommunicationModule = NULL;
    }
    if(keyPairQuery_eCommunicationModule){
        keyValuePair_free(keyPairQuery_eCommunicationModule);
        keyPairQuery_eCommunicationModule = NULL;
    }
    if(keyQuery_pkiEzsignfolderID){
        free(keyQuery_pkiEzsignfolderID);
        keyQuery_pkiEzsignfolderID = NULL;
    }
    if(valueQuery_pkiEzsignfolderID){
        free(valueQuery_pkiEzsignfolderID);
        valueQuery_pkiEzsignfolderID = NULL;
    }
    if(keyPairQuery_pkiEzsignfolderID){
        keyValuePair_free(keyPairQuery_pkiEzsignfolderID);
        keyPairQuery_pkiEzsignfolderID = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

