#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectCommunicationAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Retrieve an existing Communication
//
// 
//
communication_get_object_v2_response_t*
ObjectCommunicationAPI_communicationGetObjectV2(apiClient_t *apiClient, int pkiCommunicationID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/2/object/communication/{pkiCommunicationID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/2/object/communication/{pkiCommunicationID}");


    // Path Params
    long sizeOfPathParams_pkiCommunicationID =  + strlen("{ pkiCommunicationID }");
    if(pkiCommunicationID == 0){
        goto end;
    }
    char* localVarToReplace_pkiCommunicationID = malloc(sizeOfPathParams_pkiCommunicationID);
    snprintf(localVarToReplace_pkiCommunicationID, sizeOfPathParams_pkiCommunicationID, "{%s}", "pkiCommunicationID");

    char localVarBuff_pkiCommunicationID[256];
    intToStr(localVarBuff_pkiCommunicationID, pkiCommunicationID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiCommunicationID, localVarBuff_pkiCommunicationID);



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
    cJSON *ObjectCommunicationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    communication_get_object_v2_response_t *elementToReturn = communication_get_object_v2_response_parseFromJSON(ObjectCommunicationAPIlocalVarJSON);
    cJSON_Delete(ObjectCommunicationAPIlocalVarJSON);
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
    free(localVarToReplace_pkiCommunicationID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

