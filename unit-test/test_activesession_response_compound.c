#ifndef activesession_response_compound_TEST
#define activesession_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define activesession_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/activesession_response_compound.h"
activesession_response_compound_t* instantiate_activesession_response_compound(int include_optional);

#include "test_activesession_response_compound_user.c"
#include "test_activesession_response_compound_user.c"
#include "test_activesession_response_compound_apikey.c"


activesession_response_compound_t* instantiate_activesession_response_compound(int include_optional) {
  activesession_response_compound_t* activesession_response_compound = NULL;
  if (include_optional) {
    activesession_response_compound = activesession_response_compound_create(
      ezmax_api_definition__full_activesession_response_compound__"Normal",
      ezmax_api_definition__full_activesession_response_compound__"BuiltIn",
      ezmax_api_definition__full_activesession_response_compound__"Sunday",
      2,
      "Acme inc.",
      "Head Office",
      false,
      false,
      "demo",
      28,
      12,
      true,
      ezmax_api_definition__full_activesession_response_compound__"Standard",
      ezmax_api_definition__full_activesession_response_compound__"PaidByOffice",
      ezmax_api_definition__full_activesession_response_compound__"Basic",
      "2020-12-31",
      list_createList(),
       // false, not to have infinite recursion
      instantiate_activesession_response_compound_user(0),
       // false, not to have infinite recursion
      instantiate_activesession_response_compound_user(0),
       // false, not to have infinite recursion
      instantiate_activesession_response_compound_apikey(0),
      list_createList()
    );
  } else {
    activesession_response_compound = activesession_response_compound_create(
      ezmax_api_definition__full_activesession_response_compound__"Normal",
      ezmax_api_definition__full_activesession_response_compound__"BuiltIn",
      ezmax_api_definition__full_activesession_response_compound__"Sunday",
      2,
      "Acme inc.",
      "Head Office",
      false,
      false,
      "demo",
      28,
      12,
      true,
      ezmax_api_definition__full_activesession_response_compound__"Standard",
      ezmax_api_definition__full_activesession_response_compound__"PaidByOffice",
      ezmax_api_definition__full_activesession_response_compound__"Basic",
      "2020-12-31",
      list_createList(),
      NULL,
      NULL,
      NULL,
      list_createList()
    );
  }

  return activesession_response_compound;
}


#ifdef activesession_response_compound_MAIN

void test_activesession_response_compound(int include_optional) {
    activesession_response_compound_t* activesession_response_compound_1 = instantiate_activesession_response_compound(include_optional);

	cJSON* jsonactivesession_response_compound_1 = activesession_response_compound_convertToJSON(activesession_response_compound_1);
	printf("activesession_response_compound :\n%s\n", cJSON_Print(jsonactivesession_response_compound_1));
	activesession_response_compound_t* activesession_response_compound_2 = activesession_response_compound_parseFromJSON(jsonactivesession_response_compound_1);
	cJSON* jsonactivesession_response_compound_2 = activesession_response_compound_convertToJSON(activesession_response_compound_2);
	printf("repeating activesession_response_compound:\n%s\n", cJSON_Print(jsonactivesession_response_compound_2));
}

int main() {
  test_activesession_response_compound(1);
  test_activesession_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // activesession_response_compound_MAIN
#endif // activesession_response_compound_TEST
