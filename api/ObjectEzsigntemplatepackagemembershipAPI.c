#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzsigntemplatepackagemembershipAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Create a new Ezsigntemplatepackagemembership
//
// The endpoint allows to create one or many elements at once.
//
ezsigntemplatepackagemembership_create_object_v1_response_t*
ObjectEzsigntemplatepackagemembershipAPI_ezsigntemplatepackagemembershipCreateObjectV1(apiClient_t *apiClient, ezsigntemplatepackagemembership_create_object_v1_request_t *ezsigntemplatepackagemembership_create_object_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsigntemplatepackagemembership");





    // Body Param
    cJSON *localVarSingleItemJSON_ezsigntemplatepackagemembership_create_object_v1_request = NULL;
    if (ezsigntemplatepackagemembership_create_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsigntemplatepackagemembership_create_object_v1_request = ezsigntemplatepackagemembership_create_object_v1_request_convertToJSON(ezsigntemplatepackagemembership_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigntemplatepackagemembership_create_object_v1_request);
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
    //if (apiClient->response_code == 201) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    ezsigntemplatepackagemembership_create_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigntemplatepackagemembershipAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigntemplatepackagemembership_create_object_v1_response_parseFromJSON(ObjectEzsigntemplatepackagemembershipAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigntemplatepackagemembershipAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_ezsigntemplatepackagemembership_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigntemplatepackagemembership_create_object_v1_request);
        localVarSingleItemJSON_ezsigntemplatepackagemembership_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an existing Ezsigntemplatepackagemembership
//
// 
//
ezsigntemplatepackagemembership_delete_object_v1_response_t*
ObjectEzsigntemplatepackagemembershipAPI_ezsigntemplatepackagemembershipDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplatepackagemembershipID)
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
    char *localVarPath = strdup("/1/object/ezsigntemplatepackagemembership/{pkiEzsigntemplatepackagemembershipID}");



    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatepackagemembershipID =  + sizeof("{ pkiEzsigntemplatepackagemembershipID }") - 1;
    if(pkiEzsigntemplatepackagemembershipID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatepackagemembershipID = malloc(sizeOfPathParams_pkiEzsigntemplatepackagemembershipID);
    snprintf(localVarToReplace_pkiEzsigntemplatepackagemembershipID, sizeOfPathParams_pkiEzsigntemplatepackagemembershipID, "{%s}", "pkiEzsigntemplatepackagemembershipID");

    char localVarBuff_pkiEzsigntemplatepackagemembershipID[256];
    snprintf(localVarBuff_pkiEzsigntemplatepackagemembershipID, sizeof localVarBuff_pkiEzsigntemplatepackagemembershipID, "%ld", (long)*pkiEzsigntemplatepackagemembershipID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplatepackagemembershipID, localVarBuff_pkiEzsigntemplatepackagemembershipID);



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
    ezsigntemplatepackagemembership_delete_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigntemplatepackagemembershipAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigntemplatepackagemembership_delete_object_v1_response_parseFromJSON(ObjectEzsigntemplatepackagemembershipAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigntemplatepackagemembershipAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatepackagemembershipID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsigntemplatepackagemembership
//
// 
//
ezsigntemplatepackagemembership_get_object_v2_response_t*
ObjectEzsigntemplatepackagemembershipAPI_ezsigntemplatepackagemembershipGetObjectV2(apiClient_t *apiClient, int *pkiEzsigntemplatepackagemembershipID)
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
    char *localVarPath = strdup("/2/object/ezsigntemplatepackagemembership/{pkiEzsigntemplatepackagemembershipID}");



    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatepackagemembershipID =  + sizeof("{ pkiEzsigntemplatepackagemembershipID }") - 1;
    if(pkiEzsigntemplatepackagemembershipID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatepackagemembershipID = malloc(sizeOfPathParams_pkiEzsigntemplatepackagemembershipID);
    snprintf(localVarToReplace_pkiEzsigntemplatepackagemembershipID, sizeOfPathParams_pkiEzsigntemplatepackagemembershipID, "{%s}", "pkiEzsigntemplatepackagemembershipID");

    char localVarBuff_pkiEzsigntemplatepackagemembershipID[256];
    snprintf(localVarBuff_pkiEzsigntemplatepackagemembershipID, sizeof localVarBuff_pkiEzsigntemplatepackagemembershipID, "%ld", (long)*pkiEzsigntemplatepackagemembershipID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplatepackagemembershipID, localVarBuff_pkiEzsigntemplatepackagemembershipID);



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
    ezsigntemplatepackagemembership_get_object_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsigntemplatepackagemembershipAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsigntemplatepackagemembership_get_object_v2_response_parseFromJSON(ObjectEzsigntemplatepackagemembershipAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsigntemplatepackagemembershipAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatepackagemembershipID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

