#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectNotificationtestAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Retrieve an existing Notificationtest's Elements
//
// 
//
notificationtest_get_elements_v1_response_t*
ObjectNotificationtestAPI_notificationtestGetElementsV1(apiClient_t *apiClient, int pkiNotificationtestID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/notificationtest/{pkiNotificationtestID}/getElements")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/notificationtest/{pkiNotificationtestID}/getElements");


    // Path Params
    long sizeOfPathParams_pkiNotificationtestID =  + strlen("{ pkiNotificationtestID }");
    if(pkiNotificationtestID == 0){
        goto end;
    }
    char* localVarToReplace_pkiNotificationtestID = malloc(sizeOfPathParams_pkiNotificationtestID);
    snprintf(localVarToReplace_pkiNotificationtestID, sizeOfPathParams_pkiNotificationtestID, "{%s}", "pkiNotificationtestID");

    char localVarBuff_pkiNotificationtestID[256];
    intToStr(localVarBuff_pkiNotificationtestID, pkiNotificationtestID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiNotificationtestID, localVarBuff_pkiNotificationtestID);



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
    //    printf("%s\n","The element you are trying to work on does not exist");
    //}
    //nonprimitive not container
    cJSON *ObjectNotificationtestAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    notificationtest_get_elements_v1_response_t *elementToReturn = notificationtest_get_elements_v1_response_parseFromJSON(ObjectNotificationtestAPIlocalVarJSON);
    cJSON_Delete(ObjectNotificationtestAPIlocalVarJSON);
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
    free(localVarToReplace_pkiNotificationtestID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

