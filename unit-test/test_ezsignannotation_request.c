#ifndef ezsignannotation_request_TEST
#define ezsignannotation_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignannotation_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignannotation_request.h"
ezsignannotation_request_t* instantiate_ezsignannotation_request(int include_optional);



ezsignannotation_request_t* instantiate_ezsignannotation_request(int include_optional) {
  ezsignannotation_request_t* ezsignannotation_request = NULL;
  if (include_optional) {
    ezsignannotation_request = ezsignannotation_request_create(
      113,
      97,
      ezmax_api_definition__full_ezsignannotation_request__"Center",
      ezmax_api_definition__full_ezsignannotation_request__"Bottom",
      ezmax_api_definition__full_ezsignannotation_request__"Text",
      50,
      50,
      75,
      25,
      "Sample",
      1
    );
  } else {
    ezsignannotation_request = ezsignannotation_request_create(
      113,
      97,
      ezmax_api_definition__full_ezsignannotation_request__"Center",
      ezmax_api_definition__full_ezsignannotation_request__"Bottom",
      ezmax_api_definition__full_ezsignannotation_request__"Text",
      50,
      50,
      75,
      25,
      "Sample",
      1
    );
  }

  return ezsignannotation_request;
}


#ifdef ezsignannotation_request_MAIN

void test_ezsignannotation_request(int include_optional) {
    ezsignannotation_request_t* ezsignannotation_request_1 = instantiate_ezsignannotation_request(include_optional);

	cJSON* jsonezsignannotation_request_1 = ezsignannotation_request_convertToJSON(ezsignannotation_request_1);
	printf("ezsignannotation_request :\n%s\n", cJSON_Print(jsonezsignannotation_request_1));
	ezsignannotation_request_t* ezsignannotation_request_2 = ezsignannotation_request_parseFromJSON(jsonezsignannotation_request_1);
	cJSON* jsonezsignannotation_request_2 = ezsignannotation_request_convertToJSON(ezsignannotation_request_2);
	printf("repeating ezsignannotation_request:\n%s\n", cJSON_Print(jsonezsignannotation_request_2));
}

int main() {
  test_ezsignannotation_request(1);
  test_ezsignannotation_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignannotation_request_MAIN
#endif // ezsignannotation_request_TEST
