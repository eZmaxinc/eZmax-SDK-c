#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "ObjectEzmaxcustomerAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define MAX_NUMBER_LENGTH_LONG 21


// Patch an existing Ezmaxcustomer
//
// 
//
ezmaxcustomer_patch_object_v1_response_t*
ObjectEzmaxcustomerAPI_ezmaxcustomerPatchObjectV1(apiClient_t *apiClient, int *pkiEzmaxcustomerID, ezmaxcustomer_patch_object_v1_request_t *ezmaxcustomer_patch_object_v1_request)
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
    char *localVarPath = strdup("/1/object/ezmaxcustomer/{pkiEzmaxcustomerID}");



    // Path Params
    long sizeOfPathParams_pkiEzmaxcustomerID =  + sizeof("{ pkiEzmaxcustomerID }") - 1;
    if(pkiEzmaxcustomerID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzmaxcustomerID = malloc(sizeOfPathParams_pkiEzmaxcustomerID);
    snprintf(localVarToReplace_pkiEzmaxcustomerID, sizeOfPathParams_pkiEzmaxcustomerID, "{%s}", "pkiEzmaxcustomerID");

    char localVarBuff_pkiEzmaxcustomerID[256];
    snprintf(localVarBuff_pkiEzmaxcustomerID, sizeof localVarBuff_pkiEzmaxcustomerID, "%ld", (long)*pkiEzmaxcustomerID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzmaxcustomerID, localVarBuff_pkiEzmaxcustomerID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezmaxcustomer_patch_object_v1_request = NULL;
    if (ezmaxcustomer_patch_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezmaxcustomer_patch_object_v1_request = ezmaxcustomer_patch_object_v1_request_convertToJSON(ezmaxcustomer_patch_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezmaxcustomer_patch_object_v1_request);
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
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body.");
    //}
    //nonprimitive not container
    ezmaxcustomer_patch_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzmaxcustomerAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezmaxcustomer_patch_object_v1_response_parseFromJSON(ObjectEzmaxcustomerAPIlocalVarJSON);
        cJSON_Delete(ObjectEzmaxcustomerAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzmaxcustomerID);
    if (localVarSingleItemJSON_ezmaxcustomer_patch_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezmaxcustomer_patch_object_v1_request);
        localVarSingleItemJSON_ezmaxcustomer_patch_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

