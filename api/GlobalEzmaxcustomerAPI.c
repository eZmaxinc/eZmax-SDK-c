#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "GlobalEzmaxcustomerAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Get ezmaxcustomer configuration
//
// Retrieve the ezmaxcustomer's specific configuration. This will help locate the proper region (ie: sInfrastructureregionCode) and the proper environment (ie: sInfrastructureenvironmenttypeDescription) where the customer's data is stored.
//
global_ezmaxcustomer_get_configuration_v1_response_t*
GlobalEzmaxcustomerAPI_globalEzmaxcustomerGetConfigurationV1(apiClient_t *apiClient, char * pksEzmaxcustomerCode )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/ezmaxcustomer/{pksEzmaxcustomerCode}/getConfiguration")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/ezmaxcustomer/{pksEzmaxcustomerCode}/getConfiguration");


    // Path Params
    long sizeOfPathParams_pksEzmaxcustomerCode = strlen(pksEzmaxcustomerCode)+3 + strlen("{ pksEzmaxcustomerCode }");
    if(pksEzmaxcustomerCode == NULL) {
        goto end;
    }
    char* localVarToReplace_pksEzmaxcustomerCode = malloc(sizeOfPathParams_pksEzmaxcustomerCode);
    sprintf(localVarToReplace_pksEzmaxcustomerCode, "{%s}", "pksEzmaxcustomerCode");

    localVarPath = strReplace(localVarPath, localVarToReplace_pksEzmaxcustomerCode, pksEzmaxcustomerCode);


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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","The request failed. The element on which you were trying to work does not exists. Look for detail about the error in the body");
    //}
    //nonprimitive not container
    cJSON *GlobalEzmaxcustomerAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    global_ezmaxcustomer_get_configuration_v1_response_t *elementToReturn = global_ezmaxcustomer_get_configuration_v1_response_parseFromJSON(GlobalEzmaxcustomerAPIlocalVarJSON);
    cJSON_Delete(GlobalEzmaxcustomerAPIlocalVarJSON);
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
    free(localVarToReplace_pksEzmaxcustomerCode);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

