#ifndef ezsigndiscussion_request_compound_TEST
#define ezsigndiscussion_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigndiscussion_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigndiscussion_request_compound.h"
ezsigndiscussion_request_compound_t* instantiate_ezsigndiscussion_request_compound(int include_optional);

#include "test_discussion_request.c"


ezsigndiscussion_request_compound_t* instantiate_ezsigndiscussion_request_compound(int include_optional) {
  ezsigndiscussion_request_compound_t* ezsigndiscussion_request_compound = NULL;
  if (include_optional) {
    ezsigndiscussion_request_compound = ezsigndiscussion_request_compound_create(
      194,
      97,
      4,
      57208,
      57652,
       // false, not to have infinite recursion
      instantiate_discussion_request(0)
    );
  } else {
    ezsigndiscussion_request_compound = ezsigndiscussion_request_compound_create(
      194,
      97,
      4,
      57208,
      57652,
      NULL
    );
  }

  return ezsigndiscussion_request_compound;
}


#ifdef ezsigndiscussion_request_compound_MAIN

void test_ezsigndiscussion_request_compound(int include_optional) {
    ezsigndiscussion_request_compound_t* ezsigndiscussion_request_compound_1 = instantiate_ezsigndiscussion_request_compound(include_optional);

	cJSON* jsonezsigndiscussion_request_compound_1 = ezsigndiscussion_request_compound_convertToJSON(ezsigndiscussion_request_compound_1);
	printf("ezsigndiscussion_request_compound :\n%s\n", cJSON_Print(jsonezsigndiscussion_request_compound_1));
	ezsigndiscussion_request_compound_t* ezsigndiscussion_request_compound_2 = ezsigndiscussion_request_compound_parseFromJSON(jsonezsigndiscussion_request_compound_1);
	cJSON* jsonezsigndiscussion_request_compound_2 = ezsigndiscussion_request_compound_convertToJSON(ezsigndiscussion_request_compound_2);
	printf("repeating ezsigndiscussion_request_compound:\n%s\n", cJSON_Print(jsonezsigndiscussion_request_compound_2));
}

int main() {
  test_ezsigndiscussion_request_compound(1);
  test_ezsigndiscussion_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigndiscussion_request_compound_MAIN
#endif // ezsigndiscussion_request_compound_TEST
