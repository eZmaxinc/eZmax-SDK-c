#ifndef ezsigntemplateglobal_response_compound_TEST
#define ezsigntemplateglobal_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplateglobal_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplateglobal_response_compound.h"
ezsigntemplateglobal_response_compound_t* instantiate_ezsigntemplateglobal_response_compound(int include_optional);

#include "test_ezsigntemplateglobaldocument_response.c"


ezsigntemplateglobal_response_compound_t* instantiate_ezsigntemplateglobal_response_compound(int include_optional) {
  ezsigntemplateglobal_response_compound_t* ezsigntemplateglobal_response_compound = NULL;
  if (include_optional) {
    ezsigntemplateglobal_response_compound = ezsigntemplateglobal_response_compound_create(
      36,
      133,
      40,
      "Purchase",
      2,
      "English",
      ezmax_api_definition__full_ezsigntemplateglobal_response_compound__"All",
      ezmax_api_definition__full_ezsigntemplateglobal_response_compound__"Centris",
      "DR-FR",
      "Standard Contract",
       // false, not to have infinite recursion
      instantiate_ezsigntemplateglobaldocument_response(0),
      list_createList()
    );
  } else {
    ezsigntemplateglobal_response_compound = ezsigntemplateglobal_response_compound_create(
      36,
      133,
      40,
      "Purchase",
      2,
      "English",
      ezmax_api_definition__full_ezsigntemplateglobal_response_compound__"All",
      ezmax_api_definition__full_ezsigntemplateglobal_response_compound__"Centris",
      "DR-FR",
      "Standard Contract",
      NULL,
      list_createList()
    );
  }

  return ezsigntemplateglobal_response_compound;
}


#ifdef ezsigntemplateglobal_response_compound_MAIN

void test_ezsigntemplateglobal_response_compound(int include_optional) {
    ezsigntemplateglobal_response_compound_t* ezsigntemplateglobal_response_compound_1 = instantiate_ezsigntemplateglobal_response_compound(include_optional);

	cJSON* jsonezsigntemplateglobal_response_compound_1 = ezsigntemplateglobal_response_compound_convertToJSON(ezsigntemplateglobal_response_compound_1);
	printf("ezsigntemplateglobal_response_compound :\n%s\n", cJSON_Print(jsonezsigntemplateglobal_response_compound_1));
	ezsigntemplateglobal_response_compound_t* ezsigntemplateglobal_response_compound_2 = ezsigntemplateglobal_response_compound_parseFromJSON(jsonezsigntemplateglobal_response_compound_1);
	cJSON* jsonezsigntemplateglobal_response_compound_2 = ezsigntemplateglobal_response_compound_convertToJSON(ezsigntemplateglobal_response_compound_2);
	printf("repeating ezsigntemplateglobal_response_compound:\n%s\n", cJSON_Print(jsonezsigntemplateglobal_response_compound_2));
}

int main() {
  test_ezsigntemplateglobal_response_compound(1);
  test_ezsigntemplateglobal_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplateglobal_response_compound_MAIN
#endif // ezsigntemplateglobal_response_compound_TEST
