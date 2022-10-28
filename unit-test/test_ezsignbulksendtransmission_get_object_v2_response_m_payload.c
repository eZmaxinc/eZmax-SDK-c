#ifndef ezsignbulksendtransmission_get_object_v2_response_m_payload_TEST
#define ezsignbulksendtransmission_get_object_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksendtransmission_get_object_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksendtransmission_get_object_v2_response_m_payload.h"
ezsignbulksendtransmission_get_object_v2_response_m_payload_t* instantiate_ezsignbulksendtransmission_get_object_v2_response_m_payload(int include_optional);

#include "test_ezsignbulksendtransmission_response_compound.c"


ezsignbulksendtransmission_get_object_v2_response_m_payload_t* instantiate_ezsignbulksendtransmission_get_object_v2_response_m_payload(int include_optional) {
  ezsignbulksendtransmission_get_object_v2_response_m_payload_t* ezsignbulksendtransmission_get_object_v2_response_m_payload = NULL;
  if (include_optional) {
    ezsignbulksendtransmission_get_object_v2_response_m_payload = ezsignbulksendtransmission_get_object_v2_response_m_payload_create(
       // false, not to have infinite recursion
      instantiate_ezsignbulksendtransmission_response_compound(0)
    );
  } else {
    ezsignbulksendtransmission_get_object_v2_response_m_payload = ezsignbulksendtransmission_get_object_v2_response_m_payload_create(
      NULL
    );
  }

  return ezsignbulksendtransmission_get_object_v2_response_m_payload;
}


#ifdef ezsignbulksendtransmission_get_object_v2_response_m_payload_MAIN

void test_ezsignbulksendtransmission_get_object_v2_response_m_payload(int include_optional) {
    ezsignbulksendtransmission_get_object_v2_response_m_payload_t* ezsignbulksendtransmission_get_object_v2_response_m_payload_1 = instantiate_ezsignbulksendtransmission_get_object_v2_response_m_payload(include_optional);

	cJSON* jsonezsignbulksendtransmission_get_object_v2_response_m_payload_1 = ezsignbulksendtransmission_get_object_v2_response_m_payload_convertToJSON(ezsignbulksendtransmission_get_object_v2_response_m_payload_1);
	printf("ezsignbulksendtransmission_get_object_v2_response_m_payload :\n%s\n", cJSON_Print(jsonezsignbulksendtransmission_get_object_v2_response_m_payload_1));
	ezsignbulksendtransmission_get_object_v2_response_m_payload_t* ezsignbulksendtransmission_get_object_v2_response_m_payload_2 = ezsignbulksendtransmission_get_object_v2_response_m_payload_parseFromJSON(jsonezsignbulksendtransmission_get_object_v2_response_m_payload_1);
	cJSON* jsonezsignbulksendtransmission_get_object_v2_response_m_payload_2 = ezsignbulksendtransmission_get_object_v2_response_m_payload_convertToJSON(ezsignbulksendtransmission_get_object_v2_response_m_payload_2);
	printf("repeating ezsignbulksendtransmission_get_object_v2_response_m_payload:\n%s\n", cJSON_Print(jsonezsignbulksendtransmission_get_object_v2_response_m_payload_2));
}

int main() {
  test_ezsignbulksendtransmission_get_object_v2_response_m_payload(1);
  test_ezsignbulksendtransmission_get_object_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksendtransmission_get_object_v2_response_m_payload_MAIN
#endif // ezsignbulksendtransmission_get_object_v2_response_m_payload_TEST
