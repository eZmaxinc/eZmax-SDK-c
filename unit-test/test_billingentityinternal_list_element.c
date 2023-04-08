#ifndef billingentityinternal_list_element_TEST
#define billingentityinternal_list_element_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define billingentityinternal_list_element_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/billingentityinternal_list_element.h"
billingentityinternal_list_element_t* instantiate_billingentityinternal_list_element(int include_optional);



billingentityinternal_list_element_t* instantiate_billingentityinternal_list_element(int include_optional) {
  billingentityinternal_list_element_t* billingentityinternal_list_element = NULL;
  if (include_optional) {
    billingentityinternal_list_element = billingentityinternal_list_element_create(
      1,
      "Default"
    );
  } else {
    billingentityinternal_list_element = billingentityinternal_list_element_create(
      1,
      "Default"
    );
  }

  return billingentityinternal_list_element;
}


#ifdef billingentityinternal_list_element_MAIN

void test_billingentityinternal_list_element(int include_optional) {
    billingentityinternal_list_element_t* billingentityinternal_list_element_1 = instantiate_billingentityinternal_list_element(include_optional);

	cJSON* jsonbillingentityinternal_list_element_1 = billingentityinternal_list_element_convertToJSON(billingentityinternal_list_element_1);
	printf("billingentityinternal_list_element :\n%s\n", cJSON_Print(jsonbillingentityinternal_list_element_1));
	billingentityinternal_list_element_t* billingentityinternal_list_element_2 = billingentityinternal_list_element_parseFromJSON(jsonbillingentityinternal_list_element_1);
	cJSON* jsonbillingentityinternal_list_element_2 = billingentityinternal_list_element_convertToJSON(billingentityinternal_list_element_2);
	printf("repeating billingentityinternal_list_element:\n%s\n", cJSON_Print(jsonbillingentityinternal_list_element_2));
}

int main() {
  test_billingentityinternal_list_element(1);
  test_billingentityinternal_list_element(0);

  printf("Hello world \n");
  return 0;
}

#endif // billingentityinternal_list_element_MAIN
#endif // billingentityinternal_list_element_TEST
