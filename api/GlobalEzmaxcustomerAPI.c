#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "GlobalEzmaxcustomerAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Get ezmaxcustomer configuration
//
// Retrieve the ezmaxcustomer's specific configuration. This will help locate the proper region (ie: sInfrastructureregionCode) and the proper environment (ie: sInfrastructureenvironmenttypeDescription) where the customer's data is stored.
//
global_ezmaxcustomer_get_configuration_v1_response_t*
GlobalEzmaxcustomerAPI_globalEzmaxcustomerGetConfigurationV1(apiClient_t *apiClient, char *pksEzmaxcustomerCode)
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
    char *localVarPath = strdup("/1/ezmaxcustomer/{pksEzmaxcustomerCode}/getConfiguration");

    if(!pksEzmaxcustomerCode)
        goto end;


    // Path Params
    long sizeOfPathParams_pksEzmaxcustomerCode = strlen(pksEzmaxcustomerCode)+3 + sizeof("{ pksEzmaxcustomerCode }") - 1;
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
                    localVarBodyLength,
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
    global_ezmaxcustomer_get_configuration_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *GlobalEzmaxcustomerAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = global_ezmaxcustomer_get_configuration_v1_response_parseFromJSON(GlobalEzmaxcustomerAPIlocalVarJSON);
        cJSON_Delete(GlobalEzmaxcustomerAPIlocalVarJSON);
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
    free(localVarToReplace_pksEzmaxcustomerCode);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

