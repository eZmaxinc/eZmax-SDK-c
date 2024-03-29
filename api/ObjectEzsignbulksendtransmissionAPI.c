#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzsignbulksendtransmissionAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Retrieve an existing Ezsignbulksendtransmission's Csv containing errors
//
// 
//
char*
ObjectEzsignbulksendtransmissionAPI_ezsignbulksendtransmissionGetCsvErrorsV1(apiClient_t *apiClient, int pkiEzsignbulksendtransmissionID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignbulksendtransmission/{pkiEzsignbulksendtransmissionID}/getCsvErrors")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignbulksendtransmission/{pkiEzsignbulksendtransmissionID}/getCsvErrors");


    // Path Params
    long sizeOfPathParams_pkiEzsignbulksendtransmissionID =  + strlen("{ pkiEzsignbulksendtransmissionID }");
    if(pkiEzsignbulksendtransmissionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignbulksendtransmissionID = malloc(sizeOfPathParams_pkiEzsignbulksendtransmissionID);
    snprintf(localVarToReplace_pkiEzsignbulksendtransmissionID, sizeOfPathParams_pkiEzsignbulksendtransmissionID, "{%s}", "pkiEzsignbulksendtransmissionID");

    char localVarBuff_pkiEzsignbulksendtransmissionID[256];
    intToStr(localVarBuff_pkiEzsignbulksendtransmissionID, pkiEzsignbulksendtransmissionID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignbulksendtransmissionID, localVarBuff_pkiEzsignbulksendtransmissionID);



    list_addElement(localVarHeaderType,"text/csv"); //produces
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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 406) {
    //    printf("%s\n","The URL is valid, but one of the Accept header is not defined or invalid. For example, you set the header \&quot;Accept: application/json\&quot; but the function can only return \&quot;Content-type: image/png\&quot;");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body");
    //}
    //primitive return type simple
    char* elementToReturn =  strdup((char*)apiClient->dataReceived);

    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_pkiEzsignbulksendtransmissionID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsignbulksendtransmission's automatic Ezsignsignatures
//
// Return the Ezsignsignatures that can be signed by the current user at the current step in the process
//
ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response_t*
ObjectEzsignbulksendtransmissionAPI_ezsignbulksendtransmissionGetEzsignsignaturesAutomaticV1(apiClient_t *apiClient, int pkiEzsignbulksendtransmissionID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignbulksendtransmission/{pkiEzsignbulksendtransmissionID}/getEzsignsignaturesAutomatic")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignbulksendtransmission/{pkiEzsignbulksendtransmissionID}/getEzsignsignaturesAutomatic");


    // Path Params
    long sizeOfPathParams_pkiEzsignbulksendtransmissionID =  + strlen("{ pkiEzsignbulksendtransmissionID }");
    if(pkiEzsignbulksendtransmissionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignbulksendtransmissionID = malloc(sizeOfPathParams_pkiEzsignbulksendtransmissionID);
    snprintf(localVarToReplace_pkiEzsignbulksendtransmissionID, sizeOfPathParams_pkiEzsignbulksendtransmissionID, "{%s}", "pkiEzsignbulksendtransmissionID");

    char localVarBuff_pkiEzsignbulksendtransmissionID[256];
    intToStr(localVarBuff_pkiEzsignbulksendtransmissionID, pkiEzsignbulksendtransmissionID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignbulksendtransmissionID, localVarBuff_pkiEzsignbulksendtransmissionID);



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
    cJSON *ObjectEzsignbulksendtransmissionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response_t *elementToReturn = ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response_parseFromJSON(ObjectEzsignbulksendtransmissionAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignbulksendtransmissionAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignbulksendtransmissionID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsignbulksendtransmission's forms data
//
// 
//
ezsignbulksendtransmission_get_forms_data_v1_response_t*
ObjectEzsignbulksendtransmissionAPI_ezsignbulksendtransmissionGetFormsDataV1(apiClient_t *apiClient, int pkiEzsignbulksendtransmissionID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignbulksendtransmission/{pkiEzsignbulksendtransmissionID}/getFormsData")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignbulksendtransmission/{pkiEzsignbulksendtransmissionID}/getFormsData");


    // Path Params
    long sizeOfPathParams_pkiEzsignbulksendtransmissionID =  + strlen("{ pkiEzsignbulksendtransmissionID }");
    if(pkiEzsignbulksendtransmissionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignbulksendtransmissionID = malloc(sizeOfPathParams_pkiEzsignbulksendtransmissionID);
    snprintf(localVarToReplace_pkiEzsignbulksendtransmissionID, sizeOfPathParams_pkiEzsignbulksendtransmissionID, "{%s}", "pkiEzsignbulksendtransmissionID");

    char localVarBuff_pkiEzsignbulksendtransmissionID[256];
    intToStr(localVarBuff_pkiEzsignbulksendtransmissionID, pkiEzsignbulksendtransmissionID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignbulksendtransmissionID, localVarBuff_pkiEzsignbulksendtransmissionID);



    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/zip"); //produces
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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 406) {
    //    printf("%s\n","The URL is valid, but one of the Accept header is not defined or invalid. For example, you set the header \&quot;Accept: application/json\&quot; but the function can only return \&quot;Content-type: image/png\&quot;");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of an interdependance condition. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    cJSON *ObjectEzsignbulksendtransmissionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignbulksendtransmission_get_forms_data_v1_response_t *elementToReturn = ezsignbulksendtransmission_get_forms_data_v1_response_parseFromJSON(ObjectEzsignbulksendtransmissionAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignbulksendtransmissionAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignbulksendtransmissionID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Ezsignbulksendtransmission
//
// 
//
ezsignbulksendtransmission_get_object_v2_response_t*
ObjectEzsignbulksendtransmissionAPI_ezsignbulksendtransmissionGetObjectV2(apiClient_t *apiClient, int pkiEzsignbulksendtransmissionID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/2/object/ezsignbulksendtransmission/{pkiEzsignbulksendtransmissionID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/2/object/ezsignbulksendtransmission/{pkiEzsignbulksendtransmissionID}");


    // Path Params
    long sizeOfPathParams_pkiEzsignbulksendtransmissionID =  + strlen("{ pkiEzsignbulksendtransmissionID }");
    if(pkiEzsignbulksendtransmissionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignbulksendtransmissionID = malloc(sizeOfPathParams_pkiEzsignbulksendtransmissionID);
    snprintf(localVarToReplace_pkiEzsignbulksendtransmissionID, sizeOfPathParams_pkiEzsignbulksendtransmissionID, "{%s}", "pkiEzsignbulksendtransmissionID");

    char localVarBuff_pkiEzsignbulksendtransmissionID[256];
    intToStr(localVarBuff_pkiEzsignbulksendtransmissionID, pkiEzsignbulksendtransmissionID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignbulksendtransmissionID, localVarBuff_pkiEzsignbulksendtransmissionID);



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
    cJSON *ObjectEzsignbulksendtransmissionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignbulksendtransmission_get_object_v2_response_t *elementToReturn = ezsignbulksendtransmission_get_object_v2_response_parseFromJSON(ObjectEzsignbulksendtransmissionAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignbulksendtransmissionAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignbulksendtransmissionID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

