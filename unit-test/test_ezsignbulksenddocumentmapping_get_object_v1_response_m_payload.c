#ifndef ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_TEST
#define ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksenddocumentmapping_get_object_v1_response_m_payload.h"
ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_t* instantiate_ezsignbulksenddocumentmapping_get_object_v1_response_m_payload(int include_optional);

#include "test_ezsigntemplate_response_compound.c"
#include "test_ezsigntemplatepackage_response_compound.c"


ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_t* instantiate_ezsignbulksenddocumentmapping_get_object_v1_response_m_payload(int include_optional) {
  ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_t* ezsignbulksenddocumentmapping_get_object_v1_response_m_payload = NULL;
  if (include_optional) {
    ezsignbulksenddocumentmapping_get_object_v1_response_m_payload = ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_create(
      48,
      8,
      99,
      36,
      1,
       // false, not to have infinite recursion
      instantiate_ezsigntemplate_response_compound(0),
       // false, not to have infinite recursion
      instantiate_ezsigntemplatepackage_response_compound(0)
    );
  } else {
    ezsignbulksenddocumentmapping_get_object_v1_response_m_payload = ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_create(
      48,
      8,
      99,
      36,
      1,
      NULL,
      NULL
    );
  }

  return ezsignbulksenddocumentmapping_get_object_v1_response_m_payload;
}


#ifdef ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_MAIN

void test_ezsignbulksenddocumentmapping_get_object_v1_response_m_payload(int include_optional) {
    ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_t* ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_1 = instantiate_ezsignbulksenddocumentmapping_get_object_v1_response_m_payload(include_optional);

	cJSON* jsonezsignbulksenddocumentmapping_get_object_v1_response_m_payload_1 = ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_convertToJSON(ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_1);
	printf("ezsignbulksenddocumentmapping_get_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsonezsignbulksenddocumentmapping_get_object_v1_response_m_payload_1));
	ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_t* ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_2 = ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_parseFromJSON(jsonezsignbulksenddocumentmapping_get_object_v1_response_m_payload_1);
	cJSON* jsonezsignbulksenddocumentmapping_get_object_v1_response_m_payload_2 = ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_convertToJSON(ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_2);
	printf("repeating ezsignbulksenddocumentmapping_get_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsonezsignbulksenddocumentmapping_get_object_v1_response_m_payload_2));
}

int main() {
  test_ezsignbulksenddocumentmapping_get_object_v1_response_m_payload(1);
  test_ezsignbulksenddocumentmapping_get_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_MAIN
#endif // ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_TEST
