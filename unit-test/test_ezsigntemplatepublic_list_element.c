#ifndef ezsigntemplatepublic_list_element_TEST
#define ezsigntemplatepublic_list_element_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepublic_list_element_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepublic_list_element.h"
ezsigntemplatepublic_list_element_t* instantiate_ezsigntemplatepublic_list_element(int include_optional);



ezsigntemplatepublic_list_element_t* instantiate_ezsigntemplatepublic_list_element(int include_optional) {
  ezsigntemplatepublic_list_element_t* ezsigntemplatepublic_list_element = NULL;
  if (include_optional) {
    ezsigntemplatepublic_list_element = ezsigntemplatepublic_list_element_create(
      96,
      5,
      "Default",
      2,
      36,
      99,
      "Inscription form",
      true,
      "This is a note",
      ezmax_api_definition__full_ezsigntemplatepublic_list_element__"Hour",
      10,
      5,
      "2024-05-16 15:12:45",
      56,
      56,
      "a"
    );
  } else {
    ezsigntemplatepublic_list_element = ezsigntemplatepublic_list_element_create(
      96,
      5,
      "Default",
      2,
      36,
      99,
      "Inscription form",
      true,
      "This is a note",
      ezmax_api_definition__full_ezsigntemplatepublic_list_element__"Hour",
      10,
      5,
      "2024-05-16 15:12:45",
      56,
      56,
      "a"
    );
  }

  return ezsigntemplatepublic_list_element;
}


#ifdef ezsigntemplatepublic_list_element_MAIN

void test_ezsigntemplatepublic_list_element(int include_optional) {
    ezsigntemplatepublic_list_element_t* ezsigntemplatepublic_list_element_1 = instantiate_ezsigntemplatepublic_list_element(include_optional);

	cJSON* jsonezsigntemplatepublic_list_element_1 = ezsigntemplatepublic_list_element_convertToJSON(ezsigntemplatepublic_list_element_1);
	printf("ezsigntemplatepublic_list_element :\n%s\n", cJSON_Print(jsonezsigntemplatepublic_list_element_1));
	ezsigntemplatepublic_list_element_t* ezsigntemplatepublic_list_element_2 = ezsigntemplatepublic_list_element_parseFromJSON(jsonezsigntemplatepublic_list_element_1);
	cJSON* jsonezsigntemplatepublic_list_element_2 = ezsigntemplatepublic_list_element_convertToJSON(ezsigntemplatepublic_list_element_2);
	printf("repeating ezsigntemplatepublic_list_element:\n%s\n", cJSON_Print(jsonezsigntemplatepublic_list_element_2));
}

int main() {
  test_ezsigntemplatepublic_list_element(1);
  test_ezsigntemplatepublic_list_element(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepublic_list_element_MAIN
#endif // ezsigntemplatepublic_list_element_TEST
