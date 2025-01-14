#ifndef ezsigntemplate_response_TEST
#define ezsigntemplate_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplate_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplate_response.h"
ezsigntemplate_response_t* instantiate_ezsigntemplate_response(int include_optional);

#include "test_common_audit.c"


ezsigntemplate_response_t* instantiate_ezsigntemplate_response(int include_optional) {
  ezsigntemplate_response_t* ezsigntemplate_response = NULL;
  if (include_optional) {
    ezsigntemplate_response = ezsigntemplate_response_create(
      36,
      133,
      5,
      2,
      95,
      "English",
      "Standard Contract",
      "Test eZsign Folder",
      "0",
      "Contract",
      1,
      "Default",
       // false, not to have infinite recursion
      instantiate_common_audit(0),
      1,
      ezmax_api_definition__full_ezsigntemplate_response__"Ezsignfoldertype"
    );
  } else {
    ezsigntemplate_response = ezsigntemplate_response_create(
      36,
      133,
      5,
      2,
      95,
      "English",
      "Standard Contract",
      "Test eZsign Folder",
      "0",
      "Contract",
      1,
      "Default",
      NULL,
      1,
      ezmax_api_definition__full_ezsigntemplate_response__"Ezsignfoldertype"
    );
  }

  return ezsigntemplate_response;
}


#ifdef ezsigntemplate_response_MAIN

void test_ezsigntemplate_response(int include_optional) {
    ezsigntemplate_response_t* ezsigntemplate_response_1 = instantiate_ezsigntemplate_response(include_optional);

	cJSON* jsonezsigntemplate_response_1 = ezsigntemplate_response_convertToJSON(ezsigntemplate_response_1);
	printf("ezsigntemplate_response :\n%s\n", cJSON_Print(jsonezsigntemplate_response_1));
	ezsigntemplate_response_t* ezsigntemplate_response_2 = ezsigntemplate_response_parseFromJSON(jsonezsigntemplate_response_1);
	cJSON* jsonezsigntemplate_response_2 = ezsigntemplate_response_convertToJSON(ezsigntemplate_response_2);
	printf("repeating ezsigntemplate_response:\n%s\n", cJSON_Print(jsonezsigntemplate_response_2));
}

int main() {
  test_ezsigntemplate_response(1);
  test_ezsigntemplate_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplate_response_MAIN
#endif // ezsigntemplate_response_TEST
