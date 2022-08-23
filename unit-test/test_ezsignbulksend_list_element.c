#ifndef ezsignbulksend_list_element_TEST
#define ezsignbulksend_list_element_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksend_list_element_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksend_list_element.h"
ezsignbulksend_list_element_t* instantiate_ezsignbulksend_list_element(int include_optional);



ezsignbulksend_list_element_t* instantiate_ezsignbulksend_list_element(int include_optional) {
  ezsignbulksend_list_element_t* ezsignbulksend_list_element = NULL;
  if (include_optional) {
    ezsignbulksend_list_element = ezsignbulksend_list_element_create(
      8,
      5,
      "Test eZsign Bulk Send",
      "Default",
      1,
      56,
      56,
      56,
      56,
      56,
      true
    );
  } else {
    ezsignbulksend_list_element = ezsignbulksend_list_element_create(
      8,
      5,
      "Test eZsign Bulk Send",
      "Default",
      1,
      56,
      56,
      56,
      56,
      56,
      true
    );
  }

  return ezsignbulksend_list_element;
}


#ifdef ezsignbulksend_list_element_MAIN

void test_ezsignbulksend_list_element(int include_optional) {
    ezsignbulksend_list_element_t* ezsignbulksend_list_element_1 = instantiate_ezsignbulksend_list_element(include_optional);

	cJSON* jsonezsignbulksend_list_element_1 = ezsignbulksend_list_element_convertToJSON(ezsignbulksend_list_element_1);
	printf("ezsignbulksend_list_element :\n%s\n", cJSON_Print(jsonezsignbulksend_list_element_1));
	ezsignbulksend_list_element_t* ezsignbulksend_list_element_2 = ezsignbulksend_list_element_parseFromJSON(jsonezsignbulksend_list_element_1);
	cJSON* jsonezsignbulksend_list_element_2 = ezsignbulksend_list_element_convertToJSON(ezsignbulksend_list_element_2);
	printf("repeating ezsignbulksend_list_element:\n%s\n", cJSON_Print(jsonezsignbulksend_list_element_2));
}

int main() {
  test_ezsignbulksend_list_element(1);
  test_ezsignbulksend_list_element(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksend_list_element_MAIN
#endif // ezsignbulksend_list_element_TEST
