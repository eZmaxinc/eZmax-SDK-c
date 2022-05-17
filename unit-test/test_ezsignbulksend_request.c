#ifndef ezsignbulksend_request_TEST
#define ezsignbulksend_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksend_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksend_request.h"
ezsignbulksend_request_t* instantiate_ezsignbulksend_request(int include_optional);



ezsignbulksend_request_t* instantiate_ezsignbulksend_request(int include_optional) {
  ezsignbulksend_request_t* ezsignbulksend_request = NULL;
  if (include_optional) {
    ezsignbulksend_request = ezsignbulksend_request_create(
      8,
      5,
      2,
      "Test eZsign Bulk Send",
      "This is a note",
      1,
      1
    );
  } else {
    ezsignbulksend_request = ezsignbulksend_request_create(
      8,
      5,
      2,
      "Test eZsign Bulk Send",
      "This is a note",
      1,
      1
    );
  }

  return ezsignbulksend_request;
}


#ifdef ezsignbulksend_request_MAIN

void test_ezsignbulksend_request(int include_optional) {
    ezsignbulksend_request_t* ezsignbulksend_request_1 = instantiate_ezsignbulksend_request(include_optional);

	cJSON* jsonezsignbulksend_request_1 = ezsignbulksend_request_convertToJSON(ezsignbulksend_request_1);
	printf("ezsignbulksend_request :\n%s\n", cJSON_Print(jsonezsignbulksend_request_1));
	ezsignbulksend_request_t* ezsignbulksend_request_2 = ezsignbulksend_request_parseFromJSON(jsonezsignbulksend_request_1);
	cJSON* jsonezsignbulksend_request_2 = ezsignbulksend_request_convertToJSON(ezsignbulksend_request_2);
	printf("repeating ezsignbulksend_request:\n%s\n", cJSON_Print(jsonezsignbulksend_request_2));
}

int main() {
  test_ezsignbulksend_request(1);
  test_ezsignbulksend_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksend_request_MAIN
#endif // ezsignbulksend_request_TEST
