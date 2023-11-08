#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectBuyercontractAPI.h"

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
buyercontract_get_communication_list_v1_response_t*
ObjectBuyercontractAPI_buyercontractGetCommunicationListV1(apiClient_t *apiClient, int pkiBuyercontractID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/buyercontract/{pkiBuyercontractID}/getCommunicationList")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/buyercontract/{pkiBuyercontractID}/getCommunicationList");


    // Path Params
    long sizeOfPathParams_pkiBuyercontractID =  + strlen("{ pkiBuyercontractID }");
    if(pkiBuyercontractID == 0){
        goto end;
    }
    char* localVarToReplace_pkiBuyercontractID = malloc(sizeOfPathParams_pkiBuyercontractID);
    snprintf(localVarToReplace_pkiBuyercontractID, sizeOfPathParams_pkiBuyercontractID, "{%s}", "pkiBuyercontractID");

    char localVarBuff_pkiBuyercontractID[256];
    intToStr(localVarBuff_pkiBuyercontractID, pkiBuyercontractID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiBuyercontractID, localVarBuff_pkiBuyercontractID);



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
    cJSON *ObjectBuyercontractAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    buyercontract_get_communication_list_v1_response_t *elementToReturn = buyercontract_get_communication_list_v1_response_parseFromJSON(ObjectBuyercontractAPIlocalVarJSON);
    cJSON_Delete(ObjectBuyercontractAPIlocalVarJSON);
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
    free(localVarToReplace_pkiBuyercontractID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

