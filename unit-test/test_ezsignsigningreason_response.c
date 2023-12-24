#ifndef ezsignsigningreason_response_TEST
#define ezsignsigningreason_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsigningreason_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsigningreason_response.h"
ezsignsigningreason_response_t* instantiate_ezsignsigningreason_response(int include_optional);

#include "test_multilingual_ezsignsigningreason_description.c"


ezsignsigningreason_response_t* instantiate_ezsignsigningreason_response(int include_optional) {
  ezsignsigningreason_response_t* ezsignsigningreason_response = NULL;
  if (include_optional) {
    ezsignsigningreason_response = ezsignsigningreason_response_create(
      194,
       // false, not to have infinite recursion
      instantiate_multilingual_ezsignsigningreason_description(0),
      true
    );
  } else {
    ezsignsigningreason_response = ezsignsigningreason_response_create(
      194,
      NULL,
      true
    );
  }

  return ezsignsigningreason_response;
}


#ifdef ezsignsigningreason_response_MAIN

void test_ezsignsigningreason_response(int include_optional) {
    ezsignsigningreason_response_t* ezsignsigningreason_response_1 = instantiate_ezsignsigningreason_response(include_optional);

	cJSON* jsonezsignsigningreason_response_1 = ezsignsigningreason_response_convertToJSON(ezsignsigningreason_response_1);
	printf("ezsignsigningreason_response :\n%s\n", cJSON_Print(jsonezsignsigningreason_response_1));
	ezsignsigningreason_response_t* ezsignsigningreason_response_2 = ezsignsigningreason_response_parseFromJSON(jsonezsignsigningreason_response_1);
	cJSON* jsonezsignsigningreason_response_2 = ezsignsigningreason_response_convertToJSON(ezsignsigningreason_response_2);
	printf("repeating ezsignsigningreason_response:\n%s\n", cJSON_Print(jsonezsignsigningreason_response_2));
}

int main() {
  test_ezsignsigningreason_response(1);
  test_ezsignsigningreason_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsigningreason_response_MAIN
#endif // ezsignsigningreason_response_TEST
