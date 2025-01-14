#ifndef authenticationexternal_get_list_v1_response_m_payload_TEST
#define authenticationexternal_get_list_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define authenticationexternal_get_list_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/authenticationexternal_get_list_v1_response_m_payload.h"
authenticationexternal_get_list_v1_response_m_payload_t* instantiate_authenticationexternal_get_list_v1_response_m_payload(int include_optional);



authenticationexternal_get_list_v1_response_m_payload_t* instantiate_authenticationexternal_get_list_v1_response_m_payload(int include_optional) {
  authenticationexternal_get_list_v1_response_m_payload_t* authenticationexternal_get_list_v1_response_m_payload = NULL;
  if (include_optional) {
    authenticationexternal_get_list_v1_response_m_payload = authenticationexternal_get_list_v1_response_m_payload_create(
      100,
      533,
      list_createList()
    );
  } else {
    authenticationexternal_get_list_v1_response_m_payload = authenticationexternal_get_list_v1_response_m_payload_create(
      100,
      533,
      list_createList()
    );
  }

  return authenticationexternal_get_list_v1_response_m_payload;
}


#ifdef authenticationexternal_get_list_v1_response_m_payload_MAIN

void test_authenticationexternal_get_list_v1_response_m_payload(int include_optional) {
    authenticationexternal_get_list_v1_response_m_payload_t* authenticationexternal_get_list_v1_response_m_payload_1 = instantiate_authenticationexternal_get_list_v1_response_m_payload(include_optional);

	cJSON* jsonauthenticationexternal_get_list_v1_response_m_payload_1 = authenticationexternal_get_list_v1_response_m_payload_convertToJSON(authenticationexternal_get_list_v1_response_m_payload_1);
	printf("authenticationexternal_get_list_v1_response_m_payload :\n%s\n", cJSON_Print(jsonauthenticationexternal_get_list_v1_response_m_payload_1));
	authenticationexternal_get_list_v1_response_m_payload_t* authenticationexternal_get_list_v1_response_m_payload_2 = authenticationexternal_get_list_v1_response_m_payload_parseFromJSON(jsonauthenticationexternal_get_list_v1_response_m_payload_1);
	cJSON* jsonauthenticationexternal_get_list_v1_response_m_payload_2 = authenticationexternal_get_list_v1_response_m_payload_convertToJSON(authenticationexternal_get_list_v1_response_m_payload_2);
	printf("repeating authenticationexternal_get_list_v1_response_m_payload:\n%s\n", cJSON_Print(jsonauthenticationexternal_get_list_v1_response_m_payload_2));
}

int main() {
  test_authenticationexternal_get_list_v1_response_m_payload(1);
  test_authenticationexternal_get_list_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // authenticationexternal_get_list_v1_response_m_payload_MAIN
#endif // authenticationexternal_get_list_v1_response_m_payload_TEST
