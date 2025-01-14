#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/customer_create_object_v1_request.h"
#include "../model/customer_create_object_v1_response.h"
#include "../model/customer_get_object_v2_response.h"


// Create a new Customer
//
// The endpoint allows to create one or many elements at once.
//
customer_create_object_v1_response_t*
ObjectCustomerAPI_customerCreateObjectV1(apiClient_t *apiClient, customer_create_object_v1_request_t *customer_create_object_v1_request);


// Retrieve an existing Customer
//
// 
//
customer_get_object_v2_response_t*
ObjectCustomerAPI_customerGetObjectV2(apiClient_t *apiClient, int *pkiCustomerID);


