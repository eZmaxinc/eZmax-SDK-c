#ifndef ezmaxinvoicingsummaryexternal_response_compound_TEST
#define ezmaxinvoicingsummaryexternal_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezmaxinvoicingsummaryexternal_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezmaxinvoicingsummaryexternal_response_compound.h"
ezmaxinvoicingsummaryexternal_response_compound_t* instantiate_ezmaxinvoicingsummaryexternal_response_compound(int include_optional);



ezmaxinvoicingsummaryexternal_response_compound_t* instantiate_ezmaxinvoicingsummaryexternal_response_compound(int include_optional) {
  ezmaxinvoicingsummaryexternal_response_compound_t* ezmaxinvoicingsummaryexternal_response_compound = NULL;
  if (include_optional) {
    ezmaxinvoicingsummaryexternal_response_compound = ezmaxinvoicingsummaryexternal_response_compound_create(
      177,
      28,
      83,
      "ACME Inc",
      "Company Demo",
      list_createList()
    );
  } else {
    ezmaxinvoicingsummaryexternal_response_compound = ezmaxinvoicingsummaryexternal_response_compound_create(
      177,
      28,
      83,
      "ACME Inc",
      "Company Demo",
      list_createList()
    );
  }

  return ezmaxinvoicingsummaryexternal_response_compound;
}


#ifdef ezmaxinvoicingsummaryexternal_response_compound_MAIN

void test_ezmaxinvoicingsummaryexternal_response_compound(int include_optional) {
    ezmaxinvoicingsummaryexternal_response_compound_t* ezmaxinvoicingsummaryexternal_response_compound_1 = instantiate_ezmaxinvoicingsummaryexternal_response_compound(include_optional);

	cJSON* jsonezmaxinvoicingsummaryexternal_response_compound_1 = ezmaxinvoicingsummaryexternal_response_compound_convertToJSON(ezmaxinvoicingsummaryexternal_response_compound_1);
	printf("ezmaxinvoicingsummaryexternal_response_compound :\n%s\n", cJSON_Print(jsonezmaxinvoicingsummaryexternal_response_compound_1));
	ezmaxinvoicingsummaryexternal_response_compound_t* ezmaxinvoicingsummaryexternal_response_compound_2 = ezmaxinvoicingsummaryexternal_response_compound_parseFromJSON(jsonezmaxinvoicingsummaryexternal_response_compound_1);
	cJSON* jsonezmaxinvoicingsummaryexternal_response_compound_2 = ezmaxinvoicingsummaryexternal_response_compound_convertToJSON(ezmaxinvoicingsummaryexternal_response_compound_2);
	printf("repeating ezmaxinvoicingsummaryexternal_response_compound:\n%s\n", cJSON_Print(jsonezmaxinvoicingsummaryexternal_response_compound_2));
}

int main() {
  test_ezmaxinvoicingsummaryexternal_response_compound(1);
  test_ezmaxinvoicingsummaryexternal_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezmaxinvoicingsummaryexternal_response_compound_MAIN
#endif // ezmaxinvoicingsummaryexternal_response_compound_TEST
