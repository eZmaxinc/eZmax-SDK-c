#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectFranchisereferalincomeAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create a new Franchisereferalincome
//
// The endpoint allows to create one or many elements at once.  The array can contain simple (Just the object) or compound (The object and its child) objects.  Creating compound elements allows to reduce the multiple requests to create all child objects.
//
franchisereferalincome_create_object_v1_response_t*
ObjectFranchisereferalincomeAPI_franchisereferalincomeCreateObjectV1(apiClient_t *apiClient, list_t * franchisereferalincome_create_object_v1_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/franchisereferalincome")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/franchisereferalincome");




    // Body Param
    //notstring
    cJSON *localVar_franchisereferalincome_create_object_v1_request = NULL;
    cJSON *localVarItemJSON_franchisereferalincome_create_object_v1_request = NULL;
    cJSON *localVarSingleItemJSON_franchisereferalincome_create_object_v1_request = NULL;
    if (franchisereferalincome_create_object_v1_request != NULL)
    {
        localVarItemJSON_franchisereferalincome_create_object_v1_request = cJSON_CreateObject();
        localVarSingleItemJSON_franchisereferalincome_create_object_v1_request = cJSON_AddArrayToObject(localVarItemJSON_franchisereferalincome_create_object_v1_request, "franchisereferalincome_create_object_v1_request");
        if (localVarSingleItemJSON_franchisereferalincome_create_object_v1_request == NULL)
        {
            // nonprimitive container

            goto end;
        }
    }

    listEntry_t *franchisereferalincome_create_object_v1_requestBodyListEntry;
    list_ForEach(franchisereferalincome_create_object_v1_requestBodyListEntry, franchisereferalincome_create_object_v1_request)
    {
        localVar_franchisereferalincome_create_object_v1_request = franchisereferalincome_create_object_v1_request_convertToJSON(franchisereferalincome_create_object_v1_requestBodyListEntry->data);
        if(localVar_franchisereferalincome_create_object_v1_request == NULL)
        {
            goto end;
        }
        cJSON_AddItemToArray(localVarSingleItemJSON_franchisereferalincome_create_object_v1_request, localVar_franchisereferalincome_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarItemJSON_franchisereferalincome_create_object_v1_request);
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
    cJSON *ObjectFranchisereferalincomeAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    franchisereferalincome_create_object_v1_response_t *elementToReturn = franchisereferalincome_create_object_v1_response_parseFromJSON(ObjectFranchisereferalincomeAPIlocalVarJSON);
    cJSON_Delete(ObjectFranchisereferalincomeAPIlocalVarJSON);
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
    if (localVarItemJSON_franchisereferalincome_create_object_v1_request) {
        cJSON_Delete(localVarItemJSON_franchisereferalincome_create_object_v1_request);
        localVarItemJSON_franchisereferalincome_create_object_v1_request = NULL;
    }
    if (localVarSingleItemJSON_franchisereferalincome_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_franchisereferalincome_create_object_v1_request);
        localVarSingleItemJSON_franchisereferalincome_create_object_v1_request = NULL;
    }
    if (localVar_franchisereferalincome_create_object_v1_request) {
        cJSON_Delete(localVar_franchisereferalincome_create_object_v1_request);
        localVar_franchisereferalincome_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

