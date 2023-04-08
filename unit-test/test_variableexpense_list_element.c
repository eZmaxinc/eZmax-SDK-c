#ifndef variableexpense_list_element_TEST
#define variableexpense_list_element_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define variableexpense_list_element_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/variableexpense_list_element.h"
variableexpense_list_element_t* instantiate_variableexpense_list_element(int include_optional);



variableexpense_list_element_t* instantiate_variableexpense_list_element(int include_optional) {
  variableexpense_list_element_t* variableexpense_list_element = NULL;
  if (include_optional) {
    variableexpense_list_element = variableexpense_list_element_create(
      2,
      "EQBUR",
      "Équipements de bureau",
      ezmax_api_definition__full_variableexpense_list_element__"Yes",
      true
    );
  } else {
    variableexpense_list_element = variableexpense_list_element_create(
      2,
      "EQBUR",
      "Équipements de bureau",
      ezmax_api_definition__full_variableexpense_list_element__"Yes",
      true
    );
  }

  return variableexpense_list_element;
}


#ifdef variableexpense_list_element_MAIN

void test_variableexpense_list_element(int include_optional) {
    variableexpense_list_element_t* variableexpense_list_element_1 = instantiate_variableexpense_list_element(include_optional);

	cJSON* jsonvariableexpense_list_element_1 = variableexpense_list_element_convertToJSON(variableexpense_list_element_1);
	printf("variableexpense_list_element :\n%s\n", cJSON_Print(jsonvariableexpense_list_element_1));
	variableexpense_list_element_t* variableexpense_list_element_2 = variableexpense_list_element_parseFromJSON(jsonvariableexpense_list_element_1);
	cJSON* jsonvariableexpense_list_element_2 = variableexpense_list_element_convertToJSON(variableexpense_list_element_2);
	printf("repeating variableexpense_list_element:\n%s\n", cJSON_Print(jsonvariableexpense_list_element_2));
}

int main() {
  test_variableexpense_list_element(1);
  test_variableexpense_list_element(0);

  printf("Hello world \n");
  return 0;
}

#endif // variableexpense_list_element_MAIN
#endif // variableexpense_list_element_TEST
