#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectCustomerAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// Create a new Customer
//
// The endpoint allows to create one or many elements at once.
//
customer_create_object_v1_response_t*
ObjectCustomerAPI_customerCreateObjectV1(apiClient_t *apiClient, customer_create_object_v1_request_t *customer_create_object_v1_request)
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
    char *localVarPath = strdup("/1/object/customer");





    // Body Param
    cJSON *localVarSingleItemJSON_customer_create_object_v1_request = NULL;
    if (customer_create_object_v1_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_customer_create_object_v1_request = customer_create_object_v1_request_convertToJSON(customer_create_object_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_customer_create_object_v1_request);
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
    customer_create_object_v1_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectCustomerAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = customer_create_object_v1_response_parseFromJSON(ObjectCustomerAPIlocalVarJSON);
        cJSON_Delete(ObjectCustomerAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_customer_create_object_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_customer_create_object_v1_request);
        localVarSingleItemJSON_customer_create_object_v1_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve an existing Customer
//
// 
//
customer_get_object_v2_response_t*
ObjectCustomerAPI_customerGetObjectV2(apiClient_t *apiClient, int *pkiCustomerID)
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
    char *localVarPath = strdup("/2/object/customer/{pkiCustomerID}");



    // Path Params
    long sizeOfPathParams_pkiCustomerID =  + sizeof("{ pkiCustomerID }") - 1;
    if(pkiCustomerID == 0){
        goto end;
    }
    char* localVarToReplace_pkiCustomerID = malloc(sizeOfPathParams_pkiCustomerID);
    snprintf(localVarToReplace_pkiCustomerID, sizeOfPathParams_pkiCustomerID, "{%s}", "pkiCustomerID");

    char localVarBuff_pkiCustomerID[256];
    snprintf(localVarBuff_pkiCustomerID, sizeof localVarBuff_pkiCustomerID, "%ld", (long)*pkiCustomerID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiCustomerID, localVarBuff_pkiCustomerID);



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
    customer_get_object_v2_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *ObjectCustomerAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = customer_get_object_v2_response_parseFromJSON(ObjectCustomerAPIlocalVarJSON);
        cJSON_Delete(ObjectCustomerAPIlocalVarJSON);
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
    free(localVarToReplace_pkiCustomerID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

