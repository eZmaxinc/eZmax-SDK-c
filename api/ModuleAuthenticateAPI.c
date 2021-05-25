#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ModuleAuthenticateAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)

// Functions for enum ESESSIONTYPE for ModuleAuthenticateAPI_authenticateAuthenticateV2

static char* authenticateAuthenticateV2_ESESSIONTYPE_ToString(ezmax_api_definition_authenticateAuthenticateV2_eSessionType_e ESESSIONTYPE){
    char *ESESSIONTYPEArray[] =  { "NULL", "ezsignuser" };
    return ESESSIONTYPEArray[ESESSIONTYPE];
}

static ezmax_api_definition_authenticateAuthenticateV2_eSessionType_e authenticateAuthenticateV2_ESESSIONTYPE_FromString(char* ESESSIONTYPE){
    int stringToReturn = 0;
    char *ESESSIONTYPEArray[] =  { "NULL", "ezsignuser" };
    size_t sizeofArray = sizeof(ESESSIONTYPEArray) / sizeof(ESESSIONTYPEArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(ESESSIONTYPE, ESESSIONTYPEArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function authenticateAuthenticateV2_ESESSIONTYPE_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *authenticateAuthenticateV2_ESESSIONTYPE_convertToJSON(ezmax_api_definition_authenticateAuthenticateV2_eSessionType_e ESESSIONTYPE) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "eSessionType", authenticateAuthenticateV2_ESESSIONTYPE_ToString(ESESSIONTYPE)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function authenticateAuthenticateV2_ESESSIONTYPE_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ezmax_api_definition_authenticateAuthenticateV2_eSessionType_e authenticateAuthenticateV2_ESESSIONTYPE_parseFromJSON(cJSON* ESESSIONTYPEJSON) {
    ezmax_api_definition_authenticateAuthenticateV2_eSessionType_e ESESSIONTYPEVariable = 0;
    cJSON *ESESSIONTYPEVar = cJSON_GetObjectItemCaseSensitive(ESESSIONTYPEJSON, "eSessionType");
    if(!cJSON_IsString(ESESSIONTYPEVar) || (ESESSIONTYPEVar->valuestring == NULL))
    {
        goto end;
    }
    ESESSIONTYPEVariable = authenticateAuthenticateV2_ESESSIONTYPE_FromString(ESESSIONTYPEVar->valuestring);
    return ESESSIONTYPEVariable;
end:
    return 0;
}
*/


// Authenticate a user
//
// This endpoint authenticates a user.
//
authenticate_authenticate_v2_response_t*
ModuleAuthenticateAPI_authenticateAuthenticateV2(apiClient_t *apiClient, ezmax_api_definition_authenticateAuthenticateV2_eSessionType_e eSessionType , authenticate_authenticate_v2_request_t * authenticate_authenticate_v2_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/2/module/authenticate/authenticate/ezsignuser/{eSessionType}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/2/module/authenticate/authenticate/ezsignuser/{eSessionType}");


    // Path Params
    long sizeOfPathParams_eSessionType = strlen(eSessionType)+3 + strlen("{ eSessionType }");
    if(eSessionType == NULL) {
        goto end;
    }
    char* localVarToReplace_eSessionType = malloc(sizeOfPathParams_eSessionType);
    sprintf(localVarToReplace_eSessionType, "{%s}", "eSessionType");

    localVarPath = strReplace(localVarPath, localVarToReplace_eSessionType, eSessionType);



    // Body Param
    cJSON *localVarSingleItemJSON_authenticate_authenticate_v2_request = NULL;
    if (authenticate_authenticate_v2_request != NULL)
    {
        //string
        localVarSingleItemJSON_authenticate_authenticate_v2_request = authenticate_authenticate_v2_request_convertToJSON(authenticate_authenticate_v2_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_authenticate_authenticate_v2_request);
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
    if (apiClient->response_code == 401) {
        printf("%s\n","Unauthorized");
    }
    //nonprimitive not container
    cJSON *ModuleAuthenticateAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    authenticate_authenticate_v2_response_t *elementToReturn = authenticate_authenticate_v2_response_parseFromJSON(ModuleAuthenticateAPIlocalVarJSON);
    cJSON_Delete(ModuleAuthenticateAPIlocalVarJSON);
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
    free(localVarToReplace_eSessionType);
    if (localVarSingleItemJSON_authenticate_authenticate_v2_request) {
        cJSON_Delete(localVarSingleItemJSON_authenticate_authenticate_v2_request);
        localVarSingleItemJSON_authenticate_authenticate_v2_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

