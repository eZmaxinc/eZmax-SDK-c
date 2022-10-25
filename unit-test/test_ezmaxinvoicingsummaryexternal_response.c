#ifndef ezmaxinvoicingsummaryexternal_response_TEST
#define ezmaxinvoicingsummaryexternal_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezmaxinvoicingsummaryexternal_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezmaxinvoicingsummaryexternal_response.h"
ezmaxinvoicingsummaryexternal_response_t* instantiate_ezmaxinvoicingsummaryexternal_response(int include_optional);



ezmaxinvoicingsummaryexternal_response_t* instantiate_ezmaxinvoicingsummaryexternal_response(int include_optional) {
  ezmaxinvoicingsummaryexternal_response_t* ezmaxinvoicingsummaryexternal_response = NULL;
  if (include_optional) {
    ezmaxinvoicingsummaryexternal_response = ezmaxinvoicingsummaryexternal_response_create(
      177,
      28,
      83,
      "Default",
      "Company Demo"
    );
  } else {
    ezmaxinvoicingsummaryexternal_response = ezmaxinvoicingsummaryexternal_response_create(
      177,
      28,
      83,
      "Default",
      "Company Demo"
    );
  }

  return ezmaxinvoicingsummaryexternal_response;
}


#ifdef ezmaxinvoicingsummaryexternal_response_MAIN

void test_ezmaxinvoicingsummaryexternal_response(int include_optional) {
    ezmaxinvoicingsummaryexternal_response_t* ezmaxinvoicingsummaryexternal_response_1 = instantiate_ezmaxinvoicingsummaryexternal_response(include_optional);

	cJSON* jsonezmaxinvoicingsummaryexternal_response_1 = ezmaxinvoicingsummaryexternal_response_convertToJSON(ezmaxinvoicingsummaryexternal_response_1);
	printf("ezmaxinvoicingsummaryexternal_response :\n%s\n", cJSON_Print(jsonezmaxinvoicingsummaryexternal_response_1));
	ezmaxinvoicingsummaryexternal_response_t* ezmaxinvoicingsummaryexternal_response_2 = ezmaxinvoicingsummaryexternal_response_parseFromJSON(jsonezmaxinvoicingsummaryexternal_response_1);
	cJSON* jsonezmaxinvoicingsummaryexternal_response_2 = ezmaxinvoicingsummaryexternal_response_convertToJSON(ezmaxinvoicingsummaryexternal_response_2);
	printf("repeating ezmaxinvoicingsummaryexternal_response:\n%s\n", cJSON_Print(jsonezmaxinvoicingsummaryexternal_response_2));
}

int main() {
  test_ezmaxinvoicingsummaryexternal_response(1);
  test_ezmaxinvoicingsummaryexternal_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezmaxinvoicingsummaryexternal_response_MAIN
#endif // ezmaxinvoicingsummaryexternal_response_TEST
