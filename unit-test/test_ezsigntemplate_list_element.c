#ifndef ezsigntemplate_list_element_TEST
#define ezsigntemplate_list_element_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplate_list_element_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplate_list_element.h"
ezsigntemplate_list_element_t* instantiate_ezsigntemplate_list_element(int include_optional);



ezsigntemplate_list_element_t* instantiate_ezsigntemplate_list_element(int include_optional) {
  ezsigntemplate_list_element_t* ezsigntemplate_list_element = NULL;
  if (include_optional) {
    ezsigntemplate_list_element = ezsigntemplate_list_element_create(
      36,
      5,
      2,
      "Standard Contract",
      5,
      8,
      false,
      "Default"
    );
  } else {
    ezsigntemplate_list_element = ezsigntemplate_list_element_create(
      36,
      5,
      2,
      "Standard Contract",
      5,
      8,
      false,
      "Default"
    );
  }

  return ezsigntemplate_list_element;
}


#ifdef ezsigntemplate_list_element_MAIN

void test_ezsigntemplate_list_element(int include_optional) {
    ezsigntemplate_list_element_t* ezsigntemplate_list_element_1 = instantiate_ezsigntemplate_list_element(include_optional);

	cJSON* jsonezsigntemplate_list_element_1 = ezsigntemplate_list_element_convertToJSON(ezsigntemplate_list_element_1);
	printf("ezsigntemplate_list_element :\n%s\n", cJSON_Print(jsonezsigntemplate_list_element_1));
	ezsigntemplate_list_element_t* ezsigntemplate_list_element_2 = ezsigntemplate_list_element_parseFromJSON(jsonezsigntemplate_list_element_1);
	cJSON* jsonezsigntemplate_list_element_2 = ezsigntemplate_list_element_convertToJSON(ezsigntemplate_list_element_2);
	printf("repeating ezsigntemplate_list_element:\n%s\n", cJSON_Print(jsonezsigntemplate_list_element_2));
}

int main() {
  test_ezsigntemplate_list_element(1);
  test_ezsigntemplate_list_element(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplate_list_element_MAIN
#endif // ezsigntemplate_list_element_TEST
