#ifndef usergroup_get_object_v2_response_m_payload_TEST
#define usergroup_get_object_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroup_get_object_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroup_get_object_v2_response_m_payload.h"
usergroup_get_object_v2_response_m_payload_t* instantiate_usergroup_get_object_v2_response_m_payload(int include_optional);

#include "test_usergroup_response_compound.c"


usergroup_get_object_v2_response_m_payload_t* instantiate_usergroup_get_object_v2_response_m_payload(int include_optional) {
  usergroup_get_object_v2_response_m_payload_t* usergroup_get_object_v2_response_m_payload = NULL;
  if (include_optional) {
    usergroup_get_object_v2_response_m_payload = usergroup_get_object_v2_response_m_payload_create(
       // false, not to have infinite recursion
      instantiate_usergroup_response_compound(0)
    );
  } else {
    usergroup_get_object_v2_response_m_payload = usergroup_get_object_v2_response_m_payload_create(
      NULL
    );
  }

  return usergroup_get_object_v2_response_m_payload;
}


#ifdef usergroup_get_object_v2_response_m_payload_MAIN

void test_usergroup_get_object_v2_response_m_payload(int include_optional) {
    usergroup_get_object_v2_response_m_payload_t* usergroup_get_object_v2_response_m_payload_1 = instantiate_usergroup_get_object_v2_response_m_payload(include_optional);

	cJSON* jsonusergroup_get_object_v2_response_m_payload_1 = usergroup_get_object_v2_response_m_payload_convertToJSON(usergroup_get_object_v2_response_m_payload_1);
	printf("usergroup_get_object_v2_response_m_payload :\n%s\n", cJSON_Print(jsonusergroup_get_object_v2_response_m_payload_1));
	usergroup_get_object_v2_response_m_payload_t* usergroup_get_object_v2_response_m_payload_2 = usergroup_get_object_v2_response_m_payload_parseFromJSON(jsonusergroup_get_object_v2_response_m_payload_1);
	cJSON* jsonusergroup_get_object_v2_response_m_payload_2 = usergroup_get_object_v2_response_m_payload_convertToJSON(usergroup_get_object_v2_response_m_payload_2);
	printf("repeating usergroup_get_object_v2_response_m_payload:\n%s\n", cJSON_Print(jsonusergroup_get_object_v2_response_m_payload_2));
}

int main() {
  test_usergroup_get_object_v2_response_m_payload(1);
  test_usergroup_get_object_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroup_get_object_v2_response_m_payload_MAIN
#endif // usergroup_get_object_v2_response_m_payload_TEST
