#ifndef sessionhistory_get_list_v1_response_m_payload_all_of_TEST
#define sessionhistory_get_list_v1_response_m_payload_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sessionhistory_get_list_v1_response_m_payload_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sessionhistory_get_list_v1_response_m_payload_all_of.h"
sessionhistory_get_list_v1_response_m_payload_all_of_t* instantiate_sessionhistory_get_list_v1_response_m_payload_all_of(int include_optional);



sessionhistory_get_list_v1_response_m_payload_all_of_t* instantiate_sessionhistory_get_list_v1_response_m_payload_all_of(int include_optional) {
  sessionhistory_get_list_v1_response_m_payload_all_of_t* sessionhistory_get_list_v1_response_m_payload_all_of = NULL;
  if (include_optional) {
    sessionhistory_get_list_v1_response_m_payload_all_of = sessionhistory_get_list_v1_response_m_payload_all_of_create(
      list_createList()
    );
  } else {
    sessionhistory_get_list_v1_response_m_payload_all_of = sessionhistory_get_list_v1_response_m_payload_all_of_create(
      list_createList()
    );
  }

  return sessionhistory_get_list_v1_response_m_payload_all_of;
}


#ifdef sessionhistory_get_list_v1_response_m_payload_all_of_MAIN

void test_sessionhistory_get_list_v1_response_m_payload_all_of(int include_optional) {
    sessionhistory_get_list_v1_response_m_payload_all_of_t* sessionhistory_get_list_v1_response_m_payload_all_of_1 = instantiate_sessionhistory_get_list_v1_response_m_payload_all_of(include_optional);

	cJSON* jsonsessionhistory_get_list_v1_response_m_payload_all_of_1 = sessionhistory_get_list_v1_response_m_payload_all_of_convertToJSON(sessionhistory_get_list_v1_response_m_payload_all_of_1);
	printf("sessionhistory_get_list_v1_response_m_payload_all_of :\n%s\n", cJSON_Print(jsonsessionhistory_get_list_v1_response_m_payload_all_of_1));
	sessionhistory_get_list_v1_response_m_payload_all_of_t* sessionhistory_get_list_v1_response_m_payload_all_of_2 = sessionhistory_get_list_v1_response_m_payload_all_of_parseFromJSON(jsonsessionhistory_get_list_v1_response_m_payload_all_of_1);
	cJSON* jsonsessionhistory_get_list_v1_response_m_payload_all_of_2 = sessionhistory_get_list_v1_response_m_payload_all_of_convertToJSON(sessionhistory_get_list_v1_response_m_payload_all_of_2);
	printf("repeating sessionhistory_get_list_v1_response_m_payload_all_of:\n%s\n", cJSON_Print(jsonsessionhistory_get_list_v1_response_m_payload_all_of_2));
}

int main() {
  test_sessionhistory_get_list_v1_response_m_payload_all_of(1);
  test_sessionhistory_get_list_v1_response_m_payload_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // sessionhistory_get_list_v1_response_m_payload_all_of_MAIN
#endif // sessionhistory_get_list_v1_response_m_payload_all_of_TEST
