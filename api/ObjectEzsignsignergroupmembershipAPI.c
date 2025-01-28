#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzsignsignergroupmembershipAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Create a new Ezsignsignergroupmembership
//
// The endpoint allows to create one or many elements at once.
//
ezsignsignergroupmembership_create_object_v1_response_t*
ObjectEzsignsignergroupmembershipAPI_ezsignsignergroupmembershipCreateObjectV1(apiClient_t *apiClient, ezsignsignergroupmembership_create_object_v1_request_t *ezsignsignergroupmembership_create_object_v1_request)
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
    char *localVarPath = strdup("/1/object/ezsignsignergroupmembership");





    // Body Param
    cJSON *localVarSingleItemJSON_ezsignsignergroupmembership_create_object_v1_request = NULL;
    if (ezsignsignergroupmembership_create_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_ezsignsignergroupmembership_create_object_v1_request = ezsignsignergroupmembership_create_object_v1_request_convertToJSON(ezsignsignergroupmembership_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignsignergroupmembership_create_object_v1_request);
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
    //nonprimitive not container
    ezsignsignergroupmembership_create_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignsignergroupmembershipAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignsignergroupmembership_create_object_v1_response_parseFromJSON(ObjectEzsignsignergroupmembershipAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignsignergroupmembershipAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_ezsignsignergroupmembership_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignsignergroupmembership_create_object_v1_request);
        localVarSingleItemJSON_ezsignsignergroupmembership_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an existing Ezsignsignergroupmembership
//
// 
//
ezsignsignergroupmembership_delete_object_v1_response_t*
ObjectEzsignsignergroupmembershipAPI_ezsignsignergroupmembershipDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsignsignergroupmembershipID)
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
    char *localVarPath = strdup("/1/object/ezsignsignergroupmembership/{pkiEzsignsignergroupmembershipID}");



    // Path Params
    long sizeOfPathParams_pkiEzsignsignergroupmembershipID =  + sizeof("{ pkiEzsignsignergroupmembershipID }") - 1;
    if(pkiEzsignsignergroupmembershipID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignsignergroupmembershipID = malloc(sizeOfPathParams_pkiEzsignsignergroupmembershipID);
    snprintf(localVarToReplace_pkiEzsignsignergroupmembershipID, sizeOfPathParams_pkiEzsignsignergroupmembershipID, "{%s}", "pkiEzsignsignergroupmembershipID");

    char localVarBuff_pkiEzsignsignergroupmembershipID[256];
    snprintf(localVarBuff_pkiEzsignsignergroupmembershipID, sizeof localVarBuff_pkiEzsignsignergroupmembershipID, "%ld", (long)*pkiEzsignsignergroupmembershipID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignsignergroupmembershipID, localVarBuff_pkiEzsignsignergroupmembershipID);



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
    ezsignsignergroupmembership_delete_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignsignergroupmembershipAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignsignergroupmembership_delete_object_v1_response_parseFromJSON(ObjectEzsignsignergroupmembershipAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignsignergroupmembershipAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignsignergroupmembershipID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsignsignergroupmembership
//
// 
//
ezsignsignergroupmembership_get_object_v2_response_t*
ObjectEzsignsignergroupmembershipAPI_ezsignsignergroupmembershipGetObjectV2(apiClient_t *apiClient, int *pkiEzsignsignergroupmembershipID)
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
    char *localVarPath = strdup("/2/object/ezsignsignergroupmembership/{pkiEzsignsignergroupmembershipID}");



    // Path Params
    long sizeOfPathParams_pkiEzsignsignergroupmembershipID =  + sizeof("{ pkiEzsignsignergroupmembershipID }") - 1;
    if(pkiEzsignsignergroupmembershipID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignsignergroupmembershipID = malloc(sizeOfPathParams_pkiEzsignsignergroupmembershipID);
    snprintf(localVarToReplace_pkiEzsignsignergroupmembershipID, sizeOfPathParams_pkiEzsignsignergroupmembershipID, "{%s}", "pkiEzsignsignergroupmembershipID");

    char localVarBuff_pkiEzsignsignergroupmembershipID[256];
    snprintf(localVarBuff_pkiEzsignsignergroupmembershipID, sizeof localVarBuff_pkiEzsignsignergroupmembershipID, "%ld", (long)*pkiEzsignsignergroupmembershipID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignsignergroupmembershipID, localVarBuff_pkiEzsignsignergroupmembershipID);



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
    ezsignsignergroupmembership_get_object_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectEzsignsignergroupmembershipAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = ezsignsignergroupmembership_get_object_v2_response_parseFromJSON(ObjectEzsignsignergroupmembershipAPIlocalVarJSON);
        cJSON_Delete(ObjectEzsignsignergroupmembershipAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignsignergroupmembershipID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

