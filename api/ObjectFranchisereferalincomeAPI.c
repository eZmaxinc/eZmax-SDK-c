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
// The endpoint allows to create one or many elements at once.
//
franchisereferalincome_create_object_v2_response_t*
ObjectFranchisereferalincomeAPI_franchisereferalincomeCreateObjectV2(apiClient_t *apiClient, franchisereferalincome_create_object_v2_request_t *franchisereferalincome_create_object_v2_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/2/object/franchisereferalincome")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/2/object/franchisereferalincome");




    // Body Param
    cJSON *localVarSingleItemJSON_franchisereferalincome_create_object_v2_request = NULL;
    if (franchisereferalincome_create_object_v2_request != NULL)
    {
        //string
        localVarSingleItemJSON_franchisereferalincome_create_object_v2_request = franchisereferalincome_create_object_v2_request_convertToJSON(franchisereferalincome_create_object_v2_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_franchisereferalincome_create_object_v2_request);
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
    cJSON *ObjectFranchisereferalincomeAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    franchisereferalincome_create_object_v2_response_t *elementToReturn = franchisereferalincome_create_object_v2_response_parseFromJSON(ObjectFranchisereferalincomeAPIlocalVarJSON);
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
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_franchisereferalincome_create_object_v2_request) {
        cJSON_Delete(localVarSingleItemJSON_franchisereferalincome_create_object_v2_request);
        localVarSingleItemJSON_franchisereferalincome_create_object_v2_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

