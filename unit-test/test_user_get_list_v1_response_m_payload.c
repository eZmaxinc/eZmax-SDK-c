#ifndef user_get_list_v1_response_m_payload_TEST
#define user_get_list_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define user_get_list_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/user_get_list_v1_response_m_payload.h"
user_get_list_v1_response_m_payload_t* instantiate_user_get_list_v1_response_m_payload(int include_optional);



user_get_list_v1_response_m_payload_t* instantiate_user_get_list_v1_response_m_payload(int include_optional) {
  user_get_list_v1_response_m_payload_t* user_get_list_v1_response_m_payload = NULL;
  if (include_optional) {
    user_get_list_v1_response_m_payload = user_get_list_v1_response_m_payload_create(
      100,
      533,
      list_createList()
    );
  } else {
    user_get_list_v1_response_m_payload = user_get_list_v1_response_m_payload_create(
      100,
      533,
      list_createList()
    );
  }

  return user_get_list_v1_response_m_payload;
}


#ifdef user_get_list_v1_response_m_payload_MAIN

void test_user_get_list_v1_response_m_payload(int include_optional) {
    user_get_list_v1_response_m_payload_t* user_get_list_v1_response_m_payload_1 = instantiate_user_get_list_v1_response_m_payload(include_optional);

	cJSON* jsonuser_get_list_v1_response_m_payload_1 = user_get_list_v1_response_m_payload_convertToJSON(user_get_list_v1_response_m_payload_1);
	printf("user_get_list_v1_response_m_payload :\n%s\n", cJSON_Print(jsonuser_get_list_v1_response_m_payload_1));
	user_get_list_v1_response_m_payload_t* user_get_list_v1_response_m_payload_2 = user_get_list_v1_response_m_payload_parseFromJSON(jsonuser_get_list_v1_response_m_payload_1);
	cJSON* jsonuser_get_list_v1_response_m_payload_2 = user_get_list_v1_response_m_payload_convertToJSON(user_get_list_v1_response_m_payload_2);
	printf("repeating user_get_list_v1_response_m_payload:\n%s\n", cJSON_Print(jsonuser_get_list_v1_response_m_payload_2));
}

int main() {
  test_user_get_list_v1_response_m_payload(1);
  test_user_get_list_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // user_get_list_v1_response_m_payload_MAIN
#endif // user_get_list_v1_response_m_payload_TEST
