#ifndef ezsignfoldertype_list_element_TEST
#define ezsignfoldertype_list_element_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfoldertype_list_element_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfoldertype_list_element.h"
ezsignfoldertype_list_element_t* instantiate_ezsignfoldertype_list_element(int include_optional);



ezsignfoldertype_list_element_t* instantiate_ezsignfoldertype_list_element(int include_optional) {
  ezsignfoldertype_list_element_t* ezsignfoldertype_list_element = NULL;
  if (include_optional) {
    ezsignfoldertype_list_element = ezsignfoldertype_list_element_create(
      5,
      ezmax_api_definition__full_ezsignfoldertype_list_element__User,
      "Default",
      1
    );
  } else {
    ezsignfoldertype_list_element = ezsignfoldertype_list_element_create(
      5,
      ezmax_api_definition__full_ezsignfoldertype_list_element__User,
      "Default",
      1
    );
  }

  return ezsignfoldertype_list_element;
}


#ifdef ezsignfoldertype_list_element_MAIN

void test_ezsignfoldertype_list_element(int include_optional) {
    ezsignfoldertype_list_element_t* ezsignfoldertype_list_element_1 = instantiate_ezsignfoldertype_list_element(include_optional);

	cJSON* jsonezsignfoldertype_list_element_1 = ezsignfoldertype_list_element_convertToJSON(ezsignfoldertype_list_element_1);
	printf("ezsignfoldertype_list_element :\n%s\n", cJSON_Print(jsonezsignfoldertype_list_element_1));
	ezsignfoldertype_list_element_t* ezsignfoldertype_list_element_2 = ezsignfoldertype_list_element_parseFromJSON(jsonezsignfoldertype_list_element_1);
	cJSON* jsonezsignfoldertype_list_element_2 = ezsignfoldertype_list_element_convertToJSON(ezsignfoldertype_list_element_2);
	printf("repeating ezsignfoldertype_list_element:\n%s\n", cJSON_Print(jsonezsignfoldertype_list_element_2));
}

int main() {
  test_ezsignfoldertype_list_element(1);
  test_ezsignfoldertype_list_element(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfoldertype_list_element_MAIN
#endif // ezsignfoldertype_list_element_TEST
