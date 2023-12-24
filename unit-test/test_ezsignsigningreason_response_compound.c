#ifndef ezsignsigningreason_response_compound_TEST
#define ezsignsigningreason_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsigningreason_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsigningreason_response_compound.h"
ezsignsigningreason_response_compound_t* instantiate_ezsignsigningreason_response_compound(int include_optional);

#include "test_multilingual_ezsignsigningreason_description.c"


ezsignsigningreason_response_compound_t* instantiate_ezsignsigningreason_response_compound(int include_optional) {
  ezsignsigningreason_response_compound_t* ezsignsigningreason_response_compound = NULL;
  if (include_optional) {
    ezsignsigningreason_response_compound = ezsignsigningreason_response_compound_create(
      194,
       // false, not to have infinite recursion
      instantiate_multilingual_ezsignsigningreason_description(0),
      true
    );
  } else {
    ezsignsigningreason_response_compound = ezsignsigningreason_response_compound_create(
      194,
      NULL,
      true
    );
  }

  return ezsignsigningreason_response_compound;
}


#ifdef ezsignsigningreason_response_compound_MAIN

void test_ezsignsigningreason_response_compound(int include_optional) {
    ezsignsigningreason_response_compound_t* ezsignsigningreason_response_compound_1 = instantiate_ezsignsigningreason_response_compound(include_optional);

	cJSON* jsonezsignsigningreason_response_compound_1 = ezsignsigningreason_response_compound_convertToJSON(ezsignsigningreason_response_compound_1);
	printf("ezsignsigningreason_response_compound :\n%s\n", cJSON_Print(jsonezsignsigningreason_response_compound_1));
	ezsignsigningreason_response_compound_t* ezsignsigningreason_response_compound_2 = ezsignsigningreason_response_compound_parseFromJSON(jsonezsignsigningreason_response_compound_1);
	cJSON* jsonezsignsigningreason_response_compound_2 = ezsignsigningreason_response_compound_convertToJSON(ezsignsigningreason_response_compound_2);
	printf("repeating ezsignsigningreason_response_compound:\n%s\n", cJSON_Print(jsonezsignsigningreason_response_compound_2));
}

int main() {
  test_ezsignsigningreason_response_compound(1);
  test_ezsignsigningreason_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsigningreason_response_compound_MAIN
#endif // ezsignsigningreason_response_compound_TEST
