#ifndef customer_create_object_v1_request_TEST
#define customer_create_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define customer_create_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/customer_create_object_v1_request.h"
customer_create_object_v1_request_t* instantiate_customer_create_object_v1_request(int include_optional);



customer_create_object_v1_request_t* instantiate_customer_create_object_v1_request(int include_optional) {
  customer_create_object_v1_request_t* customer_create_object_v1_request = NULL;
  if (include_optional) {
    customer_create_object_v1_request = customer_create_object_v1_request_create(
      list_createList()
    );
  } else {
    customer_create_object_v1_request = customer_create_object_v1_request_create(
      list_createList()
    );
  }

  return customer_create_object_v1_request;
}


#ifdef customer_create_object_v1_request_MAIN

void test_customer_create_object_v1_request(int include_optional) {
    customer_create_object_v1_request_t* customer_create_object_v1_request_1 = instantiate_customer_create_object_v1_request(include_optional);

	cJSON* jsoncustomer_create_object_v1_request_1 = customer_create_object_v1_request_convertToJSON(customer_create_object_v1_request_1);
	printf("customer_create_object_v1_request :\n%s\n", cJSON_Print(jsoncustomer_create_object_v1_request_1));
	customer_create_object_v1_request_t* customer_create_object_v1_request_2 = customer_create_object_v1_request_parseFromJSON(jsoncustomer_create_object_v1_request_1);
	cJSON* jsoncustomer_create_object_v1_request_2 = customer_create_object_v1_request_convertToJSON(customer_create_object_v1_request_2);
	printf("repeating customer_create_object_v1_request:\n%s\n", cJSON_Print(jsoncustomer_create_object_v1_request_2));
}

int main() {
  test_customer_create_object_v1_request(1);
  test_customer_create_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // customer_create_object_v1_request_MAIN
#endif // customer_create_object_v1_request_TEST
