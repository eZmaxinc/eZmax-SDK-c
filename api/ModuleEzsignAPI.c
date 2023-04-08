#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ModuleEzsignAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Suggest signers
//
// Retrieve previously used Ezsignsigners and all users from the system
//
ezsign_suggest_signers_v1_response_t*
ModuleEzsignAPI_ezsignSuggestSignersV1(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/module/ezsign/suggestSigners")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/module/ezsign/suggestSigners");



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
    //    printf("%s\n","Successful response");
    //}
    //nonprimitive not container
    cJSON *ModuleEzsignAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsign_suggest_signers_v1_response_t *elementToReturn = ezsign_suggest_signers_v1_response_parseFromJSON(ModuleEzsignAPIlocalVarJSON);
    cJSON_Delete(ModuleEzsignAPIlocalVarJSON);
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

// Suggest templates
//
// Retrieve Ezsigntemplates and Ezsigntemplatepackages that can be imported in a Ezsignfolder
//
ezsign_suggest_templates_v1_response_t*
ModuleEzsignAPI_ezsignSuggestTemplatesV1(apiClient_t *apiClient, int fkiEzsignfoldertypeID )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/module/ezsign/suggestTemplates")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/module/ezsign/suggestTemplates");




    // query parameters
    char *keyQuery_fkiEzsignfoldertypeID = NULL;
    char * valueQuery_fkiEzsignfoldertypeID = NULL;
    keyValuePair_t *keyPairQuery_fkiEzsignfoldertypeID = 0;
    if (1) // Always send integer parameters to the API server
    {
        keyQuery_fkiEzsignfoldertypeID = strdup("fkiEzsignfoldertypeID");
        valueQuery_fkiEzsignfoldertypeID = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_fkiEzsignfoldertypeID, MAX_NUMBER_LENGTH, "%d", fkiEzsignfoldertypeID);
        keyPairQuery_fkiEzsignfoldertypeID = keyValuePair_create(keyQuery_fkiEzsignfoldertypeID, valueQuery_fkiEzsignfoldertypeID);
        list_addElement(localVarQueryParameters,keyPairQuery_fkiEzsignfoldertypeID);
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
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    //nonprimitive not container
    cJSON *ModuleEzsignAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsign_suggest_templates_v1_response_t *elementToReturn = ezsign_suggest_templates_v1_response_parseFromJSON(ModuleEzsignAPIlocalVarJSON);
    cJSON_Delete(ModuleEzsignAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
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
    if(keyQuery_fkiEzsignfoldertypeID){
        free(keyQuery_fkiEzsignfoldertypeID);
        keyQuery_fkiEzsignfoldertypeID = NULL;
    }
    if(valueQuery_fkiEzsignfoldertypeID){
        free(valueQuery_fkiEzsignfoldertypeID);
        valueQuery_fkiEzsignfoldertypeID = NULL;
    }
    if(keyPairQuery_fkiEzsignfoldertypeID){
        keyValuePair_free(keyPairQuery_fkiEzsignfoldertypeID);
        keyPairQuery_fkiEzsignfoldertypeID = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

