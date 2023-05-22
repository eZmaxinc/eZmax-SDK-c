#ifndef ezmaxinvoicingsummaryinternaldetail_response_TEST
#define ezmaxinvoicingsummaryinternaldetail_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezmaxinvoicingsummaryinternaldetail_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezmaxinvoicingsummaryinternaldetail_response.h"
ezmaxinvoicingsummaryinternaldetail_response_t* instantiate_ezmaxinvoicingsummaryinternaldetail_response(int include_optional);



ezmaxinvoicingsummaryinternaldetail_response_t* instantiate_ezmaxinvoicingsummaryinternaldetail_response(int include_optional) {
  ezmaxinvoicingsummaryinternaldetail_response_t* ezmaxinvoicingsummaryinternaldetail_response = NULL;
  if (include_optional) {
    ezmaxinvoicingsummaryinternaldetail_response = ezmaxinvoicingsummaryinternaldetail_response_create(
      73,
      57,
      172,
      "eZmax (License)",
      83,
      "ACME Inc",
      "350.32",
      "625.41",
      "560.81",
      "510.77",
      true,
      "This is an exemple of help message"
    );
  } else {
    ezmaxinvoicingsummaryinternaldetail_response = ezmaxinvoicingsummaryinternaldetail_response_create(
      73,
      57,
      172,
      "eZmax (License)",
      83,
      "ACME Inc",
      "350.32",
      "625.41",
      "560.81",
      "510.77",
      true,
      "This is an exemple of help message"
    );
  }

  return ezmaxinvoicingsummaryinternaldetail_response;
}


#ifdef ezmaxinvoicingsummaryinternaldetail_response_MAIN

void test_ezmaxinvoicingsummaryinternaldetail_response(int include_optional) {
    ezmaxinvoicingsummaryinternaldetail_response_t* ezmaxinvoicingsummaryinternaldetail_response_1 = instantiate_ezmaxinvoicingsummaryinternaldetail_response(include_optional);

	cJSON* jsonezmaxinvoicingsummaryinternaldetail_response_1 = ezmaxinvoicingsummaryinternaldetail_response_convertToJSON(ezmaxinvoicingsummaryinternaldetail_response_1);
	printf("ezmaxinvoicingsummaryinternaldetail_response :\n%s\n", cJSON_Print(jsonezmaxinvoicingsummaryinternaldetail_response_1));
	ezmaxinvoicingsummaryinternaldetail_response_t* ezmaxinvoicingsummaryinternaldetail_response_2 = ezmaxinvoicingsummaryinternaldetail_response_parseFromJSON(jsonezmaxinvoicingsummaryinternaldetail_response_1);
	cJSON* jsonezmaxinvoicingsummaryinternaldetail_response_2 = ezmaxinvoicingsummaryinternaldetail_response_convertToJSON(ezmaxinvoicingsummaryinternaldetail_response_2);
	printf("repeating ezmaxinvoicingsummaryinternaldetail_response:\n%s\n", cJSON_Print(jsonezmaxinvoicingsummaryinternaldetail_response_2));
}

int main() {
  test_ezmaxinvoicingsummaryinternaldetail_response(1);
  test_ezmaxinvoicingsummaryinternaldetail_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezmaxinvoicingsummaryinternaldetail_response_MAIN
#endif // ezmaxinvoicingsummaryinternaldetail_response_TEST
