#ifndef ezsigntemplate_response_compound_TEST
#define ezsigntemplate_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplate_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplate_response_compound.h"
ezsigntemplate_response_compound_t* instantiate_ezsigntemplate_response_compound(int include_optional);

#include "test_common_audit.c"
#include "test_ezsigntemplatedocument_response.c"


ezsigntemplate_response_compound_t* instantiate_ezsigntemplate_response_compound(int include_optional) {
  ezsigntemplate_response_compound_t* ezsigntemplate_response_compound = NULL;
  if (include_optional) {
    ezsigntemplate_response_compound = ezsigntemplate_response_compound_create(
      36,
      133,
      5,
      2,
      "English",
      "Standard Contract",
      1,
      "Default",
       // false, not to have infinite recursion
      instantiate_common_audit(0),
       // false, not to have infinite recursion
      instantiate_ezsigntemplatedocument_response(0),
      list_createList()
    );
  } else {
    ezsigntemplate_response_compound = ezsigntemplate_response_compound_create(
      36,
      133,
      5,
      2,
      "English",
      "Standard Contract",
      1,
      "Default",
      NULL,
      NULL,
      list_createList()
    );
  }

  return ezsigntemplate_response_compound;
}


#ifdef ezsigntemplate_response_compound_MAIN

void test_ezsigntemplate_response_compound(int include_optional) {
    ezsigntemplate_response_compound_t* ezsigntemplate_response_compound_1 = instantiate_ezsigntemplate_response_compound(include_optional);

	cJSON* jsonezsigntemplate_response_compound_1 = ezsigntemplate_response_compound_convertToJSON(ezsigntemplate_response_compound_1);
	printf("ezsigntemplate_response_compound :\n%s\n", cJSON_Print(jsonezsigntemplate_response_compound_1));
	ezsigntemplate_response_compound_t* ezsigntemplate_response_compound_2 = ezsigntemplate_response_compound_parseFromJSON(jsonezsigntemplate_response_compound_1);
	cJSON* jsonezsigntemplate_response_compound_2 = ezsigntemplate_response_compound_convertToJSON(ezsigntemplate_response_compound_2);
	printf("repeating ezsigntemplate_response_compound:\n%s\n", cJSON_Print(jsonezsigntemplate_response_compound_2));
}

int main() {
  test_ezsigntemplate_response_compound(1);
  test_ezsigntemplate_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplate_response_compound_MAIN
#endif // ezsigntemplate_response_compound_TEST
