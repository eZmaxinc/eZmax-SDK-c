#ifndef usergroup_create_object_v1_response_m_payload_TEST
#define usergroup_create_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroup_create_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroup_create_object_v1_response_m_payload.h"
usergroup_create_object_v1_response_m_payload_t* instantiate_usergroup_create_object_v1_response_m_payload(int include_optional);



usergroup_create_object_v1_response_m_payload_t* instantiate_usergroup_create_object_v1_response_m_payload(int include_optional) {
  usergroup_create_object_v1_response_m_payload_t* usergroup_create_object_v1_response_m_payload = NULL;
  if (include_optional) {
    usergroup_create_object_v1_response_m_payload = usergroup_create_object_v1_response_m_payload_create(
      list_createList()
    );
  } else {
    usergroup_create_object_v1_response_m_payload = usergroup_create_object_v1_response_m_payload_create(
      list_createList()
    );
  }

  return usergroup_create_object_v1_response_m_payload;
}


#ifdef usergroup_create_object_v1_response_m_payload_MAIN

void test_usergroup_create_object_v1_response_m_payload(int include_optional) {
    usergroup_create_object_v1_response_m_payload_t* usergroup_create_object_v1_response_m_payload_1 = instantiate_usergroup_create_object_v1_response_m_payload(include_optional);

	cJSON* jsonusergroup_create_object_v1_response_m_payload_1 = usergroup_create_object_v1_response_m_payload_convertToJSON(usergroup_create_object_v1_response_m_payload_1);
	printf("usergroup_create_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsonusergroup_create_object_v1_response_m_payload_1));
	usergroup_create_object_v1_response_m_payload_t* usergroup_create_object_v1_response_m_payload_2 = usergroup_create_object_v1_response_m_payload_parseFromJSON(jsonusergroup_create_object_v1_response_m_payload_1);
	cJSON* jsonusergroup_create_object_v1_response_m_payload_2 = usergroup_create_object_v1_response_m_payload_convertToJSON(usergroup_create_object_v1_response_m_payload_2);
	printf("repeating usergroup_create_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsonusergroup_create_object_v1_response_m_payload_2));
}

int main() {
  test_usergroup_create_object_v1_response_m_payload(1);
  test_usergroup_create_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroup_create_object_v1_response_m_payload_MAIN
#endif // usergroup_create_object_v1_response_m_payload_TEST
