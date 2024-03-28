#ifndef ezsignfoldertype_response_compound_v3_TEST
#define ezsignfoldertype_response_compound_v3_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfoldertype_response_compound_v3_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfoldertype_response_compound_v3.h"
ezsignfoldertype_response_compound_v3_t* instantiate_ezsignfoldertype_response_compound_v3(int include_optional);

#include "test_multilingual_ezsignfoldertype_name.c"


ezsignfoldertype_response_compound_v3_t* instantiate_ezsignfoldertype_response_compound_v3(int include_optional) {
  ezsignfoldertype_response_compound_v3_t* ezsignfoldertype_response_compound_v3 = NULL;
  if (include_optional) {
    ezsignfoldertype_response_compound_v3 = ezsignfoldertype_response_compound_v3_create(
      5,
       // false, not to have infinite recursion
      instantiate_multilingual_ezsignfoldertype_name(0),
      78,
      1,
      1,
      "Company X",
      "Default",
      "No",
      "email@example.com",
      "email@example.com",
      ezmax_api_definition__full_ezsignfoldertype_response_compound_v3__User,
      ezmax_api_definition__full_ezsignfoldertype_response_compound_v3__"None",
      30,
      ezmax_api_definition__full_ezsignfoldertype_response_compound_v3__"Manual",
      ezmax_api_definition__full_ezsignfoldertype_response_compound_v3__"PerEzsigndocument",
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
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    ezsignfoldertype_response_compound_v3 = ezsignfoldertype_response_compound_v3_create(
      5,
      NULL,
      78,
      1,
      1,
      "Company X",
      "Default",
      "No",
      "email@example.com",
      "email@example.com",
      ezmax_api_definition__full_ezsignfoldertype_response_compound_v3__User,
      ezmax_api_definition__full_ezsignfoldertype_response_compound_v3__"None",
      30,
      ezmax_api_definition__full_ezsignfoldertype_response_compound_v3__"Manual",
      ezmax_api_definition__full_ezsignfoldertype_response_compound_v3__"PerEzsigndocument",
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
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return ezsignfoldertype_response_compound_v3;
}


#ifdef ezsignfoldertype_response_compound_v3_MAIN

void test_ezsignfoldertype_response_compound_v3(int include_optional) {
    ezsignfoldertype_response_compound_v3_t* ezsignfoldertype_response_compound_v3_1 = instantiate_ezsignfoldertype_response_compound_v3(include_optional);

	cJSON* jsonezsignfoldertype_response_compound_v3_1 = ezsignfoldertype_response_compound_v3_convertToJSON(ezsignfoldertype_response_compound_v3_1);
	printf("ezsignfoldertype_response_compound_v3 :\n%s\n", cJSON_Print(jsonezsignfoldertype_response_compound_v3_1));
	ezsignfoldertype_response_compound_v3_t* ezsignfoldertype_response_compound_v3_2 = ezsignfoldertype_response_compound_v3_parseFromJSON(jsonezsignfoldertype_response_compound_v3_1);
	cJSON* jsonezsignfoldertype_response_compound_v3_2 = ezsignfoldertype_response_compound_v3_convertToJSON(ezsignfoldertype_response_compound_v3_2);
	printf("repeating ezsignfoldertype_response_compound_v3:\n%s\n", cJSON_Print(jsonezsignfoldertype_response_compound_v3_2));
}

int main() {
  test_ezsignfoldertype_response_compound_v3(1);
  test_ezsignfoldertype_response_compound_v3(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfoldertype_response_compound_v3_MAIN
#endif // ezsignfoldertype_response_compound_v3_TEST
