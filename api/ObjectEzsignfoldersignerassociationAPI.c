#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzsignfoldersignerassociationAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create a new Ezsignfoldersignerassociation
//
// The endpoint allows to create one or many elements at once.  The array can contain simple (Just the object) or compound (The object and its child) objects.  Creating compound elements allows to reduce the multiple requests to create all child objects.
//
ezsignfoldersignerassociation_create_object_v1_response_t*
ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationCreateObjectV1(apiClient_t *apiClient, list_t * ezsignfoldersignerassociation_create_object_v1_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignfoldersignerassociation")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignfoldersignerassociation");




    // Body Param
    //notstring
    cJSON *localVar_ezsignfoldersignerassociation_create_object_v1_request = NULL;
    cJSON *localVarItemJSON_ezsignfoldersignerassociation_create_object_v1_request = NULL;
    cJSON *localVarSingleItemJSON_ezsignfoldersignerassociation_create_object_v1_request = NULL;
    if (ezsignfoldersignerassociation_create_object_v1_request != NULL)
    {
        localVarItemJSON_ezsignfoldersignerassociation_create_object_v1_request = cJSON_CreateObject();
        localVarSingleItemJSON_ezsignfoldersignerassociation_create_object_v1_request = cJSON_AddArrayToObject(localVarItemJSON_ezsignfoldersignerassociation_create_object_v1_request, "ezsignfoldersignerassociation_create_object_v1_request");
        if (localVarSingleItemJSON_ezsignfoldersignerassociation_create_object_v1_request == NULL)
        {
            // nonprimitive container

            goto end;
        }
    }

    listEntry_t *ezsignfoldersignerassociation_create_object_v1_requestBodyListEntry;
    list_ForEach(ezsignfoldersignerassociation_create_object_v1_requestBodyListEntry, ezsignfoldersignerassociation_create_object_v1_request)
    {
        localVar_ezsignfoldersignerassociation_create_object_v1_request = ezsignfoldersignerassociation_create_object_v1_request_convertToJSON(ezsignfoldersignerassociation_create_object_v1_requestBodyListEntry->data);
        if(localVar_ezsignfoldersignerassociation_create_object_v1_request == NULL)
        {
            goto end;
        }
        cJSON_AddItemToArray(localVarSingleItemJSON_ezsignfoldersignerassociation_create_object_v1_request, localVar_ezsignfoldersignerassociation_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarItemJSON_ezsignfoldersignerassociation_create_object_v1_request);
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
    cJSON *ObjectEzsignfoldersignerassociationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfoldersignerassociation_create_object_v1_response_t *elementToReturn = ezsignfoldersignerassociation_create_object_v1_response_parseFromJSON(ObjectEzsignfoldersignerassociationAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfoldersignerassociationAPIlocalVarJSON);
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
    if (localVarItemJSON_ezsignfoldersignerassociation_create_object_v1_request) {
        cJSON_Delete(localVarItemJSON_ezsignfoldersignerassociation_create_object_v1_request);
        localVarItemJSON_ezsignfoldersignerassociation_create_object_v1_request = NULL;
    }
    if (localVarSingleItemJSON_ezsignfoldersignerassociation_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignfoldersignerassociation_create_object_v1_request);
        localVarSingleItemJSON_ezsignfoldersignerassociation_create_object_v1_request = NULL;
    }
    if (localVar_ezsignfoldersignerassociation_create_object_v1_request) {
        cJSON_Delete(localVar_ezsignfoldersignerassociation_create_object_v1_request);
        localVar_ezsignfoldersignerassociation_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an existing Ezsignfoldersignerassociation
//
ezsignfoldersignerassociation_delete_object_v1_response_t*
ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationDeleteObjectV1(apiClient_t *apiClient, int pkiEzsignfoldersignerassociationID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}");


    // Path Params
    long sizeOfPathParams_pkiEzsignfoldersignerassociationID =  + strlen("{ pkiEzsignfoldersignerassociationID }");
    if(pkiEzsignfoldersignerassociationID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfoldersignerassociationID = malloc(sizeOfPathParams_pkiEzsignfoldersignerassociationID);
    snprintf(localVarToReplace_pkiEzsignfoldersignerassociationID, sizeOfPathParams_pkiEzsignfoldersignerassociationID, "{%s}", "pkiEzsignfoldersignerassociationID");

    char localVarBuff_pkiEzsignfoldersignerassociationID[256];
    intToStr(localVarBuff_pkiEzsignfoldersignerassociationID, pkiEzsignfoldersignerassociationID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfoldersignerassociationID, localVarBuff_pkiEzsignfoldersignerassociationID);



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
    cJSON *ObjectEzsignfoldersignerassociationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfoldersignerassociation_delete_object_v1_response_t *elementToReturn = ezsignfoldersignerassociation_delete_object_v1_response_parseFromJSON(ObjectEzsignfoldersignerassociationAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfoldersignerassociationAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfoldersignerassociationID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Modify an existing Ezsignfoldersignerassociation
//
ezsignfoldersignerassociation_edit_object_v1_response_t*
ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationEditObjectV1(apiClient_t *apiClient, int pkiEzsignfoldersignerassociationID , ezsignfoldersignerassociation_edit_object_v1_request_t * ezsignfoldersignerassociation_edit_object_v1_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}");


    // Path Params
    long sizeOfPathParams_pkiEzsignfoldersignerassociationID =  + strlen("{ pkiEzsignfoldersignerassociationID }");
    if(pkiEzsignfoldersignerassociationID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfoldersignerassociationID = malloc(sizeOfPathParams_pkiEzsignfoldersignerassociationID);
    snprintf(localVarToReplace_pkiEzsignfoldersignerassociationID, sizeOfPathParams_pkiEzsignfoldersignerassociationID, "{%s}", "pkiEzsignfoldersignerassociationID");

    char localVarBuff_pkiEzsignfoldersignerassociationID[256];
    intToStr(localVarBuff_pkiEzsignfoldersignerassociationID, pkiEzsignfoldersignerassociationID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfoldersignerassociationID, localVarBuff_pkiEzsignfoldersignerassociationID);




    // Body Param
    cJSON *localVarSingleItemJSON_ezsignfoldersignerassociation_edit_object_v1_request = NULL;
    if (ezsignfoldersignerassociation_edit_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_ezsignfoldersignerassociation_edit_object_v1_request = ezsignfoldersignerassociation_edit_object_v1_request_convertToJSON(ezsignfoldersignerassociation_edit_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_ezsignfoldersignerassociation_edit_object_v1_request);
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

    if (apiClient->response_code == 200) {
        printf("%s\n","Successful response");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","The element you are trying to work on does not exist");
    }
    //nonprimitive not container
    cJSON *ObjectEzsignfoldersignerassociationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfoldersignerassociation_edit_object_v1_response_t *elementToReturn = ezsignfoldersignerassociation_edit_object_v1_response_parseFromJSON(ObjectEzsignfoldersignerassociationAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfoldersignerassociationAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfoldersignerassociationID);
    if (localVarSingleItemJSON_ezsignfoldersignerassociation_edit_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_ezsignfoldersignerassociation_edit_object_v1_request);
        localVarSingleItemJSON_ezsignfoldersignerassociation_edit_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsignfoldersignerassociation's children IDs
//
void
ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationGetChildrenV1(apiClient_t *apiClient, int pkiEzsignfoldersignerassociationID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}/getChildren")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}/getChildren");


    // Path Params
    long sizeOfPathParams_pkiEzsignfoldersignerassociationID =  + strlen("{ pkiEzsignfoldersignerassociationID }");
    if(pkiEzsignfoldersignerassociationID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfoldersignerassociationID = malloc(sizeOfPathParams_pkiEzsignfoldersignerassociationID);
    snprintf(localVarToReplace_pkiEzsignfoldersignerassociationID, sizeOfPathParams_pkiEzsignfoldersignerassociationID, "{%s}", "pkiEzsignfoldersignerassociationID");

    char localVarBuff_pkiEzsignfoldersignerassociationID[256];
    intToStr(localVarBuff_pkiEzsignfoldersignerassociationID, pkiEzsignfoldersignerassociationID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfoldersignerassociationID, localVarBuff_pkiEzsignfoldersignerassociationID);



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
    free(localVarToReplace_pkiEzsignfoldersignerassociationID);

}

// Retrieve a Login Url to allow In-Person signing
//
// This endpoint returns a Login Url that can be used in a browser or embedded in an I-Frame to allow in person signing.  The signer Login type must be configured as In-Person.
//
ezsignfoldersignerassociation_get_in_person_login_url_v1_response_t*
ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationGetInPersonLoginUrlV1(apiClient_t *apiClient, int pkiEzsignfoldersignerassociationID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}/getInPersonLoginUrl")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}/getInPersonLoginUrl");


    // Path Params
    long sizeOfPathParams_pkiEzsignfoldersignerassociationID =  + strlen("{ pkiEzsignfoldersignerassociationID }");
    if(pkiEzsignfoldersignerassociationID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfoldersignerassociationID = malloc(sizeOfPathParams_pkiEzsignfoldersignerassociationID);
    snprintf(localVarToReplace_pkiEzsignfoldersignerassociationID, sizeOfPathParams_pkiEzsignfoldersignerassociationID, "{%s}", "pkiEzsignfoldersignerassociationID");

    char localVarBuff_pkiEzsignfoldersignerassociationID[256];
    intToStr(localVarBuff_pkiEzsignfoldersignerassociationID, pkiEzsignfoldersignerassociationID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfoldersignerassociationID, localVarBuff_pkiEzsignfoldersignerassociationID);



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
    if (apiClient->response_code == 422) {
        printf("%s\n","The syntax of the request is valid but the request cannot be completed. Look for detail in body.");
    }
    //nonprimitive not container
    cJSON *ObjectEzsignfoldersignerassociationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfoldersignerassociation_get_in_person_login_url_v1_response_t *elementToReturn = ezsignfoldersignerassociation_get_in_person_login_url_v1_response_parseFromJSON(ObjectEzsignfoldersignerassociationAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfoldersignerassociationAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfoldersignerassociationID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsignfoldersignerassociation
//
ezsignfoldersignerassociation_get_object_v1_response_t*
ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationGetObjectV1(apiClient_t *apiClient, int pkiEzsignfoldersignerassociationID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}");


    // Path Params
    long sizeOfPathParams_pkiEzsignfoldersignerassociationID =  + strlen("{ pkiEzsignfoldersignerassociationID }");
    if(pkiEzsignfoldersignerassociationID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignfoldersignerassociationID = malloc(sizeOfPathParams_pkiEzsignfoldersignerassociationID);
    snprintf(localVarToReplace_pkiEzsignfoldersignerassociationID, sizeOfPathParams_pkiEzsignfoldersignerassociationID, "{%s}", "pkiEzsignfoldersignerassociationID");

    char localVarBuff_pkiEzsignfoldersignerassociationID[256];
    intToStr(localVarBuff_pkiEzsignfoldersignerassociationID, pkiEzsignfoldersignerassociationID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignfoldersignerassociationID, localVarBuff_pkiEzsignfoldersignerassociationID);



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
    cJSON *ObjectEzsignfoldersignerassociationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignfoldersignerassociation_get_object_v1_response_t *elementToReturn = ezsignfoldersignerassociation_get_object_v1_response_parseFromJSON(ObjectEzsignfoldersignerassociationAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignfoldersignerassociationAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignfoldersignerassociationID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

