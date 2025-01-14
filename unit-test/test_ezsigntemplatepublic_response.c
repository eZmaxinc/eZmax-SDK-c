#ifndef ezsigntemplatepublic_response_TEST
#define ezsigntemplatepublic_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepublic_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepublic_response.h"
ezsigntemplatepublic_response_t* instantiate_ezsigntemplatepublic_response(int include_optional);

#include "test_common_audit.c"


ezsigntemplatepublic_response_t* instantiate_ezsigntemplatepublic_response(int include_optional) {
  ezsigntemplatepublic_response_t* ezsigntemplatepublic_response = NULL;
  if (include_optional) {
    ezsigntemplatepublic_response = ezsigntemplatepublic_response_create(
      96,
      5,
      "Default",
      2,
      "Email and phone or SMS",
      36,
      99,
      "Inscription form",
      "6B29FC40-CA47-1067-B31D-00DD010662DA",
      true,
      "This is a note",
      ezmax_api_definition__full_ezsigntemplatepublic_response__"Hour",
      10,
      5,
      "2024-05-16 15:12:45",
      "https://prod.ezsignsigner.ca-central-1.ezmax.com/ezsigntemplatepublic/{sEzmaxcustomerCode}/{sEzsigntemplatepublicReferenceID}",
      "a",
       // false, not to have infinite recursion
      instantiate_common_audit(0)
    );
  } else {
    ezsigntemplatepublic_response = ezsigntemplatepublic_response_create(
      96,
      5,
      "Default",
      2,
      "Email and phone or SMS",
      36,
      99,
      "Inscription form",
      "6B29FC40-CA47-1067-B31D-00DD010662DA",
      true,
      "This is a note",
      ezmax_api_definition__full_ezsigntemplatepublic_response__"Hour",
      10,
      5,
      "2024-05-16 15:12:45",
      "https://prod.ezsignsigner.ca-central-1.ezmax.com/ezsigntemplatepublic/{sEzmaxcustomerCode}/{sEzsigntemplatepublicReferenceID}",
      "a",
      NULL
    );
  }

  return ezsigntemplatepublic_response;
}


#ifdef ezsigntemplatepublic_response_MAIN

void test_ezsigntemplatepublic_response(int include_optional) {
    ezsigntemplatepublic_response_t* ezsigntemplatepublic_response_1 = instantiate_ezsigntemplatepublic_response(include_optional);

	cJSON* jsonezsigntemplatepublic_response_1 = ezsigntemplatepublic_response_convertToJSON(ezsigntemplatepublic_response_1);
	printf("ezsigntemplatepublic_response :\n%s\n", cJSON_Print(jsonezsigntemplatepublic_response_1));
	ezsigntemplatepublic_response_t* ezsigntemplatepublic_response_2 = ezsigntemplatepublic_response_parseFromJSON(jsonezsigntemplatepublic_response_1);
	cJSON* jsonezsigntemplatepublic_response_2 = ezsigntemplatepublic_response_convertToJSON(ezsigntemplatepublic_response_2);
	printf("repeating ezsigntemplatepublic_response:\n%s\n", cJSON_Print(jsonezsigntemplatepublic_response_2));
}

int main() {
  test_ezsigntemplatepublic_response(1);
  test_ezsigntemplatepublic_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepublic_response_MAIN
#endif // ezsigntemplatepublic_response_TEST
