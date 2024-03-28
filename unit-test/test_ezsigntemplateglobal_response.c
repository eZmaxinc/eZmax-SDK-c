#ifndef ezsigntemplateglobal_response_TEST
#define ezsigntemplateglobal_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplateglobal_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplateglobal_response.h"
ezsigntemplateglobal_response_t* instantiate_ezsigntemplateglobal_response(int include_optional);



ezsigntemplateglobal_response_t* instantiate_ezsigntemplateglobal_response(int include_optional) {
  ezsigntemplateglobal_response_t* ezsigntemplateglobal_response = NULL;
  if (include_optional) {
    ezsigntemplateglobal_response = ezsigntemplateglobal_response_create(
      36,
      133,
      40,
      "Purchase",
      2,
      "English",
      ezmax_api_definition__full_ezsigntemplateglobal_response__"All",
      ezmax_api_definition__full_ezsigntemplateglobal_response__"Centris",
      "DR-FR",
      "Standard Contract"
    );
  } else {
    ezsigntemplateglobal_response = ezsigntemplateglobal_response_create(
      36,
      133,
      40,
      "Purchase",
      2,
      "English",
      ezmax_api_definition__full_ezsigntemplateglobal_response__"All",
      ezmax_api_definition__full_ezsigntemplateglobal_response__"Centris",
      "DR-FR",
      "Standard Contract"
    );
  }

  return ezsigntemplateglobal_response;
}


#ifdef ezsigntemplateglobal_response_MAIN

void test_ezsigntemplateglobal_response(int include_optional) {
    ezsigntemplateglobal_response_t* ezsigntemplateglobal_response_1 = instantiate_ezsigntemplateglobal_response(include_optional);

	cJSON* jsonezsigntemplateglobal_response_1 = ezsigntemplateglobal_response_convertToJSON(ezsigntemplateglobal_response_1);
	printf("ezsigntemplateglobal_response :\n%s\n", cJSON_Print(jsonezsigntemplateglobal_response_1));
	ezsigntemplateglobal_response_t* ezsigntemplateglobal_response_2 = ezsigntemplateglobal_response_parseFromJSON(jsonezsigntemplateglobal_response_1);
	cJSON* jsonezsigntemplateglobal_response_2 = ezsigntemplateglobal_response_convertToJSON(ezsigntemplateglobal_response_2);
	printf("repeating ezsigntemplateglobal_response:\n%s\n", cJSON_Print(jsonezsigntemplateglobal_response_2));
}

int main() {
  test_ezsigntemplateglobal_response(1);
  test_ezsigntemplateglobal_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplateglobal_response_MAIN
#endif // ezsigntemplateglobal_response_TEST
