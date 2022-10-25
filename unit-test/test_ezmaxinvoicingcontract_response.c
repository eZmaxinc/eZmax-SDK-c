#ifndef ezmaxinvoicingcontract_response_TEST
#define ezmaxinvoicingcontract_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezmaxinvoicingcontract_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezmaxinvoicingcontract_response.h"
ezmaxinvoicingcontract_response_t* instantiate_ezmaxinvoicingcontract_response(int include_optional);

#include "test_common_audit.c"


ezmaxinvoicingcontract_response_t* instantiate_ezmaxinvoicingcontract_response(int include_optional) {
  ezmaxinvoicingcontract_response_t* ezmaxinvoicingcontract_response = NULL;
  if (include_optional) {
    ezmaxinvoicingcontract_response = ezmaxinvoicingcontract_response_create(
      28,
      ezmax_api_definition__full_ezmaxinvoicingcontract_response__"Cheque",
      3,
      "2020-12-31",
      "2020-12-31",
      "335.42",
      "295.48",
      true,
       // false, not to have infinite recursion
      instantiate_common_audit(0)
    );
  } else {
    ezmaxinvoicingcontract_response = ezmaxinvoicingcontract_response_create(
      28,
      ezmax_api_definition__full_ezmaxinvoicingcontract_response__"Cheque",
      3,
      "2020-12-31",
      "2020-12-31",
      "335.42",
      "295.48",
      true,
      NULL
    );
  }

  return ezmaxinvoicingcontract_response;
}


#ifdef ezmaxinvoicingcontract_response_MAIN

void test_ezmaxinvoicingcontract_response(int include_optional) {
    ezmaxinvoicingcontract_response_t* ezmaxinvoicingcontract_response_1 = instantiate_ezmaxinvoicingcontract_response(include_optional);

	cJSON* jsonezmaxinvoicingcontract_response_1 = ezmaxinvoicingcontract_response_convertToJSON(ezmaxinvoicingcontract_response_1);
	printf("ezmaxinvoicingcontract_response :\n%s\n", cJSON_Print(jsonezmaxinvoicingcontract_response_1));
	ezmaxinvoicingcontract_response_t* ezmaxinvoicingcontract_response_2 = ezmaxinvoicingcontract_response_parseFromJSON(jsonezmaxinvoicingcontract_response_1);
	cJSON* jsonezmaxinvoicingcontract_response_2 = ezmaxinvoicingcontract_response_convertToJSON(ezmaxinvoicingcontract_response_2);
	printf("repeating ezmaxinvoicingcontract_response:\n%s\n", cJSON_Print(jsonezmaxinvoicingcontract_response_2));
}

int main() {
  test_ezmaxinvoicingcontract_response(1);
  test_ezmaxinvoicingcontract_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezmaxinvoicingcontract_response_MAIN
#endif // ezmaxinvoicingcontract_response_TEST
