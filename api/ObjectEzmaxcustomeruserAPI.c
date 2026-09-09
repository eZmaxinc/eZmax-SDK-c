#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "ObjectEzmaxcustomeruserAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define MAX_NUMBER_LENGTH_LONG 21


// Patch an existing Ezmaxcustomeruser
//
// 
//
ezmaxcustomeruser_patch_object_v1_response_t*
ObjectEzmaxcustomeruserAPI_ezmaxcustomeruserPatchObjectV1(apiClient_t *apiClient, int *pkiEzmaxcustomeruserID, ezmaxcustomeruser_patch_object_v1_request_t *ezmaxcustomeruser_patch_object_v1_request)
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
    char *localVarPath = strdup("/1/object/ezmaxcustomeruser/{pkiEzmaxcustomeruserID}");



    // Path Params
    long sizeOfPathParams_pkiEzmaxcustomeruserID =  + sizeof("{ pkiEzmaxcustomeruserID }") - 1;
    if(pkiEzmaxcustomeruserID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzmaxcustomeruserID = malloc(sizeOfPathParams_pkiEzmaxcustomeruserID);
    snprintf(localVarToReplace_pkiEzmaxcustomeruserID, sizeOfPathParams_pkiEzmaxcustomeruserID, "{%s}", "pkiEzmaxcustomeruserID");

    char localVarBuff_pkiEzmaxcustomeruserID[256];
    snprintf(localVarBuff_pkiEzmaxcustomeruserID, sizeof localVarBuff_pkiEzmaxcustomeruserID, "%ld", (long)*pkiEzmaxcustomeruserID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzmaxcustomeruserID, localVarBuff_pkiEzmaxcustomeruserID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezmaxcustomeruser_patch_object_v1_request = NULL;
    if (ezmaxcustomeruser_patch_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezmaxcustomeruser_patch_object_v1_request = ezmaxcustomeruser_patch_object_v1_request_convertToJSON(ezmaxcustomeruser_patch_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezmaxcustomeruser_patch_object_v1_request);
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
    ezmaxcustomeruser_patch_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzmaxcustomeruserAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezmaxcustomeruser_patch_object_v1_response_parseFromJSON(ObjectEzmaxcustomeruserAPIlocalVarJSON);
        cJSON_Delete(ObjectEzmaxcustomeruserAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzmaxcustomeruserID);
    if (localVarSingleItemJSON_ezmaxcustomeruser_patch_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezmaxcustomeruser_patch_object_v1_request);
        localVarSingleItemJSON_ezmaxcustomeruser_patch_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

