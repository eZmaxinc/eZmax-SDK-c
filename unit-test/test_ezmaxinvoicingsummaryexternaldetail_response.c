#ifndef ezmaxinvoicingsummaryexternaldetail_response_TEST
#define ezmaxinvoicingsummaryexternaldetail_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezmaxinvoicingsummaryexternaldetail_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezmaxinvoicingsummaryexternaldetail_response.h"
ezmaxinvoicingsummaryexternaldetail_response_t* instantiate_ezmaxinvoicingsummaryexternaldetail_response(int include_optional);



ezmaxinvoicingsummaryexternaldetail_response_t* instantiate_ezmaxinvoicingsummaryexternaldetail_response(int include_optional) {
  ezmaxinvoicingsummaryexternaldetail_response_t* ezmaxinvoicingsummaryexternaldetail_response = NULL;
  if (include_optional) {
    ezmaxinvoicingsummaryexternaldetail_response = ezmaxinvoicingsummaryexternaldetail_response_create(
      163,
      177,
      172,
      "eZmax (License)",
      "815.61",
      "382.88",
      "608.18",
      "869.71",
      true,
      "This is an exemple of help message"
    );
  } else {
    ezmaxinvoicingsummaryexternaldetail_response = ezmaxinvoicingsummaryexternaldetail_response_create(
      163,
      177,
      172,
      "eZmax (License)",
      "815.61",
      "382.88",
      "608.18",
      "869.71",
      true,
      "This is an exemple of help message"
    );
  }

  return ezmaxinvoicingsummaryexternaldetail_response;
}


#ifdef ezmaxinvoicingsummaryexternaldetail_response_MAIN

void test_ezmaxinvoicingsummaryexternaldetail_response(int include_optional) {
    ezmaxinvoicingsummaryexternaldetail_response_t* ezmaxinvoicingsummaryexternaldetail_response_1 = instantiate_ezmaxinvoicingsummaryexternaldetail_response(include_optional);

	cJSON* jsonezmaxinvoicingsummaryexternaldetail_response_1 = ezmaxinvoicingsummaryexternaldetail_response_convertToJSON(ezmaxinvoicingsummaryexternaldetail_response_1);
	printf("ezmaxinvoicingsummaryexternaldetail_response :\n%s\n", cJSON_Print(jsonezmaxinvoicingsummaryexternaldetail_response_1));
	ezmaxinvoicingsummaryexternaldetail_response_t* ezmaxinvoicingsummaryexternaldetail_response_2 = ezmaxinvoicingsummaryexternaldetail_response_parseFromJSON(jsonezmaxinvoicingsummaryexternaldetail_response_1);
	cJSON* jsonezmaxinvoicingsummaryexternaldetail_response_2 = ezmaxinvoicingsummaryexternaldetail_response_convertToJSON(ezmaxinvoicingsummaryexternaldetail_response_2);
	printf("repeating ezmaxinvoicingsummaryexternaldetail_response:\n%s\n", cJSON_Print(jsonezmaxinvoicingsummaryexternaldetail_response_2));
}

int main() {
  test_ezmaxinvoicingsummaryexternaldetail_response(1);
  test_ezmaxinvoicingsummaryexternaldetail_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezmaxinvoicingsummaryexternaldetail_response_MAIN
#endif // ezmaxinvoicingsummaryexternaldetail_response_TEST
