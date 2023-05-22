#ifndef activesession_response_TEST
#define activesession_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define activesession_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/activesession_response.h"
activesession_response_t* instantiate_activesession_response(int include_optional);



activesession_response_t* instantiate_activesession_response(int include_optional) {
  activesession_response_t* activesession_response = NULL;
  if (include_optional) {
    activesession_response = activesession_response_create(
      ezmax_api_definition__full_activesession_response__"Normal",
      ezmax_api_definition__full_activesession_response__"BuiltIn",
      ezmax_api_definition__full_activesession_response__"Sunday",
      2,
      "Acme inc.",
      "Head Office",
      false,
      false,
      "demo",
      28
    );
  } else {
    activesession_response = activesession_response_create(
      ezmax_api_definition__full_activesession_response__"Normal",
      ezmax_api_definition__full_activesession_response__"BuiltIn",
      ezmax_api_definition__full_activesession_response__"Sunday",
      2,
      "Acme inc.",
      "Head Office",
      false,
      false,
      "demo",
      28
    );
  }

  return activesession_response;
}


#ifdef activesession_response_MAIN

void test_activesession_response(int include_optional) {
    activesession_response_t* activesession_response_1 = instantiate_activesession_response(include_optional);

	cJSON* jsonactivesession_response_1 = activesession_response_convertToJSON(activesession_response_1);
	printf("activesession_response :\n%s\n", cJSON_Print(jsonactivesession_response_1));
	activesession_response_t* activesession_response_2 = activesession_response_parseFromJSON(jsonactivesession_response_1);
	cJSON* jsonactivesession_response_2 = activesession_response_convertToJSON(activesession_response_2);
	printf("repeating activesession_response:\n%s\n", cJSON_Print(jsonactivesession_response_2));
}

int main() {
  test_activesession_response(1);
  test_activesession_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // activesession_response_MAIN
#endif // activesession_response_TEST
