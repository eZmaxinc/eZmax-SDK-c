#ifndef ezsignannotation_response_compound_TEST
#define ezsignannotation_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignannotation_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignannotation_response_compound.h"
ezsignannotation_response_compound_t* instantiate_ezsignannotation_response_compound(int include_optional);

#include "test_textstylestatic_response_compound.c"


ezsignannotation_response_compound_t* instantiate_ezsignannotation_response_compound(int include_optional) {
  ezsignannotation_response_compound_t* ezsignannotation_response_compound = NULL;
  if (include_optional) {
    ezsignannotation_response_compound = ezsignannotation_response_compound_create(
      113,
      97,
      ezmax_api_definition__full_ezsignannotation_response_compound__"Center",
      ezmax_api_definition__full_ezsignannotation_response_compound__"Bottom",
      ezmax_api_definition__full_ezsignannotation_response_compound__"Text",
      50,
      50,
      75,
      25,
      "Sample",
      1,
       // false, not to have infinite recursion
      instantiate_textstylestatic_response_compound(0)
    );
  } else {
    ezsignannotation_response_compound = ezsignannotation_response_compound_create(
      113,
      97,
      ezmax_api_definition__full_ezsignannotation_response_compound__"Center",
      ezmax_api_definition__full_ezsignannotation_response_compound__"Bottom",
      ezmax_api_definition__full_ezsignannotation_response_compound__"Text",
      50,
      50,
      75,
      25,
      "Sample",
      1,
      NULL
    );
  }

  return ezsignannotation_response_compound;
}


#ifdef ezsignannotation_response_compound_MAIN

void test_ezsignannotation_response_compound(int include_optional) {
    ezsignannotation_response_compound_t* ezsignannotation_response_compound_1 = instantiate_ezsignannotation_response_compound(include_optional);

	cJSON* jsonezsignannotation_response_compound_1 = ezsignannotation_response_compound_convertToJSON(ezsignannotation_response_compound_1);
	printf("ezsignannotation_response_compound :\n%s\n", cJSON_Print(jsonezsignannotation_response_compound_1));
	ezsignannotation_response_compound_t* ezsignannotation_response_compound_2 = ezsignannotation_response_compound_parseFromJSON(jsonezsignannotation_response_compound_1);
	cJSON* jsonezsignannotation_response_compound_2 = ezsignannotation_response_compound_convertToJSON(ezsignannotation_response_compound_2);
	printf("repeating ezsignannotation_response_compound:\n%s\n", cJSON_Print(jsonezsignannotation_response_compound_2));
}

int main() {
  test_ezsignannotation_response_compound(1);
  test_ezsignannotation_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignannotation_response_compound_MAIN
#endif // ezsignannotation_response_compound_TEST
