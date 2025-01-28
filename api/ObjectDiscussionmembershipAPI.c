#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectDiscussionmembershipAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Create a new Discussionmembership
//
// The endpoint allows to create one or many elements at once.
//
discussionmembership_create_object_v1_response_t*
ObjectDiscussionmembershipAPI_discussionmembershipCreateObjectV1(apiClient_t *apiClient, discussionmembership_create_object_v1_request_t *discussionmembership_create_object_v1_request)
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
    char *localVarPath = strdup("/1/object/discussionmembership");





    // Body Param
    cJSON *localVarSingleItemJSON_discussionmembership_create_object_v1_request = NULL;
    if (discussionmembership_create_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_discussionmembership_create_object_v1_request = discussionmembership_create_object_v1_request_convertToJSON(discussionmembership_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_discussionmembership_create_object_v1_request);
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
    //nonprimitive not container
    discussionmembership_create_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectDiscussionmembershipAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = discussionmembership_create_object_v1_response_parseFromJSON(ObjectDiscussionmembershipAPIlocalVarJSON);
        cJSON_Delete(ObjectDiscussionmembershipAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_discussionmembership_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_discussionmembership_create_object_v1_request);
        localVarSingleItemJSON_discussionmembership_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an existing Discussionmembership
//
// 
//
discussionmembership_delete_object_v1_response_t*
ObjectDiscussionmembershipAPI_discussionmembershipDeleteObjectV1(apiClient_t *apiClient, int *pkiDiscussionmembershipID)
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
    char *localVarPath = strdup("/1/object/discussionmembership/{pkiDiscussionmembershipID}");



    // Path Params
    long sizeOfPathParams_pkiDiscussionmembershipID =  + sizeof("{ pkiDiscussionmembershipID }") - 1;
    if(pkiDiscussionmembershipID == 0){
        goto end;
    }
    char* localVarToReplace_pkiDiscussionmembershipID = malloc(sizeOfPathParams_pkiDiscussionmembershipID);
    snprintf(localVarToReplace_pkiDiscussionmembershipID, sizeOfPathParams_pkiDiscussionmembershipID, "{%s}", "pkiDiscussionmembershipID");

    char localVarBuff_pkiDiscussionmembershipID[256];
    snprintf(localVarBuff_pkiDiscussionmembershipID, sizeof localVarBuff_pkiDiscussionmembershipID, "%ld", (long)*pkiDiscussionmembershipID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiDiscussionmembershipID, localVarBuff_pkiDiscussionmembershipID);



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
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    discussionmembership_delete_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectDiscussionmembershipAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = discussionmembership_delete_object_v1_response_parseFromJSON(ObjectDiscussionmembershipAPIlocalVarJSON);
        cJSON_Delete(ObjectDiscussionmembershipAPIlocalVarJSON);
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
    free(localVarToReplace_pkiDiscussionmembershipID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

