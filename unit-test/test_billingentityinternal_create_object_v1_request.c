#ifndef billingentityinternal_create_object_v1_request_TEST
#define billingentityinternal_create_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define billingentityinternal_create_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/billingentityinternal_create_object_v1_request.h"
billingentityinternal_create_object_v1_request_t* instantiate_billingentityinternal_create_object_v1_request(int include_optional);



billingentityinternal_create_object_v1_request_t* instantiate_billingentityinternal_create_object_v1_request(int include_optional) {
  billingentityinternal_create_object_v1_request_t* billingentityinternal_create_object_v1_request = NULL;
  if (include_optional) {
    billingentityinternal_create_object_v1_request = billingentityinternal_create_object_v1_request_create(
      list_createList()
    );
  } else {
    billingentityinternal_create_object_v1_request = billingentityinternal_create_object_v1_request_create(
      list_createList()
    );
  }

  return billingentityinternal_create_object_v1_request;
}


#ifdef billingentityinternal_create_object_v1_request_MAIN

void test_billingentityinternal_create_object_v1_request(int include_optional) {
    billingentityinternal_create_object_v1_request_t* billingentityinternal_create_object_v1_request_1 = instantiate_billingentityinternal_create_object_v1_request(include_optional);

	cJSON* jsonbillingentityinternal_create_object_v1_request_1 = billingentityinternal_create_object_v1_request_convertToJSON(billingentityinternal_create_object_v1_request_1);
	printf("billingentityinternal_create_object_v1_request :\n%s\n", cJSON_Print(jsonbillingentityinternal_create_object_v1_request_1));
	billingentityinternal_create_object_v1_request_t* billingentityinternal_create_object_v1_request_2 = billingentityinternal_create_object_v1_request_parseFromJSON(jsonbillingentityinternal_create_object_v1_request_1);
	cJSON* jsonbillingentityinternal_create_object_v1_request_2 = billingentityinternal_create_object_v1_request_convertToJSON(billingentityinternal_create_object_v1_request_2);
	printf("repeating billingentityinternal_create_object_v1_request:\n%s\n", cJSON_Print(jsonbillingentityinternal_create_object_v1_request_2));
}

int main() {
  test_billingentityinternal_create_object_v1_request(1);
  test_billingentityinternal_create_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // billingentityinternal_create_object_v1_request_MAIN
#endif // billingentityinternal_create_object_v1_request_TEST
