#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectUsergroupmembershipAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Create a new Usergroupmembership
//
// The endpoint allows to create one or many elements at once.
//
usergroupmembership_create_object_v1_response_t*
ObjectUsergroupmembershipAPI_usergroupmembershipCreateObjectV1(apiClient_t *apiClient, usergroupmembership_create_object_v1_request_t *usergroupmembership_create_object_v1_request)
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
    char *localVarPath = strdup("/1/object/usergroupmembership");





    // Body Param
    cJSON *localVarSingleItemJSON_usergroupmembership_create_object_v1_request = NULL;
    if (usergroupmembership_create_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_usergroupmembership_create_object_v1_request = usergroupmembership_create_object_v1_request_convertToJSON(usergroupmembership_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_usergroupmembership_create_object_v1_request);
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
    usergroupmembership_create_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectUsergroupmembershipAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = usergroupmembership_create_object_v1_response_parseFromJSON(ObjectUsergroupmembershipAPIlocalVarJSON);
        cJSON_Delete(ObjectUsergroupmembershipAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_usergroupmembership_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_usergroupmembership_create_object_v1_request);
        localVarSingleItemJSON_usergroupmembership_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an existing Usergroupmembership
//
// 
//
usergroupmembership_delete_object_v1_response_t*
ObjectUsergroupmembershipAPI_usergroupmembershipDeleteObjectV1(apiClient_t *apiClient, int *pkiUsergroupmembershipID)
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
    char *localVarPath = strdup("/1/object/usergroupmembership/{pkiUsergroupmembershipID}");



    // Path Params
    long sizeOfPathParams_pkiUsergroupmembershipID =  + sizeof("{ pkiUsergroupmembershipID }") - 1;
    if(pkiUsergroupmembershipID == 0){
        goto end;
    }
    char* localVarToReplace_pkiUsergroupmembershipID = malloc(sizeOfPathParams_pkiUsergroupmembershipID);
    snprintf(localVarToReplace_pkiUsergroupmembershipID, sizeOfPathParams_pkiUsergroupmembershipID, "{%s}", "pkiUsergroupmembershipID");

    char localVarBuff_pkiUsergroupmembershipID[256];
    snprintf(localVarBuff_pkiUsergroupmembershipID, sizeof localVarBuff_pkiUsergroupmembershipID, "%ld", (long)*pkiUsergroupmembershipID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiUsergroupmembershipID, localVarBuff_pkiUsergroupmembershipID);



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
    usergroupmembership_delete_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectUsergroupmembershipAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = usergroupmembership_delete_object_v1_response_parseFromJSON(ObjectUsergroupmembershipAPIlocalVarJSON);
        cJSON_Delete(ObjectUsergroupmembershipAPIlocalVarJSON);
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
    free(localVarToReplace_pkiUsergroupmembershipID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Edit an existing Usergroupmembership
//
// 
//
usergroupmembership_edit_object_v1_response_t*
ObjectUsergroupmembershipAPI_usergroupmembershipEditObjectV1(apiClient_t *apiClient, int *pkiUsergroupmembershipID, usergroupmembership_edit_object_v1_request_t *usergroupmembership_edit_object_v1_request)
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
    char *localVarPath = strdup("/1/object/usergroupmembership/{pkiUsergroupmembershipID}");



    // Path Params
    long sizeOfPathParams_pkiUsergroupmembershipID =  + sizeof("{ pkiUsergroupmembershipID }") - 1;
    if(pkiUsergroupmembershipID == 0){
        goto end;
    }
    char* localVarToReplace_pkiUsergroupmembershipID = malloc(sizeOfPathParams_pkiUsergroupmembershipID);
    snprintf(localVarToReplace_pkiUsergroupmembershipID, sizeOfPathParams_pkiUsergroupmembershipID, "{%s}", "pkiUsergroupmembershipID");

    char localVarBuff_pkiUsergroupmembershipID[256];
    snprintf(localVarBuff_pkiUsergroupmembershipID, sizeof localVarBuff_pkiUsergroupmembershipID, "%ld", (long)*pkiUsergroupmembershipID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiUsergroupmembershipID, localVarBuff_pkiUsergroupmembershipID);




    // Body Param
    cJSON *localVarSingleItemJSON_usergroupmembership_edit_object_v1_request = NULL;
    if (usergroupmembership_edit_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_usergroupmembership_edit_object_v1_request = usergroupmembership_edit_object_v1_request_convertToJSON(usergroupmembership_edit_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_usergroupmembership_edit_object_v1_request);
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
    usergroupmembership_edit_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectUsergroupmembershipAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = usergroupmembership_edit_object_v1_response_parseFromJSON(ObjectUsergroupmembershipAPIlocalVarJSON);
        cJSON_Delete(ObjectUsergroupmembershipAPIlocalVarJSON);
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
    free(localVarToReplace_pkiUsergroupmembershipID);
    if (localVarSingleItemJSON_usergroupmembership_edit_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_usergroupmembership_edit_object_v1_request);
        localVarSingleItemJSON_usergroupmembership_edit_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Usergroupmembership
//
// 
//
usergroupmembership_get_object_v2_response_t*
ObjectUsergroupmembershipAPI_usergroupmembershipGetObjectV2(apiClient_t *apiClient, int *pkiUsergroupmembershipID)
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
    char *localVarPath = strdup("/2/object/usergroupmembership/{pkiUsergroupmembershipID}");



    // Path Params
    long sizeOfPathParams_pkiUsergroupmembershipID =  + sizeof("{ pkiUsergroupmembershipID }") - 1;
    if(pkiUsergroupmembershipID == 0){
        goto end;
    }
    char* localVarToReplace_pkiUsergroupmembershipID = malloc(sizeOfPathParams_pkiUsergroupmembershipID);
    snprintf(localVarToReplace_pkiUsergroupmembershipID, sizeOfPathParams_pkiUsergroupmembershipID, "{%s}", "pkiUsergroupmembershipID");

    char localVarBuff_pkiUsergroupmembershipID[256];
    snprintf(localVarBuff_pkiUsergroupmembershipID, sizeof localVarBuff_pkiUsergroupmembershipID, "%ld", (long)*pkiUsergroupmembershipID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiUsergroupmembershipID, localVarBuff_pkiUsergroupmembershipID);



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
    usergroupmembership_get_object_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectUsergroupmembershipAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = usergroupmembership_get_object_v2_response_parseFromJSON(ObjectUsergroupmembershipAPIlocalVarJSON);
        cJSON_Delete(ObjectUsergroupmembershipAPIlocalVarJSON);
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
    free(localVarToReplace_pkiUsergroupmembershipID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

