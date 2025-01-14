#ifndef user_edit_colleagues_v2_request_TEST
#define user_edit_colleagues_v2_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define user_edit_colleagues_v2_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/user_edit_colleagues_v2_request.h"
user_edit_colleagues_v2_request_t* instantiate_user_edit_colleagues_v2_request(int include_optional);



user_edit_colleagues_v2_request_t* instantiate_user_edit_colleagues_v2_request(int include_optional) {
  user_edit_colleagues_v2_request_t* user_edit_colleagues_v2_request = NULL;
  if (include_optional) {
    user_edit_colleagues_v2_request = user_edit_colleagues_v2_request_create(
      list_createList()
    );
  } else {
    user_edit_colleagues_v2_request = user_edit_colleagues_v2_request_create(
      list_createList()
    );
  }

  return user_edit_colleagues_v2_request;
}


#ifdef user_edit_colleagues_v2_request_MAIN

void test_user_edit_colleagues_v2_request(int include_optional) {
    user_edit_colleagues_v2_request_t* user_edit_colleagues_v2_request_1 = instantiate_user_edit_colleagues_v2_request(include_optional);

	cJSON* jsonuser_edit_colleagues_v2_request_1 = user_edit_colleagues_v2_request_convertToJSON(user_edit_colleagues_v2_request_1);
	printf("user_edit_colleagues_v2_request :\n%s\n", cJSON_Print(jsonuser_edit_colleagues_v2_request_1));
	user_edit_colleagues_v2_request_t* user_edit_colleagues_v2_request_2 = user_edit_colleagues_v2_request_parseFromJSON(jsonuser_edit_colleagues_v2_request_1);
	cJSON* jsonuser_edit_colleagues_v2_request_2 = user_edit_colleagues_v2_request_convertToJSON(user_edit_colleagues_v2_request_2);
	printf("repeating user_edit_colleagues_v2_request:\n%s\n", cJSON_Print(jsonuser_edit_colleagues_v2_request_2));
}

int main() {
  test_user_edit_colleagues_v2_request(1);
  test_user_edit_colleagues_v2_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // user_edit_colleagues_v2_request_MAIN
#endif // user_edit_colleagues_v2_request_TEST
