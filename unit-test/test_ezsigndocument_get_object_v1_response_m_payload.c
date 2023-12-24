#ifndef ezsigndocument_get_object_v1_response_m_payload_TEST
#define ezsigndocument_get_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigndocument_get_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigndocument_get_object_v1_response_m_payload.h"
ezsigndocument_get_object_v1_response_m_payload_t* instantiate_ezsigndocument_get_object_v1_response_m_payload(int include_optional);

#include "test_common_audit.c"


ezsigndocument_get_object_v1_response_m_payload_t* instantiate_ezsigndocument_get_object_v1_response_m_payload(int include_optional) {
  ezsigndocument_get_object_v1_response_m_payload_t* ezsigndocument_get_object_v1_response_m_payload = NULL;
  if (include_optional) {
    ezsigndocument_get_object_v1_response_m_payload = ezsigndocument_get_object_v1_response_m_payload_create(
      97,
      33,
      20,
      "2020-12-31 23:59:59",
      "2020-12-31 23:59:59",
      2,
      "Contract #123",
      ezmax_api_definition__full_ezsigndocument_get_object_v1_response_m_payload__"Completed",
      "2020-12-31 23:59:59",
      "2020-12-31 23:59:59",
      1,
      4,
      3,
      4,
      "012345678901234567890123456789AB",
      "The conditions in the contract are different than those discuted",
      "012345678901234567890123456789AB",
      true,
      true,
       // false, not to have infinite recursion
      instantiate_common_audit(0),
      "{"ID": 1234, "TAGS": ["tag1", "tag2", "tag3"]}",
      3,
      ezmax_api_definition__full_ezsigndocument_get_object_v1_response_m_payload__"Sign",
      2,
      1,
      2,
      0,
      list_createList()
    );
  } else {
    ezsigndocument_get_object_v1_response_m_payload = ezsigndocument_get_object_v1_response_m_payload_create(
      97,
      33,
      20,
      "2020-12-31 23:59:59",
      "2020-12-31 23:59:59",
      2,
      "Contract #123",
      ezmax_api_definition__full_ezsigndocument_get_object_v1_response_m_payload__"Completed",
      "2020-12-31 23:59:59",
      "2020-12-31 23:59:59",
      1,
      4,
      3,
      4,
      "012345678901234567890123456789AB",
      "The conditions in the contract are different than those discuted",
      "012345678901234567890123456789AB",
      true,
      true,
      NULL,
      "{"ID": 1234, "TAGS": ["tag1", "tag2", "tag3"]}",
      3,
      ezmax_api_definition__full_ezsigndocument_get_object_v1_response_m_payload__"Sign",
      2,
      1,
      2,
      0,
      list_createList()
    );
  }

  return ezsigndocument_get_object_v1_response_m_payload;
}


#ifdef ezsigndocument_get_object_v1_response_m_payload_MAIN

void test_ezsigndocument_get_object_v1_response_m_payload(int include_optional) {
    ezsigndocument_get_object_v1_response_m_payload_t* ezsigndocument_get_object_v1_response_m_payload_1 = instantiate_ezsigndocument_get_object_v1_response_m_payload(include_optional);

	cJSON* jsonezsigndocument_get_object_v1_response_m_payload_1 = ezsigndocument_get_object_v1_response_m_payload_convertToJSON(ezsigndocument_get_object_v1_response_m_payload_1);
	printf("ezsigndocument_get_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsonezsigndocument_get_object_v1_response_m_payload_1));
	ezsigndocument_get_object_v1_response_m_payload_t* ezsigndocument_get_object_v1_response_m_payload_2 = ezsigndocument_get_object_v1_response_m_payload_parseFromJSON(jsonezsigndocument_get_object_v1_response_m_payload_1);
	cJSON* jsonezsigndocument_get_object_v1_response_m_payload_2 = ezsigndocument_get_object_v1_response_m_payload_convertToJSON(ezsigndocument_get_object_v1_response_m_payload_2);
	printf("repeating ezsigndocument_get_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsonezsigndocument_get_object_v1_response_m_payload_2));
}

int main() {
  test_ezsigndocument_get_object_v1_response_m_payload(1);
  test_ezsigndocument_get_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigndocument_get_object_v1_response_m_payload_MAIN
#endif // ezsigndocument_get_object_v1_response_m_payload_TEST
