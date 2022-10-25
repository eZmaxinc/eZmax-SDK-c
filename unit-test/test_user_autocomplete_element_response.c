#ifndef user_autocomplete_element_response_TEST
#define user_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define user_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/user_autocomplete_element_response.h"
user_autocomplete_element_response_t* instantiate_user_autocomplete_element_response(int include_optional);



user_autocomplete_element_response_t* instantiate_user_autocomplete_element_response(int include_optional) {
  user_autocomplete_element_response_t* user_autocomplete_element_response = NULL;
  if (include_optional) {
    user_autocomplete_element_response = user_autocomplete_element_response_create(
      ezmax_api_definition__full_user_autocomplete_element_response__"RewardDistributorServer",
      "Default",
      70,
      true
    );
  } else {
    user_autocomplete_element_response = user_autocomplete_element_response_create(
      ezmax_api_definition__full_user_autocomplete_element_response__"RewardDistributorServer",
      "Default",
      70,
      true
    );
  }

  return user_autocomplete_element_response;
}


#ifdef user_autocomplete_element_response_MAIN

void test_user_autocomplete_element_response(int include_optional) {
    user_autocomplete_element_response_t* user_autocomplete_element_response_1 = instantiate_user_autocomplete_element_response(include_optional);

	cJSON* jsonuser_autocomplete_element_response_1 = user_autocomplete_element_response_convertToJSON(user_autocomplete_element_response_1);
	printf("user_autocomplete_element_response :\n%s\n", cJSON_Print(jsonuser_autocomplete_element_response_1));
	user_autocomplete_element_response_t* user_autocomplete_element_response_2 = user_autocomplete_element_response_parseFromJSON(jsonuser_autocomplete_element_response_1);
	cJSON* jsonuser_autocomplete_element_response_2 = user_autocomplete_element_response_convertToJSON(user_autocomplete_element_response_2);
	printf("repeating user_autocomplete_element_response:\n%s\n", cJSON_Print(jsonuser_autocomplete_element_response_2));
}

int main() {
  test_user_autocomplete_element_response(1);
  test_user_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // user_autocomplete_element_response_MAIN
#endif // user_autocomplete_element_response_TEST
