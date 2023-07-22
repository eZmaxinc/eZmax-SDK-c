#ifndef user_get_list_v1_response_all_of_TEST
#define user_get_list_v1_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define user_get_list_v1_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/user_get_list_v1_response_all_of.h"
user_get_list_v1_response_all_of_t* instantiate_user_get_list_v1_response_all_of(int include_optional);

#include "test_user_get_list_v1_response_m_payload.c"


user_get_list_v1_response_all_of_t* instantiate_user_get_list_v1_response_all_of(int include_optional) {
  user_get_list_v1_response_all_of_t* user_get_list_v1_response_all_of = NULL;
  if (include_optional) {
    user_get_list_v1_response_all_of = user_get_list_v1_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_user_get_list_v1_response_m_payload(0)
    );
  } else {
    user_get_list_v1_response_all_of = user_get_list_v1_response_all_of_create(
      NULL
    );
  }

  return user_get_list_v1_response_all_of;
}


#ifdef user_get_list_v1_response_all_of_MAIN

void test_user_get_list_v1_response_all_of(int include_optional) {
    user_get_list_v1_response_all_of_t* user_get_list_v1_response_all_of_1 = instantiate_user_get_list_v1_response_all_of(include_optional);

	cJSON* jsonuser_get_list_v1_response_all_of_1 = user_get_list_v1_response_all_of_convertToJSON(user_get_list_v1_response_all_of_1);
	printf("user_get_list_v1_response_all_of :\n%s\n", cJSON_Print(jsonuser_get_list_v1_response_all_of_1));
	user_get_list_v1_response_all_of_t* user_get_list_v1_response_all_of_2 = user_get_list_v1_response_all_of_parseFromJSON(jsonuser_get_list_v1_response_all_of_1);
	cJSON* jsonuser_get_list_v1_response_all_of_2 = user_get_list_v1_response_all_of_convertToJSON(user_get_list_v1_response_all_of_2);
	printf("repeating user_get_list_v1_response_all_of:\n%s\n", cJSON_Print(jsonuser_get_list_v1_response_all_of_2));
}

int main() {
  test_user_get_list_v1_response_all_of(1);
  test_user_get_list_v1_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // user_get_list_v1_response_all_of_MAIN
#endif // user_get_list_v1_response_all_of_TEST
