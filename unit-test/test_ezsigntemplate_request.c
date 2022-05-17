#ifndef ezsigntemplate_request_TEST
#define ezsigntemplate_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplate_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplate_request.h"
ezsigntemplate_request_t* instantiate_ezsigntemplate_request(int include_optional);



ezsigntemplate_request_t* instantiate_ezsigntemplate_request(int include_optional) {
  ezsigntemplate_request_t* ezsigntemplate_request = NULL;
  if (include_optional) {
    ezsigntemplate_request = ezsigntemplate_request_create(
      36,
      5,
      2,
      "Standard Contract",
      1
    );
  } else {
    ezsigntemplate_request = ezsigntemplate_request_create(
      36,
      5,
      2,
      "Standard Contract",
      1
    );
  }

  return ezsigntemplate_request;
}


#ifdef ezsigntemplate_request_MAIN

void test_ezsigntemplate_request(int include_optional) {
    ezsigntemplate_request_t* ezsigntemplate_request_1 = instantiate_ezsigntemplate_request(include_optional);

	cJSON* jsonezsigntemplate_request_1 = ezsigntemplate_request_convertToJSON(ezsigntemplate_request_1);
	printf("ezsigntemplate_request :\n%s\n", cJSON_Print(jsonezsigntemplate_request_1));
	ezsigntemplate_request_t* ezsigntemplate_request_2 = ezsigntemplate_request_parseFromJSON(jsonezsigntemplate_request_1);
	cJSON* jsonezsigntemplate_request_2 = ezsigntemplate_request_convertToJSON(ezsigntemplate_request_2);
	printf("repeating ezsigntemplate_request:\n%s\n", cJSON_Print(jsonezsigntemplate_request_2));
}

int main() {
  test_ezsigntemplate_request(1);
  test_ezsigntemplate_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplate_request_MAIN
#endif // ezsigntemplate_request_TEST
