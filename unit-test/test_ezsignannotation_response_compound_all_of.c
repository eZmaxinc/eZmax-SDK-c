#ifndef ezsignannotation_response_compound_all_of_TEST
#define ezsignannotation_response_compound_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignannotation_response_compound_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignannotation_response_compound_all_of.h"
ezsignannotation_response_compound_all_of_t* instantiate_ezsignannotation_response_compound_all_of(int include_optional);

#include "test_textstylestatic_response_compound.c"


ezsignannotation_response_compound_all_of_t* instantiate_ezsignannotation_response_compound_all_of(int include_optional) {
  ezsignannotation_response_compound_all_of_t* ezsignannotation_response_compound_all_of = NULL;
  if (include_optional) {
    ezsignannotation_response_compound_all_of = ezsignannotation_response_compound_all_of_create(
       // false, not to have infinite recursion
      instantiate_textstylestatic_response_compound(0)
    );
  } else {
    ezsignannotation_response_compound_all_of = ezsignannotation_response_compound_all_of_create(
      NULL
    );
  }

  return ezsignannotation_response_compound_all_of;
}


#ifdef ezsignannotation_response_compound_all_of_MAIN

void test_ezsignannotation_response_compound_all_of(int include_optional) {
    ezsignannotation_response_compound_all_of_t* ezsignannotation_response_compound_all_of_1 = instantiate_ezsignannotation_response_compound_all_of(include_optional);

	cJSON* jsonezsignannotation_response_compound_all_of_1 = ezsignannotation_response_compound_all_of_convertToJSON(ezsignannotation_response_compound_all_of_1);
	printf("ezsignannotation_response_compound_all_of :\n%s\n", cJSON_Print(jsonezsignannotation_response_compound_all_of_1));
	ezsignannotation_response_compound_all_of_t* ezsignannotation_response_compound_all_of_2 = ezsignannotation_response_compound_all_of_parseFromJSON(jsonezsignannotation_response_compound_all_of_1);
	cJSON* jsonezsignannotation_response_compound_all_of_2 = ezsignannotation_response_compound_all_of_convertToJSON(ezsignannotation_response_compound_all_of_2);
	printf("repeating ezsignannotation_response_compound_all_of:\n%s\n", cJSON_Print(jsonezsignannotation_response_compound_all_of_2));
}

int main() {
  test_ezsignannotation_response_compound_all_of(1);
  test_ezsignannotation_response_compound_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignannotation_response_compound_all_of_MAIN
#endif // ezsignannotation_response_compound_all_of_TEST
