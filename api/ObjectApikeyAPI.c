#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectApikeyAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create a new Apikey
//
// The endpoint allows to create one or many elements at once.  The array can contain simple (Just the object) or compound (The object and its child) objects.  Creating compound elements allows to reduce the multiple requests to create all child objects.
//
apikey_create_object_v1_response_t*
ObjectApikeyAPI_apikeyCreateObjectV1(apiClient_t *apiClient, list_t * apikey_create_object_v1_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/apikey")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/apikey");




    // Body Param
    //notstring
    cJSON *localVar_apikey_create_object_v1_request = NULL;
    cJSON *localVarItemJSON_apikey_create_object_v1_request = NULL;
    cJSON *localVarSingleItemJSON_apikey_create_object_v1_request = NULL;
    if (apikey_create_object_v1_request != NULL)
    {
        localVarItemJSON_apikey_create_object_v1_request = cJSON_CreateObject();
        localVarSingleItemJSON_apikey_create_object_v1_request = cJSON_AddArrayToObject(localVarItemJSON_apikey_create_object_v1_request, "apikey_create_object_v1_request");
        if (localVarSingleItemJSON_apikey_create_object_v1_request == NULL)
        {
            // nonprimitive container

            goto end;
        }
    }

    listEntry_t *apikey_create_object_v1_requestBodyListEntry;
    list_ForEach(apikey_create_object_v1_requestBodyListEntry, apikey_create_object_v1_request)
    {
        localVar_apikey_create_object_v1_request = apikey_create_object_v1_request_convertToJSON(apikey_create_object_v1_requestBodyListEntry->data);
        if(localVar_apikey_create_object_v1_request == NULL)
        {
            goto end;
        }
        cJSON_AddItemToArray(localVarSingleItemJSON_apikey_create_object_v1_request, localVar_apikey_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarItemJSON_apikey_create_object_v1_request);
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

    if (apiClient->response_code == 201) {
        printf("%s\n","Successful response");
    }
    //nonprimitive not container
    cJSON *ObjectApikeyAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    apikey_create_object_v1_response_t *elementToReturn = apikey_create_object_v1_response_parseFromJSON(ObjectApikeyAPIlocalVarJSON);
    cJSON_Delete(ObjectApikeyAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_free(localVarHeaderType);
    list_free(localVarContentType);
    free(localVarPath);
    if (localVarItemJSON_apikey_create_object_v1_request) {
        cJSON_Delete(localVarItemJSON_apikey_create_object_v1_request);
        localVarItemJSON_apikey_create_object_v1_request = NULL;
    }
    if (localVarSingleItemJSON_apikey_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_apikey_create_object_v1_request);
        localVarSingleItemJSON_apikey_create_object_v1_request = NULL;
    }
    if (localVar_apikey_create_object_v1_request) {
        cJSON_Delete(localVar_apikey_create_object_v1_request);
        localVar_apikey_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

