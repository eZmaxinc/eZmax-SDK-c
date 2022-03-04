#ifndef user_response_compound_TEST
#define user_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define user_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/user_response_compound.h"
user_response_compound_t* instantiate_user_response_compound(int include_optional);

#include "test_common_audit.c"


user_response_compound_t* instantiate_user_response_compound(int include_optional) {
  user_response_compound_t* user_response_compound = NULL;
  if (include_optional) {
    user_response_compound = user_response_compound_create(
      70,
      2,
      ezmax_api_definition_user_response_compound__"RewardDistributorServer",
      "John",
      "Doe",
      "JohnDoe",
       // false, not to have infinite recursion
      instantiate_common_audit(0)
    );
  } else {
    user_response_compound = user_response_compound_create(
      70,
      2,
      ezmax_api_definition_user_response_compound__"RewardDistributorServer",
      "John",
      "Doe",
      "JohnDoe",
      NULL
    );
  }

  return user_response_compound;
}


#ifdef user_response_compound_MAIN

void test_user_response_compound(int include_optional) {
    user_response_compound_t* user_response_compound_1 = instantiate_user_response_compound(include_optional);

	cJSON* jsonuser_response_compound_1 = user_response_compound_convertToJSON(user_response_compound_1);
	printf("user_response_compound :\n%s\n", cJSON_Print(jsonuser_response_compound_1));
	user_response_compound_t* user_response_compound_2 = user_response_compound_parseFromJSON(jsonuser_response_compound_1);
	cJSON* jsonuser_response_compound_2 = user_response_compound_convertToJSON(user_response_compound_2);
	printf("repeating user_response_compound:\n%s\n", cJSON_Print(jsonuser_response_compound_2));
}

int main() {
  test_user_response_compound(1);
  test_user_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // user_response_compound_MAIN
#endif // user_response_compound_TEST
