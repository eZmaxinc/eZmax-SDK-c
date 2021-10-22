#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ModuleListAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Get all Listpresentation for a specific list
//
// Retrive previously saved Listpresentation
//
list_get_listpresentation_v1_response_t*
ModuleListAPI_listGetListpresentationV1(apiClient_t *apiClient, char * sListName )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/module/list/listpresentation/{sListName}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/module/list/listpresentation/{sListName}");


    // Path Params
    long sizeOfPathParams_sListName = strlen(sListName)+3 + strlen("{ sListName }");
    if(sListName == NULL) {
        goto end;
    }
    char* localVarToReplace_sListName = malloc(sizeOfPathParams_sListName);
    sprintf(localVarToReplace_sListName, "{%s}", "sListName");

    localVarPath = strReplace(localVarPath, localVarToReplace_sListName, sListName);


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

    if (apiClient->response_code == 200) {
        printf("%s\n","Successful response");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","The element you are trying to work on does not exist");
    }
    //nonprimitive not container
    cJSON *ModuleListAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    list_get_listpresentation_v1_response_t *elementToReturn = list_get_listpresentation_v1_response_parseFromJSON(ModuleListAPIlocalVarJSON);
    cJSON_Delete(ModuleListAPIlocalVarJSON);
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
    
    free(localVarPath);
    free(localVarToReplace_sListName);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Save all Listpresentation for a specific list
//
// Users can create many Listpresentations for lists in the system. They can customize orber by, filters, numbers of rows, etc.
//
list_save_listpresentation_v1_response_t*
ModuleListAPI_listSaveListpresentationV1(apiClient_t *apiClient, char * sListName , list_save_listpresentation_v1_request_t * list_save_listpresentation_v1_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/module/list/listpresentation/{sListName}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/module/list/listpresentation/{sListName}");


    // Path Params
    long sizeOfPathParams_sListName = strlen(sListName)+3 + strlen("{ sListName }");
    if(sListName == NULL) {
        goto end;
    }
    char* localVarToReplace_sListName = malloc(sizeOfPathParams_sListName);
    sprintf(localVarToReplace_sListName, "{%s}", "sListName");

    localVarPath = strReplace(localVarPath, localVarToReplace_sListName, sListName);



    // Body Param
    cJSON *localVarSingleItemJSON_list_save_listpresentation_v1_request = NULL;
    if (list_save_listpresentation_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_list_save_listpresentation_v1_request = list_save_listpresentation_v1_request_convertToJSON(list_save_listpresentation_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_list_save_listpresentation_v1_request);
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

    if (apiClient->response_code == 200) {
        printf("%s\n","Successful response");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","The element you are trying to work on does not exist");
    }
    //nonprimitive not container
    cJSON *ModuleListAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    list_save_listpresentation_v1_response_t *elementToReturn = list_save_listpresentation_v1_response_parseFromJSON(ModuleListAPIlocalVarJSON);
    cJSON_Delete(ModuleListAPIlocalVarJSON);
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
    free(localVarToReplace_sListName);
    if (localVarSingleItemJSON_list_save_listpresentation_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_list_save_listpresentation_v1_request);
        localVarSingleItemJSON_list_save_listpresentation_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

