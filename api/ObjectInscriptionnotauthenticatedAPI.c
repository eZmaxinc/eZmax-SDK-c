#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectInscriptionnotauthenticatedAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Retrieve Communication list
//
// 
//
inscriptionnotauthenticated_get_communication_list_v1_response_t*
ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationListV1(apiClient_t *apiClient, int *pkiInscriptionnotauthenticatedID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/inscriptionnotauthenticated/{pkiInscriptionnotauthenticatedID}/getCommunicationList")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/inscriptionnotauthenticated/{pkiInscriptionnotauthenticatedID}/getCommunicationList");


    // Path Params
    long sizeOfPathParams_pkiInscriptionnotauthenticatedID =  + strlen("{ pkiInscriptionnotauthenticatedID }");
    if(pkiInscriptionnotauthenticatedID == 0){
        goto end;
    }
    char* localVarToReplace_pkiInscriptionnotauthenticatedID = malloc(sizeOfPathParams_pkiInscriptionnotauthenticatedID);
    snprintf(localVarToReplace_pkiInscriptionnotauthenticatedID, sizeOfPathParams_pkiInscriptionnotauthenticatedID, "{%s}", "pkiInscriptionnotauthenticatedID");

    char localVarBuff_pkiInscriptionnotauthenticatedID[256];
    intToStr(localVarBuff_pkiInscriptionnotauthenticatedID, *pkiInscriptionnotauthenticatedID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiInscriptionnotauthenticatedID, localVarBuff_pkiInscriptionnotauthenticatedID);



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
    cJSON *ObjectInscriptionnotauthenticatedAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    inscriptionnotauthenticated_get_communication_list_v1_response_t *elementToReturn = inscriptionnotauthenticated_get_communication_list_v1_response_parseFromJSON(ObjectInscriptionnotauthenticatedAPIlocalVarJSON);
    cJSON_Delete(ObjectInscriptionnotauthenticatedAPIlocalVarJSON);
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
    free(localVarToReplace_pkiInscriptionnotauthenticatedID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

