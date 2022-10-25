#ifndef ezsignfoldertype_request_compound_TEST
#define ezsignfoldertype_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfoldertype_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfoldertype_request_compound.h"
ezsignfoldertype_request_compound_t* instantiate_ezsignfoldertype_request_compound(int include_optional);

#include "test_multilingual_ezsignfoldertype_name.c"


ezsignfoldertype_request_compound_t* instantiate_ezsignfoldertype_request_compound(int include_optional) {
  ezsignfoldertype_request_compound_t* ezsignfoldertype_request_compound = NULL;
  if (include_optional) {
    ezsignfoldertype_request_compound = ezsignfoldertype_request_compound_create(
      5,
       // false, not to have infinite recursion
      instantiate_multilingual_ezsignfoldertype_name(0),
      78,
      1,
      89,
      89,
      1,
      "email@example.com",
      "email@example.com",
      ezmax_api_definition__full_ezsignfoldertype_request_compound__User,
      ezmax_api_definition__full_ezsignfoldertype_request_compound__"None",
      30,
      ezmax_api_definition__full_ezsignfoldertype_request_compound__"Manual",
      365,
      5,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      true,
      true,
      true,
      list_createList(),
      list_createList()
    );
  } else {
    ezsignfoldertype_request_compound = ezsignfoldertype_request_compound_create(
      5,
      NULL,
      78,
      1,
      89,
      89,
      1,
      "email@example.com",
      "email@example.com",
      ezmax_api_definition__full_ezsignfoldertype_request_compound__User,
      ezmax_api_definition__full_ezsignfoldertype_request_compound__"None",
      30,
      ezmax_api_definition__full_ezsignfoldertype_request_compound__"Manual",
      365,
      5,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      true,
      true,
      true,
      list_createList(),
      list_createList()
    );
  }

  return ezsignfoldertype_request_compound;
}


#ifdef ezsignfoldertype_request_compound_MAIN

void test_ezsignfoldertype_request_compound(int include_optional) {
    ezsignfoldertype_request_compound_t* ezsignfoldertype_request_compound_1 = instantiate_ezsignfoldertype_request_compound(include_optional);

	cJSON* jsonezsignfoldertype_request_compound_1 = ezsignfoldertype_request_compound_convertToJSON(ezsignfoldertype_request_compound_1);
	printf("ezsignfoldertype_request_compound :\n%s\n", cJSON_Print(jsonezsignfoldertype_request_compound_1));
	ezsignfoldertype_request_compound_t* ezsignfoldertype_request_compound_2 = ezsignfoldertype_request_compound_parseFromJSON(jsonezsignfoldertype_request_compound_1);
	cJSON* jsonezsignfoldertype_request_compound_2 = ezsignfoldertype_request_compound_convertToJSON(ezsignfoldertype_request_compound_2);
	printf("repeating ezsignfoldertype_request_compound:\n%s\n", cJSON_Print(jsonezsignfoldertype_request_compound_2));
}

int main() {
  test_ezsignfoldertype_request_compound(1);
  test_ezsignfoldertype_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfoldertype_request_compound_MAIN
#endif // ezsignfoldertype_request_compound_TEST
