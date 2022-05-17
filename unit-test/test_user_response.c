#ifndef user_response_TEST
#define user_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define user_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/user_response.h"
user_response_t* instantiate_user_response(int include_optional);

#include "test_common_audit.c"


user_response_t* instantiate_user_response(int include_optional) {
  user_response_t* user_response = NULL;
  if (include_optional) {
    user_response = user_response_create(
      70,
      2,
      ezmax_api_definition__full_user_response__"RewardDistributorServer",
      "John",
      "Doe",
      "JohnDoe",
       // false, not to have infinite recursion
      instantiate_common_audit(0)
    );
  } else {
    user_response = user_response_create(
      70,
      2,
      ezmax_api_definition__full_user_response__"RewardDistributorServer",
      "John",
      "Doe",
      "JohnDoe",
      NULL
    );
  }

  return user_response;
}


#ifdef user_response_MAIN

void test_user_response(int include_optional) {
    user_response_t* user_response_1 = instantiate_user_response(include_optional);

	cJSON* jsonuser_response_1 = user_response_convertToJSON(user_response_1);
	printf("user_response :\n%s\n", cJSON_Print(jsonuser_response_1));
	user_response_t* user_response_2 = user_response_parseFromJSON(jsonuser_response_1);
	cJSON* jsonuser_response_2 = user_response_convertToJSON(user_response_2);
	printf("repeating user_response:\n%s\n", cJSON_Print(jsonuser_response_2));
}

int main() {
  test_user_response(1);
  test_user_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // user_response_MAIN
#endif // user_response_TEST
