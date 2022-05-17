#ifndef ezsignbulksendsignermapping_get_object_v1_response_m_payload_TEST
#define ezsignbulksendsignermapping_get_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksendsignermapping_get_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksendsignermapping_get_object_v1_response_m_payload.h"
ezsignbulksendsignermapping_get_object_v1_response_m_payload_t* instantiate_ezsignbulksendsignermapping_get_object_v1_response_m_payload(int include_optional);



ezsignbulksendsignermapping_get_object_v1_response_m_payload_t* instantiate_ezsignbulksendsignermapping_get_object_v1_response_m_payload(int include_optional) {
  ezsignbulksendsignermapping_get_object_v1_response_m_payload_t* ezsignbulksendsignermapping_get_object_v1_response_m_payload = NULL;
  if (include_optional) {
    ezsignbulksendsignermapping_get_object_v1_response_m_payload = ezsignbulksendsignermapping_get_object_v1_response_m_payload_create(
      57,
      8,
      70,
      "Supervisor"
    );
  } else {
    ezsignbulksendsignermapping_get_object_v1_response_m_payload = ezsignbulksendsignermapping_get_object_v1_response_m_payload_create(
      57,
      8,
      70,
      "Supervisor"
    );
  }

  return ezsignbulksendsignermapping_get_object_v1_response_m_payload;
}


#ifdef ezsignbulksendsignermapping_get_object_v1_response_m_payload_MAIN

void test_ezsignbulksendsignermapping_get_object_v1_response_m_payload(int include_optional) {
    ezsignbulksendsignermapping_get_object_v1_response_m_payload_t* ezsignbulksendsignermapping_get_object_v1_response_m_payload_1 = instantiate_ezsignbulksendsignermapping_get_object_v1_response_m_payload(include_optional);

	cJSON* jsonezsignbulksendsignermapping_get_object_v1_response_m_payload_1 = ezsignbulksendsignermapping_get_object_v1_response_m_payload_convertToJSON(ezsignbulksendsignermapping_get_object_v1_response_m_payload_1);
	printf("ezsignbulksendsignermapping_get_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsonezsignbulksendsignermapping_get_object_v1_response_m_payload_1));
	ezsignbulksendsignermapping_get_object_v1_response_m_payload_t* ezsignbulksendsignermapping_get_object_v1_response_m_payload_2 = ezsignbulksendsignermapping_get_object_v1_response_m_payload_parseFromJSON(jsonezsignbulksendsignermapping_get_object_v1_response_m_payload_1);
	cJSON* jsonezsignbulksendsignermapping_get_object_v1_response_m_payload_2 = ezsignbulksendsignermapping_get_object_v1_response_m_payload_convertToJSON(ezsignbulksendsignermapping_get_object_v1_response_m_payload_2);
	printf("repeating ezsignbulksendsignermapping_get_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsonezsignbulksendsignermapping_get_object_v1_response_m_payload_2));
}

int main() {
  test_ezsignbulksendsignermapping_get_object_v1_response_m_payload(1);
  test_ezsignbulksendsignermapping_get_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksendsignermapping_get_object_v1_response_m_payload_MAIN
#endif // ezsignbulksendsignermapping_get_object_v1_response_m_payload_TEST
