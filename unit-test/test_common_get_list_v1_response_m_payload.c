#ifndef common_get_list_v1_response_m_payload_TEST
#define common_get_list_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define common_get_list_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/common_get_list_v1_response_m_payload.h"
common_get_list_v1_response_m_payload_t* instantiate_common_get_list_v1_response_m_payload(int include_optional);



common_get_list_v1_response_m_payload_t* instantiate_common_get_list_v1_response_m_payload(int include_optional) {
  common_get_list_v1_response_m_payload_t* common_get_list_v1_response_m_payload = NULL;
  if (include_optional) {
    common_get_list_v1_response_m_payload = common_get_list_v1_response_m_payload_create(
      100,
      533
    );
  } else {
    common_get_list_v1_response_m_payload = common_get_list_v1_response_m_payload_create(
      100,
      533
    );
  }

  return common_get_list_v1_response_m_payload;
}


#ifdef common_get_list_v1_response_m_payload_MAIN

void test_common_get_list_v1_response_m_payload(int include_optional) {
    common_get_list_v1_response_m_payload_t* common_get_list_v1_response_m_payload_1 = instantiate_common_get_list_v1_response_m_payload(include_optional);

	cJSON* jsoncommon_get_list_v1_response_m_payload_1 = common_get_list_v1_response_m_payload_convertToJSON(common_get_list_v1_response_m_payload_1);
	printf("common_get_list_v1_response_m_payload :\n%s\n", cJSON_Print(jsoncommon_get_list_v1_response_m_payload_1));
	common_get_list_v1_response_m_payload_t* common_get_list_v1_response_m_payload_2 = common_get_list_v1_response_m_payload_parseFromJSON(jsoncommon_get_list_v1_response_m_payload_1);
	cJSON* jsoncommon_get_list_v1_response_m_payload_2 = common_get_list_v1_response_m_payload_convertToJSON(common_get_list_v1_response_m_payload_2);
	printf("repeating common_get_list_v1_response_m_payload:\n%s\n", cJSON_Print(jsoncommon_get_list_v1_response_m_payload_2));
}

int main() {
  test_common_get_list_v1_response_m_payload(1);
  test_common_get_list_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // common_get_list_v1_response_m_payload_MAIN
#endif // common_get_list_v1_response_m_payload_TEST
