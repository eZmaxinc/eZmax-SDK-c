#ifndef ezsigntemplateglobaldocument_response_TEST
#define ezsigntemplateglobaldocument_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplateglobaldocument_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplateglobaldocument_response.h"
ezsigntemplateglobaldocument_response_t* instantiate_ezsigntemplateglobaldocument_response(int include_optional);



ezsigntemplateglobaldocument_response_t* instantiate_ezsigntemplateglobaldocument_response(int include_optional) {
  ezsigntemplateglobaldocument_response_t* ezsigntemplateglobaldocument_response = NULL;
  if (include_optional) {
    ezsigntemplateglobaldocument_response = ezsigntemplateglobaldocument_response_create(
      133,
      "Standard Contract",
      5,
      8
    );
  } else {
    ezsigntemplateglobaldocument_response = ezsigntemplateglobaldocument_response_create(
      133,
      "Standard Contract",
      5,
      8
    );
  }

  return ezsigntemplateglobaldocument_response;
}


#ifdef ezsigntemplateglobaldocument_response_MAIN

void test_ezsigntemplateglobaldocument_response(int include_optional) {
    ezsigntemplateglobaldocument_response_t* ezsigntemplateglobaldocument_response_1 = instantiate_ezsigntemplateglobaldocument_response(include_optional);

	cJSON* jsonezsigntemplateglobaldocument_response_1 = ezsigntemplateglobaldocument_response_convertToJSON(ezsigntemplateglobaldocument_response_1);
	printf("ezsigntemplateglobaldocument_response :\n%s\n", cJSON_Print(jsonezsigntemplateglobaldocument_response_1));
	ezsigntemplateglobaldocument_response_t* ezsigntemplateglobaldocument_response_2 = ezsigntemplateglobaldocument_response_parseFromJSON(jsonezsigntemplateglobaldocument_response_1);
	cJSON* jsonezsigntemplateglobaldocument_response_2 = ezsigntemplateglobaldocument_response_convertToJSON(ezsigntemplateglobaldocument_response_2);
	printf("repeating ezsigntemplateglobaldocument_response:\n%s\n", cJSON_Print(jsonezsigntemplateglobaldocument_response_2));
}

int main() {
  test_ezsigntemplateglobaldocument_response(1);
  test_ezsigntemplateglobaldocument_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplateglobaldocument_response_MAIN
#endif // ezsigntemplateglobaldocument_response_TEST
