#ifndef ezsignfoldertype_response_TEST
#define ezsignfoldertype_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfoldertype_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfoldertype_response.h"
ezsignfoldertype_response_t* instantiate_ezsignfoldertype_response(int include_optional);

#include "test_multilingual_ezsignfoldertype_name.c"


ezsignfoldertype_response_t* instantiate_ezsignfoldertype_response(int include_optional) {
  ezsignfoldertype_response_t* ezsignfoldertype_response = NULL;
  if (include_optional) {
    ezsignfoldertype_response = ezsignfoldertype_response_create(
      5,
       // false, not to have infinite recursion
      instantiate_multilingual_ezsignfoldertype_name(0),
      78,
      1,
      2,
      2,
      1,
      "Company X",
      "Default",
      "No",
      "email@example.com",
      "email@example.com",
      "Administration",
      "Administration",
      ezmax_api_definition__full_ezsignfoldertype_response__User,
      ezmax_api_definition__full_ezsignfoldertype_response__"None",
      30,
      ezmax_api_definition__full_ezsignfoldertype_response__"Manual",
      ezmax_api_definition__full_ezsignfoldertype_response__"PerEzsigndocument",
      365,
      5,
      true,
      true,
      true,
      true,
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
      list_createList()
    );
  } else {
    ezsignfoldertype_response = ezsignfoldertype_response_create(
      5,
      NULL,
      78,
      1,
      2,
      2,
      1,
      "Company X",
      "Default",
      "No",
      "email@example.com",
      "email@example.com",
      "Administration",
      "Administration",
      ezmax_api_definition__full_ezsignfoldertype_response__User,
      ezmax_api_definition__full_ezsignfoldertype_response__"None",
      30,
      ezmax_api_definition__full_ezsignfoldertype_response__"Manual",
      ezmax_api_definition__full_ezsignfoldertype_response__"PerEzsigndocument",
      365,
      5,
      true,
      true,
      true,
      true,
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
      list_createList()
    );
  }

  return ezsignfoldertype_response;
}


#ifdef ezsignfoldertype_response_MAIN

void test_ezsignfoldertype_response(int include_optional) {
    ezsignfoldertype_response_t* ezsignfoldertype_response_1 = instantiate_ezsignfoldertype_response(include_optional);

	cJSON* jsonezsignfoldertype_response_1 = ezsignfoldertype_response_convertToJSON(ezsignfoldertype_response_1);
	printf("ezsignfoldertype_response :\n%s\n", cJSON_Print(jsonezsignfoldertype_response_1));
	ezsignfoldertype_response_t* ezsignfoldertype_response_2 = ezsignfoldertype_response_parseFromJSON(jsonezsignfoldertype_response_1);
	cJSON* jsonezsignfoldertype_response_2 = ezsignfoldertype_response_convertToJSON(ezsignfoldertype_response_2);
	printf("repeating ezsignfoldertype_response:\n%s\n", cJSON_Print(jsonezsignfoldertype_response_2));
}

int main() {
  test_ezsignfoldertype_response(1);
  test_ezsignfoldertype_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfoldertype_response_MAIN
#endif // ezsignfoldertype_response_TEST
