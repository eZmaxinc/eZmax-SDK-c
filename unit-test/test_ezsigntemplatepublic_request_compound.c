#ifndef ezsigntemplatepublic_request_compound_TEST
#define ezsigntemplatepublic_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepublic_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepublic_request_compound.h"
ezsigntemplatepublic_request_compound_t* instantiate_ezsigntemplatepublic_request_compound(int include_optional);



ezsigntemplatepublic_request_compound_t* instantiate_ezsigntemplatepublic_request_compound(int include_optional) {
  ezsigntemplatepublic_request_compound_t* ezsigntemplatepublic_request_compound = NULL;
  if (include_optional) {
    ezsigntemplatepublic_request_compound = ezsigntemplatepublic_request_compound_create(
      96,
      5,
      2,
      36,
      99,
      "Inscription form",
      true,
      "This is a note",
      ezmax_api_definition__full_ezsigntemplatepublic_request_compound__"Hour",
      10
    );
  } else {
    ezsigntemplatepublic_request_compound = ezsigntemplatepublic_request_compound_create(
      96,
      5,
      2,
      36,
      99,
      "Inscription form",
      true,
      "This is a note",
      ezmax_api_definition__full_ezsigntemplatepublic_request_compound__"Hour",
      10
    );
  }

  return ezsigntemplatepublic_request_compound;
}


#ifdef ezsigntemplatepublic_request_compound_MAIN

void test_ezsigntemplatepublic_request_compound(int include_optional) {
    ezsigntemplatepublic_request_compound_t* ezsigntemplatepublic_request_compound_1 = instantiate_ezsigntemplatepublic_request_compound(include_optional);

	cJSON* jsonezsigntemplatepublic_request_compound_1 = ezsigntemplatepublic_request_compound_convertToJSON(ezsigntemplatepublic_request_compound_1);
	printf("ezsigntemplatepublic_request_compound :\n%s\n", cJSON_Print(jsonezsigntemplatepublic_request_compound_1));
	ezsigntemplatepublic_request_compound_t* ezsigntemplatepublic_request_compound_2 = ezsigntemplatepublic_request_compound_parseFromJSON(jsonezsigntemplatepublic_request_compound_1);
	cJSON* jsonezsigntemplatepublic_request_compound_2 = ezsigntemplatepublic_request_compound_convertToJSON(ezsigntemplatepublic_request_compound_2);
	printf("repeating ezsigntemplatepublic_request_compound:\n%s\n", cJSON_Print(jsonezsigntemplatepublic_request_compound_2));
}

int main() {
  test_ezsigntemplatepublic_request_compound(1);
  test_ezsigntemplatepublic_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepublic_request_compound_MAIN
#endif // ezsigntemplatepublic_request_compound_TEST
