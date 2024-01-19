#ifndef ezsignfoldertype_request_TEST
#define ezsignfoldertype_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfoldertype_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfoldertype_request.h"
ezsignfoldertype_request_t* instantiate_ezsignfoldertype_request(int include_optional);

#include "test_multilingual_ezsignfoldertype_name.c"


ezsignfoldertype_request_t* instantiate_ezsignfoldertype_request(int include_optional) {
  ezsignfoldertype_request_t* ezsignfoldertype_request = NULL;
  if (include_optional) {
    ezsignfoldertype_request = ezsignfoldertype_request_create(
      5,
       // false, not to have infinite recursion
      instantiate_multilingual_ezsignfoldertype_name(0),
      78,
      1,
      2,
      2,
      1,
      "email@example.com",
      "email@example.com",
      ezmax_api_definition__full_ezsignfoldertype_request__User,
      ezmax_api_definition__full_ezsignfoldertype_request__"None",
      30,
      ezmax_api_definition__full_ezsignfoldertype_request__"Manual",
      ezmax_api_definition__full_ezsignfoldertype_request__"PerEzsigndocument",
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
      false,
      true,
      true,
      true
    );
  } else {
    ezsignfoldertype_request = ezsignfoldertype_request_create(
      5,
      NULL,
      78,
      1,
      2,
      2,
      1,
      "email@example.com",
      "email@example.com",
      ezmax_api_definition__full_ezsignfoldertype_request__User,
      ezmax_api_definition__full_ezsignfoldertype_request__"None",
      30,
      ezmax_api_definition__full_ezsignfoldertype_request__"Manual",
      ezmax_api_definition__full_ezsignfoldertype_request__"PerEzsigndocument",
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
      false,
      true,
      true,
      true
    );
  }

  return ezsignfoldertype_request;
}


#ifdef ezsignfoldertype_request_MAIN

void test_ezsignfoldertype_request(int include_optional) {
    ezsignfoldertype_request_t* ezsignfoldertype_request_1 = instantiate_ezsignfoldertype_request(include_optional);

	cJSON* jsonezsignfoldertype_request_1 = ezsignfoldertype_request_convertToJSON(ezsignfoldertype_request_1);
	printf("ezsignfoldertype_request :\n%s\n", cJSON_Print(jsonezsignfoldertype_request_1));
	ezsignfoldertype_request_t* ezsignfoldertype_request_2 = ezsignfoldertype_request_parseFromJSON(jsonezsignfoldertype_request_1);
	cJSON* jsonezsignfoldertype_request_2 = ezsignfoldertype_request_convertToJSON(ezsignfoldertype_request_2);
	printf("repeating ezsignfoldertype_request:\n%s\n", cJSON_Print(jsonezsignfoldertype_request_2));
}

int main() {
  test_ezsignfoldertype_request(1);
  test_ezsignfoldertype_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfoldertype_request_MAIN
#endif // ezsignfoldertype_request_TEST
