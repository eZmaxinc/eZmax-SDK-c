#ifndef billingentityinternal_request_compound_all_of_TEST
#define billingentityinternal_request_compound_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define billingentityinternal_request_compound_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/billingentityinternal_request_compound_all_of.h"
billingentityinternal_request_compound_all_of_t* instantiate_billingentityinternal_request_compound_all_of(int include_optional);



billingentityinternal_request_compound_all_of_t* instantiate_billingentityinternal_request_compound_all_of(int include_optional) {
  billingentityinternal_request_compound_all_of_t* billingentityinternal_request_compound_all_of = NULL;
  if (include_optional) {
    billingentityinternal_request_compound_all_of = billingentityinternal_request_compound_all_of_create(
      list_createList()
    );
  } else {
    billingentityinternal_request_compound_all_of = billingentityinternal_request_compound_all_of_create(
      list_createList()
    );
  }

  return billingentityinternal_request_compound_all_of;
}


#ifdef billingentityinternal_request_compound_all_of_MAIN

void test_billingentityinternal_request_compound_all_of(int include_optional) {
    billingentityinternal_request_compound_all_of_t* billingentityinternal_request_compound_all_of_1 = instantiate_billingentityinternal_request_compound_all_of(include_optional);

	cJSON* jsonbillingentityinternal_request_compound_all_of_1 = billingentityinternal_request_compound_all_of_convertToJSON(billingentityinternal_request_compound_all_of_1);
	printf("billingentityinternal_request_compound_all_of :\n%s\n", cJSON_Print(jsonbillingentityinternal_request_compound_all_of_1));
	billingentityinternal_request_compound_all_of_t* billingentityinternal_request_compound_all_of_2 = billingentityinternal_request_compound_all_of_parseFromJSON(jsonbillingentityinternal_request_compound_all_of_1);
	cJSON* jsonbillingentityinternal_request_compound_all_of_2 = billingentityinternal_request_compound_all_of_convertToJSON(billingentityinternal_request_compound_all_of_2);
	printf("repeating billingentityinternal_request_compound_all_of:\n%s\n", cJSON_Print(jsonbillingentityinternal_request_compound_all_of_2));
}

int main() {
  test_billingentityinternal_request_compound_all_of(1);
  test_billingentityinternal_request_compound_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // billingentityinternal_request_compound_all_of_MAIN
#endif // billingentityinternal_request_compound_all_of_TEST
