#ifndef global_customer_get_endpoint_v1_response_TEST
#define global_customer_get_endpoint_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define global_customer_get_endpoint_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/global_customer_get_endpoint_v1_response.h"
global_customer_get_endpoint_v1_response_t* instantiate_global_customer_get_endpoint_v1_response(int include_optional);



global_customer_get_endpoint_v1_response_t* instantiate_global_customer_get_endpoint_v1_response(int include_optional) {
  global_customer_get_endpoint_v1_response_t* global_customer_get_endpoint_v1_response = NULL;
  if (include_optional) {
    global_customer_get_endpoint_v1_response = global_customer_get_endpoint_v1_response_create(
      "0"
    );
  } else {
    global_customer_get_endpoint_v1_response = global_customer_get_endpoint_v1_response_create(
      "0"
    );
  }

  return global_customer_get_endpoint_v1_response;
}


#ifdef global_customer_get_endpoint_v1_response_MAIN

void test_global_customer_get_endpoint_v1_response(int include_optional) {
    global_customer_get_endpoint_v1_response_t* global_customer_get_endpoint_v1_response_1 = instantiate_global_customer_get_endpoint_v1_response(include_optional);

	cJSON* jsonglobal_customer_get_endpoint_v1_response_1 = global_customer_get_endpoint_v1_response_convertToJSON(global_customer_get_endpoint_v1_response_1);
	printf("global_customer_get_endpoint_v1_response :\n%s\n", cJSON_Print(jsonglobal_customer_get_endpoint_v1_response_1));
	global_customer_get_endpoint_v1_response_t* global_customer_get_endpoint_v1_response_2 = global_customer_get_endpoint_v1_response_parseFromJSON(jsonglobal_customer_get_endpoint_v1_response_1);
	cJSON* jsonglobal_customer_get_endpoint_v1_response_2 = global_customer_get_endpoint_v1_response_convertToJSON(global_customer_get_endpoint_v1_response_2);
	printf("repeating global_customer_get_endpoint_v1_response:\n%s\n", cJSON_Print(jsonglobal_customer_get_endpoint_v1_response_2));
}

int main() {
  test_global_customer_get_endpoint_v1_response(1);
  test_global_customer_get_endpoint_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // global_customer_get_endpoint_v1_response_MAIN
#endif // global_customer_get_endpoint_v1_response_TEST
