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

// Functions for enum ECOMMUNICATIONOBJECTTYPE for ModuleCommunicationAPI_communicationGetCommunicationCountV1

static char* communicationGetCommunicationCountV1_ECOMMUNICATIONOBJECTTYPE_ToString(ezmax_api_definition__full_communicationGetCommunicationCountV1_eCommunicationObjecttype_e ECOMMUNICATIONOBJECTTYPE){
    char *ECOMMUNICATIONOBJECTTYPEArray[] =  { "NULL", "Ezsignfolder" };
    return ECOMMUNICATIONOBJECTTYPEArray[ECOMMUNICATIONOBJECTTYPE];
}

static ezmax_api_definition__full_communicationGetCommunicationCountV1_eCommunicationObjecttype_e communicationGetCommunicationCountV1_ECOMMUNICATIONOBJECTTYPE_FromString(char* ECOMMUNICATIONOBJECTTYPE){
    int stringToReturn = 0;
    char *ECOMMUNICATIONOBJECTTYPEArray[] =  { "NULL", "Ezsignfolder" };
    size_t sizeofArray = sizeof(ECOMMUNICATIONOBJECTTYPEArray) / sizeof(ECOMMUNICATIONOBJECTTYPEArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(ECOMMUNICATIONOBJECTTYPE, ECOMMUNICATIONOBJECTTYPEArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function communicationGetCommunicationCountV1_ECOMMUNICATIONOBJECTTYPE_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *communicationGetCommunicationCountV1_ECOMMUNICATIONOBJECTTYPE_convertToJSON(ezmax_api_definition__full_communicationGetCommunicationCountV1_eCommunicationObjecttype_e ECOMMUNICATIONOBJECTTYPE) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "eCommunicationObjecttype", communicationGetCommunicationCountV1_ECOMMUNICATIONOBJECTTYPE_ToString(ECOMMUNICATIONOBJECTTYPE)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function communicationGetCommunicationCountV1_ECOMMUNICATIONOBJECTTYPE_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_communicationGetCommunicationCountV1_eCommunicationObjecttype_e communicationGetCommunicationCountV1_ECOMMUNICATIONOBJECTTYPE_parseFromJSON(cJSON* ECOMMUNICATIONOBJECTTYPEJSON) {
    ezmax_api_definition__full_communicationGetCommunicationCountV1_eCommunicationObjecttype_e ECOMMUNICATIONOBJECTTYPEVariable = 0;
    cJSON *ECOMMUNICATIONOBJECTTYPEVar = cJSON_GetObjectItemCaseSensitive(ECOMMUNICATIONOBJECTTYPEJSON, "eCommunicationObjecttype");
    if(!cJSON_IsString(ECOMMUNICATIONOBJECTTYPEVar) || (ECOMMUNICATIONOBJECTTYPEVar->valuestring == NULL))
    {
        goto end;
    }
    ECOMMUNICATIONOBJECTTYPEVariable = communicationGetCommunicationCountV1_ECOMMUNICATIONOBJECTTYPE_FromString(ECOMMUNICATIONOBJECTTYPEVar->valuestring);
    return ECOMMUNICATIONOBJECTTYPEVariable;
end:
    return 0;
}
*/


// Retrieve Communication count
//
// 
//
communication_get_count_v1_response_t*
ModuleCommunicationAPI_communicationGetCommunicationCountV1(apiClient_t *apiClient, ezmax_api_definition__full_communicationGetCommunicationCountV1_eCommunicationObjecttype_e eCommunicationObjecttype , int pkiEzsignfolderID )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/module/communication/getCount")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/module/communication/getCount");




    // query parameters
    char *keyQuery_eCommunicationObjecttype = NULL;
    ezmax_api_definition__full_communicationGetCommunicationCountV1_eCommunicationObjecttype_e valueQuery_eCommunicationObjecttype ;
    keyValuePair_t *keyPairQuery_eCommunicationObjecttype = 0;
    if (eCommunicationObjecttype)
    {
        keyQuery_eCommunicationObjecttype = strdup("eCommunicationObjecttype");
        valueQuery_eCommunicationObjecttype = (eCommunicationObjecttype);
        keyPairQuery_eCommunicationObjecttype = keyValuePair_create(keyQuery_eCommunicationObjecttype, (void *)strdup(communicationGetCommunicationCountV1_ECOMMUNICATIONOBJECTTYPE_ToString(
		valueQuery_eCommunicationObjecttype)));
        list_addElement(localVarQueryParameters,keyPairQuery_eCommunicationObjecttype);
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
    if(keyQuery_eCommunicationObjecttype){
        free(keyQuery_eCommunicationObjecttype);
        keyQuery_eCommunicationObjecttype = NULL;
    }
    if(keyPairQuery_eCommunicationObjecttype){
        keyValuePair_free(keyPairQuery_eCommunicationObjecttype);
        keyPairQuery_eCommunicationObjecttype = NULL;
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

