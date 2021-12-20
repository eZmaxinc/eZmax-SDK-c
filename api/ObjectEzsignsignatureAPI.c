#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzsignsignatureAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create a new Ezsignsignature
//
// The endpoint allows to create one or many elements at once.  The array can contain simple (Just the object) or compound (The object and its child) objects.  Creating compound elements allows to reduce the multiple requests to create all child objects.
//
ezsignsignature_create_object_v1_response_t*
ObjectEzsignsignatureAPI_ezsignsignatureCreateObjectV1(apiClient_t *apiClient, list_t * ezsignsignature_create_object_v1_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignsignature")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignsignature");




    // Body Param
    //notstring
    cJSON *localVar_ezsignsignature_create_object_v1_request = NULL;
    cJSON *localVarItemJSON_ezsignsignature_create_object_v1_request = NULL;
    cJSON *localVarSingleItemJSON_ezsignsignature_create_object_v1_request = NULL;
    if (ezsignsignature_create_object_v1_request != NULL)
    {
        localVarItemJSON_ezsignsignature_create_object_v1_request = cJSON_CreateObject();
        localVarSingleItemJSON_ezsignsignature_create_object_v1_request = cJSON_AddArrayToObject(localVarItemJSON_ezsignsignature_create_object_v1_request, "ezsignsignature_create_object_v1_request");
        if (localVarSingleItemJSON_ezsignsignature_create_object_v1_request == NULL)
        {
            // nonprimitive container

            goto end;
        }
    }

    listEntry_t *ezsignsignature_create_object_v1_requestBodyListEntry;
    list_ForEach(ezsignsignature_create_object_v1_requestBodyListEntry, ezsignsignature_create_object_v1_request)
    {
        localVar_ezsignsignature_create_object_v1_request = ezsignsignature_create_object_v1_request_convertToJSON(ezsignsignature_create_object_v1_requestBodyListEntry->data);
        if(localVar_ezsignsignature_create_object_v1_request == NULL)
        {
            goto end;
        }
        cJSON_AddItemToArray(localVarSingleItemJSON_ezsignsignature_create_object_v1_request, localVar_ezsignsignature_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarItemJSON_ezsignsignature_create_object_v1_request);
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

    if (apiClient->response_code == 201) {
        printf("%s\n","Successful response");
    }
    //nonprimitive not container
    cJSON *ObjectEzsignsignatureAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignsignature_create_object_v1_response_t *elementToReturn = ezsignsignature_create_object_v1_response_parseFromJSON(ObjectEzsignsignatureAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignsignatureAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_free(localVarHeaderType);
    list_free(localVarContentType);
    free(localVarPath);
    if (localVarItemJSON_ezsignsignature_create_object_v1_request) {
        cJSON_Delete(localVarItemJSON_ezsignsignature_create_object_v1_request);
        localVarItemJSON_ezsignsignature_create_object_v1_request = NULL;
    }
    if (localVarSingleItemJSON_ezsignsignature_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignsignature_create_object_v1_request);
        localVarSingleItemJSON_ezsignsignature_create_object_v1_request = NULL;
    }
    if (localVar_ezsignsignature_create_object_v1_request) {
        cJSON_Delete(localVar_ezsignsignature_create_object_v1_request);
        localVar_ezsignsignature_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an existing Ezsignsignature
//
ezsignsignature_delete_object_v1_response_t*
ObjectEzsignsignatureAPI_ezsignsignatureDeleteObjectV1(apiClient_t *apiClient, int pkiEzsignsignatureID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignsignature/{pkiEzsignsignatureID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignsignature/{pkiEzsignsignatureID}");


    // Path Params
    long sizeOfPathParams_pkiEzsignsignatureID =  + strlen("{ pkiEzsignsignatureID }");
    if(pkiEzsignsignatureID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignsignatureID = malloc(sizeOfPathParams_pkiEzsignsignatureID);
    snprintf(localVarToReplace_pkiEzsignsignatureID, sizeOfPathParams_pkiEzsignsignatureID, "{%s}", "pkiEzsignsignatureID");

    char localVarBuff_pkiEzsignsignatureID[256];
    intToStr(localVarBuff_pkiEzsignsignatureID, pkiEzsignsignatureID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignsignatureID, localVarBuff_pkiEzsignsignatureID);



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

    if (apiClient->response_code == 200) {
        printf("%s\n","Successful response");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","The element you are trying to work on does not exist");
    }
    if (apiClient->response_code == 422) {
        printf("%s\n","The syntax of the request is valid but the request cannot be completed. Look for detail in body.");
    }
    //nonprimitive not container
    cJSON *ObjectEzsignsignatureAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignsignature_delete_object_v1_response_t *elementToReturn = ezsignsignature_delete_object_v1_response_parseFromJSON(ObjectEzsignsignatureAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignsignatureAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_free(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_pkiEzsignsignatureID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsignsignature
//
// ## ⚠️EARLY ADOPTERS WARNING  ### This endpoint is not officially released. Its definition might still change and it might not be available in every environment and region.
//
ezsignsignature_get_object_v1_response_t*
ObjectEzsignsignatureAPI_ezsignsignatureGetObjectV1(apiClient_t *apiClient, int pkiEzsignsignatureID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignsignature/{pkiEzsignsignatureID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignsignature/{pkiEzsignsignatureID}");


    // Path Params
    long sizeOfPathParams_pkiEzsignsignatureID =  + strlen("{ pkiEzsignsignatureID }");
    if(pkiEzsignsignatureID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignsignatureID = malloc(sizeOfPathParams_pkiEzsignsignatureID);
    snprintf(localVarToReplace_pkiEzsignsignatureID, sizeOfPathParams_pkiEzsignsignatureID, "{%s}", "pkiEzsignsignatureID");

    char localVarBuff_pkiEzsignsignatureID[256];
    intToStr(localVarBuff_pkiEzsignsignatureID, pkiEzsignsignatureID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignsignatureID, localVarBuff_pkiEzsignsignatureID);



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

    if (apiClient->response_code == 200) {
        printf("%s\n","Successful response");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","The element you are trying to work on does not exist");
    }
    //nonprimitive not container
    cJSON *ObjectEzsignsignatureAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignsignature_get_object_v1_response_t *elementToReturn = ezsignsignature_get_object_v1_response_parseFromJSON(ObjectEzsignsignatureAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignsignatureAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_free(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_pkiEzsignsignatureID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

