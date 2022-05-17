#ifndef ezsign_suggest_templates_v1_response_m_payload_TEST
#define ezsign_suggest_templates_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsign_suggest_templates_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsign_suggest_templates_v1_response_m_payload.h"
ezsign_suggest_templates_v1_response_m_payload_t* instantiate_ezsign_suggest_templates_v1_response_m_payload(int include_optional);



ezsign_suggest_templates_v1_response_m_payload_t* instantiate_ezsign_suggest_templates_v1_response_m_payload(int include_optional) {
  ezsign_suggest_templates_v1_response_m_payload_t* ezsign_suggest_templates_v1_response_m_payload = NULL;
  if (include_optional) {
    ezsign_suggest_templates_v1_response_m_payload = ezsign_suggest_templates_v1_response_m_payload_create(
      list_createList(),
      list_createList()
    );
  } else {
    ezsign_suggest_templates_v1_response_m_payload = ezsign_suggest_templates_v1_response_m_payload_create(
      list_createList(),
      list_createList()
    );
  }

  return ezsign_suggest_templates_v1_response_m_payload;
}


#ifdef ezsign_suggest_templates_v1_response_m_payload_MAIN

void test_ezsign_suggest_templates_v1_response_m_payload(int include_optional) {
    ezsign_suggest_templates_v1_response_m_payload_t* ezsign_suggest_templates_v1_response_m_payload_1 = instantiate_ezsign_suggest_templates_v1_response_m_payload(include_optional);

	cJSON* jsonezsign_suggest_templates_v1_response_m_payload_1 = ezsign_suggest_templates_v1_response_m_payload_convertToJSON(ezsign_suggest_templates_v1_response_m_payload_1);
	printf("ezsign_suggest_templates_v1_response_m_payload :\n%s\n", cJSON_Print(jsonezsign_suggest_templates_v1_response_m_payload_1));
	ezsign_suggest_templates_v1_response_m_payload_t* ezsign_suggest_templates_v1_response_m_payload_2 = ezsign_suggest_templates_v1_response_m_payload_parseFromJSON(jsonezsign_suggest_templates_v1_response_m_payload_1);
	cJSON* jsonezsign_suggest_templates_v1_response_m_payload_2 = ezsign_suggest_templates_v1_response_m_payload_convertToJSON(ezsign_suggest_templates_v1_response_m_payload_2);
	printf("repeating ezsign_suggest_templates_v1_response_m_payload:\n%s\n", cJSON_Print(jsonezsign_suggest_templates_v1_response_m_payload_2));
}

int main() {
  test_ezsign_suggest_templates_v1_response_m_payload(1);
  test_ezsign_suggest_templates_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsign_suggest_templates_v1_response_m_payload_MAIN
#endif // ezsign_suggest_templates_v1_response_m_payload_TEST
