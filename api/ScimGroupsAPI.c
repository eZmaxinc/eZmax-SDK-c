#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ScimGroupsAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Create a new Usergroup
//
scim_group_t*
ScimGroupsAPI_groupsCreateObjectScimV2(apiClient_t *apiClient, scim_group_t *scim_group)
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
    char *localVarPath = strdup("/2/scim/Groups");





    // Body Param
    cJSON *localVarSingleItemJSON_scim_group = NULL;
    if (scim_group != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_scim_group = scim_group_convertToJSON(scim_group);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_scim_group);
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
    //    printf("%s\n","Created");
    //}
    //nonprimitive not container
    scim_group_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ScimGroupsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = scim_group_parseFromJSON(ScimGroupsAPIlocalVarJSON);
        cJSON_Delete(ScimGroupsAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_scim_group) {
        cJSON_Delete(localVarSingleItemJSON_scim_group);
        localVarSingleItemJSON_scim_group = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an existing Usergroup
//
void
ScimGroupsAPI_groupsDeleteObjectScimV2(apiClient_t *apiClient, char *groupId)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/2/scim/Groups/{groupId}");

    if(!groupId)
        goto end;


    // Path Params
    long sizeOfPathParams_groupId = strlen(groupId)+3 + sizeof("{ groupId }") - 1;
    if(groupId == NULL) {
        goto end;
    }
    char* localVarToReplace_groupId = malloc(sizeOfPathParams_groupId);
    sprintf(localVarToReplace_groupId, "{%s}", "groupId");

    localVarPath = strReplace(localVarPath, localVarToReplace_groupId, groupId);


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
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","No Content");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    
    
    free(localVarPath);
    free(localVarToReplace_groupId);

}

// Edit an existing Usergroup
//
scim_group_t*
ScimGroupsAPI_groupsEditObjectScimV2(apiClient_t *apiClient, char *groupId, scim_group_t *scim_group)
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
    char *localVarPath = strdup("/2/scim/Groups/{groupId}");

    if(!groupId)
        goto end;


    // Path Params
    long sizeOfPathParams_groupId = strlen(groupId)+3 + sizeof("{ groupId }") - 1;
    if(groupId == NULL) {
        goto end;
    }
    char* localVarToReplace_groupId = malloc(sizeOfPathParams_groupId);
    sprintf(localVarToReplace_groupId, "{%s}", "groupId");

    localVarPath = strReplace(localVarPath, localVarToReplace_groupId, groupId);



    // Body Param
    cJSON *localVarSingleItemJSON_scim_group = NULL;
    if (scim_group != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_scim_group = scim_group_convertToJSON(scim_group);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_scim_group);
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
                    "PUT");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    scim_group_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ScimGroupsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = scim_group_parseFromJSON(ScimGroupsAPIlocalVarJSON);
        cJSON_Delete(ScimGroupsAPIlocalVarJSON);
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
    free(localVarToReplace_groupId);
    if (localVarSingleItemJSON_scim_group) {
        cJSON_Delete(localVarSingleItemJSON_scim_group);
        localVarSingleItemJSON_scim_group = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve Usergroup list
//
scim_group_t*
ScimGroupsAPI_groupsGetListScimV2(apiClient_t *apiClient, char *filter)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/2/scim/Groups");





    // query parameters
    char *keyQuery_filter = NULL;
    char * valueQuery_filter = NULL;
    keyValuePair_t *keyPairQuery_filter = 0;
    if (filter)
    {
        keyQuery_filter = strdup("filter");
        valueQuery_filter = strdup((filter));
        keyPairQuery_filter = keyValuePair_create(keyQuery_filter, valueQuery_filter);
        list_addElement(localVarQueryParameters,keyPairQuery_filter);
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
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    scim_group_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ScimGroupsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = scim_group_parseFromJSON(ScimGroupsAPIlocalVarJSON);
        cJSON_Delete(ScimGroupsAPIlocalVarJSON);
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
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_filter){
        free(keyQuery_filter);
        keyQuery_filter = NULL;
    }
    if(valueQuery_filter){
        free(valueQuery_filter);
        valueQuery_filter = NULL;
    }
    if(keyPairQuery_filter){
        keyValuePair_free(keyPairQuery_filter);
        keyPairQuery_filter = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Usergroup
//
scim_group_t*
ScimGroupsAPI_groupsGetObjectScimV2(apiClient_t *apiClient, char *groupId)
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
    char *localVarPath = strdup("/2/scim/Groups/{groupId}");

    if(!groupId)
        goto end;


    // Path Params
    long sizeOfPathParams_groupId = strlen(groupId)+3 + sizeof("{ groupId }") - 1;
    if(groupId == NULL) {
        goto end;
    }
    char* localVarToReplace_groupId = malloc(sizeOfPathParams_groupId);
    sprintf(localVarToReplace_groupId, "{%s}", "groupId");

    localVarPath = strReplace(localVarPath, localVarToReplace_groupId, groupId);


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
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    scim_group_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ScimGroupsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = scim_group_parseFromJSON(ScimGroupsAPIlocalVarJSON);
        cJSON_Delete(ScimGroupsAPIlocalVarJSON);
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
    free(localVarToReplace_groupId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

