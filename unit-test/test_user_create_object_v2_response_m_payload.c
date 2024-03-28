#ifndef user_create_object_v2_response_m_payload_TEST
#define user_create_object_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define user_create_object_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/user_create_object_v2_response_m_payload.h"
user_create_object_v2_response_m_payload_t* instantiate_user_create_object_v2_response_m_payload(int include_optional);



user_create_object_v2_response_m_payload_t* instantiate_user_create_object_v2_response_m_payload(int include_optional) {
  user_create_object_v2_response_m_payload_t* user_create_object_v2_response_m_payload = NULL;
  if (include_optional) {
    user_create_object_v2_response_m_payload = user_create_object_v2_response_m_payload_create(
      list_createList()
    );
  } else {
    user_create_object_v2_response_m_payload = user_create_object_v2_response_m_payload_create(
      list_createList()
    );
  }

  return user_create_object_v2_response_m_payload;
}


#ifdef user_create_object_v2_response_m_payload_MAIN

void test_user_create_object_v2_response_m_payload(int include_optional) {
    user_create_object_v2_response_m_payload_t* user_create_object_v2_response_m_payload_1 = instantiate_user_create_object_v2_response_m_payload(include_optional);

	cJSON* jsonuser_create_object_v2_response_m_payload_1 = user_create_object_v2_response_m_payload_convertToJSON(user_create_object_v2_response_m_payload_1);
	printf("user_create_object_v2_response_m_payload :\n%s\n", cJSON_Print(jsonuser_create_object_v2_response_m_payload_1));
	user_create_object_v2_response_m_payload_t* user_create_object_v2_response_m_payload_2 = user_create_object_v2_response_m_payload_parseFromJSON(jsonuser_create_object_v2_response_m_payload_1);
	cJSON* jsonuser_create_object_v2_response_m_payload_2 = user_create_object_v2_response_m_payload_convertToJSON(user_create_object_v2_response_m_payload_2);
	printf("repeating user_create_object_v2_response_m_payload:\n%s\n", cJSON_Print(jsonuser_create_object_v2_response_m_payload_2));
}

int main() {
  test_user_create_object_v2_response_m_payload(1);
  test_user_create_object_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // user_create_object_v2_response_m_payload_MAIN
#endif // user_create_object_v2_response_m_payload_TEST
