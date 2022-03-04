#ifndef custom_dropdown_element_response_compound_TEST
#define custom_dropdown_element_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_dropdown_element_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_dropdown_element_response_compound.h"
custom_dropdown_element_response_compound_t* instantiate_custom_dropdown_element_response_compound(int include_optional);



custom_dropdown_element_response_compound_t* instantiate_custom_dropdown_element_response_compound(int include_optional) {
  custom_dropdown_element_response_compound_t* custom_dropdown_element_response_compound = NULL;
  if (include_optional) {
    custom_dropdown_element_response_compound = custom_dropdown_element_response_compound_create(
      "0",
      "0"
    );
  } else {
    custom_dropdown_element_response_compound = custom_dropdown_element_response_compound_create(
      "0",
      "0"
    );
  }

  return custom_dropdown_element_response_compound;
}


#ifdef custom_dropdown_element_response_compound_MAIN

void test_custom_dropdown_element_response_compound(int include_optional) {
    custom_dropdown_element_response_compound_t* custom_dropdown_element_response_compound_1 = instantiate_custom_dropdown_element_response_compound(include_optional);

	cJSON* jsoncustom_dropdown_element_response_compound_1 = custom_dropdown_element_response_compound_convertToJSON(custom_dropdown_element_response_compound_1);
	printf("custom_dropdown_element_response_compound :\n%s\n", cJSON_Print(jsoncustom_dropdown_element_response_compound_1));
	custom_dropdown_element_response_compound_t* custom_dropdown_element_response_compound_2 = custom_dropdown_element_response_compound_parseFromJSON(jsoncustom_dropdown_element_response_compound_1);
	cJSON* jsoncustom_dropdown_element_response_compound_2 = custom_dropdown_element_response_compound_convertToJSON(custom_dropdown_element_response_compound_2);
	printf("repeating custom_dropdown_element_response_compound:\n%s\n", cJSON_Print(jsoncustom_dropdown_element_response_compound_2));
}

int main() {
  test_custom_dropdown_element_response_compound(1);
  test_custom_dropdown_element_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_dropdown_element_response_compound_MAIN
#endif // custom_dropdown_element_response_compound_TEST
