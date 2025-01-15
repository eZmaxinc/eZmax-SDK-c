#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectDiscussionmembershipAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


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

    // create the path
    long sizeOfPath = strlen("/1/object/discussionmembership")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/discussionmembership");




    // Body Param
    cJSON *localVarSingleItemJSON_discussionmembership_create_object_v1_request = NULL;
    if (discussionmembership_create_object_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_discussionmembership_create_object_v1_request = discussionmembership_create_object_v1_request_convertToJSON(discussionmembership_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_discussionmembership_create_object_v1_request);
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
    cJSON *ObjectDiscussionmembershipAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    discussionmembership_create_object_v1_response_t *elementToReturn = discussionmembership_create_object_v1_response_parseFromJSON(ObjectDiscussionmembershipAPIlocalVarJSON);
    cJSON_Delete(ObjectDiscussionmembershipAPIlocalVarJSON);
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
common_response_t*
ObjectDiscussionmembershipAPI_discussionmembershipDeleteObjectV1(apiClient_t *apiClient, int *pkiDiscussionmembershipID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/discussionmembership/{pkiDiscussionmembershipID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/discussionmembership/{pkiDiscussionmembershipID}");


    // Path Params
    long sizeOfPathParams_pkiDiscussionmembershipID =  + strlen("{ pkiDiscussionmembershipID }");
    if(pkiDiscussionmembershipID == 0){
        goto end;
    }
    char* localVarToReplace_pkiDiscussionmembershipID = malloc(sizeOfPathParams_pkiDiscussionmembershipID);
    snprintf(localVarToReplace_pkiDiscussionmembershipID, sizeOfPathParams_pkiDiscussionmembershipID, "{%s}", "pkiDiscussionmembershipID");

    char localVarBuff_pkiDiscussionmembershipID[256];
    intToStr(localVarBuff_pkiDiscussionmembershipID, *pkiDiscussionmembershipID);

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
    cJSON *ObjectDiscussionmembershipAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    common_response_t *elementToReturn = common_response_parseFromJSON(ObjectDiscussionmembershipAPIlocalVarJSON);
    cJSON_Delete(ObjectDiscussionmembershipAPIlocalVarJSON);
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
    free(localVarToReplace_pkiDiscussionmembershipID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

