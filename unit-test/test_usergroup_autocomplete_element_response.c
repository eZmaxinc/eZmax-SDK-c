#ifndef usergroup_autocomplete_element_response_TEST
#define usergroup_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroup_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroup_autocomplete_element_response.h"
usergroup_autocomplete_element_response_t* instantiate_usergroup_autocomplete_element_response(int include_optional);



usergroup_autocomplete_element_response_t* instantiate_usergroup_autocomplete_element_response(int include_optional) {
  usergroup_autocomplete_element_response_t* usergroup_autocomplete_element_response = NULL;
  if (include_optional) {
    usergroup_autocomplete_element_response = usergroup_autocomplete_element_response_create(
      "Administration",
      89,
      true
    );
  } else {
    usergroup_autocomplete_element_response = usergroup_autocomplete_element_response_create(
      "Administration",
      89,
      true
    );
  }

  return usergroup_autocomplete_element_response;
}


#ifdef usergroup_autocomplete_element_response_MAIN

void test_usergroup_autocomplete_element_response(int include_optional) {
    usergroup_autocomplete_element_response_t* usergroup_autocomplete_element_response_1 = instantiate_usergroup_autocomplete_element_response(include_optional);

	cJSON* jsonusergroup_autocomplete_element_response_1 = usergroup_autocomplete_element_response_convertToJSON(usergroup_autocomplete_element_response_1);
	printf("usergroup_autocomplete_element_response :\n%s\n", cJSON_Print(jsonusergroup_autocomplete_element_response_1));
	usergroup_autocomplete_element_response_t* usergroup_autocomplete_element_response_2 = usergroup_autocomplete_element_response_parseFromJSON(jsonusergroup_autocomplete_element_response_1);
	cJSON* jsonusergroup_autocomplete_element_response_2 = usergroup_autocomplete_element_response_convertToJSON(usergroup_autocomplete_element_response_2);
	printf("repeating usergroup_autocomplete_element_response:\n%s\n", cJSON_Print(jsonusergroup_autocomplete_element_response_2));
}

int main() {
  test_usergroup_autocomplete_element_response(1);
  test_usergroup_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroup_autocomplete_element_response_MAIN
#endif // usergroup_autocomplete_element_response_TEST
