#ifndef ezmaxinvoicingsummaryinternal_response_compound_all_of_TEST
#define ezmaxinvoicingsummaryinternal_response_compound_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezmaxinvoicingsummaryinternal_response_compound_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezmaxinvoicingsummaryinternal_response_compound_all_of.h"
ezmaxinvoicingsummaryinternal_response_compound_all_of_t* instantiate_ezmaxinvoicingsummaryinternal_response_compound_all_of(int include_optional);



ezmaxinvoicingsummaryinternal_response_compound_all_of_t* instantiate_ezmaxinvoicingsummaryinternal_response_compound_all_of(int include_optional) {
  ezmaxinvoicingsummaryinternal_response_compound_all_of_t* ezmaxinvoicingsummaryinternal_response_compound_all_of = NULL;
  if (include_optional) {
    ezmaxinvoicingsummaryinternal_response_compound_all_of = ezmaxinvoicingsummaryinternal_response_compound_all_of_create(
      list_createList()
    );
  } else {
    ezmaxinvoicingsummaryinternal_response_compound_all_of = ezmaxinvoicingsummaryinternal_response_compound_all_of_create(
      list_createList()
    );
  }

  return ezmaxinvoicingsummaryinternal_response_compound_all_of;
}


#ifdef ezmaxinvoicingsummaryinternal_response_compound_all_of_MAIN

void test_ezmaxinvoicingsummaryinternal_response_compound_all_of(int include_optional) {
    ezmaxinvoicingsummaryinternal_response_compound_all_of_t* ezmaxinvoicingsummaryinternal_response_compound_all_of_1 = instantiate_ezmaxinvoicingsummaryinternal_response_compound_all_of(include_optional);

	cJSON* jsonezmaxinvoicingsummaryinternal_response_compound_all_of_1 = ezmaxinvoicingsummaryinternal_response_compound_all_of_convertToJSON(ezmaxinvoicingsummaryinternal_response_compound_all_of_1);
	printf("ezmaxinvoicingsummaryinternal_response_compound_all_of :\n%s\n", cJSON_Print(jsonezmaxinvoicingsummaryinternal_response_compound_all_of_1));
	ezmaxinvoicingsummaryinternal_response_compound_all_of_t* ezmaxinvoicingsummaryinternal_response_compound_all_of_2 = ezmaxinvoicingsummaryinternal_response_compound_all_of_parseFromJSON(jsonezmaxinvoicingsummaryinternal_response_compound_all_of_1);
	cJSON* jsonezmaxinvoicingsummaryinternal_response_compound_all_of_2 = ezmaxinvoicingsummaryinternal_response_compound_all_of_convertToJSON(ezmaxinvoicingsummaryinternal_response_compound_all_of_2);
	printf("repeating ezmaxinvoicingsummaryinternal_response_compound_all_of:\n%s\n", cJSON_Print(jsonezmaxinvoicingsummaryinternal_response_compound_all_of_2));
}

int main() {
  test_ezmaxinvoicingsummaryinternal_response_compound_all_of(1);
  test_ezmaxinvoicingsummaryinternal_response_compound_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezmaxinvoicingsummaryinternal_response_compound_all_of_MAIN
#endif // ezmaxinvoicingsummaryinternal_response_compound_all_of_TEST
