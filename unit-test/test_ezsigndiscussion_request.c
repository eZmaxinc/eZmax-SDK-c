#ifndef ezsigndiscussion_request_TEST
#define ezsigndiscussion_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigndiscussion_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigndiscussion_request.h"
ezsigndiscussion_request_t* instantiate_ezsigndiscussion_request(int include_optional);

#include "test_discussion_request.c"


ezsigndiscussion_request_t* instantiate_ezsigndiscussion_request(int include_optional) {
  ezsigndiscussion_request_t* ezsigndiscussion_request = NULL;
  if (include_optional) {
    ezsigndiscussion_request = ezsigndiscussion_request_create(
      194,
      97,
      4,
      57208,
      57652,
       // false, not to have infinite recursion
      instantiate_discussion_request(0)
    );
  } else {
    ezsigndiscussion_request = ezsigndiscussion_request_create(
      194,
      97,
      4,
      57208,
      57652,
      NULL
    );
  }

  return ezsigndiscussion_request;
}


#ifdef ezsigndiscussion_request_MAIN

void test_ezsigndiscussion_request(int include_optional) {
    ezsigndiscussion_request_t* ezsigndiscussion_request_1 = instantiate_ezsigndiscussion_request(include_optional);

	cJSON* jsonezsigndiscussion_request_1 = ezsigndiscussion_request_convertToJSON(ezsigndiscussion_request_1);
	printf("ezsigndiscussion_request :\n%s\n", cJSON_Print(jsonezsigndiscussion_request_1));
	ezsigndiscussion_request_t* ezsigndiscussion_request_2 = ezsigndiscussion_request_parseFromJSON(jsonezsigndiscussion_request_1);
	cJSON* jsonezsigndiscussion_request_2 = ezsigndiscussion_request_convertToJSON(ezsigndiscussion_request_2);
	printf("repeating ezsigndiscussion_request:\n%s\n", cJSON_Print(jsonezsigndiscussion_request_2));
}

int main() {
  test_ezsigndiscussion_request(1);
  test_ezsigndiscussion_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigndiscussion_request_MAIN
#endif // ezsigndiscussion_request_TEST
