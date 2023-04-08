#ifndef billingentityinternal_response_compound_TEST
#define billingentityinternal_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define billingentityinternal_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/billingentityinternal_response_compound.h"
billingentityinternal_response_compound_t* instantiate_billingentityinternal_response_compound(int include_optional);

#include "test_multilingual_billingentityinternal_description.c"


billingentityinternal_response_compound_t* instantiate_billingentityinternal_response_compound(int include_optional) {
  billingentityinternal_response_compound_t* billingentityinternal_response_compound = NULL;
  if (include_optional) {
    billingentityinternal_response_compound = billingentityinternal_response_compound_create(
      1,
       // false, not to have infinite recursion
      instantiate_multilingual_billingentityinternal_description(0)
    );
  } else {
    billingentityinternal_response_compound = billingentityinternal_response_compound_create(
      1,
      NULL
    );
  }

  return billingentityinternal_response_compound;
}


#ifdef billingentityinternal_response_compound_MAIN

void test_billingentityinternal_response_compound(int include_optional) {
    billingentityinternal_response_compound_t* billingentityinternal_response_compound_1 = instantiate_billingentityinternal_response_compound(include_optional);

	cJSON* jsonbillingentityinternal_response_compound_1 = billingentityinternal_response_compound_convertToJSON(billingentityinternal_response_compound_1);
	printf("billingentityinternal_response_compound :\n%s\n", cJSON_Print(jsonbillingentityinternal_response_compound_1));
	billingentityinternal_response_compound_t* billingentityinternal_response_compound_2 = billingentityinternal_response_compound_parseFromJSON(jsonbillingentityinternal_response_compound_1);
	cJSON* jsonbillingentityinternal_response_compound_2 = billingentityinternal_response_compound_convertToJSON(billingentityinternal_response_compound_2);
	printf("repeating billingentityinternal_response_compound:\n%s\n", cJSON_Print(jsonbillingentityinternal_response_compound_2));
}

int main() {
  test_billingentityinternal_response_compound(1);
  test_billingentityinternal_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // billingentityinternal_response_compound_MAIN
#endif // billingentityinternal_response_compound_TEST
