#ifndef ezmaxinvoicingsummaryglobal_response_TEST
#define ezmaxinvoicingsummaryglobal_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezmaxinvoicingsummaryglobal_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezmaxinvoicingsummaryglobal_response.h"
ezmaxinvoicingsummaryglobal_response_t* instantiate_ezmaxinvoicingsummaryglobal_response(int include_optional);



ezmaxinvoicingsummaryglobal_response_t* instantiate_ezmaxinvoicingsummaryglobal_response(int include_optional) {
  ezmaxinvoicingsummaryglobal_response_t* ezmaxinvoicingsummaryglobal_response = NULL;
  if (include_optional) {
    ezmaxinvoicingsummaryglobal_response = ezmaxinvoicingsummaryglobal_response_create(
      241,
      28,
      172,
      "eZmax (License)",
      "2020-12-31",
      "2020-12-31",
      30,
      "649.08",
      "581.56",
      "200.00",
      "0.00",
      "0.00",
      "2.00",
      "198.00",
      "685.88",
      "266.49",
      "521.71",
      true,
      "This is an exemple of help message"
    );
  } else {
    ezmaxinvoicingsummaryglobal_response = ezmaxinvoicingsummaryglobal_response_create(
      241,
      28,
      172,
      "eZmax (License)",
      "2020-12-31",
      "2020-12-31",
      30,
      "649.08",
      "581.56",
      "200.00",
      "0.00",
      "0.00",
      "2.00",
      "198.00",
      "685.88",
      "266.49",
      "521.71",
      true,
      "This is an exemple of help message"
    );
  }

  return ezmaxinvoicingsummaryglobal_response;
}


#ifdef ezmaxinvoicingsummaryglobal_response_MAIN

void test_ezmaxinvoicingsummaryglobal_response(int include_optional) {
    ezmaxinvoicingsummaryglobal_response_t* ezmaxinvoicingsummaryglobal_response_1 = instantiate_ezmaxinvoicingsummaryglobal_response(include_optional);

	cJSON* jsonezmaxinvoicingsummaryglobal_response_1 = ezmaxinvoicingsummaryglobal_response_convertToJSON(ezmaxinvoicingsummaryglobal_response_1);
	printf("ezmaxinvoicingsummaryglobal_response :\n%s\n", cJSON_Print(jsonezmaxinvoicingsummaryglobal_response_1));
	ezmaxinvoicingsummaryglobal_response_t* ezmaxinvoicingsummaryglobal_response_2 = ezmaxinvoicingsummaryglobal_response_parseFromJSON(jsonezmaxinvoicingsummaryglobal_response_1);
	cJSON* jsonezmaxinvoicingsummaryglobal_response_2 = ezmaxinvoicingsummaryglobal_response_convertToJSON(ezmaxinvoicingsummaryglobal_response_2);
	printf("repeating ezmaxinvoicingsummaryglobal_response:\n%s\n", cJSON_Print(jsonezmaxinvoicingsummaryglobal_response_2));
}

int main() {
  test_ezmaxinvoicingsummaryglobal_response(1);
  test_ezmaxinvoicingsummaryglobal_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezmaxinvoicingsummaryglobal_response_MAIN
#endif // ezmaxinvoicingsummaryglobal_response_TEST
