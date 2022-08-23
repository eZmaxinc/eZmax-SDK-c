#ifndef branding_get_list_v1_response_m_payload_TEST
#define branding_get_list_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define branding_get_list_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/branding_get_list_v1_response_m_payload.h"
branding_get_list_v1_response_m_payload_t* instantiate_branding_get_list_v1_response_m_payload(int include_optional);



branding_get_list_v1_response_m_payload_t* instantiate_branding_get_list_v1_response_m_payload(int include_optional) {
  branding_get_list_v1_response_m_payload_t* branding_get_list_v1_response_m_payload = NULL;
  if (include_optional) {
    branding_get_list_v1_response_m_payload = branding_get_list_v1_response_m_payload_create(
      list_createList(),
      100,
      533
    );
  } else {
    branding_get_list_v1_response_m_payload = branding_get_list_v1_response_m_payload_create(
      list_createList(),
      100,
      533
    );
  }

  return branding_get_list_v1_response_m_payload;
}


#ifdef branding_get_list_v1_response_m_payload_MAIN

void test_branding_get_list_v1_response_m_payload(int include_optional) {
    branding_get_list_v1_response_m_payload_t* branding_get_list_v1_response_m_payload_1 = instantiate_branding_get_list_v1_response_m_payload(include_optional);

	cJSON* jsonbranding_get_list_v1_response_m_payload_1 = branding_get_list_v1_response_m_payload_convertToJSON(branding_get_list_v1_response_m_payload_1);
	printf("branding_get_list_v1_response_m_payload :\n%s\n", cJSON_Print(jsonbranding_get_list_v1_response_m_payload_1));
	branding_get_list_v1_response_m_payload_t* branding_get_list_v1_response_m_payload_2 = branding_get_list_v1_response_m_payload_parseFromJSON(jsonbranding_get_list_v1_response_m_payload_1);
	cJSON* jsonbranding_get_list_v1_response_m_payload_2 = branding_get_list_v1_response_m_payload_convertToJSON(branding_get_list_v1_response_m_payload_2);
	printf("repeating branding_get_list_v1_response_m_payload:\n%s\n", cJSON_Print(jsonbranding_get_list_v1_response_m_payload_2));
}

int main() {
  test_branding_get_list_v1_response_m_payload(1);
  test_branding_get_list_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // branding_get_list_v1_response_m_payload_MAIN
#endif // branding_get_list_v1_response_m_payload_TEST
