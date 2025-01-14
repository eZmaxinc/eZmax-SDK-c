#ifndef ezsignannotation_request_compound_TEST
#define ezsignannotation_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignannotation_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignannotation_request_compound.h"
ezsignannotation_request_compound_t* instantiate_ezsignannotation_request_compound(int include_optional);

#include "test_textstylestatic_request_compound.c"


ezsignannotation_request_compound_t* instantiate_ezsignannotation_request_compound(int include_optional) {
  ezsignannotation_request_compound_t* ezsignannotation_request_compound = NULL;
  if (include_optional) {
    ezsignannotation_request_compound = ezsignannotation_request_compound_create(
      113,
      97,
      ezmax_api_definition__full_ezsignannotation_request_compound__"Center",
      ezmax_api_definition__full_ezsignannotation_request_compound__"Bottom",
      ezmax_api_definition__full_ezsignannotation_request_compound__"Text",
      50,
      50,
      75,
      25,
      "Sample",
      1,
       // false, not to have infinite recursion
      instantiate_textstylestatic_request_compound(0)
    );
  } else {
    ezsignannotation_request_compound = ezsignannotation_request_compound_create(
      113,
      97,
      ezmax_api_definition__full_ezsignannotation_request_compound__"Center",
      ezmax_api_definition__full_ezsignannotation_request_compound__"Bottom",
      ezmax_api_definition__full_ezsignannotation_request_compound__"Text",
      50,
      50,
      75,
      25,
      "Sample",
      1,
      NULL
    );
  }

  return ezsignannotation_request_compound;
}


#ifdef ezsignannotation_request_compound_MAIN

void test_ezsignannotation_request_compound(int include_optional) {
    ezsignannotation_request_compound_t* ezsignannotation_request_compound_1 = instantiate_ezsignannotation_request_compound(include_optional);

	cJSON* jsonezsignannotation_request_compound_1 = ezsignannotation_request_compound_convertToJSON(ezsignannotation_request_compound_1);
	printf("ezsignannotation_request_compound :\n%s\n", cJSON_Print(jsonezsignannotation_request_compound_1));
	ezsignannotation_request_compound_t* ezsignannotation_request_compound_2 = ezsignannotation_request_compound_parseFromJSON(jsonezsignannotation_request_compound_1);
	cJSON* jsonezsignannotation_request_compound_2 = ezsignannotation_request_compound_convertToJSON(ezsignannotation_request_compound_2);
	printf("repeating ezsignannotation_request_compound:\n%s\n", cJSON_Print(jsonezsignannotation_request_compound_2));
}

int main() {
  test_ezsignannotation_request_compound(1);
  test_ezsignannotation_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignannotation_request_compound_MAIN
#endif // ezsignannotation_request_compound_TEST
