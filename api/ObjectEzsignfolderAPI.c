#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzsignfolderAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create a new Ezsignfolder
//
// The endpoint allows to create one or many elements at once.  The array can contain simple (Just the object) or compound (The object and its child) objects.  Creating compound elements allows to reduce the multiple requests to create all child objects.
//
ezsignfolder_create_object_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderCreateObjectV1(apiClient_t *apiClient, list_t * ezsignfolder_create_object_v1_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignfolder")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignfolder");




    // Body Param
    //notstring
    cJSON *localVar_ezsignfolder_create_object_v1_request = NULL;
    cJSON *localVarItemJSON_ezsignfolder_create_object_v1_request = NULL;
    cJSON *localVarSingleItemJSON_ezsignfolder_create_object_v1_request = NULL;
    if (ezsignfolder_create_object_v1_request != NULL)
    {
        localVarItemJSON_ezsignfolder_create_object_v1_request = cJSON_CreateObject();
        localVarSingleItemJSON_ezsignfolder_create_object_v1_request = cJSON_AddArrayToObject(localVarItemJSON_ezsignfolder_create_object_v1_request, "ezsignfolder_create_object_v1_request");
        if (localVarSingleItemJSON_ezsignfolder_create_object_v1_request == NULL)
        {
            // nonprimitive container

            goto end;
        }
    }

    listEntry_t *ezsignfolder_create_object_v1_requestBodyListEntry;
    list_ForEach(ezsignfolder_create_object_v1_requestBodyListEntry, ezsignfolder_create_object_v1_request)
    {
        localVar_ezsignfolder_create_object_v1_request = ezsignfolder_create_object_v1_request_convertToJSON(ezsignfolder_create_object_v1_requestBodyListEntry->data);
        if(localVar_ezsignfolder_create_object_v1_request == NULL)
        {
            goto end;
        }
        cJSON_AddItemToArray(localVarSingleItemJSON_ezsignfolder_create_object_v1_request, localVar_ezsignfolder_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarItemJSON_ezsignfolder_create_object_v1_request);
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
    cJSON *ObjectEzsignfolderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfolder_create_object_v1_response_t *elementToReturn = ezsignfolder_create_object_v1_response_parseFromJSON(ObjectEzsignfolderAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfolderAPIlocalVarJSON);
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
    if (localVarItemJSON_ezsignfolder_create_object_v1_request) {
        cJSON_Delete(localVarItemJSON_ezsignfolder_create_object_v1_request);
        localVarItemJSON_ezsignfolder_create_object_v1_request = NULL;
    }
    if (localVarSingleItemJSON_ezsignfolder_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignfolder_create_object_v1_request);
        localVarSingleItemJSON_ezsignfolder_create_object_v1_request = NULL;
    }
    if (localVar_ezsignfolder_create_object_v1_request) {
        cJSON_Delete(localVar_ezsignfolder_create_object_v1_request);
        localVar_ezsignfolder_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an existing Ezsignfolder
//
ezsignfolder_delete_object_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderDeleteObjectV1(apiClient_t *apiClient, int pkiEzsignfolderID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignfolder/{pkiEzsignfolderID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignfolder/{pkiEzsignfolderID}");


    // Path Params
    long sizeOfPathParams_pkiEzsignfolderID =  + strlen("{ pkiEzsignfolderID }");
    if(pkiEzsignfolderID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfolderID = malloc(sizeOfPathParams_pkiEzsignfolderID);
    snprintf(localVarToReplace_pkiEzsignfolderID, sizeOfPathParams_pkiEzsignfolderID, "{%s}", "pkiEzsignfolderID");

    char localVarBuff_pkiEzsignfolderID[256];
    intToStr(localVarBuff_pkiEzsignfolderID, pkiEzsignfolderID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfolderID, localVarBuff_pkiEzsignfolderID);



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
    cJSON *ObjectEzsignfolderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfolder_delete_object_v1_response_t *elementToReturn = ezsignfolder_delete_object_v1_response_parseFromJSON(ObjectEzsignfolderAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfolderAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfolderID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsignfolder's children IDs
//
void
ObjectEzsignfolderAPI_ezsignfolderGetChildrenV1(apiClient_t *apiClient, int pkiEzsignfolderID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignfolder/{pkiEzsignfolderID}/getChildren")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignfolder/{pkiEzsignfolderID}/getChildren");


    // Path Params
    long sizeOfPathParams_pkiEzsignfolderID =  + strlen("{ pkiEzsignfolderID }");
    if(pkiEzsignfolderID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfolderID = malloc(sizeOfPathParams_pkiEzsignfolderID);
    snprintf(localVarToReplace_pkiEzsignfolderID, sizeOfPathParams_pkiEzsignfolderID, "{%s}", "pkiEzsignfolderID");

    char localVarBuff_pkiEzsignfolderID[256];
    intToStr(localVarBuff_pkiEzsignfolderID, pkiEzsignfolderID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfolderID, localVarBuff_pkiEzsignfolderID);



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

    if (apiClient->response_code == 404) {
        printf("%s\n","The element you are trying to work on does not exist");
    }
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_free(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_pkiEzsignfolderID);

}

// Retrieve an existing Ezsignfolder
//
ezsignfolder_get_object_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderGetObjectV1(apiClient_t *apiClient, int pkiEzsignfolderID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignfolder/{pkiEzsignfolderID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignfolder/{pkiEzsignfolderID}");


    // Path Params
    long sizeOfPathParams_pkiEzsignfolderID =  + strlen("{ pkiEzsignfolderID }");
    if(pkiEzsignfolderID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfolderID = malloc(sizeOfPathParams_pkiEzsignfolderID);
    snprintf(localVarToReplace_pkiEzsignfolderID, sizeOfPathParams_pkiEzsignfolderID, "{%s}", "pkiEzsignfolderID");

    char localVarBuff_pkiEzsignfolderID[256];
    intToStr(localVarBuff_pkiEzsignfolderID, pkiEzsignfolderID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfolderID, localVarBuff_pkiEzsignfolderID);



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
    cJSON *ObjectEzsignfolderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfolder_get_object_v1_response_t *elementToReturn = ezsignfolder_get_object_v1_response_parseFromJSON(ObjectEzsignfolderAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfolderAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfolderID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Send the Ezsignfolder to the signatories for signature
//
ezsignfolder_send_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderSendV1(apiClient_t *apiClient, int pkiEzsignfolderID , ezsignfolder_send_v1_request_t * ezsignfolder_send_v1_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignfolder/{pkiEzsignfolderID}/send")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignfolder/{pkiEzsignfolderID}/send");


    // Path Params
    long sizeOfPathParams_pkiEzsignfolderID =  + strlen("{ pkiEzsignfolderID }");
    if(pkiEzsignfolderID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfolderID = malloc(sizeOfPathParams_pkiEzsignfolderID);
    snprintf(localVarToReplace_pkiEzsignfolderID, sizeOfPathParams_pkiEzsignfolderID, "{%s}", "pkiEzsignfolderID");

    char localVarBuff_pkiEzsignfolderID[256];
    intToStr(localVarBuff_pkiEzsignfolderID, pkiEzsignfolderID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfolderID, localVarBuff_pkiEzsignfolderID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsignfolder_send_v1_request = NULL;
    if (ezsignfolder_send_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsignfolder_send_v1_request = ezsignfolder_send_v1_request_convertToJSON(ezsignfolder_send_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignfolder_send_v1_request);
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
    cJSON *ObjectEzsignfolderAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfolder_send_v1_response_t *elementToReturn = ezsignfolder_send_v1_response_parseFromJSON(ObjectEzsignfolderAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfolderAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfolderID);
    if (localVarSingleItemJSON_ezsignfolder_send_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignfolder_send_v1_request);
        localVarSingleItemJSON_ezsignfolder_send_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

