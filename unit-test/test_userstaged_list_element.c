#ifndef userstaged_list_element_TEST
#define userstaged_list_element_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define userstaged_list_element_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/userstaged_list_element.h"
userstaged_list_element_t* instantiate_userstaged_list_element(int include_optional);



userstaged_list_element_t* instantiate_userstaged_list_element(int include_optional) {
  userstaged_list_element_t* userstaged_list_element = NULL;
  if (include_optional) {
    userstaged_list_element = userstaged_list_element_create(
      90,
      "email@example.com",
      "Jane",
      "Doe",
      "azuread_6b303ca8-9e34-4c21-9a53-0856342dec5e"
    );
  } else {
    userstaged_list_element = userstaged_list_element_create(
      90,
      "email@example.com",
      "Jane",
      "Doe",
      "azuread_6b303ca8-9e34-4c21-9a53-0856342dec5e"
    );
  }

  return userstaged_list_element;
}


#ifdef userstaged_list_element_MAIN

void test_userstaged_list_element(int include_optional) {
    userstaged_list_element_t* userstaged_list_element_1 = instantiate_userstaged_list_element(include_optional);

	cJSON* jsonuserstaged_list_element_1 = userstaged_list_element_convertToJSON(userstaged_list_element_1);
	printf("userstaged_list_element :\n%s\n", cJSON_Print(jsonuserstaged_list_element_1));
	userstaged_list_element_t* userstaged_list_element_2 = userstaged_list_element_parseFromJSON(jsonuserstaged_list_element_1);
	cJSON* jsonuserstaged_list_element_2 = userstaged_list_element_convertToJSON(userstaged_list_element_2);
	printf("repeating userstaged_list_element:\n%s\n", cJSON_Print(jsonuserstaged_list_element_2));
}

int main() {
  test_userstaged_list_element(1);
  test_userstaged_list_element(0);

  printf("Hello world \n");
  return 0;
}

#endif // userstaged_list_element_MAIN
#endif // userstaged_list_element_TEST
