#ifndef ezmaxinvoicingsummaryexternal_response_compound_all_of_TEST
#define ezmaxinvoicingsummaryexternal_response_compound_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezmaxinvoicingsummaryexternal_response_compound_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezmaxinvoicingsummaryexternal_response_compound_all_of.h"
ezmaxinvoicingsummaryexternal_response_compound_all_of_t* instantiate_ezmaxinvoicingsummaryexternal_response_compound_all_of(int include_optional);



ezmaxinvoicingsummaryexternal_response_compound_all_of_t* instantiate_ezmaxinvoicingsummaryexternal_response_compound_all_of(int include_optional) {
  ezmaxinvoicingsummaryexternal_response_compound_all_of_t* ezmaxinvoicingsummaryexternal_response_compound_all_of = NULL;
  if (include_optional) {
    ezmaxinvoicingsummaryexternal_response_compound_all_of = ezmaxinvoicingsummaryexternal_response_compound_all_of_create(
      list_createList()
    );
  } else {
    ezmaxinvoicingsummaryexternal_response_compound_all_of = ezmaxinvoicingsummaryexternal_response_compound_all_of_create(
      list_createList()
    );
  }

  return ezmaxinvoicingsummaryexternal_response_compound_all_of;
}


#ifdef ezmaxinvoicingsummaryexternal_response_compound_all_of_MAIN

void test_ezmaxinvoicingsummaryexternal_response_compound_all_of(int include_optional) {
    ezmaxinvoicingsummaryexternal_response_compound_all_of_t* ezmaxinvoicingsummaryexternal_response_compound_all_of_1 = instantiate_ezmaxinvoicingsummaryexternal_response_compound_all_of(include_optional);

	cJSON* jsonezmaxinvoicingsummaryexternal_response_compound_all_of_1 = ezmaxinvoicingsummaryexternal_response_compound_all_of_convertToJSON(ezmaxinvoicingsummaryexternal_response_compound_all_of_1);
	printf("ezmaxinvoicingsummaryexternal_response_compound_all_of :\n%s\n", cJSON_Print(jsonezmaxinvoicingsummaryexternal_response_compound_all_of_1));
	ezmaxinvoicingsummaryexternal_response_compound_all_of_t* ezmaxinvoicingsummaryexternal_response_compound_all_of_2 = ezmaxinvoicingsummaryexternal_response_compound_all_of_parseFromJSON(jsonezmaxinvoicingsummaryexternal_response_compound_all_of_1);
	cJSON* jsonezmaxinvoicingsummaryexternal_response_compound_all_of_2 = ezmaxinvoicingsummaryexternal_response_compound_all_of_convertToJSON(ezmaxinvoicingsummaryexternal_response_compound_all_of_2);
	printf("repeating ezmaxinvoicingsummaryexternal_response_compound_all_of:\n%s\n", cJSON_Print(jsonezmaxinvoicingsummaryexternal_response_compound_all_of_2));
}

int main() {
  test_ezmaxinvoicingsummaryexternal_response_compound_all_of(1);
  test_ezmaxinvoicingsummaryexternal_response_compound_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezmaxinvoicingsummaryexternal_response_compound_all_of_MAIN
#endif // ezmaxinvoicingsummaryexternal_response_compound_all_of_TEST
