#ifndef ezsignfoldertype_request_compound_v3_TEST
#define ezsignfoldertype_request_compound_v3_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfoldertype_request_compound_v3_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfoldertype_request_compound_v3.h"
ezsignfoldertype_request_compound_v3_t* instantiate_ezsignfoldertype_request_compound_v3(int include_optional);

#include "test_multilingual_ezsignfoldertype_name.c"


ezsignfoldertype_request_compound_v3_t* instantiate_ezsignfoldertype_request_compound_v3(int include_optional) {
  ezsignfoldertype_request_compound_v3_t* ezsignfoldertype_request_compound_v3 = NULL;
  if (include_optional) {
    ezsignfoldertype_request_compound_v3 = ezsignfoldertype_request_compound_v3_create(
      5,
       // false, not to have infinite recursion
      instantiate_multilingual_ezsignfoldertype_name(0),
      78,
      1,
      1,
      1,
      1,
      1,
      102,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__"All",
      "email@example.com",
      "email@example.com",
      ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__None,
      ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__Reject,
      ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__User,
      10,
      12,
      30,
      30,
      30,
      ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__"Manual",
      ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__"PerEzsigndocument",
      365,
      5,
      true,
      5,
      false,
      true,
      true,
      false,
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
      ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__"No",
      true,
      list_createList(),
      list_createList()
    );
  } else {
    ezsignfoldertype_request_compound_v3 = ezsignfoldertype_request_compound_v3_create(
      5,
      NULL,
      78,
      1,
      1,
      1,
      1,
      1,
      102,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__"All",
      "email@example.com",
      "email@example.com",
      ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__None,
      ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__Reject,
      ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__User,
      10,
      12,
      30,
      30,
      30,
      ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__"Manual",
      ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__"PerEzsigndocument",
      365,
      5,
      true,
      5,
      false,
      true,
      true,
      false,
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
      ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__"No",
      true,
      list_createList(),
      list_createList()
    );
  }

  return ezsignfoldertype_request_compound_v3;
}


#ifdef ezsignfoldertype_request_compound_v3_MAIN

void test_ezsignfoldertype_request_compound_v3(int include_optional) {
    ezsignfoldertype_request_compound_v3_t* ezsignfoldertype_request_compound_v3_1 = instantiate_ezsignfoldertype_request_compound_v3(include_optional);

	cJSON* jsonezsignfoldertype_request_compound_v3_1 = ezsignfoldertype_request_compound_v3_convertToJSON(ezsignfoldertype_request_compound_v3_1);
	printf("ezsignfoldertype_request_compound_v3 :\n%s\n", cJSON_Print(jsonezsignfoldertype_request_compound_v3_1));
	ezsignfoldertype_request_compound_v3_t* ezsignfoldertype_request_compound_v3_2 = ezsignfoldertype_request_compound_v3_parseFromJSON(jsonezsignfoldertype_request_compound_v3_1);
	cJSON* jsonezsignfoldertype_request_compound_v3_2 = ezsignfoldertype_request_compound_v3_convertToJSON(ezsignfoldertype_request_compound_v3_2);
	printf("repeating ezsignfoldertype_request_compound_v3:\n%s\n", cJSON_Print(jsonezsignfoldertype_request_compound_v3_2));
}

int main() {
  test_ezsignfoldertype_request_compound_v3(1);
  test_ezsignfoldertype_request_compound_v3(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfoldertype_request_compound_v3_MAIN
#endif // ezsignfoldertype_request_compound_v3_TEST
