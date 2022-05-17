#ifndef ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_TEST
#define ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksenddocumentmapping_create_object_v1_response_m_payload.h"
ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_t* instantiate_ezsignbulksenddocumentmapping_create_object_v1_response_m_payload(int include_optional);



ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_t* instantiate_ezsignbulksenddocumentmapping_create_object_v1_response_m_payload(int include_optional) {
  ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_t* ezsignbulksenddocumentmapping_create_object_v1_response_m_payload = NULL;
  if (include_optional) {
    ezsignbulksenddocumentmapping_create_object_v1_response_m_payload = ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_create(
      list_createList()
    );
  } else {
    ezsignbulksenddocumentmapping_create_object_v1_response_m_payload = ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_create(
      list_createList()
    );
  }

  return ezsignbulksenddocumentmapping_create_object_v1_response_m_payload;
}


#ifdef ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_MAIN

void test_ezsignbulksenddocumentmapping_create_object_v1_response_m_payload(int include_optional) {
    ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_t* ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_1 = instantiate_ezsignbulksenddocumentmapping_create_object_v1_response_m_payload(include_optional);

	cJSON* jsonezsignbulksenddocumentmapping_create_object_v1_response_m_payload_1 = ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_convertToJSON(ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_1);
	printf("ezsignbulksenddocumentmapping_create_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsonezsignbulksenddocumentmapping_create_object_v1_response_m_payload_1));
	ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_t* ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_2 = ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_parseFromJSON(jsonezsignbulksenddocumentmapping_create_object_v1_response_m_payload_1);
	cJSON* jsonezsignbulksenddocumentmapping_create_object_v1_response_m_payload_2 = ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_convertToJSON(ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_2);
	printf("repeating ezsignbulksenddocumentmapping_create_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsonezsignbulksenddocumentmapping_create_object_v1_response_m_payload_2));
}

int main() {
  test_ezsignbulksenddocumentmapping_create_object_v1_response_m_payload(1);
  test_ezsignbulksenddocumentmapping_create_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_MAIN
#endif // ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_TEST
