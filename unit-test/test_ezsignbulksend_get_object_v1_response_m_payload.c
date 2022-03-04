#ifndef ezsignbulksend_get_object_v1_response_m_payload_TEST
#define ezsignbulksend_get_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksend_get_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksend_get_object_v1_response_m_payload.h"
ezsignbulksend_get_object_v1_response_m_payload_t* instantiate_ezsignbulksend_get_object_v1_response_m_payload(int include_optional);

#include "test_common_audit.c"


ezsignbulksend_get_object_v1_response_m_payload_t* instantiate_ezsignbulksend_get_object_v1_response_m_payload(int include_optional) {
  ezsignbulksend_get_object_v1_response_m_payload_t* ezsignbulksend_get_object_v1_response_m_payload = NULL;
  if (include_optional) {
    ezsignbulksend_get_object_v1_response_m_payload = ezsignbulksend_get_object_v1_response_m_payload_create(
      8,
      5,
      2,
      "Test eZsign Bulk Send",
      "This is a note",
      1,
       // false, not to have infinite recursion
      instantiate_common_audit(0)
    );
  } else {
    ezsignbulksend_get_object_v1_response_m_payload = ezsignbulksend_get_object_v1_response_m_payload_create(
      8,
      5,
      2,
      "Test eZsign Bulk Send",
      "This is a note",
      1,
      NULL
    );
  }

  return ezsignbulksend_get_object_v1_response_m_payload;
}


#ifdef ezsignbulksend_get_object_v1_response_m_payload_MAIN

void test_ezsignbulksend_get_object_v1_response_m_payload(int include_optional) {
    ezsignbulksend_get_object_v1_response_m_payload_t* ezsignbulksend_get_object_v1_response_m_payload_1 = instantiate_ezsignbulksend_get_object_v1_response_m_payload(include_optional);

	cJSON* jsonezsignbulksend_get_object_v1_response_m_payload_1 = ezsignbulksend_get_object_v1_response_m_payload_convertToJSON(ezsignbulksend_get_object_v1_response_m_payload_1);
	printf("ezsignbulksend_get_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsonezsignbulksend_get_object_v1_response_m_payload_1));
	ezsignbulksend_get_object_v1_response_m_payload_t* ezsignbulksend_get_object_v1_response_m_payload_2 = ezsignbulksend_get_object_v1_response_m_payload_parseFromJSON(jsonezsignbulksend_get_object_v1_response_m_payload_1);
	cJSON* jsonezsignbulksend_get_object_v1_response_m_payload_2 = ezsignbulksend_get_object_v1_response_m_payload_convertToJSON(ezsignbulksend_get_object_v1_response_m_payload_2);
	printf("repeating ezsignbulksend_get_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsonezsignbulksend_get_object_v1_response_m_payload_2));
}

int main() {
  test_ezsignbulksend_get_object_v1_response_m_payload(1);
  test_ezsignbulksend_get_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksend_get_object_v1_response_m_payload_MAIN
#endif // ezsignbulksend_get_object_v1_response_m_payload_TEST
