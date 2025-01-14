#ifndef usergroup_request_TEST
#define usergroup_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroup_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroup_request.h"
usergroup_request_t* instantiate_usergroup_request(int include_optional);

#include "test_email_request.c"
#include "test_multilingual_usergroup_name.c"


usergroup_request_t* instantiate_usergroup_request(int include_optional) {
  usergroup_request_t* usergroup_request = NULL;
  if (include_optional) {
    usergroup_request = usergroup_request_create(
      2,
       // false, not to have infinite recursion
      instantiate_email_request(0),
       // false, not to have infinite recursion
      instantiate_multilingual_usergroup_name(0)
    );
  } else {
    usergroup_request = usergroup_request_create(
      2,
      NULL,
      NULL
    );
  }

  return usergroup_request;
}


#ifdef usergroup_request_MAIN

void test_usergroup_request(int include_optional) {
    usergroup_request_t* usergroup_request_1 = instantiate_usergroup_request(include_optional);

	cJSON* jsonusergroup_request_1 = usergroup_request_convertToJSON(usergroup_request_1);
	printf("usergroup_request :\n%s\n", cJSON_Print(jsonusergroup_request_1));
	usergroup_request_t* usergroup_request_2 = usergroup_request_parseFromJSON(jsonusergroup_request_1);
	cJSON* jsonusergroup_request_2 = usergroup_request_convertToJSON(usergroup_request_2);
	printf("repeating usergroup_request:\n%s\n", cJSON_Print(jsonusergroup_request_2));
}

int main() {
  test_usergroup_request(1);
  test_usergroup_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroup_request_MAIN
#endif // usergroup_request_TEST
