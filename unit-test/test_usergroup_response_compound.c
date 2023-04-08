#ifndef usergroup_response_compound_TEST
#define usergroup_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroup_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroup_response_compound.h"
usergroup_response_compound_t* instantiate_usergroup_response_compound(int include_optional);

#include "test_multilingual_usergroup_name.c"


usergroup_response_compound_t* instantiate_usergroup_response_compound(int include_optional) {
  usergroup_response_compound_t* usergroup_response_compound = NULL;
  if (include_optional) {
    usergroup_response_compound = usergroup_response_compound_create(
      2,
       // false, not to have infinite recursion
      instantiate_multilingual_usergroup_name(0)
    );
  } else {
    usergroup_response_compound = usergroup_response_compound_create(
      2,
      NULL
    );
  }

  return usergroup_response_compound;
}


#ifdef usergroup_response_compound_MAIN

void test_usergroup_response_compound(int include_optional) {
    usergroup_response_compound_t* usergroup_response_compound_1 = instantiate_usergroup_response_compound(include_optional);

	cJSON* jsonusergroup_response_compound_1 = usergroup_response_compound_convertToJSON(usergroup_response_compound_1);
	printf("usergroup_response_compound :\n%s\n", cJSON_Print(jsonusergroup_response_compound_1));
	usergroup_response_compound_t* usergroup_response_compound_2 = usergroup_response_compound_parseFromJSON(jsonusergroup_response_compound_1);
	cJSON* jsonusergroup_response_compound_2 = usergroup_response_compound_convertToJSON(usergroup_response_compound_2);
	printf("repeating usergroup_response_compound:\n%s\n", cJSON_Print(jsonusergroup_response_compound_2));
}

int main() {
  test_usergroup_response_compound(1);
  test_usergroup_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroup_response_compound_MAIN
#endif // usergroup_response_compound_TEST
