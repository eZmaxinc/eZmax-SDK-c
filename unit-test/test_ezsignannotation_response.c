#ifndef ezsignannotation_response_TEST
#define ezsignannotation_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignannotation_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignannotation_response.h"
ezsignannotation_response_t* instantiate_ezsignannotation_response(int include_optional);



ezsignannotation_response_t* instantiate_ezsignannotation_response(int include_optional) {
  ezsignannotation_response_t* ezsignannotation_response = NULL;
  if (include_optional) {
    ezsignannotation_response = ezsignannotation_response_create(
      113,
      97,
      ezmax_api_definition__full_ezsignannotation_response__"Center",
      ezmax_api_definition__full_ezsignannotation_response__"Bottom",
      ezmax_api_definition__full_ezsignannotation_response__"Text",
      50,
      50,
      75,
      25,
      "Sample",
      1
    );
  } else {
    ezsignannotation_response = ezsignannotation_response_create(
      113,
      97,
      ezmax_api_definition__full_ezsignannotation_response__"Center",
      ezmax_api_definition__full_ezsignannotation_response__"Bottom",
      ezmax_api_definition__full_ezsignannotation_response__"Text",
      50,
      50,
      75,
      25,
      "Sample",
      1
    );
  }

  return ezsignannotation_response;
}


#ifdef ezsignannotation_response_MAIN

void test_ezsignannotation_response(int include_optional) {
    ezsignannotation_response_t* ezsignannotation_response_1 = instantiate_ezsignannotation_response(include_optional);

	cJSON* jsonezsignannotation_response_1 = ezsignannotation_response_convertToJSON(ezsignannotation_response_1);
	printf("ezsignannotation_response :\n%s\n", cJSON_Print(jsonezsignannotation_response_1));
	ezsignannotation_response_t* ezsignannotation_response_2 = ezsignannotation_response_parseFromJSON(jsonezsignannotation_response_1);
	cJSON* jsonezsignannotation_response_2 = ezsignannotation_response_convertToJSON(ezsignannotation_response_2);
	printf("repeating ezsignannotation_response:\n%s\n", cJSON_Print(jsonezsignannotation_response_2));
}

int main() {
  test_ezsignannotation_response(1);
  test_ezsignannotation_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignannotation_response_MAIN
#endif // ezsignannotation_response_TEST
