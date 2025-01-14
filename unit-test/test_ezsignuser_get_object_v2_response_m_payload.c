#ifndef ezsignuser_get_object_v2_response_m_payload_TEST
#define ezsignuser_get_object_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignuser_get_object_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignuser_get_object_v2_response_m_payload.h"
ezsignuser_get_object_v2_response_m_payload_t* instantiate_ezsignuser_get_object_v2_response_m_payload(int include_optional);

#include "test_ezsignuser_response_compound.c"


ezsignuser_get_object_v2_response_m_payload_t* instantiate_ezsignuser_get_object_v2_response_m_payload(int include_optional) {
  ezsignuser_get_object_v2_response_m_payload_t* ezsignuser_get_object_v2_response_m_payload = NULL;
  if (include_optional) {
    ezsignuser_get_object_v2_response_m_payload = ezsignuser_get_object_v2_response_m_payload_create(
       // false, not to have infinite recursion
      instantiate_ezsignuser_response_compound(0)
    );
  } else {
    ezsignuser_get_object_v2_response_m_payload = ezsignuser_get_object_v2_response_m_payload_create(
      NULL
    );
  }

  return ezsignuser_get_object_v2_response_m_payload;
}


#ifdef ezsignuser_get_object_v2_response_m_payload_MAIN

void test_ezsignuser_get_object_v2_response_m_payload(int include_optional) {
    ezsignuser_get_object_v2_response_m_payload_t* ezsignuser_get_object_v2_response_m_payload_1 = instantiate_ezsignuser_get_object_v2_response_m_payload(include_optional);

	cJSON* jsonezsignuser_get_object_v2_response_m_payload_1 = ezsignuser_get_object_v2_response_m_payload_convertToJSON(ezsignuser_get_object_v2_response_m_payload_1);
	printf("ezsignuser_get_object_v2_response_m_payload :\n%s\n", cJSON_Print(jsonezsignuser_get_object_v2_response_m_payload_1));
	ezsignuser_get_object_v2_response_m_payload_t* ezsignuser_get_object_v2_response_m_payload_2 = ezsignuser_get_object_v2_response_m_payload_parseFromJSON(jsonezsignuser_get_object_v2_response_m_payload_1);
	cJSON* jsonezsignuser_get_object_v2_response_m_payload_2 = ezsignuser_get_object_v2_response_m_payload_convertToJSON(ezsignuser_get_object_v2_response_m_payload_2);
	printf("repeating ezsignuser_get_object_v2_response_m_payload:\n%s\n", cJSON_Print(jsonezsignuser_get_object_v2_response_m_payload_2));
}

int main() {
  test_ezsignuser_get_object_v2_response_m_payload(1);
  test_ezsignuser_get_object_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignuser_get_object_v2_response_m_payload_MAIN
#endif // ezsignuser_get_object_v2_response_m_payload_TEST
