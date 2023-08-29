#ifndef sessionhistory_get_list_v1_response_m_payload_TEST
#define sessionhistory_get_list_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sessionhistory_get_list_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sessionhistory_get_list_v1_response_m_payload.h"
sessionhistory_get_list_v1_response_m_payload_t* instantiate_sessionhistory_get_list_v1_response_m_payload(int include_optional);



sessionhistory_get_list_v1_response_m_payload_t* instantiate_sessionhistory_get_list_v1_response_m_payload(int include_optional) {
  sessionhistory_get_list_v1_response_m_payload_t* sessionhistory_get_list_v1_response_m_payload = NULL;
  if (include_optional) {
    sessionhistory_get_list_v1_response_m_payload = sessionhistory_get_list_v1_response_m_payload_create(
      100,
      533,
      list_createList()
    );
  } else {
    sessionhistory_get_list_v1_response_m_payload = sessionhistory_get_list_v1_response_m_payload_create(
      100,
      533,
      list_createList()
    );
  }

  return sessionhistory_get_list_v1_response_m_payload;
}


#ifdef sessionhistory_get_list_v1_response_m_payload_MAIN

void test_sessionhistory_get_list_v1_response_m_payload(int include_optional) {
    sessionhistory_get_list_v1_response_m_payload_t* sessionhistory_get_list_v1_response_m_payload_1 = instantiate_sessionhistory_get_list_v1_response_m_payload(include_optional);

	cJSON* jsonsessionhistory_get_list_v1_response_m_payload_1 = sessionhistory_get_list_v1_response_m_payload_convertToJSON(sessionhistory_get_list_v1_response_m_payload_1);
	printf("sessionhistory_get_list_v1_response_m_payload :\n%s\n", cJSON_Print(jsonsessionhistory_get_list_v1_response_m_payload_1));
	sessionhistory_get_list_v1_response_m_payload_t* sessionhistory_get_list_v1_response_m_payload_2 = sessionhistory_get_list_v1_response_m_payload_parseFromJSON(jsonsessionhistory_get_list_v1_response_m_payload_1);
	cJSON* jsonsessionhistory_get_list_v1_response_m_payload_2 = sessionhistory_get_list_v1_response_m_payload_convertToJSON(sessionhistory_get_list_v1_response_m_payload_2);
	printf("repeating sessionhistory_get_list_v1_response_m_payload:\n%s\n", cJSON_Print(jsonsessionhistory_get_list_v1_response_m_payload_2));
}

int main() {
  test_sessionhistory_get_list_v1_response_m_payload(1);
  test_sessionhistory_get_list_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // sessionhistory_get_list_v1_response_m_payload_MAIN
#endif // sessionhistory_get_list_v1_response_m_payload_TEST
