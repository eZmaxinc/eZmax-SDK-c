#ifndef billingentityinternal_request_compound_TEST
#define billingentityinternal_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define billingentityinternal_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/billingentityinternal_request_compound.h"
billingentityinternal_request_compound_t* instantiate_billingentityinternal_request_compound(int include_optional);

#include "test_multilingual_billingentityinternal_description.c"


billingentityinternal_request_compound_t* instantiate_billingentityinternal_request_compound(int include_optional) {
  billingentityinternal_request_compound_t* billingentityinternal_request_compound = NULL;
  if (include_optional) {
    billingentityinternal_request_compound = billingentityinternal_request_compound_create(
      1,
       // false, not to have infinite recursion
      instantiate_multilingual_billingentityinternal_description(0)
    );
  } else {
    billingentityinternal_request_compound = billingentityinternal_request_compound_create(
      1,
      NULL
    );
  }

  return billingentityinternal_request_compound;
}


#ifdef billingentityinternal_request_compound_MAIN

void test_billingentityinternal_request_compound(int include_optional) {
    billingentityinternal_request_compound_t* billingentityinternal_request_compound_1 = instantiate_billingentityinternal_request_compound(include_optional);

	cJSON* jsonbillingentityinternal_request_compound_1 = billingentityinternal_request_compound_convertToJSON(billingentityinternal_request_compound_1);
	printf("billingentityinternal_request_compound :\n%s\n", cJSON_Print(jsonbillingentityinternal_request_compound_1));
	billingentityinternal_request_compound_t* billingentityinternal_request_compound_2 = billingentityinternal_request_compound_parseFromJSON(jsonbillingentityinternal_request_compound_1);
	cJSON* jsonbillingentityinternal_request_compound_2 = billingentityinternal_request_compound_convertToJSON(billingentityinternal_request_compound_2);
	printf("repeating billingentityinternal_request_compound:\n%s\n", cJSON_Print(jsonbillingentityinternal_request_compound_2));
}

int main() {
  test_billingentityinternal_request_compound(1);
  test_billingentityinternal_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // billingentityinternal_request_compound_MAIN
#endif // billingentityinternal_request_compound_TEST
