#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectInscriptiontempAPI.h"

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
inscriptiontemp_get_communication_list_v1_response_t*
ObjectInscriptiontempAPI_inscriptiontempGetCommunicationListV1(apiClient_t *apiClient, int pkiInscriptiontempID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/inscriptiontemp/{pkiInscriptiontempID}/getCommunicationList")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/inscriptiontemp/{pkiInscriptiontempID}/getCommunicationList");


    // Path Params
    long sizeOfPathParams_pkiInscriptiontempID =  + strlen("{ pkiInscriptiontempID }");
    if(pkiInscriptiontempID == 0){
        goto end;
    }
    char* localVarToReplace_pkiInscriptiontempID = malloc(sizeOfPathParams_pkiInscriptiontempID);
    snprintf(localVarToReplace_pkiInscriptiontempID, sizeOfPathParams_pkiInscriptiontempID, "{%s}", "pkiInscriptiontempID");

    char localVarBuff_pkiInscriptiontempID[256];
    intToStr(localVarBuff_pkiInscriptiontempID, pkiInscriptiontempID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiInscriptiontempID, localVarBuff_pkiInscriptiontempID);



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
    cJSON *ObjectInscriptiontempAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    inscriptiontemp_get_communication_list_v1_response_t *elementToReturn = inscriptiontemp_get_communication_list_v1_response_parseFromJSON(ObjectInscriptiontempAPIlocalVarJSON);
    cJSON_Delete(ObjectInscriptiontempAPIlocalVarJSON);
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
    free(localVarToReplace_pkiInscriptiontempID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

