#ifndef ezsignfoldertype_request_v2_TEST
#define ezsignfoldertype_request_v2_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfoldertype_request_v2_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfoldertype_request_v2.h"
ezsignfoldertype_request_v2_t* instantiate_ezsignfoldertype_request_v2(int include_optional);

#include "test_multilingual_ezsignfoldertype_name.c"


ezsignfoldertype_request_v2_t* instantiate_ezsignfoldertype_request_v2(int include_optional) {
  ezsignfoldertype_request_v2_t* ezsignfoldertype_request_v2 = NULL;
  if (include_optional) {
    ezsignfoldertype_request_v2 = ezsignfoldertype_request_v2_create(
      5,
       // false, not to have infinite recursion
      instantiate_multilingual_ezsignfoldertype_name(0),
      78,
      1,
      1,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      "email@example.com",
      "email@example.com",
      ezmax_api_definition__full_ezsignfoldertype_request_v2__User,
      ezmax_api_definition__full_ezsignfoldertype_request_v2__"None",
      30,
      ezmax_api_definition__full_ezsignfoldertype_request_v2__"Manual",
      ezmax_api_definition__full_ezsignfoldertype_request_v2__"PerEzsigndocument",
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
      true
    );
  } else {
    ezsignfoldertype_request_v2 = ezsignfoldertype_request_v2_create(
      5,
      NULL,
      78,
      1,
      1,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      "email@example.com",
      "email@example.com",
      ezmax_api_definition__full_ezsignfoldertype_request_v2__User,
      ezmax_api_definition__full_ezsignfoldertype_request_v2__"None",
      30,
      ezmax_api_definition__full_ezsignfoldertype_request_v2__"Manual",
      ezmax_api_definition__full_ezsignfoldertype_request_v2__"PerEzsigndocument",
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
      true
    );
  }

  return ezsignfoldertype_request_v2;
}


#ifdef ezsignfoldertype_request_v2_MAIN

void test_ezsignfoldertype_request_v2(int include_optional) {
    ezsignfoldertype_request_v2_t* ezsignfoldertype_request_v2_1 = instantiate_ezsignfoldertype_request_v2(include_optional);

	cJSON* jsonezsignfoldertype_request_v2_1 = ezsignfoldertype_request_v2_convertToJSON(ezsignfoldertype_request_v2_1);
	printf("ezsignfoldertype_request_v2 :\n%s\n", cJSON_Print(jsonezsignfoldertype_request_v2_1));
	ezsignfoldertype_request_v2_t* ezsignfoldertype_request_v2_2 = ezsignfoldertype_request_v2_parseFromJSON(jsonezsignfoldertype_request_v2_1);
	cJSON* jsonezsignfoldertype_request_v2_2 = ezsignfoldertype_request_v2_convertToJSON(ezsignfoldertype_request_v2_2);
	printf("repeating ezsignfoldertype_request_v2:\n%s\n", cJSON_Print(jsonezsignfoldertype_request_v2_2));
}

int main() {
  test_ezsignfoldertype_request_v2(1);
  test_ezsignfoldertype_request_v2(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfoldertype_request_v2_MAIN
#endif // ezsignfoldertype_request_v2_TEST
