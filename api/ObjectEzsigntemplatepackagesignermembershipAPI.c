#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzsigntemplatepackagesignermembershipAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create a new Ezsigntemplatepackagesignermembership
//
// The endpoint allows to create one or many elements at once.
//
ezsigntemplatepackagesignermembership_create_object_v1_response_t*
ObjectEzsigntemplatepackagesignermembershipAPI_ezsigntemplatepackagesignermembershipCreateObjectV1(apiClient_t *apiClient, ezsigntemplatepackagesignermembership_create_object_v1_request_t *ezsigntemplatepackagesignermembership_create_object_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsigntemplatepackagesignermembership")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsigntemplatepackagesignermembership");




    // Body Param
    cJSON *localVarSingleItemJSON_ezsigntemplatepackagesignermembership_create_object_v1_request = NULL;
    if (ezsigntemplatepackagesignermembership_create_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsigntemplatepackagesignermembership_create_object_v1_request = ezsigntemplatepackagesignermembership_create_object_v1_request_convertToJSON(ezsigntemplatepackagesignermembership_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsigntemplatepackagesignermembership_create_object_v1_request);
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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    cJSON *ObjectEzsigntemplatepackagesignermembershipAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigntemplatepackagesignermembership_create_object_v1_response_t *elementToReturn = ezsigntemplatepackagesignermembership_create_object_v1_response_parseFromJSON(ObjectEzsigntemplatepackagesignermembershipAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigntemplatepackagesignermembershipAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_ezsigntemplatepackagesignermembership_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsigntemplatepackagesignermembership_create_object_v1_request);
        localVarSingleItemJSON_ezsigntemplatepackagesignermembership_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an existing Ezsigntemplatepackagesignermembership
//
// 
//
ezsigntemplatepackagesignermembership_delete_object_v1_response_t*
ObjectEzsigntemplatepackagesignermembershipAPI_ezsigntemplatepackagesignermembershipDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplatepackagesignermembershipID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsigntemplatepackagesignermembership/{pkiEzsigntemplatepackagesignermembershipID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsigntemplatepackagesignermembership/{pkiEzsigntemplatepackagesignermembershipID}");


    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatepackagesignermembershipID =  + strlen("{ pkiEzsigntemplatepackagesignermembershipID }");
    if(pkiEzsigntemplatepackagesignermembershipID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatepackagesignermembershipID = malloc(sizeOfPathParams_pkiEzsigntemplatepackagesignermembershipID);
    snprintf(localVarToReplace_pkiEzsigntemplatepackagesignermembershipID, sizeOfPathParams_pkiEzsigntemplatepackagesignermembershipID, "{%s}", "pkiEzsigntemplatepackagesignermembershipID");

    char localVarBuff_pkiEzsigntemplatepackagesignermembershipID[256];
    intToStr(localVarBuff_pkiEzsigntemplatepackagesignermembershipID, *pkiEzsigntemplatepackagesignermembershipID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplatepackagesignermembershipID, localVarBuff_pkiEzsigntemplatepackagesignermembershipID);



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
    cJSON *ObjectEzsigntemplatepackagesignermembershipAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigntemplatepackagesignermembership_delete_object_v1_response_t *elementToReturn = ezsigntemplatepackagesignermembership_delete_object_v1_response_parseFromJSON(ObjectEzsigntemplatepackagesignermembershipAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigntemplatepackagesignermembershipAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatepackagesignermembershipID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsigntemplatepackagesignermembership
//
// 
//
ezsigntemplatepackagesignermembership_get_object_v2_response_t*
ObjectEzsigntemplatepackagesignermembershipAPI_ezsigntemplatepackagesignermembershipGetObjectV2(apiClient_t *apiClient, int *pkiEzsigntemplatepackagesignermembershipID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/2/object/ezsigntemplatepackagesignermembership/{pkiEzsigntemplatepackagesignermembershipID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/2/object/ezsigntemplatepackagesignermembership/{pkiEzsigntemplatepackagesignermembershipID}");


    // Path Params
    long sizeOfPathParams_pkiEzsigntemplatepackagesignermembershipID =  + strlen("{ pkiEzsigntemplatepackagesignermembershipID }");
    if(pkiEzsigntemplatepackagesignermembershipID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsigntemplatepackagesignermembershipID = malloc(sizeOfPathParams_pkiEzsigntemplatepackagesignermembershipID);
    snprintf(localVarToReplace_pkiEzsigntemplatepackagesignermembershipID, sizeOfPathParams_pkiEzsigntemplatepackagesignermembershipID, "{%s}", "pkiEzsigntemplatepackagesignermembershipID");

    char localVarBuff_pkiEzsigntemplatepackagesignermembershipID[256];
    intToStr(localVarBuff_pkiEzsigntemplatepackagesignermembershipID, *pkiEzsigntemplatepackagesignermembershipID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsigntemplatepackagesignermembershipID, localVarBuff_pkiEzsigntemplatepackagesignermembershipID);



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
    cJSON *ObjectEzsigntemplatepackagesignermembershipAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsigntemplatepackagesignermembership_get_object_v2_response_t *elementToReturn = ezsigntemplatepackagesignermembership_get_object_v2_response_parseFromJSON(ObjectEzsigntemplatepackagesignermembershipAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsigntemplatepackagesignermembershipAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsigntemplatepackagesignermembershipID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

