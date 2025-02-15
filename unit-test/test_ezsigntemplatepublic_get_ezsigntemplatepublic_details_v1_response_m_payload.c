#ifndef ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_TEST
#define ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload.h"
ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_t* instantiate_ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload(int include_optional);

#include "test_custom_branding_response.c"


ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_t* instantiate_ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload(int include_optional) {
  ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_t* ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload = NULL;
  if (include_optional) {
    ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload = ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_create(
       // false, not to have infinite recursion
      instantiate_custom_branding_response(0),
      2,
      list_createList()
    );
  } else {
    ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload = ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_create(
      NULL,
      2,
      list_createList()
    );
  }

  return ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload;
}


#ifdef ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_MAIN

void test_ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload(int include_optional) {
    ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_t* ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_1 = instantiate_ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload(include_optional);

	cJSON* jsonezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_1 = ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_convertToJSON(ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_1);
	printf("ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload :\n%s\n", cJSON_Print(jsonezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_1));
	ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_t* ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_2 = ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_parseFromJSON(jsonezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_1);
	cJSON* jsonezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_2 = ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_convertToJSON(ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_2);
	printf("repeating ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload:\n%s\n", cJSON_Print(jsonezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_2));
}

int main() {
  test_ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload(1);
  test_ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_MAIN
#endif // ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_TEST
