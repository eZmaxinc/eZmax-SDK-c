#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectNotificationsectionAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Retrieve an existing Notificationsection's Notificationtests
//
// 
//
notificationsection_get_notificationtests_v1_response_t*
ObjectNotificationsectionAPI_notificationsectionGetNotificationtestsV1(apiClient_t *apiClient, int *pkiNotificationsectionID, int *bShowHidden)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/notificationsection/{pkiNotificationsectionID}/getNotificationtests")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/notificationsection/{pkiNotificationsectionID}/getNotificationtests");


    // Path Params
    long sizeOfPathParams_pkiNotificationsectionID =  + strlen("{ pkiNotificationsectionID }");
    if(pkiNotificationsectionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiNotificationsectionID = malloc(sizeOfPathParams_pkiNotificationsectionID);
    snprintf(localVarToReplace_pkiNotificationsectionID, sizeOfPathParams_pkiNotificationsectionID, "{%s}", "pkiNotificationsectionID");

    char localVarBuff_pkiNotificationsectionID[256];
    intToStr(localVarBuff_pkiNotificationsectionID, *pkiNotificationsectionID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiNotificationsectionID, localVarBuff_pkiNotificationsectionID);




    // query parameters
    char *keyQuery_bShowHidden = NULL;
    char * valueQuery_bShowHidden = NULL;
    keyValuePair_t *keyPairQuery_bShowHidden = 0;
    if (bShowHidden)
    {
        keyQuery_bShowHidden = strdup("bShowHidden");
        valueQuery_bShowHidden = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_bShowHidden, MAX_NUMBER_LENGTH, "%d", *bShowHidden);
        keyPairQuery_bShowHidden = keyValuePair_create(keyQuery_bShowHidden, valueQuery_bShowHidden);
        list_addElement(localVarQueryParameters,keyPairQuery_bShowHidden);
    }
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
    cJSON *ObjectNotificationsectionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    notificationsection_get_notificationtests_v1_response_t *elementToReturn = notificationsection_get_notificationtests_v1_response_parseFromJSON(ObjectNotificationsectionAPIlocalVarJSON);
    cJSON_Delete(ObjectNotificationsectionAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_pkiNotificationsectionID);
    if(keyQuery_bShowHidden){
        free(keyQuery_bShowHidden);
        keyQuery_bShowHidden = NULL;
    }
    if(valueQuery_bShowHidden){
        free(valueQuery_bShowHidden);
        valueQuery_bShowHidden = NULL;
    }
    if(keyPairQuery_bShowHidden){
        keyValuePair_free(keyPairQuery_bShowHidden);
        keyPairQuery_bShowHidden = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

