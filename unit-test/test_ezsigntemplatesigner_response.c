#ifndef ezsigntemplatesigner_response_TEST
#define ezsigntemplatesigner_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatesigner_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatesigner_response.h"
ezsigntemplatesigner_response_t* instantiate_ezsigntemplatesigner_response(int include_optional);



ezsigntemplatesigner_response_t* instantiate_ezsigntemplatesigner_response(int include_optional) {
  ezsigntemplatesigner_response_t* ezsigntemplatesigner_response = NULL;
  if (include_optional) {
    ezsigntemplatesigner_response = ezsigntemplatesigner_response_create(
      9,
      36,
      70,
      2,
      95,
      1,
      ezmax_api_definition__full_ezsigntemplatesigner_response__"Manual",
      "Customer",
      "Default",
      "Administration"
    );
  } else {
    ezsigntemplatesigner_response = ezsigntemplatesigner_response_create(
      9,
      36,
      70,
      2,
      95,
      1,
      ezmax_api_definition__full_ezsigntemplatesigner_response__"Manual",
      "Customer",
      "Default",
      "Administration"
    );
  }

  return ezsigntemplatesigner_response;
}


#ifdef ezsigntemplatesigner_response_MAIN

void test_ezsigntemplatesigner_response(int include_optional) {
    ezsigntemplatesigner_response_t* ezsigntemplatesigner_response_1 = instantiate_ezsigntemplatesigner_response(include_optional);

	cJSON* jsonezsigntemplatesigner_response_1 = ezsigntemplatesigner_response_convertToJSON(ezsigntemplatesigner_response_1);
	printf("ezsigntemplatesigner_response :\n%s\n", cJSON_Print(jsonezsigntemplatesigner_response_1));
	ezsigntemplatesigner_response_t* ezsigntemplatesigner_response_2 = ezsigntemplatesigner_response_parseFromJSON(jsonezsigntemplatesigner_response_1);
	cJSON* jsonezsigntemplatesigner_response_2 = ezsigntemplatesigner_response_convertToJSON(ezsigntemplatesigner_response_2);
	printf("repeating ezsigntemplatesigner_response:\n%s\n", cJSON_Print(jsonezsigntemplatesigner_response_2));
}

int main() {
  test_ezsigntemplatesigner_response(1);
  test_ezsigntemplatesigner_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatesigner_response_MAIN
#endif // ezsigntemplatesigner_response_TEST
