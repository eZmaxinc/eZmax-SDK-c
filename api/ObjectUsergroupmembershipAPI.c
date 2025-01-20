#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectUsergroupmembershipAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


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

    // create the path
    long sizeOfPath = strlen("/1/object/usergroupmembership")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/usergroupmembership");




    // Body Param
    cJSON *localVarSingleItemJSON_usergroupmembership_create_object_v1_request = NULL;
    if (usergroupmembership_create_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_usergroupmembership_create_object_v1_request = usergroupmembership_create_object_v1_request_convertToJSON(usergroupmembership_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_usergroupmembership_create_object_v1_request);
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
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 201) {
    //    printf("%s\n","Successful response");
    //}
    //nonprimitive not container
    cJSON *ObjectUsergroupmembershipAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    usergroupmembership_create_object_v1_response_t *elementToReturn = usergroupmembership_create_object_v1_response_parseFromJSON(ObjectUsergroupmembershipAPIlocalVarJSON);
    cJSON_Delete(ObjectUsergroupmembershipAPIlocalVarJSON);
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
common_response_t*
ObjectUsergroupmembershipAPI_usergroupmembershipDeleteObjectV1(apiClient_t *apiClient, int *pkiUsergroupmembershipID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/usergroupmembership/{pkiUsergroupmembershipID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/usergroupmembership/{pkiUsergroupmembershipID}");


    // Path Params
    long sizeOfPathParams_pkiUsergroupmembershipID =  + strlen("{ pkiUsergroupmembershipID }");
    if(pkiUsergroupmembershipID == 0){
        goto end;
    }
    char* localVarToReplace_pkiUsergroupmembershipID = malloc(sizeOfPathParams_pkiUsergroupmembershipID);
    snprintf(localVarToReplace_pkiUsergroupmembershipID, sizeOfPathParams_pkiUsergroupmembershipID, "{%s}", "pkiUsergroupmembershipID");

    char localVarBuff_pkiUsergroupmembershipID[256];
    intToStr(localVarBuff_pkiUsergroupmembershipID, *pkiUsergroupmembershipID);

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
    cJSON *ObjectUsergroupmembershipAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    common_response_t *elementToReturn = common_response_parseFromJSON(ObjectUsergroupmembershipAPIlocalVarJSON);
    cJSON_Delete(ObjectUsergroupmembershipAPIlocalVarJSON);
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
common_response_t*
ObjectUsergroupmembershipAPI_usergroupmembershipEditObjectV1(apiClient_t *apiClient, int *pkiUsergroupmembershipID, usergroupmembership_edit_object_v1_request_t *usergroupmembership_edit_object_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/usergroupmembership/{pkiUsergroupmembershipID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/usergroupmembership/{pkiUsergroupmembershipID}");


    // Path Params
    long sizeOfPathParams_pkiUsergroupmembershipID =  + strlen("{ pkiUsergroupmembershipID }");
    if(pkiUsergroupmembershipID == 0){
        goto end;
    }
    char* localVarToReplace_pkiUsergroupmembershipID = malloc(sizeOfPathParams_pkiUsergroupmembershipID);
    snprintf(localVarToReplace_pkiUsergroupmembershipID, sizeOfPathParams_pkiUsergroupmembershipID, "{%s}", "pkiUsergroupmembershipID");

    char localVarBuff_pkiUsergroupmembershipID[256];
    intToStr(localVarBuff_pkiUsergroupmembershipID, *pkiUsergroupmembershipID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiUsergroupmembershipID, localVarBuff_pkiUsergroupmembershipID);




    // Body Param
    cJSON *localVarSingleItemJSON_usergroupmembership_edit_object_v1_request = NULL;
    if (usergroupmembership_edit_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_usergroupmembership_edit_object_v1_request = usergroupmembership_edit_object_v1_request_convertToJSON(usergroupmembership_edit_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_usergroupmembership_edit_object_v1_request);
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
    cJSON *ObjectUsergroupmembershipAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    common_response_t *elementToReturn = common_response_parseFromJSON(ObjectUsergroupmembershipAPIlocalVarJSON);
    cJSON_Delete(ObjectUsergroupmembershipAPIlocalVarJSON);
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

    // create the path
    long sizeOfPath = strlen("/2/object/usergroupmembership/{pkiUsergroupmembershipID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/2/object/usergroupmembership/{pkiUsergroupmembershipID}");


    // Path Params
    long sizeOfPathParams_pkiUsergroupmembershipID =  + strlen("{ pkiUsergroupmembershipID }");
    if(pkiUsergroupmembershipID == 0){
        goto end;
    }
    char* localVarToReplace_pkiUsergroupmembershipID = malloc(sizeOfPathParams_pkiUsergroupmembershipID);
    snprintf(localVarToReplace_pkiUsergroupmembershipID, sizeOfPathParams_pkiUsergroupmembershipID, "{%s}", "pkiUsergroupmembershipID");

    char localVarBuff_pkiUsergroupmembershipID[256];
    intToStr(localVarBuff_pkiUsergroupmembershipID, *pkiUsergroupmembershipID);

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
    cJSON *ObjectUsergroupmembershipAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    usergroupmembership_get_object_v2_response_t *elementToReturn = usergroupmembership_get_object_v2_response_parseFromJSON(ObjectUsergroupmembershipAPIlocalVarJSON);
    cJSON_Delete(ObjectUsergroupmembershipAPIlocalVarJSON);
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
    free(localVarToReplace_pkiUsergroupmembershipID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

