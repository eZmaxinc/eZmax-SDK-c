#ifndef ezsigntemplatepublic_response_compound_TEST
#define ezsigntemplatepublic_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepublic_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepublic_response_compound.h"
ezsigntemplatepublic_response_compound_t* instantiate_ezsigntemplatepublic_response_compound(int include_optional);

#include "test_common_audit.c"


ezsigntemplatepublic_response_compound_t* instantiate_ezsigntemplatepublic_response_compound(int include_optional) {
  ezsigntemplatepublic_response_compound_t* ezsigntemplatepublic_response_compound = NULL;
  if (include_optional) {
    ezsigntemplatepublic_response_compound = ezsigntemplatepublic_response_compound_create(
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
      ezmax_api_definition__full_ezsigntemplatepublic_response_compound__"Hour",
      10,
      5,
      "2024-05-16 15:12:45",
      "https://prod.ezsignsigner.ca-central-1.ezmax.com/ezsigntemplatepublic/{sEzmaxcustomerCode}/{sEzsigntemplatepublicReferenceID}",
      "a",
       // false, not to have infinite recursion
      instantiate_common_audit(0),
      list_createList()
    );
  } else {
    ezsigntemplatepublic_response_compound = ezsigntemplatepublic_response_compound_create(
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
      ezmax_api_definition__full_ezsigntemplatepublic_response_compound__"Hour",
      10,
      5,
      "2024-05-16 15:12:45",
      "https://prod.ezsignsigner.ca-central-1.ezmax.com/ezsigntemplatepublic/{sEzmaxcustomerCode}/{sEzsigntemplatepublicReferenceID}",
      "a",
      NULL,
      list_createList()
    );
  }

  return ezsigntemplatepublic_response_compound;
}


#ifdef ezsigntemplatepublic_response_compound_MAIN

void test_ezsigntemplatepublic_response_compound(int include_optional) {
    ezsigntemplatepublic_response_compound_t* ezsigntemplatepublic_response_compound_1 = instantiate_ezsigntemplatepublic_response_compound(include_optional);

	cJSON* jsonezsigntemplatepublic_response_compound_1 = ezsigntemplatepublic_response_compound_convertToJSON(ezsigntemplatepublic_response_compound_1);
	printf("ezsigntemplatepublic_response_compound :\n%s\n", cJSON_Print(jsonezsigntemplatepublic_response_compound_1));
	ezsigntemplatepublic_response_compound_t* ezsigntemplatepublic_response_compound_2 = ezsigntemplatepublic_response_compound_parseFromJSON(jsonezsigntemplatepublic_response_compound_1);
	cJSON* jsonezsigntemplatepublic_response_compound_2 = ezsigntemplatepublic_response_compound_convertToJSON(ezsigntemplatepublic_response_compound_2);
	printf("repeating ezsigntemplatepublic_response_compound:\n%s\n", cJSON_Print(jsonezsigntemplatepublic_response_compound_2));
}

int main() {
  test_ezsigntemplatepublic_response_compound(1);
  test_ezsigntemplatepublic_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepublic_response_compound_MAIN
#endif // ezsigntemplatepublic_response_compound_TEST
