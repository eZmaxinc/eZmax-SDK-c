#ifndef branding_list_element_TEST
#define branding_list_element_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define branding_list_element_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/branding_list_element.h"
branding_list_element_t* instantiate_branding_list_element(int include_optional);



branding_list_element_t* instantiate_branding_list_element(int include_optional) {
  branding_list_element_t* branding_list_element = NULL;
  if (include_optional) {
    branding_list_element = branding_list_element_create(
      78,
      "Company X",
      3752795,
      0,
      16777215,
      15658734,
      13577007,
      16777215,
      true
    );
  } else {
    branding_list_element = branding_list_element_create(
      78,
      "Company X",
      3752795,
      0,
      16777215,
      15658734,
      13577007,
      16777215,
      true
    );
  }

  return branding_list_element;
}


#ifdef branding_list_element_MAIN

void test_branding_list_element(int include_optional) {
    branding_list_element_t* branding_list_element_1 = instantiate_branding_list_element(include_optional);

	cJSON* jsonbranding_list_element_1 = branding_list_element_convertToJSON(branding_list_element_1);
	printf("branding_list_element :\n%s\n", cJSON_Print(jsonbranding_list_element_1));
	branding_list_element_t* branding_list_element_2 = branding_list_element_parseFromJSON(jsonbranding_list_element_1);
	cJSON* jsonbranding_list_element_2 = branding_list_element_convertToJSON(branding_list_element_2);
	printf("repeating branding_list_element:\n%s\n", cJSON_Print(jsonbranding_list_element_2));
}

int main() {
  test_branding_list_element(1);
  test_branding_list_element(0);

  printf("Hello world \n");
  return 0;
}

#endif // branding_list_element_MAIN
#endif // branding_list_element_TEST
