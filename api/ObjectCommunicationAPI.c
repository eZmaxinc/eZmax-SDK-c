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


// Send a new Communication
//
// The endpoint allows to send one or many elements at once.
//
communication_send_v1_response_t*
ObjectCommunicationAPI_communicationSendV1(apiClient_t *apiClient, communication_send_v1_request_t *communication_send_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/communication/send")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/communication/send");




    // Body Param
    cJSON *localVarSingleItemJSON_communication_send_v1_request = NULL;
    if (communication_send_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_communication_send_v1_request = communication_send_v1_request_convertToJSON(communication_send_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_communication_send_v1_request);
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

    // uncomment below to debug the error response
    //if (apiClient->response_code == 201) {
    //    printf("%s\n","Successful response");
    //}
    //nonprimitive not container
    cJSON *ObjectCommunicationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    communication_send_v1_response_t *elementToReturn = communication_send_v1_response_parseFromJSON(ObjectCommunicationAPIlocalVarJSON);
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
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_communication_send_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_communication_send_v1_request);
        localVarSingleItemJSON_communication_send_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

