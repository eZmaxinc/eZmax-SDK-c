#ifndef ezmaxinvoicingagent_response_TEST
#define ezmaxinvoicingagent_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezmaxinvoicingagent_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezmaxinvoicingagent_response.h"
ezmaxinvoicingagent_response_t* instantiate_ezmaxinvoicingagent_response(int include_optional);



ezmaxinvoicingagent_response_t* instantiate_ezmaxinvoicingagent_response(int include_optional) {
  ezmaxinvoicingagent_response_t* ezmaxinvoicingagent_response = NULL;
  if (include_optional) {
    ezmaxinvoicingagent_response = ezmaxinvoicingagent_response_create(
      181,
      28,
      1,
      "Default",
      1,
      26,
      42,
      157,
      30,
      113,
      51,
      213,
      198,
      107,
      160,
      true,
      true,
      ezmax_api_definition__full_ezmaxinvoicingagent_response__"Charge",
      true,
      ezmax_api_definition__full_ezmaxinvoicingagent_response__"Charge"
    );
  } else {
    ezmaxinvoicingagent_response = ezmaxinvoicingagent_response_create(
      181,
      28,
      1,
      "Default",
      1,
      26,
      42,
      157,
      30,
      113,
      51,
      213,
      198,
      107,
      160,
      true,
      true,
      ezmax_api_definition__full_ezmaxinvoicingagent_response__"Charge",
      true,
      ezmax_api_definition__full_ezmaxinvoicingagent_response__"Charge"
    );
  }

  return ezmaxinvoicingagent_response;
}


#ifdef ezmaxinvoicingagent_response_MAIN

void test_ezmaxinvoicingagent_response(int include_optional) {
    ezmaxinvoicingagent_response_t* ezmaxinvoicingagent_response_1 = instantiate_ezmaxinvoicingagent_response(include_optional);

	cJSON* jsonezmaxinvoicingagent_response_1 = ezmaxinvoicingagent_response_convertToJSON(ezmaxinvoicingagent_response_1);
	printf("ezmaxinvoicingagent_response :\n%s\n", cJSON_Print(jsonezmaxinvoicingagent_response_1));
	ezmaxinvoicingagent_response_t* ezmaxinvoicingagent_response_2 = ezmaxinvoicingagent_response_parseFromJSON(jsonezmaxinvoicingagent_response_1);
	cJSON* jsonezmaxinvoicingagent_response_2 = ezmaxinvoicingagent_response_convertToJSON(ezmaxinvoicingagent_response_2);
	printf("repeating ezmaxinvoicingagent_response:\n%s\n", cJSON_Print(jsonezmaxinvoicingagent_response_2));
}

int main() {
  test_ezmaxinvoicingagent_response(1);
  test_ezmaxinvoicingagent_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezmaxinvoicingagent_response_MAIN
#endif // ezmaxinvoicingagent_response_TEST
