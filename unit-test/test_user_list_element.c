#ifndef user_list_element_TEST
#define user_list_element_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define user_list_element_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/user_list_element.h"
user_list_element_t* instantiate_user_list_element(int include_optional);



user_list_element_t* instantiate_user_list_element(int include_optional) {
  user_list_element_t* user_list_element = NULL;
  if (include_optional) {
    user_list_element = user_list_element_create(
      70,
      "John",
      "Doe",
      "JohnDoe",
      true,
      ezmax_api_definition__full_user_list_element__"EzsignUser",
      ezmax_api_definition__full_user_list_element__"BuiltIn",
      ezmax_api_definition__full_user_list_element__"PaidByOffice",
      "2020-12-31",
      "email@example.com"
    );
  } else {
    user_list_element = user_list_element_create(
      70,
      "John",
      "Doe",
      "JohnDoe",
      true,
      ezmax_api_definition__full_user_list_element__"EzsignUser",
      ezmax_api_definition__full_user_list_element__"BuiltIn",
      ezmax_api_definition__full_user_list_element__"PaidByOffice",
      "2020-12-31",
      "email@example.com"
    );
  }

  return user_list_element;
}


#ifdef user_list_element_MAIN

void test_user_list_element(int include_optional) {
    user_list_element_t* user_list_element_1 = instantiate_user_list_element(include_optional);

	cJSON* jsonuser_list_element_1 = user_list_element_convertToJSON(user_list_element_1);
	printf("user_list_element :\n%s\n", cJSON_Print(jsonuser_list_element_1));
	user_list_element_t* user_list_element_2 = user_list_element_parseFromJSON(jsonuser_list_element_1);
	cJSON* jsonuser_list_element_2 = user_list_element_convertToJSON(user_list_element_2);
	printf("repeating user_list_element:\n%s\n", cJSON_Print(jsonuser_list_element_2));
}

int main() {
  test_user_list_element(1);
  test_user_list_element(0);

  printf("Hello world \n");
  return 0;
}

#endif // user_list_element_MAIN
#endif // user_list_element_TEST
