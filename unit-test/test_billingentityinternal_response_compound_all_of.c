#ifndef billingentityinternal_response_compound_all_of_TEST
#define billingentityinternal_response_compound_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define billingentityinternal_response_compound_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/billingentityinternal_response_compound_all_of.h"
billingentityinternal_response_compound_all_of_t* instantiate_billingentityinternal_response_compound_all_of(int include_optional);



billingentityinternal_response_compound_all_of_t* instantiate_billingentityinternal_response_compound_all_of(int include_optional) {
  billingentityinternal_response_compound_all_of_t* billingentityinternal_response_compound_all_of = NULL;
  if (include_optional) {
    billingentityinternal_response_compound_all_of = billingentityinternal_response_compound_all_of_create(
      list_createList()
    );
  } else {
    billingentityinternal_response_compound_all_of = billingentityinternal_response_compound_all_of_create(
      list_createList()
    );
  }

  return billingentityinternal_response_compound_all_of;
}


#ifdef billingentityinternal_response_compound_all_of_MAIN

void test_billingentityinternal_response_compound_all_of(int include_optional) {
    billingentityinternal_response_compound_all_of_t* billingentityinternal_response_compound_all_of_1 = instantiate_billingentityinternal_response_compound_all_of(include_optional);

	cJSON* jsonbillingentityinternal_response_compound_all_of_1 = billingentityinternal_response_compound_all_of_convertToJSON(billingentityinternal_response_compound_all_of_1);
	printf("billingentityinternal_response_compound_all_of :\n%s\n", cJSON_Print(jsonbillingentityinternal_response_compound_all_of_1));
	billingentityinternal_response_compound_all_of_t* billingentityinternal_response_compound_all_of_2 = billingentityinternal_response_compound_all_of_parseFromJSON(jsonbillingentityinternal_response_compound_all_of_1);
	cJSON* jsonbillingentityinternal_response_compound_all_of_2 = billingentityinternal_response_compound_all_of_convertToJSON(billingentityinternal_response_compound_all_of_2);
	printf("repeating billingentityinternal_response_compound_all_of:\n%s\n", cJSON_Print(jsonbillingentityinternal_response_compound_all_of_2));
}

int main() {
  test_billingentityinternal_response_compound_all_of(1);
  test_billingentityinternal_response_compound_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // billingentityinternal_response_compound_all_of_MAIN
#endif // billingentityinternal_response_compound_all_of_TEST
