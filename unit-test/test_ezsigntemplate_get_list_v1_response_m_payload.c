#ifndef ezsigntemplate_get_list_v1_response_m_payload_TEST
#define ezsigntemplate_get_list_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplate_get_list_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplate_get_list_v1_response_m_payload.h"
ezsigntemplate_get_list_v1_response_m_payload_t* instantiate_ezsigntemplate_get_list_v1_response_m_payload(int include_optional);



ezsigntemplate_get_list_v1_response_m_payload_t* instantiate_ezsigntemplate_get_list_v1_response_m_payload(int include_optional) {
  ezsigntemplate_get_list_v1_response_m_payload_t* ezsigntemplate_get_list_v1_response_m_payload = NULL;
  if (include_optional) {
    ezsigntemplate_get_list_v1_response_m_payload = ezsigntemplate_get_list_v1_response_m_payload_create(
      100,
      533,
      list_createList()
    );
  } else {
    ezsigntemplate_get_list_v1_response_m_payload = ezsigntemplate_get_list_v1_response_m_payload_create(
      100,
      533,
      list_createList()
    );
  }

  return ezsigntemplate_get_list_v1_response_m_payload;
}


#ifdef ezsigntemplate_get_list_v1_response_m_payload_MAIN

void test_ezsigntemplate_get_list_v1_response_m_payload(int include_optional) {
    ezsigntemplate_get_list_v1_response_m_payload_t* ezsigntemplate_get_list_v1_response_m_payload_1 = instantiate_ezsigntemplate_get_list_v1_response_m_payload(include_optional);

	cJSON* jsonezsigntemplate_get_list_v1_response_m_payload_1 = ezsigntemplate_get_list_v1_response_m_payload_convertToJSON(ezsigntemplate_get_list_v1_response_m_payload_1);
	printf("ezsigntemplate_get_list_v1_response_m_payload :\n%s\n", cJSON_Print(jsonezsigntemplate_get_list_v1_response_m_payload_1));
	ezsigntemplate_get_list_v1_response_m_payload_t* ezsigntemplate_get_list_v1_response_m_payload_2 = ezsigntemplate_get_list_v1_response_m_payload_parseFromJSON(jsonezsigntemplate_get_list_v1_response_m_payload_1);
	cJSON* jsonezsigntemplate_get_list_v1_response_m_payload_2 = ezsigntemplate_get_list_v1_response_m_payload_convertToJSON(ezsigntemplate_get_list_v1_response_m_payload_2);
	printf("repeating ezsigntemplate_get_list_v1_response_m_payload:\n%s\n", cJSON_Print(jsonezsigntemplate_get_list_v1_response_m_payload_2));
}

int main() {
  test_ezsigntemplate_get_list_v1_response_m_payload(1);
  test_ezsigntemplate_get_list_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplate_get_list_v1_response_m_payload_MAIN
#endif // ezsigntemplate_get_list_v1_response_m_payload_TEST
