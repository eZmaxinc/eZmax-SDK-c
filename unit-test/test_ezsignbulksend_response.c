#ifndef ezsignbulksend_response_TEST
#define ezsignbulksend_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksend_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksend_response.h"
ezsignbulksend_response_t* instantiate_ezsignbulksend_response(int include_optional);

#include "test_common_audit.c"


ezsignbulksend_response_t* instantiate_ezsignbulksend_response(int include_optional) {
  ezsignbulksend_response_t* ezsignbulksend_response = NULL;
  if (include_optional) {
    ezsignbulksend_response = ezsignbulksend_response_create(
      8,
      5,
      2,
      "Test eZsign Bulk Send",
      "This is a note",
      1,
       // false, not to have infinite recursion
      instantiate_common_audit(0)
    );
  } else {
    ezsignbulksend_response = ezsignbulksend_response_create(
      8,
      5,
      2,
      "Test eZsign Bulk Send",
      "This is a note",
      1,
      NULL
    );
  }

  return ezsignbulksend_response;
}


#ifdef ezsignbulksend_response_MAIN

void test_ezsignbulksend_response(int include_optional) {
    ezsignbulksend_response_t* ezsignbulksend_response_1 = instantiate_ezsignbulksend_response(include_optional);

	cJSON* jsonezsignbulksend_response_1 = ezsignbulksend_response_convertToJSON(ezsignbulksend_response_1);
	printf("ezsignbulksend_response :\n%s\n", cJSON_Print(jsonezsignbulksend_response_1));
	ezsignbulksend_response_t* ezsignbulksend_response_2 = ezsignbulksend_response_parseFromJSON(jsonezsignbulksend_response_1);
	cJSON* jsonezsignbulksend_response_2 = ezsignbulksend_response_convertToJSON(ezsignbulksend_response_2);
	printf("repeating ezsignbulksend_response:\n%s\n", cJSON_Print(jsonezsignbulksend_response_2));
}

int main() {
  test_ezsignbulksend_response(1);
  test_ezsignbulksend_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksend_response_MAIN
#endif // ezsignbulksend_response_TEST
