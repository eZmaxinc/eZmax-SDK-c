#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzmaxcaseAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Patch an existing Ezmaxcase
//
// 
//
ezmaxcase_patch_object_v1_response_t*
ObjectEzmaxcaseAPI_ezmaxcasePatchObjectV1(apiClient_t *apiClient, int *pkiEzmaxcaseID, ezmaxcase_patch_object_v1_request_t *ezmaxcase_patch_object_v1_request)
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
    char *localVarPath = strdup("/1/object/ezmaxcase/{pkiEzmaxcaseID}");



    // Path Params
    long sizeOfPathParams_pkiEzmaxcaseID =  + sizeof("{ pkiEzmaxcaseID }") - 1;
    if(pkiEzmaxcaseID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzmaxcaseID = malloc(sizeOfPathParams_pkiEzmaxcaseID);
    snprintf(localVarToReplace_pkiEzmaxcaseID, sizeOfPathParams_pkiEzmaxcaseID, "{%s}", "pkiEzmaxcaseID");

    char localVarBuff_pkiEzmaxcaseID[256];
    snprintf(localVarBuff_pkiEzmaxcaseID, sizeof localVarBuff_pkiEzmaxcaseID, "%ld", (long)*pkiEzmaxcaseID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzmaxcaseID, localVarBuff_pkiEzmaxcaseID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezmaxcase_patch_object_v1_request = NULL;
    if (ezmaxcase_patch_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezmaxcase_patch_object_v1_request = ezmaxcase_patch_object_v1_request_convertToJSON(ezmaxcase_patch_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezmaxcase_patch_object_v1_request);
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
                    "PATCH");

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
    ezmaxcase_patch_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzmaxcaseAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezmaxcase_patch_object_v1_response_parseFromJSON(ObjectEzmaxcaseAPIlocalVarJSON);
        cJSON_Delete(ObjectEzmaxcaseAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzmaxcaseID);
    if (localVarSingleItemJSON_ezmaxcase_patch_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezmaxcase_patch_object_v1_request);
        localVarSingleItemJSON_ezmaxcase_patch_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

