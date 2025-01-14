#ifndef usergroup_request_compound_TEST
#define usergroup_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroup_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroup_request_compound.h"
usergroup_request_compound_t* instantiate_usergroup_request_compound(int include_optional);

#include "test_email_request.c"
#include "test_multilingual_usergroup_name.c"


usergroup_request_compound_t* instantiate_usergroup_request_compound(int include_optional) {
  usergroup_request_compound_t* usergroup_request_compound = NULL;
  if (include_optional) {
    usergroup_request_compound = usergroup_request_compound_create(
      2,
       // false, not to have infinite recursion
      instantiate_email_request(0),
       // false, not to have infinite recursion
      instantiate_multilingual_usergroup_name(0)
    );
  } else {
    usergroup_request_compound = usergroup_request_compound_create(
      2,
      NULL,
      NULL
    );
  }

  return usergroup_request_compound;
}


#ifdef usergroup_request_compound_MAIN

void test_usergroup_request_compound(int include_optional) {
    usergroup_request_compound_t* usergroup_request_compound_1 = instantiate_usergroup_request_compound(include_optional);

	cJSON* jsonusergroup_request_compound_1 = usergroup_request_compound_convertToJSON(usergroup_request_compound_1);
	printf("usergroup_request_compound :\n%s\n", cJSON_Print(jsonusergroup_request_compound_1));
	usergroup_request_compound_t* usergroup_request_compound_2 = usergroup_request_compound_parseFromJSON(jsonusergroup_request_compound_1);
	cJSON* jsonusergroup_request_compound_2 = usergroup_request_compound_convertToJSON(usergroup_request_compound_2);
	printf("repeating usergroup_request_compound:\n%s\n", cJSON_Print(jsonusergroup_request_compound_2));
}

int main() {
  test_usergroup_request_compound(1);
  test_usergroup_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroup_request_compound_MAIN
#endif // usergroup_request_compound_TEST
