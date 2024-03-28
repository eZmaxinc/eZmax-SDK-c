#ifndef usergroupexternal_get_autocomplete_v2_response_m_payload_TEST
#define usergroupexternal_get_autocomplete_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroupexternal_get_autocomplete_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroupexternal_get_autocomplete_v2_response_m_payload.h"
usergroupexternal_get_autocomplete_v2_response_m_payload_t* instantiate_usergroupexternal_get_autocomplete_v2_response_m_payload(int include_optional);



usergroupexternal_get_autocomplete_v2_response_m_payload_t* instantiate_usergroupexternal_get_autocomplete_v2_response_m_payload(int include_optional) {
  usergroupexternal_get_autocomplete_v2_response_m_payload_t* usergroupexternal_get_autocomplete_v2_response_m_payload = NULL;
  if (include_optional) {
    usergroupexternal_get_autocomplete_v2_response_m_payload = usergroupexternal_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  } else {
    usergroupexternal_get_autocomplete_v2_response_m_payload = usergroupexternal_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  }

  return usergroupexternal_get_autocomplete_v2_response_m_payload;
}


#ifdef usergroupexternal_get_autocomplete_v2_response_m_payload_MAIN

void test_usergroupexternal_get_autocomplete_v2_response_m_payload(int include_optional) {
    usergroupexternal_get_autocomplete_v2_response_m_payload_t* usergroupexternal_get_autocomplete_v2_response_m_payload_1 = instantiate_usergroupexternal_get_autocomplete_v2_response_m_payload(include_optional);

	cJSON* jsonusergroupexternal_get_autocomplete_v2_response_m_payload_1 = usergroupexternal_get_autocomplete_v2_response_m_payload_convertToJSON(usergroupexternal_get_autocomplete_v2_response_m_payload_1);
	printf("usergroupexternal_get_autocomplete_v2_response_m_payload :\n%s\n", cJSON_Print(jsonusergroupexternal_get_autocomplete_v2_response_m_payload_1));
	usergroupexternal_get_autocomplete_v2_response_m_payload_t* usergroupexternal_get_autocomplete_v2_response_m_payload_2 = usergroupexternal_get_autocomplete_v2_response_m_payload_parseFromJSON(jsonusergroupexternal_get_autocomplete_v2_response_m_payload_1);
	cJSON* jsonusergroupexternal_get_autocomplete_v2_response_m_payload_2 = usergroupexternal_get_autocomplete_v2_response_m_payload_convertToJSON(usergroupexternal_get_autocomplete_v2_response_m_payload_2);
	printf("repeating usergroupexternal_get_autocomplete_v2_response_m_payload:\n%s\n", cJSON_Print(jsonusergroupexternal_get_autocomplete_v2_response_m_payload_2));
}

int main() {
  test_usergroupexternal_get_autocomplete_v2_response_m_payload(1);
  test_usergroupexternal_get_autocomplete_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroupexternal_get_autocomplete_v2_response_m_payload_MAIN
#endif // usergroupexternal_get_autocomplete_v2_response_m_payload_TEST
