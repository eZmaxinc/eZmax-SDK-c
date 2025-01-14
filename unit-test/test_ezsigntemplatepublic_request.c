#ifndef ezsigntemplatepublic_request_TEST
#define ezsigntemplatepublic_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepublic_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepublic_request.h"
ezsigntemplatepublic_request_t* instantiate_ezsigntemplatepublic_request(int include_optional);



ezsigntemplatepublic_request_t* instantiate_ezsigntemplatepublic_request(int include_optional) {
  ezsigntemplatepublic_request_t* ezsigntemplatepublic_request = NULL;
  if (include_optional) {
    ezsigntemplatepublic_request = ezsigntemplatepublic_request_create(
      96,
      5,
      2,
      36,
      99,
      "Inscription form",
      true,
      "This is a note",
      ezmax_api_definition__full_ezsigntemplatepublic_request__"Hour",
      10
    );
  } else {
    ezsigntemplatepublic_request = ezsigntemplatepublic_request_create(
      96,
      5,
      2,
      36,
      99,
      "Inscription form",
      true,
      "This is a note",
      ezmax_api_definition__full_ezsigntemplatepublic_request__"Hour",
      10
    );
  }

  return ezsigntemplatepublic_request;
}


#ifdef ezsigntemplatepublic_request_MAIN

void test_ezsigntemplatepublic_request(int include_optional) {
    ezsigntemplatepublic_request_t* ezsigntemplatepublic_request_1 = instantiate_ezsigntemplatepublic_request(include_optional);

	cJSON* jsonezsigntemplatepublic_request_1 = ezsigntemplatepublic_request_convertToJSON(ezsigntemplatepublic_request_1);
	printf("ezsigntemplatepublic_request :\n%s\n", cJSON_Print(jsonezsigntemplatepublic_request_1));
	ezsigntemplatepublic_request_t* ezsigntemplatepublic_request_2 = ezsigntemplatepublic_request_parseFromJSON(jsonezsigntemplatepublic_request_1);
	cJSON* jsonezsigntemplatepublic_request_2 = ezsigntemplatepublic_request_convertToJSON(ezsigntemplatepublic_request_2);
	printf("repeating ezsigntemplatepublic_request:\n%s\n", cJSON_Print(jsonezsigntemplatepublic_request_2));
}

int main() {
  test_ezsigntemplatepublic_request(1);
  test_ezsigntemplatepublic_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepublic_request_MAIN
#endif // ezsigntemplatepublic_request_TEST
