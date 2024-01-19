#ifndef ezsigndiscussion_response_compound_TEST
#define ezsigndiscussion_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigndiscussion_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigndiscussion_response_compound.h"
ezsigndiscussion_response_compound_t* instantiate_ezsigndiscussion_response_compound(int include_optional);

#include "test_discussion_response_compound.c"


ezsigndiscussion_response_compound_t* instantiate_ezsigndiscussion_response_compound(int include_optional) {
  ezsigndiscussion_response_compound_t* ezsigndiscussion_response_compound = NULL;
  if (include_optional) {
    ezsigndiscussion_response_compound = ezsigndiscussion_response_compound_create(
      194,
      64,
      125,
      57208,
      57652,
      4,
       // false, not to have infinite recursion
      instantiate_discussion_response_compound(0)
    );
  } else {
    ezsigndiscussion_response_compound = ezsigndiscussion_response_compound_create(
      194,
      64,
      125,
      57208,
      57652,
      4,
      NULL
    );
  }

  return ezsigndiscussion_response_compound;
}


#ifdef ezsigndiscussion_response_compound_MAIN

void test_ezsigndiscussion_response_compound(int include_optional) {
    ezsigndiscussion_response_compound_t* ezsigndiscussion_response_compound_1 = instantiate_ezsigndiscussion_response_compound(include_optional);

	cJSON* jsonezsigndiscussion_response_compound_1 = ezsigndiscussion_response_compound_convertToJSON(ezsigndiscussion_response_compound_1);
	printf("ezsigndiscussion_response_compound :\n%s\n", cJSON_Print(jsonezsigndiscussion_response_compound_1));
	ezsigndiscussion_response_compound_t* ezsigndiscussion_response_compound_2 = ezsigndiscussion_response_compound_parseFromJSON(jsonezsigndiscussion_response_compound_1);
	cJSON* jsonezsigndiscussion_response_compound_2 = ezsigndiscussion_response_compound_convertToJSON(ezsigndiscussion_response_compound_2);
	printf("repeating ezsigndiscussion_response_compound:\n%s\n", cJSON_Print(jsonezsigndiscussion_response_compound_2));
}

int main() {
  test_ezsigndiscussion_response_compound(1);
  test_ezsigndiscussion_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigndiscussion_response_compound_MAIN
#endif // ezsigndiscussion_response_compound_TEST
