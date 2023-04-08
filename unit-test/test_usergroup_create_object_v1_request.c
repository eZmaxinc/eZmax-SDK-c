#ifndef usergroup_create_object_v1_request_TEST
#define usergroup_create_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroup_create_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroup_create_object_v1_request.h"
usergroup_create_object_v1_request_t* instantiate_usergroup_create_object_v1_request(int include_optional);



usergroup_create_object_v1_request_t* instantiate_usergroup_create_object_v1_request(int include_optional) {
  usergroup_create_object_v1_request_t* usergroup_create_object_v1_request = NULL;
  if (include_optional) {
    usergroup_create_object_v1_request = usergroup_create_object_v1_request_create(
      list_createList()
    );
  } else {
    usergroup_create_object_v1_request = usergroup_create_object_v1_request_create(
      list_createList()
    );
  }

  return usergroup_create_object_v1_request;
}


#ifdef usergroup_create_object_v1_request_MAIN

void test_usergroup_create_object_v1_request(int include_optional) {
    usergroup_create_object_v1_request_t* usergroup_create_object_v1_request_1 = instantiate_usergroup_create_object_v1_request(include_optional);

	cJSON* jsonusergroup_create_object_v1_request_1 = usergroup_create_object_v1_request_convertToJSON(usergroup_create_object_v1_request_1);
	printf("usergroup_create_object_v1_request :\n%s\n", cJSON_Print(jsonusergroup_create_object_v1_request_1));
	usergroup_create_object_v1_request_t* usergroup_create_object_v1_request_2 = usergroup_create_object_v1_request_parseFromJSON(jsonusergroup_create_object_v1_request_1);
	cJSON* jsonusergroup_create_object_v1_request_2 = usergroup_create_object_v1_request_convertToJSON(usergroup_create_object_v1_request_2);
	printf("repeating usergroup_create_object_v1_request:\n%s\n", cJSON_Print(jsonusergroup_create_object_v1_request_2));
}

int main() {
  test_usergroup_create_object_v1_request(1);
  test_usergroup_create_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroup_create_object_v1_request_MAIN
#endif // usergroup_create_object_v1_request_TEST
