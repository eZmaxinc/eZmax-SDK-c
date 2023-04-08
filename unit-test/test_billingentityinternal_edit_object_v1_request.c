#ifndef billingentityinternal_edit_object_v1_request_TEST
#define billingentityinternal_edit_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define billingentityinternal_edit_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/billingentityinternal_edit_object_v1_request.h"
billingentityinternal_edit_object_v1_request_t* instantiate_billingentityinternal_edit_object_v1_request(int include_optional);

#include "test_billingentityinternal_request_compound.c"


billingentityinternal_edit_object_v1_request_t* instantiate_billingentityinternal_edit_object_v1_request(int include_optional) {
  billingentityinternal_edit_object_v1_request_t* billingentityinternal_edit_object_v1_request = NULL;
  if (include_optional) {
    billingentityinternal_edit_object_v1_request = billingentityinternal_edit_object_v1_request_create(
       // false, not to have infinite recursion
      instantiate_billingentityinternal_request_compound(0)
    );
  } else {
    billingentityinternal_edit_object_v1_request = billingentityinternal_edit_object_v1_request_create(
      NULL
    );
  }

  return billingentityinternal_edit_object_v1_request;
}


#ifdef billingentityinternal_edit_object_v1_request_MAIN

void test_billingentityinternal_edit_object_v1_request(int include_optional) {
    billingentityinternal_edit_object_v1_request_t* billingentityinternal_edit_object_v1_request_1 = instantiate_billingentityinternal_edit_object_v1_request(include_optional);

	cJSON* jsonbillingentityinternal_edit_object_v1_request_1 = billingentityinternal_edit_object_v1_request_convertToJSON(billingentityinternal_edit_object_v1_request_1);
	printf("billingentityinternal_edit_object_v1_request :\n%s\n", cJSON_Print(jsonbillingentityinternal_edit_object_v1_request_1));
	billingentityinternal_edit_object_v1_request_t* billingentityinternal_edit_object_v1_request_2 = billingentityinternal_edit_object_v1_request_parseFromJSON(jsonbillingentityinternal_edit_object_v1_request_1);
	cJSON* jsonbillingentityinternal_edit_object_v1_request_2 = billingentityinternal_edit_object_v1_request_convertToJSON(billingentityinternal_edit_object_v1_request_2);
	printf("repeating billingentityinternal_edit_object_v1_request:\n%s\n", cJSON_Print(jsonbillingentityinternal_edit_object_v1_request_2));
}

int main() {
  test_billingentityinternal_edit_object_v1_request(1);
  test_billingentityinternal_edit_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // billingentityinternal_edit_object_v1_request_MAIN
#endif // billingentityinternal_edit_object_v1_request_TEST
