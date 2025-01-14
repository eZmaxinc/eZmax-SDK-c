#ifndef ezsignfoldertype_response_v4_TEST
#define ezsignfoldertype_response_v4_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfoldertype_response_v4_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfoldertype_response_v4.h"
ezsignfoldertype_response_v4_t* instantiate_ezsignfoldertype_response_v4(int include_optional);

#include "test_multilingual_ezsignfoldertype_name.c"
#include "test_common_audit.c"


ezsignfoldertype_response_v4_t* instantiate_ezsignfoldertype_response_v4(int include_optional) {
  ezsignfoldertype_response_v4_t* ezsignfoldertype_response_v4 = NULL;
  if (include_optional) {
    ezsignfoldertype_response_v4 = ezsignfoldertype_response_v4_create(
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
      ezmax_api_definition__full_ezsignfoldertype_response_v4__"All",
      "Company X",
      "Default",
      "No",
      "email@example.com",
      "email@example.com",
      ezmax_api_definition__full_ezsignfoldertype_response_v4__None,
      ezmax_api_definition__full_ezsignfoldertype_response_v4__Reject,
      ezmax_api_definition__full_ezsignfoldertype_response_v4__User,
      10,
      12,
      30,
      30,
      30,
      ezmax_api_definition__full_ezsignfoldertype_response_v4__"Manual",
      ezmax_api_definition__full_ezsignfoldertype_response_v4__"PerEzsigndocument",
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
      ezmax_api_definition__full_ezsignfoldertype_response_v4__"No",
      true,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_common_audit(0)
    );
  } else {
    ezsignfoldertype_response_v4 = ezsignfoldertype_response_v4_create(
      5,
      NULL,
      78,
      1,
      1,
      1,
      1,
      1,
      102,
      ezmax_api_definition__full_ezsignfoldertype_response_v4__"All",
      "Company X",
      "Default",
      "No",
      "email@example.com",
      "email@example.com",
      ezmax_api_definition__full_ezsignfoldertype_response_v4__None,
      ezmax_api_definition__full_ezsignfoldertype_response_v4__Reject,
      ezmax_api_definition__full_ezsignfoldertype_response_v4__User,
      10,
      12,
      30,
      30,
      30,
      ezmax_api_definition__full_ezsignfoldertype_response_v4__"Manual",
      ezmax_api_definition__full_ezsignfoldertype_response_v4__"PerEzsigndocument",
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
      ezmax_api_definition__full_ezsignfoldertype_response_v4__"No",
      true,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      NULL
    );
  }

  return ezsignfoldertype_response_v4;
}


#ifdef ezsignfoldertype_response_v4_MAIN

void test_ezsignfoldertype_response_v4(int include_optional) {
    ezsignfoldertype_response_v4_t* ezsignfoldertype_response_v4_1 = instantiate_ezsignfoldertype_response_v4(include_optional);

	cJSON* jsonezsignfoldertype_response_v4_1 = ezsignfoldertype_response_v4_convertToJSON(ezsignfoldertype_response_v4_1);
	printf("ezsignfoldertype_response_v4 :\n%s\n", cJSON_Print(jsonezsignfoldertype_response_v4_1));
	ezsignfoldertype_response_v4_t* ezsignfoldertype_response_v4_2 = ezsignfoldertype_response_v4_parseFromJSON(jsonezsignfoldertype_response_v4_1);
	cJSON* jsonezsignfoldertype_response_v4_2 = ezsignfoldertype_response_v4_convertToJSON(ezsignfoldertype_response_v4_2);
	printf("repeating ezsignfoldertype_response_v4:\n%s\n", cJSON_Print(jsonezsignfoldertype_response_v4_2));
}

int main() {
  test_ezsignfoldertype_response_v4(1);
  test_ezsignfoldertype_response_v4(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfoldertype_response_v4_MAIN
#endif // ezsignfoldertype_response_v4_TEST
