#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzsignuserAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Edit an existing Ezsignuser
//
// 
//
ezsignuser_edit_object_v1_response_t*
ObjectEzsignuserAPI_ezsignuserEditObjectV1(apiClient_t *apiClient, int *pkiEzsignuserID, ezsignuser_edit_object_v1_request_t *ezsignuser_edit_object_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignuser/{pkiEzsignuserID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignuser/{pkiEzsignuserID}");


    // Path Params
    long sizeOfPathParams_pkiEzsignuserID =  + strlen("{ pkiEzsignuserID }");
    if(pkiEzsignuserID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignuserID = malloc(sizeOfPathParams_pkiEzsignuserID);
    snprintf(localVarToReplace_pkiEzsignuserID, sizeOfPathParams_pkiEzsignuserID, "{%s}", "pkiEzsignuserID");

    char localVarBuff_pkiEzsignuserID[256];
    intToStr(localVarBuff_pkiEzsignuserID, *pkiEzsignuserID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignuserID, localVarBuff_pkiEzsignuserID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsignuser_edit_object_v1_request = NULL;
    if (ezsignuser_edit_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsignuser_edit_object_v1_request = ezsignuser_edit_object_v1_request_convertToJSON(ezsignuser_edit_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignuser_edit_object_v1_request);
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
    cJSON *ObjectEzsignuserAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignuser_edit_object_v1_response_t *elementToReturn = ezsignuser_edit_object_v1_response_parseFromJSON(ObjectEzsignuserAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignuserAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignuserID);
    if (localVarSingleItemJSON_ezsignuser_edit_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignuser_edit_object_v1_request);
        localVarSingleItemJSON_ezsignuser_edit_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsignuser
//
// 
//
ezsignuser_get_object_v2_response_t*
ObjectEzsignuserAPI_ezsignuserGetObjectV2(apiClient_t *apiClient, int *pkiEzsignuserID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/2/object/ezsignuser/{pkiEzsignuserID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/2/object/ezsignuser/{pkiEzsignuserID}");


    // Path Params
    long sizeOfPathParams_pkiEzsignuserID =  + strlen("{ pkiEzsignuserID }");
    if(pkiEzsignuserID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignuserID = malloc(sizeOfPathParams_pkiEzsignuserID);
    snprintf(localVarToReplace_pkiEzsignuserID, sizeOfPathParams_pkiEzsignuserID, "{%s}", "pkiEzsignuserID");

    char localVarBuff_pkiEzsignuserID[256];
    intToStr(localVarBuff_pkiEzsignuserID, *pkiEzsignuserID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignuserID, localVarBuff_pkiEzsignuserID);



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
    cJSON *ObjectEzsignuserAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignuser_get_object_v2_response_t *elementToReturn = ezsignuser_get_object_v2_response_parseFromJSON(ObjectEzsignuserAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignuserAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignuserID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

