#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectNotificationtestAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Retrieve an existing Notificationtest's Elements
//
// 
//
notificationtest_get_elements_v1_response_t*
ObjectNotificationtestAPI_notificationtestGetElementsV1(apiClient_t *apiClient, int *pkiNotificationtestID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/1/object/notificationtest/{pkiNotificationtestID}/getElements");



    // Path Params
    long sizeOfPathParams_pkiNotificationtestID =  + sizeof("{ pkiNotificationtestID }") - 1;
    if(pkiNotificationtestID == 0){
        goto end;
    }
    char* localVarToReplace_pkiNotificationtestID = malloc(sizeOfPathParams_pkiNotificationtestID);
    snprintf(localVarToReplace_pkiNotificationtestID, sizeOfPathParams_pkiNotificationtestID, "{%s}", "pkiNotificationtestID");

    char localVarBuff_pkiNotificationtestID[256];
    snprintf(localVarBuff_pkiNotificationtestID, sizeof localVarBuff_pkiNotificationtestID, "%ld", (long)*pkiNotificationtestID);

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
                    localVarBodyLength,
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
    notificationtest_get_elements_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectNotificationtestAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = notificationtest_get_elements_v1_response_parseFromJSON(ObjectNotificationtestAPIlocalVarJSON);
        cJSON_Delete(ObjectNotificationtestAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
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

