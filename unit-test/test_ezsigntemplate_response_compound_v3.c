#ifndef ezsigntemplate_response_compound_v3_TEST
#define ezsigntemplate_response_compound_v3_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplate_response_compound_v3_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplate_response_compound_v3.h"
ezsigntemplate_response_compound_v3_t* instantiate_ezsigntemplate_response_compound_v3(int include_optional);

#include "test_common_audit.c"
#include "test_ezsigntemplatedocument_response.c"


ezsigntemplate_response_compound_v3_t* instantiate_ezsigntemplate_response_compound_v3(int include_optional) {
  ezsigntemplate_response_compound_v3_t* ezsigntemplate_response_compound_v3 = NULL;
  if (include_optional) {
    ezsigntemplate_response_compound_v3 = ezsigntemplate_response_compound_v3_create(
      36,
      133,
      5,
      2,
      95,
      "Standard Contract",
      "English",
      "Standard Contract",
      "Test eZsign Folder",
      "0",
      ezmax_api_definition__full_ezsigntemplate_response_compound_v3__"No",
      "Contract",
      1,
      "Default",
       // false, not to have infinite recursion
      instantiate_common_audit(0),
      1,
      ezmax_api_definition__full_ezsigntemplate_response_compound_v3__"Ezsignfoldertype",
       // false, not to have infinite recursion
      instantiate_ezsigntemplatedocument_response(0),
      list_createList()
    );
  } else {
    ezsigntemplate_response_compound_v3 = ezsigntemplate_response_compound_v3_create(
      36,
      133,
      5,
      2,
      95,
      "Standard Contract",
      "English",
      "Standard Contract",
      "Test eZsign Folder",
      "0",
      ezmax_api_definition__full_ezsigntemplate_response_compound_v3__"No",
      "Contract",
      1,
      "Default",
      NULL,
      1,
      ezmax_api_definition__full_ezsigntemplate_response_compound_v3__"Ezsignfoldertype",
      NULL,
      list_createList()
    );
  }

  return ezsigntemplate_response_compound_v3;
}


#ifdef ezsigntemplate_response_compound_v3_MAIN

void test_ezsigntemplate_response_compound_v3(int include_optional) {
    ezsigntemplate_response_compound_v3_t* ezsigntemplate_response_compound_v3_1 = instantiate_ezsigntemplate_response_compound_v3(include_optional);

	cJSON* jsonezsigntemplate_response_compound_v3_1 = ezsigntemplate_response_compound_v3_convertToJSON(ezsigntemplate_response_compound_v3_1);
	printf("ezsigntemplate_response_compound_v3 :\n%s\n", cJSON_Print(jsonezsigntemplate_response_compound_v3_1));
	ezsigntemplate_response_compound_v3_t* ezsigntemplate_response_compound_v3_2 = ezsigntemplate_response_compound_v3_parseFromJSON(jsonezsigntemplate_response_compound_v3_1);
	cJSON* jsonezsigntemplate_response_compound_v3_2 = ezsigntemplate_response_compound_v3_convertToJSON(ezsigntemplate_response_compound_v3_2);
	printf("repeating ezsigntemplate_response_compound_v3:\n%s\n", cJSON_Print(jsonezsigntemplate_response_compound_v3_2));
}

int main() {
  test_ezsigntemplate_response_compound_v3(1);
  test_ezsigntemplate_response_compound_v3(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplate_response_compound_v3_MAIN
#endif // ezsigntemplate_response_compound_v3_TEST
