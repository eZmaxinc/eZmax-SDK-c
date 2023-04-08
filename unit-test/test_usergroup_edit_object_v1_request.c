#ifndef usergroup_edit_object_v1_request_TEST
#define usergroup_edit_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroup_edit_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroup_edit_object_v1_request.h"
usergroup_edit_object_v1_request_t* instantiate_usergroup_edit_object_v1_request(int include_optional);

#include "test_usergroup_request_compound.c"


usergroup_edit_object_v1_request_t* instantiate_usergroup_edit_object_v1_request(int include_optional) {
  usergroup_edit_object_v1_request_t* usergroup_edit_object_v1_request = NULL;
  if (include_optional) {
    usergroup_edit_object_v1_request = usergroup_edit_object_v1_request_create(
       // false, not to have infinite recursion
      instantiate_usergroup_request_compound(0)
    );
  } else {
    usergroup_edit_object_v1_request = usergroup_edit_object_v1_request_create(
      NULL
    );
  }

  return usergroup_edit_object_v1_request;
}


#ifdef usergroup_edit_object_v1_request_MAIN

void test_usergroup_edit_object_v1_request(int include_optional) {
    usergroup_edit_object_v1_request_t* usergroup_edit_object_v1_request_1 = instantiate_usergroup_edit_object_v1_request(include_optional);

	cJSON* jsonusergroup_edit_object_v1_request_1 = usergroup_edit_object_v1_request_convertToJSON(usergroup_edit_object_v1_request_1);
	printf("usergroup_edit_object_v1_request :\n%s\n", cJSON_Print(jsonusergroup_edit_object_v1_request_1));
	usergroup_edit_object_v1_request_t* usergroup_edit_object_v1_request_2 = usergroup_edit_object_v1_request_parseFromJSON(jsonusergroup_edit_object_v1_request_1);
	cJSON* jsonusergroup_edit_object_v1_request_2 = usergroup_edit_object_v1_request_convertToJSON(usergroup_edit_object_v1_request_2);
	printf("repeating usergroup_edit_object_v1_request:\n%s\n", cJSON_Print(jsonusergroup_edit_object_v1_request_2));
}

int main() {
  test_usergroup_edit_object_v1_request(1);
  test_usergroup_edit_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroup_edit_object_v1_request_MAIN
#endif // usergroup_edit_object_v1_request_TEST
