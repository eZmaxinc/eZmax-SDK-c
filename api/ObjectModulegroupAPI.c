#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectModulegroupAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)

// Functions for enum ECONTEXT for ObjectModulegroupAPI_modulegroupGetAllV1

static char* modulegroupGetAllV1_ECONTEXT_ToString(ezmax_api_definition__full_modulegroupGetAllV1_eContext_e ECONTEXT){
    char *ECONTEXTArray[] =  { "NULL", "Api", "User" };
    return ECONTEXTArray[ECONTEXT];
}

static ezmax_api_definition__full_modulegroupGetAllV1_eContext_e modulegroupGetAllV1_ECONTEXT_FromString(char* ECONTEXT){
    int stringToReturn = 0;
    char *ECONTEXTArray[] =  { "NULL", "Api", "User" };
    size_t sizeofArray = sizeof(ECONTEXTArray) / sizeof(ECONTEXTArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(ECONTEXT, ECONTEXTArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function modulegroupGetAllV1_ECONTEXT_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *modulegroupGetAllV1_ECONTEXT_convertToJSON(ezmax_api_definition__full_modulegroupGetAllV1_eContext_e ECONTEXT) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "eContext", modulegroupGetAllV1_ECONTEXT_ToString(ECONTEXT)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function modulegroupGetAllV1_ECONTEXT_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition__full_modulegroupGetAllV1_eContext_e modulegroupGetAllV1_ECONTEXT_parseFromJSON(cJSON* ECONTEXTJSON) {
    ezmax_api_definition__full_modulegroupGetAllV1_eContext_e ECONTEXTVariable = 0;
    cJSON *ECONTEXTVar = cJSON_GetObjectItemCaseSensitive(ECONTEXTJSON, "eContext");
    if(!cJSON_IsString(ECONTEXTVar) || (ECONTEXTVar->valuestring == NULL))
    {
        goto end;
    }
    ECONTEXTVariable = modulegroupGetAllV1_ECONTEXT_FromString(ECONTEXTVar->valuestring);
    return ECONTEXTVariable;
end:
    return 0;
}
*/


// Retrieve all Modulegroups
//
modulegroup_get_all_v1_response_t*
ObjectModulegroupAPI_modulegroupGetAllV1(apiClient_t *apiClient, ezmax_api_definition__full_modulegroupGetAllV1_eContext_e eContext)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/modulegroup/getAll/{eContext}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/modulegroup/getAll/{eContext}");


    // Path Params
    long sizeOfPathParams_eContext = strlen(eContext)+3 + strlen("{ eContext }");
    if(eContext == NULL) {
        goto end;
    }
    char* localVarToReplace_eContext = malloc(sizeOfPathParams_eContext);
    sprintf(localVarToReplace_eContext, "{%s}", "eContext");

    localVarPath = strReplace(localVarPath, localVarToReplace_eContext, eContext);


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
    cJSON *ObjectModulegroupAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    modulegroup_get_all_v1_response_t *elementToReturn = modulegroup_get_all_v1_response_parseFromJSON(ObjectModulegroupAPIlocalVarJSON);
    cJSON_Delete(ObjectModulegroupAPIlocalVarJSON);
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
    free(localVarToReplace_eContext);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

