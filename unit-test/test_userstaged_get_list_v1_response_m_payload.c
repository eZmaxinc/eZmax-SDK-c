#ifndef userstaged_get_list_v1_response_m_payload_TEST
#define userstaged_get_list_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define userstaged_get_list_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/userstaged_get_list_v1_response_m_payload.h"
userstaged_get_list_v1_response_m_payload_t* instantiate_userstaged_get_list_v1_response_m_payload(int include_optional);



userstaged_get_list_v1_response_m_payload_t* instantiate_userstaged_get_list_v1_response_m_payload(int include_optional) {
  userstaged_get_list_v1_response_m_payload_t* userstaged_get_list_v1_response_m_payload = NULL;
  if (include_optional) {
    userstaged_get_list_v1_response_m_payload = userstaged_get_list_v1_response_m_payload_create(
      list_createList(),
      100,
      533
    );
  } else {
    userstaged_get_list_v1_response_m_payload = userstaged_get_list_v1_response_m_payload_create(
      list_createList(),
      100,
      533
    );
  }

  return userstaged_get_list_v1_response_m_payload;
}


#ifdef userstaged_get_list_v1_response_m_payload_MAIN

void test_userstaged_get_list_v1_response_m_payload(int include_optional) {
    userstaged_get_list_v1_response_m_payload_t* userstaged_get_list_v1_response_m_payload_1 = instantiate_userstaged_get_list_v1_response_m_payload(include_optional);

	cJSON* jsonuserstaged_get_list_v1_response_m_payload_1 = userstaged_get_list_v1_response_m_payload_convertToJSON(userstaged_get_list_v1_response_m_payload_1);
	printf("userstaged_get_list_v1_response_m_payload :\n%s\n", cJSON_Print(jsonuserstaged_get_list_v1_response_m_payload_1));
	userstaged_get_list_v1_response_m_payload_t* userstaged_get_list_v1_response_m_payload_2 = userstaged_get_list_v1_response_m_payload_parseFromJSON(jsonuserstaged_get_list_v1_response_m_payload_1);
	cJSON* jsonuserstaged_get_list_v1_response_m_payload_2 = userstaged_get_list_v1_response_m_payload_convertToJSON(userstaged_get_list_v1_response_m_payload_2);
	printf("repeating userstaged_get_list_v1_response_m_payload:\n%s\n", cJSON_Print(jsonuserstaged_get_list_v1_response_m_payload_2));
}

int main() {
  test_userstaged_get_list_v1_response_m_payload(1);
  test_userstaged_get_list_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // userstaged_get_list_v1_response_m_payload_MAIN
#endif // userstaged_get_list_v1_response_m_payload_TEST
