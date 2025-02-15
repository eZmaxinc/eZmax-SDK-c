#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectFranchisereferalincomeAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


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
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/2/object/franchisereferalincome");





    // Body Param
    cJSON *localVarSingleItemJSON_franchisereferalincome_create_object_v2_request = NULL;
    if (franchisereferalincome_create_object_v2_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_franchisereferalincome_create_object_v2_request = franchisereferalincome_create_object_v2_request_convertToJSON(franchisereferalincome_create_object_v2_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_franchisereferalincome_create_object_v2_request);
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
    //if (apiClient->response_code == 201) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","The request was syntactically valid but failed because of this Franchisebroker is not in this Franchiseoffice. fkiFranchiseofficeID contains the id of Franchiseoffice where the Franchisebroker is located on the dtFranchisereferalincomeDisbursed. ");
    //}
    //nonprimitive not container
    franchisereferalincome_create_object_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectFranchisereferalincomeAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = franchisereferalincome_create_object_v2_response_parseFromJSON(ObjectFranchisereferalincomeAPIlocalVarJSON);
        cJSON_Delete(ObjectFranchisereferalincomeAPIlocalVarJSON);
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

