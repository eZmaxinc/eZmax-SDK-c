#ifndef ezsigndiscussion_response_TEST
#define ezsigndiscussion_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigndiscussion_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigndiscussion_response.h"
ezsigndiscussion_response_t* instantiate_ezsigndiscussion_response(int include_optional);

#include "test_discussion_response_compound.c"


ezsigndiscussion_response_t* instantiate_ezsigndiscussion_response(int include_optional) {
  ezsigndiscussion_response_t* ezsigndiscussion_response = NULL;
  if (include_optional) {
    ezsigndiscussion_response = ezsigndiscussion_response_create(
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
    ezsigndiscussion_response = ezsigndiscussion_response_create(
      194,
      64,
      125,
      57208,
      57652,
      4,
      NULL
    );
  }

  return ezsigndiscussion_response;
}


#ifdef ezsigndiscussion_response_MAIN

void test_ezsigndiscussion_response(int include_optional) {
    ezsigndiscussion_response_t* ezsigndiscussion_response_1 = instantiate_ezsigndiscussion_response(include_optional);

	cJSON* jsonezsigndiscussion_response_1 = ezsigndiscussion_response_convertToJSON(ezsigndiscussion_response_1);
	printf("ezsigndiscussion_response :\n%s\n", cJSON_Print(jsonezsigndiscussion_response_1));
	ezsigndiscussion_response_t* ezsigndiscussion_response_2 = ezsigndiscussion_response_parseFromJSON(jsonezsigndiscussion_response_1);
	cJSON* jsonezsigndiscussion_response_2 = ezsigndiscussion_response_convertToJSON(ezsigndiscussion_response_2);
	printf("repeating ezsigndiscussion_response:\n%s\n", cJSON_Print(jsonezsigndiscussion_response_2));
}

int main() {
  test_ezsigndiscussion_response(1);
  test_ezsigndiscussion_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigndiscussion_response_MAIN
#endif // ezsigndiscussion_response_TEST
