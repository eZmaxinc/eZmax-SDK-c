#ifndef ezmaxinvoicingcommission_response_TEST
#define ezmaxinvoicingcommission_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezmaxinvoicingcommission_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezmaxinvoicingcommission_response.h"
ezmaxinvoicingcommission_response_t* instantiate_ezmaxinvoicingcommission_response(int include_optional);



ezmaxinvoicingcommission_response_t* instantiate_ezmaxinvoicingcommission_response(int include_optional) {
  ezmaxinvoicingcommission_response_t* ezmaxinvoicingcommission_response = NULL;
  if (include_optional) {
    ezmaxinvoicingcommission_response = ezmaxinvoicingcommission_response_create(
      36,
      241,
      12,
      21,
      "2020-12-31",
      "2020-12-31",
      30,
      "450.34"
    );
  } else {
    ezmaxinvoicingcommission_response = ezmaxinvoicingcommission_response_create(
      36,
      241,
      12,
      21,
      "2020-12-31",
      "2020-12-31",
      30,
      "450.34"
    );
  }

  return ezmaxinvoicingcommission_response;
}


#ifdef ezmaxinvoicingcommission_response_MAIN

void test_ezmaxinvoicingcommission_response(int include_optional) {
    ezmaxinvoicingcommission_response_t* ezmaxinvoicingcommission_response_1 = instantiate_ezmaxinvoicingcommission_response(include_optional);

	cJSON* jsonezmaxinvoicingcommission_response_1 = ezmaxinvoicingcommission_response_convertToJSON(ezmaxinvoicingcommission_response_1);
	printf("ezmaxinvoicingcommission_response :\n%s\n", cJSON_Print(jsonezmaxinvoicingcommission_response_1));
	ezmaxinvoicingcommission_response_t* ezmaxinvoicingcommission_response_2 = ezmaxinvoicingcommission_response_parseFromJSON(jsonezmaxinvoicingcommission_response_1);
	cJSON* jsonezmaxinvoicingcommission_response_2 = ezmaxinvoicingcommission_response_convertToJSON(ezmaxinvoicingcommission_response_2);
	printf("repeating ezmaxinvoicingcommission_response:\n%s\n", cJSON_Print(jsonezmaxinvoicingcommission_response_2));
}

int main() {
  test_ezmaxinvoicingcommission_response(1);
  test_ezmaxinvoicingcommission_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezmaxinvoicingcommission_response_MAIN
#endif // ezmaxinvoicingcommission_response_TEST
