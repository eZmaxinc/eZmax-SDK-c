#ifndef userstaged_create_user_v1_response_m_payload_TEST
#define userstaged_create_user_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define userstaged_create_user_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/userstaged_create_user_v1_response_m_payload.h"
userstaged_create_user_v1_response_m_payload_t* instantiate_userstaged_create_user_v1_response_m_payload(int include_optional);



userstaged_create_user_v1_response_m_payload_t* instantiate_userstaged_create_user_v1_response_m_payload(int include_optional) {
  userstaged_create_user_v1_response_m_payload_t* userstaged_create_user_v1_response_m_payload = NULL;
  if (include_optional) {
    userstaged_create_user_v1_response_m_payload = userstaged_create_user_v1_response_m_payload_create(
      70
    );
  } else {
    userstaged_create_user_v1_response_m_payload = userstaged_create_user_v1_response_m_payload_create(
      70
    );
  }

  return userstaged_create_user_v1_response_m_payload;
}


#ifdef userstaged_create_user_v1_response_m_payload_MAIN

void test_userstaged_create_user_v1_response_m_payload(int include_optional) {
    userstaged_create_user_v1_response_m_payload_t* userstaged_create_user_v1_response_m_payload_1 = instantiate_userstaged_create_user_v1_response_m_payload(include_optional);

	cJSON* jsonuserstaged_create_user_v1_response_m_payload_1 = userstaged_create_user_v1_response_m_payload_convertToJSON(userstaged_create_user_v1_response_m_payload_1);
	printf("userstaged_create_user_v1_response_m_payload :\n%s\n", cJSON_Print(jsonuserstaged_create_user_v1_response_m_payload_1));
	userstaged_create_user_v1_response_m_payload_t* userstaged_create_user_v1_response_m_payload_2 = userstaged_create_user_v1_response_m_payload_parseFromJSON(jsonuserstaged_create_user_v1_response_m_payload_1);
	cJSON* jsonuserstaged_create_user_v1_response_m_payload_2 = userstaged_create_user_v1_response_m_payload_convertToJSON(userstaged_create_user_v1_response_m_payload_2);
	printf("repeating userstaged_create_user_v1_response_m_payload:\n%s\n", cJSON_Print(jsonuserstaged_create_user_v1_response_m_payload_2));
}

int main() {
  test_userstaged_create_user_v1_response_m_payload(1);
  test_userstaged_create_user_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // userstaged_create_user_v1_response_m_payload_MAIN
#endif // userstaged_create_user_v1_response_m_payload_TEST
