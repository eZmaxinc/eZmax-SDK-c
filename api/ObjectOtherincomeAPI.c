#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectOtherincomeAPI.h"

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
otherincome_get_communication_list_v1_response_t*
ObjectOtherincomeAPI_otherincomeGetCommunicationListV1(apiClient_t *apiClient, int *pkiOtherincomeID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/otherincome/{pkiOtherincomeID}/getCommunicationList")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/otherincome/{pkiOtherincomeID}/getCommunicationList");


    // Path Params
    long sizeOfPathParams_pkiOtherincomeID =  + strlen("{ pkiOtherincomeID }");
    if(pkiOtherincomeID == 0){
        goto end;
    }
    char* localVarToReplace_pkiOtherincomeID = malloc(sizeOfPathParams_pkiOtherincomeID);
    snprintf(localVarToReplace_pkiOtherincomeID, sizeOfPathParams_pkiOtherincomeID, "{%s}", "pkiOtherincomeID");

    char localVarBuff_pkiOtherincomeID[256];
    intToStr(localVarBuff_pkiOtherincomeID, *pkiOtherincomeID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiOtherincomeID, localVarBuff_pkiOtherincomeID);



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
    cJSON *ObjectOtherincomeAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    otherincome_get_communication_list_v1_response_t *elementToReturn = otherincome_get_communication_list_v1_response_parseFromJSON(ObjectOtherincomeAPIlocalVarJSON);
    cJSON_Delete(ObjectOtherincomeAPIlocalVarJSON);
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
    free(localVarToReplace_pkiOtherincomeID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

