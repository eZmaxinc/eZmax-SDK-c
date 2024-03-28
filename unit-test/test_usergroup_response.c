#ifndef usergroup_response_TEST
#define usergroup_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroup_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroup_response.h"
usergroup_response_t* instantiate_usergroup_response(int include_optional);

#include "test_multilingual_usergroup_name.c"


usergroup_response_t* instantiate_usergroup_response(int include_optional) {
  usergroup_response_t* usergroup_response = NULL;
  if (include_optional) {
    usergroup_response = usergroup_response_create(
      2,
       // false, not to have infinite recursion
      instantiate_multilingual_usergroup_name(0),
      "Administration"
    );
  } else {
    usergroup_response = usergroup_response_create(
      2,
      NULL,
      "Administration"
    );
  }

  return usergroup_response;
}


#ifdef usergroup_response_MAIN

void test_usergroup_response(int include_optional) {
    usergroup_response_t* usergroup_response_1 = instantiate_usergroup_response(include_optional);

	cJSON* jsonusergroup_response_1 = usergroup_response_convertToJSON(usergroup_response_1);
	printf("usergroup_response :\n%s\n", cJSON_Print(jsonusergroup_response_1));
	usergroup_response_t* usergroup_response_2 = usergroup_response_parseFromJSON(jsonusergroup_response_1);
	cJSON* jsonusergroup_response_2 = usergroup_response_convertToJSON(usergroup_response_2);
	printf("repeating usergroup_response:\n%s\n", cJSON_Print(jsonusergroup_response_2));
}

int main() {
  test_usergroup_response(1);
  test_usergroup_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroup_response_MAIN
#endif // usergroup_response_TEST
