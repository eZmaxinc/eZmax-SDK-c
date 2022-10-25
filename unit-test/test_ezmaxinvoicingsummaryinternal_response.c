#ifndef ezmaxinvoicingsummaryinternal_response_TEST
#define ezmaxinvoicingsummaryinternal_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezmaxinvoicingsummaryinternal_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezmaxinvoicingsummaryinternal_response.h"
ezmaxinvoicingsummaryinternal_response_t* instantiate_ezmaxinvoicingsummaryinternal_response(int include_optional);

#include "test_multilingual_ezmaxinvoicingsummaryinternal_description.c"


ezmaxinvoicingsummaryinternal_response_t* instantiate_ezmaxinvoicingsummaryinternal_response(int include_optional) {
  ezmaxinvoicingsummaryinternal_response_t* ezmaxinvoicingsummaryinternal_response = NULL;
  if (include_optional) {
    ezmaxinvoicingsummaryinternal_response = ezmaxinvoicingsummaryinternal_response_create(
      57,
       // false, not to have infinite recursion
      instantiate_multilingual_ezmaxinvoicingsummaryinternal_description(0),
      "Défaut",
      28,
      1,
      "Default"
    );
  } else {
    ezmaxinvoicingsummaryinternal_response = ezmaxinvoicingsummaryinternal_response_create(
      57,
      NULL,
      "Défaut",
      28,
      1,
      "Default"
    );
  }

  return ezmaxinvoicingsummaryinternal_response;
}


#ifdef ezmaxinvoicingsummaryinternal_response_MAIN

void test_ezmaxinvoicingsummaryinternal_response(int include_optional) {
    ezmaxinvoicingsummaryinternal_response_t* ezmaxinvoicingsummaryinternal_response_1 = instantiate_ezmaxinvoicingsummaryinternal_response(include_optional);

	cJSON* jsonezmaxinvoicingsummaryinternal_response_1 = ezmaxinvoicingsummaryinternal_response_convertToJSON(ezmaxinvoicingsummaryinternal_response_1);
	printf("ezmaxinvoicingsummaryinternal_response :\n%s\n", cJSON_Print(jsonezmaxinvoicingsummaryinternal_response_1));
	ezmaxinvoicingsummaryinternal_response_t* ezmaxinvoicingsummaryinternal_response_2 = ezmaxinvoicingsummaryinternal_response_parseFromJSON(jsonezmaxinvoicingsummaryinternal_response_1);
	cJSON* jsonezmaxinvoicingsummaryinternal_response_2 = ezmaxinvoicingsummaryinternal_response_convertToJSON(ezmaxinvoicingsummaryinternal_response_2);
	printf("repeating ezmaxinvoicingsummaryinternal_response:\n%s\n", cJSON_Print(jsonezmaxinvoicingsummaryinternal_response_2));
}

int main() {
  test_ezmaxinvoicingsummaryinternal_response(1);
  test_ezmaxinvoicingsummaryinternal_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezmaxinvoicingsummaryinternal_response_MAIN
#endif // ezmaxinvoicingsummaryinternal_response_TEST
