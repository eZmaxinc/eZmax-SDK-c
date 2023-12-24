#ifndef ezsignsigningreason_list_element_TEST
#define ezsignsigningreason_list_element_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsigningreason_list_element_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsigningreason_list_element.h"
ezsignsigningreason_list_element_t* instantiate_ezsignsigningreason_list_element(int include_optional);



ezsignsigningreason_list_element_t* instantiate_ezsignsigningreason_list_element(int include_optional) {
  ezsignsigningreason_list_element_t* ezsignsigningreason_list_element = NULL;
  if (include_optional) {
    ezsignsigningreason_list_element = ezsignsigningreason_list_element_create(
      194,
      "I approve this document",
      true
    );
  } else {
    ezsignsigningreason_list_element = ezsignsigningreason_list_element_create(
      194,
      "I approve this document",
      true
    );
  }

  return ezsignsigningreason_list_element;
}


#ifdef ezsignsigningreason_list_element_MAIN

void test_ezsignsigningreason_list_element(int include_optional) {
    ezsignsigningreason_list_element_t* ezsignsigningreason_list_element_1 = instantiate_ezsignsigningreason_list_element(include_optional);

	cJSON* jsonezsignsigningreason_list_element_1 = ezsignsigningreason_list_element_convertToJSON(ezsignsigningreason_list_element_1);
	printf("ezsignsigningreason_list_element :\n%s\n", cJSON_Print(jsonezsignsigningreason_list_element_1));
	ezsignsigningreason_list_element_t* ezsignsigningreason_list_element_2 = ezsignsigningreason_list_element_parseFromJSON(jsonezsignsigningreason_list_element_1);
	cJSON* jsonezsignsigningreason_list_element_2 = ezsignsigningreason_list_element_convertToJSON(ezsignsigningreason_list_element_2);
	printf("repeating ezsignsigningreason_list_element:\n%s\n", cJSON_Print(jsonezsignsigningreason_list_element_2));
}

int main() {
  test_ezsignsigningreason_list_element(1);
  test_ezsignsigningreason_list_element(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsigningreason_list_element_MAIN
#endif // ezsignsigningreason_list_element_TEST
