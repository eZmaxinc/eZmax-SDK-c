#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectSystemconfigurationAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Edit an existing Systemconfiguration
//
// 
//
common_response_t*
ObjectSystemconfigurationAPI_systemconfigurationEditObjectV1(apiClient_t *apiClient, int *pkiSystemconfigurationID, systemconfiguration_edit_object_v1_request_t *systemconfiguration_edit_object_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/systemconfiguration/{pkiSystemconfigurationID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/systemconfiguration/{pkiSystemconfigurationID}");


    // Path Params
    long sizeOfPathParams_pkiSystemconfigurationID =  + strlen("{ pkiSystemconfigurationID }");
    if(pkiSystemconfigurationID == 0){
        goto end;
    }
    char* localVarToReplace_pkiSystemconfigurationID = malloc(sizeOfPathParams_pkiSystemconfigurationID);
    snprintf(localVarToReplace_pkiSystemconfigurationID, sizeOfPathParams_pkiSystemconfigurationID, "{%s}", "pkiSystemconfigurationID");

    char localVarBuff_pkiSystemconfigurationID[256];
    intToStr(localVarBuff_pkiSystemconfigurationID, *pkiSystemconfigurationID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiSystemconfigurationID, localVarBuff_pkiSystemconfigurationID);




    // Body Param
    cJSON *localVarSingleItemJSON_systemconfiguration_edit_object_v1_request = NULL;
    if (systemconfiguration_edit_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_systemconfiguration_edit_object_v1_request = systemconfiguration_edit_object_v1_request_convertToJSON(systemconfiguration_edit_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_systemconfiguration_edit_object_v1_request);
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
    cJSON *ObjectSystemconfigurationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    common_response_t *elementToReturn = common_response_parseFromJSON(ObjectSystemconfigurationAPIlocalVarJSON);
    cJSON_Delete(ObjectSystemconfigurationAPIlocalVarJSON);
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
    free(localVarToReplace_pkiSystemconfigurationID);
    if (localVarSingleItemJSON_systemconfiguration_edit_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_systemconfiguration_edit_object_v1_request);
        localVarSingleItemJSON_systemconfiguration_edit_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Systemconfiguration
//
// 
//
systemconfiguration_get_object_v2_response_t*
ObjectSystemconfigurationAPI_systemconfigurationGetObjectV2(apiClient_t *apiClient, int *pkiSystemconfigurationID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/2/object/systemconfiguration/{pkiSystemconfigurationID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/2/object/systemconfiguration/{pkiSystemconfigurationID}");


    // Path Params
    long sizeOfPathParams_pkiSystemconfigurationID =  + strlen("{ pkiSystemconfigurationID }");
    if(pkiSystemconfigurationID == 0){
        goto end;
    }
    char* localVarToReplace_pkiSystemconfigurationID = malloc(sizeOfPathParams_pkiSystemconfigurationID);
    snprintf(localVarToReplace_pkiSystemconfigurationID, sizeOfPathParams_pkiSystemconfigurationID, "{%s}", "pkiSystemconfigurationID");

    char localVarBuff_pkiSystemconfigurationID[256];
    intToStr(localVarBuff_pkiSystemconfigurationID, *pkiSystemconfigurationID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiSystemconfigurationID, localVarBuff_pkiSystemconfigurationID);



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
    cJSON *ObjectSystemconfigurationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    systemconfiguration_get_object_v2_response_t *elementToReturn = systemconfiguration_get_object_v2_response_parseFromJSON(ObjectSystemconfigurationAPIlocalVarJSON);
    cJSON_Delete(ObjectSystemconfigurationAPIlocalVarJSON);
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
    free(localVarToReplace_pkiSystemconfigurationID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

