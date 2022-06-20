#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectActivesessionAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Get Current Activesession
//
// Retrieve the details about the current activesession
//
activesession_get_current_v1_response_t*
ObjectActivesessionAPI_activesessionGetCurrentV1(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/activesession/getCurrent")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/activesession/getCurrent");



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
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 350) {
    //    printf("%s\n","The user must authenticate before he can continue with this request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 351) {
    //    printf("%s\n","The user is configured with 2FA and needs to validate its phone number before he can continue with this request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 352) {
    //    printf("%s\n","The user is configured with 2FA and needs to answer a Secretquestion before he can continue with this request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 353) {
    //    printf("%s\n","The user must accept clauses before he can continue with this request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 354) {
    //    printf("%s\n","The user&#39;s computer must be validated before he can continue with this request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 355) {
    //    printf("%s\n","The user must change its password before he can continue with this request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 356) {
    //    printf("%s\n","The user is not running the latest version of the native application. He must valide or update its version before he can continue with this request");
    //}
    //nonprimitive not container
    cJSON *ObjectActivesessionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    activesession_get_current_v1_response_t *elementToReturn = activesession_get_current_v1_response_parseFromJSON(ObjectActivesessionAPIlocalVarJSON);
    cJSON_Delete(ObjectActivesessionAPIlocalVarJSON);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

