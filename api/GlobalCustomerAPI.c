#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "GlobalCustomerAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096

// Functions for enum SINFRASTRUCTUREPRODUCTCODE for GlobalCustomerAPI_globalCustomerGetEndpointV1

static char* globalCustomerGetEndpointV1_SINFRASTRUCTUREPRODUCTCODE_ToString(ezmax_api_definition__full_globalCustomerGetEndpointV1_sInfrastructureproductCode_e SINFRASTRUCTUREPRODUCTCODE){
    char *SINFRASTRUCTUREPRODUCTCODEArray[] =  { "NULL", "appcluster01", "ezsignuser" };
    return SINFRASTRUCTUREPRODUCTCODEArray[SINFRASTRUCTUREPRODUCTCODE];
}

static ezmax_api_definition__full_globalCustomerGetEndpointV1_sInfrastructureproductCode_e globalCustomerGetEndpointV1_SINFRASTRUCTUREPRODUCTCODE_FromString(char* SINFRASTRUCTUREPRODUCTCODE){
    int stringToReturn = 0;
    char *SINFRASTRUCTUREPRODUCTCODEArray[] =  { "NULL", "appcluster01", "ezsignuser" };
    size_t sizeofArray = sizeof(SINFRASTRUCTUREPRODUCTCODEArray) / sizeof(SINFRASTRUCTUREPRODUCTCODEArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(SINFRASTRUCTUREPRODUCTCODE, SINFRASTRUCTUREPRODUCTCODEArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function globalCustomerGetEndpointV1_SINFRASTRUCTUREPRODUCTCODE_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *globalCustomerGetEndpointV1_SINFRASTRUCTUREPRODUCTCODE_convertToJSON(ezmax_api_definition__full_globalCustomerGetEndpointV1_sInfrastructureproductCode_e SINFRASTRUCTUREPRODUCTCODE) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "sInfrastructureproductCode", globalCustomerGetEndpointV1_SINFRASTRUCTUREPRODUCTCODE_ToString(SINFRASTRUCTUREPRODUCTCODE)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function globalCustomerGetEndpointV1_SINFRASTRUCTUREPRODUCTCODE_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_globalCustomerGetEndpointV1_sInfrastructureproductCode_e globalCustomerGetEndpointV1_SINFRASTRUCTUREPRODUCTCODE_parseFromJSON(cJSON* SINFRASTRUCTUREPRODUCTCODEJSON) {
    ezmax_api_definition__full_globalCustomerGetEndpointV1_sInfrastructureproductCode_e SINFRASTRUCTUREPRODUCTCODEVariable = 0;
    cJSON *SINFRASTRUCTUREPRODUCTCODEVar = cJSON_GetObjectItemCaseSensitive(SINFRASTRUCTUREPRODUCTCODEJSON, "sInfrastructureproductCode");
    if(!cJSON_IsString(SINFRASTRUCTUREPRODUCTCODEVar) || (SINFRASTRUCTUREPRODUCTCODEVar->valuestring == NULL))
    {
        goto end;
    }
    SINFRASTRUCTUREPRODUCTCODEVariable = globalCustomerGetEndpointV1_SINFRASTRUCTUREPRODUCTCODE_FromString(SINFRASTRUCTUREPRODUCTCODEVar->valuestring);
    return SINFRASTRUCTUREPRODUCTCODEVariable;
end:
    return 0;
}
*/


// Get customer endpoint
//
// Retrieve the customer's specific server endpoint where to send requests. This will help locate the proper region (ie: sInfrastructureregionCode) and the proper environment (ie: sInfrastructureenvironmenttypeDescription) where the customer's data is stored.
//
global_customer_get_endpoint_v1_response_t*
GlobalCustomerAPI_globalCustomerGetEndpointV1(apiClient_t *apiClient, char *pksCustomerCode, ezmax_api_definition__full_globalCustomerGetEndpointV1_sInfrastructureproductCode_e sInfrastructureproductCode)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/1/customer/{pksCustomerCode}/endpoint");

    if(!pksCustomerCode)
        goto end;


    // Path Params
    long sizeOfPathParams_pksCustomerCode = strlen(pksCustomerCode)+3 + sizeof("{ pksCustomerCode }") - 1;
    if(pksCustomerCode == NULL) {
        goto end;
    }
    char* localVarToReplace_pksCustomerCode = malloc(sizeOfPathParams_pksCustomerCode);
    sprintf(localVarToReplace_pksCustomerCode, "{%s}", "pksCustomerCode");

    localVarPath = strReplace(localVarPath, localVarToReplace_pksCustomerCode, pksCustomerCode);



    // query parameters
    char *keyQuery_sInfrastructureproductCode = NULL;
    ezmax_api_definition__full_globalCustomerGetEndpointV1_sInfrastructureproductCode_e valueQuery_sInfrastructureproductCode ;
    keyValuePair_t *keyPairQuery_sInfrastructureproductCode = 0;
    if (sInfrastructureproductCode)
    {
        keyQuery_sInfrastructureproductCode = strdup("sInfrastructureproductCode");
        valueQuery_sInfrastructureproductCode = (sInfrastructureproductCode);
        keyPairQuery_sInfrastructureproductCode = keyValuePair_create(keyQuery_sInfrastructureproductCode, strdup(globalCustomerGetEndpointV1_SINFRASTRUCTUREPRODUCTCODE_ToString(
        valueQuery_sInfrastructureproductCode)));
        list_addElement(localVarQueryParameters,keyPairQuery_sInfrastructureproductCode);
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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    global_customer_get_endpoint_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *GlobalCustomerAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = global_customer_get_endpoint_v1_response_parseFromJSON(GlobalCustomerAPIlocalVarJSON);
        cJSON_Delete(GlobalCustomerAPIlocalVarJSON);
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
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_pksCustomerCode);
    if(keyQuery_sInfrastructureproductCode){
        free(keyQuery_sInfrastructureproductCode);
        keyQuery_sInfrastructureproductCode = NULL;
    }
    if(keyPairQuery_sInfrastructureproductCode){
        keyValuePair_free(keyPairQuery_sInfrastructureproductCode);
        keyPairQuery_sInfrastructureproductCode = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

