#ifndef clonehistory_get_list_v1_response_m_payload_TEST
#define clonehistory_get_list_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define clonehistory_get_list_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/clonehistory_get_list_v1_response_m_payload.h"
clonehistory_get_list_v1_response_m_payload_t* instantiate_clonehistory_get_list_v1_response_m_payload(int include_optional);



clonehistory_get_list_v1_response_m_payload_t* instantiate_clonehistory_get_list_v1_response_m_payload(int include_optional) {
  clonehistory_get_list_v1_response_m_payload_t* clonehistory_get_list_v1_response_m_payload = NULL;
  if (include_optional) {
    clonehistory_get_list_v1_response_m_payload = clonehistory_get_list_v1_response_m_payload_create(
      list_createList(),
      100,
      533
    );
  } else {
    clonehistory_get_list_v1_response_m_payload = clonehistory_get_list_v1_response_m_payload_create(
      list_createList(),
      100,
      533
    );
  }

  return clonehistory_get_list_v1_response_m_payload;
}


#ifdef clonehistory_get_list_v1_response_m_payload_MAIN

void test_clonehistory_get_list_v1_response_m_payload(int include_optional) {
    clonehistory_get_list_v1_response_m_payload_t* clonehistory_get_list_v1_response_m_payload_1 = instantiate_clonehistory_get_list_v1_response_m_payload(include_optional);

	cJSON* jsonclonehistory_get_list_v1_response_m_payload_1 = clonehistory_get_list_v1_response_m_payload_convertToJSON(clonehistory_get_list_v1_response_m_payload_1);
	printf("clonehistory_get_list_v1_response_m_payload :\n%s\n", cJSON_Print(jsonclonehistory_get_list_v1_response_m_payload_1));
	clonehistory_get_list_v1_response_m_payload_t* clonehistory_get_list_v1_response_m_payload_2 = clonehistory_get_list_v1_response_m_payload_parseFromJSON(jsonclonehistory_get_list_v1_response_m_payload_1);
	cJSON* jsonclonehistory_get_list_v1_response_m_payload_2 = clonehistory_get_list_v1_response_m_payload_convertToJSON(clonehistory_get_list_v1_response_m_payload_2);
	printf("repeating clonehistory_get_list_v1_response_m_payload:\n%s\n", cJSON_Print(jsonclonehistory_get_list_v1_response_m_payload_2));
}

int main() {
  test_clonehistory_get_list_v1_response_m_payload(1);
  test_clonehistory_get_list_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // clonehistory_get_list_v1_response_m_payload_MAIN
#endif // clonehistory_get_list_v1_response_m_payload_TEST
