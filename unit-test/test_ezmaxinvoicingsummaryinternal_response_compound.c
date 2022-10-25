#ifndef ezmaxinvoicingsummaryinternal_response_compound_TEST
#define ezmaxinvoicingsummaryinternal_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezmaxinvoicingsummaryinternal_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezmaxinvoicingsummaryinternal_response_compound.h"
ezmaxinvoicingsummaryinternal_response_compound_t* instantiate_ezmaxinvoicingsummaryinternal_response_compound(int include_optional);

#include "test_multilingual_ezmaxinvoicingsummaryinternal_description.c"


ezmaxinvoicingsummaryinternal_response_compound_t* instantiate_ezmaxinvoicingsummaryinternal_response_compound(int include_optional) {
  ezmaxinvoicingsummaryinternal_response_compound_t* ezmaxinvoicingsummaryinternal_response_compound = NULL;
  if (include_optional) {
    ezmaxinvoicingsummaryinternal_response_compound = ezmaxinvoicingsummaryinternal_response_compound_create(
      57,
       // false, not to have infinite recursion
      instantiate_multilingual_ezmaxinvoicingsummaryinternal_description(0),
      "Défaut",
      28,
      1,
      "Default",
      list_createList()
    );
  } else {
    ezmaxinvoicingsummaryinternal_response_compound = ezmaxinvoicingsummaryinternal_response_compound_create(
      57,
      NULL,
      "Défaut",
      28,
      1,
      "Default",
      list_createList()
    );
  }

  return ezmaxinvoicingsummaryinternal_response_compound;
}


#ifdef ezmaxinvoicingsummaryinternal_response_compound_MAIN

void test_ezmaxinvoicingsummaryinternal_response_compound(int include_optional) {
    ezmaxinvoicingsummaryinternal_response_compound_t* ezmaxinvoicingsummaryinternal_response_compound_1 = instantiate_ezmaxinvoicingsummaryinternal_response_compound(include_optional);

	cJSON* jsonezmaxinvoicingsummaryinternal_response_compound_1 = ezmaxinvoicingsummaryinternal_response_compound_convertToJSON(ezmaxinvoicingsummaryinternal_response_compound_1);
	printf("ezmaxinvoicingsummaryinternal_response_compound :\n%s\n", cJSON_Print(jsonezmaxinvoicingsummaryinternal_response_compound_1));
	ezmaxinvoicingsummaryinternal_response_compound_t* ezmaxinvoicingsummaryinternal_response_compound_2 = ezmaxinvoicingsummaryinternal_response_compound_parseFromJSON(jsonezmaxinvoicingsummaryinternal_response_compound_1);
	cJSON* jsonezmaxinvoicingsummaryinternal_response_compound_2 = ezmaxinvoicingsummaryinternal_response_compound_convertToJSON(ezmaxinvoicingsummaryinternal_response_compound_2);
	printf("repeating ezmaxinvoicingsummaryinternal_response_compound:\n%s\n", cJSON_Print(jsonezmaxinvoicingsummaryinternal_response_compound_2));
}

int main() {
  test_ezmaxinvoicingsummaryinternal_response_compound(1);
  test_ezmaxinvoicingsummaryinternal_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezmaxinvoicingsummaryinternal_response_compound_MAIN
#endif // ezmaxinvoicingsummaryinternal_response_compound_TEST
