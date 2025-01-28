#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ModuleUserAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Create a new User of type Ezsignuser
//
// The endpoint allows to initiate the creation or a user of type Ezsignuser.  The user will be created only once the email verification process will be completed
//
user_create_ezsignuser_v1_response_t*
ModuleUserAPI_userCreateEzsignuserV1(apiClient_t *apiClient, list_t *user_create_ezsignuser_v1_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/1/module/user/createezsignuser");





    // Body Param
    //notstring
    cJSON *localVar_user_create_ezsignuser_v1_request = NULL;
    cJSON *localVarItemJSON_user_create_ezsignuser_v1_request = NULL;
    cJSON *localVarSingleItemJSON_user_create_ezsignuser_v1_request = NULL;
    if (user_create_ezsignuser_v1_request != NULL)
    {
        localVarItemJSON_user_create_ezsignuser_v1_request = cJSON_CreateObject();
        localVarSingleItemJSON_user_create_ezsignuser_v1_request = cJSON_AddArrayToObject(localVarItemJSON_user_create_ezsignuser_v1_request, "user_create_ezsignuser_v1_request");
        if (localVarSingleItemJSON_user_create_ezsignuser_v1_request == NULL)
        {
            // nonprimitive container

            goto end;
        }
    }

    listEntry_t *user_create_ezsignuser_v1_requestBodyListEntry;
    list_ForEach(user_create_ezsignuser_v1_requestBodyListEntry, user_create_ezsignuser_v1_request)
    {
        localVar_user_create_ezsignuser_v1_request = user_create_ezsignuser_v1_request_convertToJSON(user_create_ezsignuser_v1_requestBodyListEntry->data);
        if(localVar_user_create_ezsignuser_v1_request == NULL)
        {
            goto end;
        }
        cJSON_AddItemToArray(localVarSingleItemJSON_user_create_ezsignuser_v1_request, localVar_user_create_ezsignuser_v1_request);
        localVarBodyParameters = cJSON_Print(localVarItemJSON_user_create_ezsignuser_v1_request);
        localVarBodyLength = strlen(localVarBodyParameters);
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
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    //nonprimitive not container
    user_create_ezsignuser_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ModuleUserAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = user_create_ezsignuser_v1_response_parseFromJSON(ModuleUserAPIlocalVarJSON);
        cJSON_Delete(ModuleUserAPIlocalVarJSON);
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
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarItemJSON_user_create_ezsignuser_v1_request) {
        cJSON_Delete(localVarItemJSON_user_create_ezsignuser_v1_request);
        localVarItemJSON_user_create_ezsignuser_v1_request = NULL;
    }
    if (localVarSingleItemJSON_user_create_ezsignuser_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_user_create_ezsignuser_v1_request);
        localVarSingleItemJSON_user_create_ezsignuser_v1_request = NULL;
    }
    if (localVar_user_create_ezsignuser_v1_request) {
        cJSON_Delete(localVar_user_create_ezsignuser_v1_request);
        localVar_user_create_ezsignuser_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

