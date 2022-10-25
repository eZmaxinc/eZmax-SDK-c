#ifndef usergroup_get_autocomplete_v2_response_all_of_TEST
#define usergroup_get_autocomplete_v2_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroup_get_autocomplete_v2_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroup_get_autocomplete_v2_response_all_of.h"
usergroup_get_autocomplete_v2_response_all_of_t* instantiate_usergroup_get_autocomplete_v2_response_all_of(int include_optional);

#include "test_usergroup_get_autocomplete_v2_response_m_payload.c"


usergroup_get_autocomplete_v2_response_all_of_t* instantiate_usergroup_get_autocomplete_v2_response_all_of(int include_optional) {
  usergroup_get_autocomplete_v2_response_all_of_t* usergroup_get_autocomplete_v2_response_all_of = NULL;
  if (include_optional) {
    usergroup_get_autocomplete_v2_response_all_of = usergroup_get_autocomplete_v2_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_usergroup_get_autocomplete_v2_response_m_payload(0)
    );
  } else {
    usergroup_get_autocomplete_v2_response_all_of = usergroup_get_autocomplete_v2_response_all_of_create(
      NULL
    );
  }

  return usergroup_get_autocomplete_v2_response_all_of;
}


#ifdef usergroup_get_autocomplete_v2_response_all_of_MAIN

void test_usergroup_get_autocomplete_v2_response_all_of(int include_optional) {
    usergroup_get_autocomplete_v2_response_all_of_t* usergroup_get_autocomplete_v2_response_all_of_1 = instantiate_usergroup_get_autocomplete_v2_response_all_of(include_optional);

	cJSON* jsonusergroup_get_autocomplete_v2_response_all_of_1 = usergroup_get_autocomplete_v2_response_all_of_convertToJSON(usergroup_get_autocomplete_v2_response_all_of_1);
	printf("usergroup_get_autocomplete_v2_response_all_of :\n%s\n", cJSON_Print(jsonusergroup_get_autocomplete_v2_response_all_of_1));
	usergroup_get_autocomplete_v2_response_all_of_t* usergroup_get_autocomplete_v2_response_all_of_2 = usergroup_get_autocomplete_v2_response_all_of_parseFromJSON(jsonusergroup_get_autocomplete_v2_response_all_of_1);
	cJSON* jsonusergroup_get_autocomplete_v2_response_all_of_2 = usergroup_get_autocomplete_v2_response_all_of_convertToJSON(usergroup_get_autocomplete_v2_response_all_of_2);
	printf("repeating usergroup_get_autocomplete_v2_response_all_of:\n%s\n", cJSON_Print(jsonusergroup_get_autocomplete_v2_response_all_of_2));
}

int main() {
  test_usergroup_get_autocomplete_v2_response_all_of(1);
  test_usergroup_get_autocomplete_v2_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroup_get_autocomplete_v2_response_all_of_MAIN
#endif // usergroup_get_autocomplete_v2_response_all_of_TEST
