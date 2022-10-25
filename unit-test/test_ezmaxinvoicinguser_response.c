#ifndef ezmaxinvoicinguser_response_TEST
#define ezmaxinvoicinguser_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezmaxinvoicinguser_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezmaxinvoicinguser_response.h"
ezmaxinvoicinguser_response_t* instantiate_ezmaxinvoicinguser_response(int include_optional);



ezmaxinvoicinguser_response_t* instantiate_ezmaxinvoicinguser_response(int include_optional) {
  ezmaxinvoicinguser_response_t* ezmaxinvoicinguser_response = NULL;
  if (include_optional) {
    ezmaxinvoicinguser_response = ezmaxinvoicinguser_response_create(
      202,
      28,
      1,
      "Default",
      70,
      243,
      true,
      true,
      ezmax_api_definition__full_ezmaxinvoicinguser_response__"Charge"
    );
  } else {
    ezmaxinvoicinguser_response = ezmaxinvoicinguser_response_create(
      202,
      28,
      1,
      "Default",
      70,
      243,
      true,
      true,
      ezmax_api_definition__full_ezmaxinvoicinguser_response__"Charge"
    );
  }

  return ezmaxinvoicinguser_response;
}


#ifdef ezmaxinvoicinguser_response_MAIN

void test_ezmaxinvoicinguser_response(int include_optional) {
    ezmaxinvoicinguser_response_t* ezmaxinvoicinguser_response_1 = instantiate_ezmaxinvoicinguser_response(include_optional);

	cJSON* jsonezmaxinvoicinguser_response_1 = ezmaxinvoicinguser_response_convertToJSON(ezmaxinvoicinguser_response_1);
	printf("ezmaxinvoicinguser_response :\n%s\n", cJSON_Print(jsonezmaxinvoicinguser_response_1));
	ezmaxinvoicinguser_response_t* ezmaxinvoicinguser_response_2 = ezmaxinvoicinguser_response_parseFromJSON(jsonezmaxinvoicinguser_response_1);
	cJSON* jsonezmaxinvoicinguser_response_2 = ezmaxinvoicinguser_response_convertToJSON(ezmaxinvoicinguser_response_2);
	printf("repeating ezmaxinvoicinguser_response:\n%s\n", cJSON_Print(jsonezmaxinvoicinguser_response_2));
}

int main() {
  test_ezmaxinvoicinguser_response(1);
  test_ezmaxinvoicinguser_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezmaxinvoicinguser_response_MAIN
#endif // ezmaxinvoicinguser_response_TEST
