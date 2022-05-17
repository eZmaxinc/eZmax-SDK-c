#ifndef ezsigntemplatesigner_create_object_v1_response_m_payload_TEST
#define ezsigntemplatesigner_create_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatesigner_create_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatesigner_create_object_v1_response_m_payload.h"
ezsigntemplatesigner_create_object_v1_response_m_payload_t* instantiate_ezsigntemplatesigner_create_object_v1_response_m_payload(int include_optional);



ezsigntemplatesigner_create_object_v1_response_m_payload_t* instantiate_ezsigntemplatesigner_create_object_v1_response_m_payload(int include_optional) {
  ezsigntemplatesigner_create_object_v1_response_m_payload_t* ezsigntemplatesigner_create_object_v1_response_m_payload = NULL;
  if (include_optional) {
    ezsigntemplatesigner_create_object_v1_response_m_payload = ezsigntemplatesigner_create_object_v1_response_m_payload_create(
      list_createList(),
      1,
      1
    );
  } else {
    ezsigntemplatesigner_create_object_v1_response_m_payload = ezsigntemplatesigner_create_object_v1_response_m_payload_create(
      list_createList(),
      1,
      1
    );
  }

  return ezsigntemplatesigner_create_object_v1_response_m_payload;
}


#ifdef ezsigntemplatesigner_create_object_v1_response_m_payload_MAIN

void test_ezsigntemplatesigner_create_object_v1_response_m_payload(int include_optional) {
    ezsigntemplatesigner_create_object_v1_response_m_payload_t* ezsigntemplatesigner_create_object_v1_response_m_payload_1 = instantiate_ezsigntemplatesigner_create_object_v1_response_m_payload(include_optional);

	cJSON* jsonezsigntemplatesigner_create_object_v1_response_m_payload_1 = ezsigntemplatesigner_create_object_v1_response_m_payload_convertToJSON(ezsigntemplatesigner_create_object_v1_response_m_payload_1);
	printf("ezsigntemplatesigner_create_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsonezsigntemplatesigner_create_object_v1_response_m_payload_1));
	ezsigntemplatesigner_create_object_v1_response_m_payload_t* ezsigntemplatesigner_create_object_v1_response_m_payload_2 = ezsigntemplatesigner_create_object_v1_response_m_payload_parseFromJSON(jsonezsigntemplatesigner_create_object_v1_response_m_payload_1);
	cJSON* jsonezsigntemplatesigner_create_object_v1_response_m_payload_2 = ezsigntemplatesigner_create_object_v1_response_m_payload_convertToJSON(ezsigntemplatesigner_create_object_v1_response_m_payload_2);
	printf("repeating ezsigntemplatesigner_create_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsonezsigntemplatesigner_create_object_v1_response_m_payload_2));
}

int main() {
  test_ezsigntemplatesigner_create_object_v1_response_m_payload(1);
  test_ezsigntemplatesigner_create_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatesigner_create_object_v1_response_m_payload_MAIN
#endif // ezsigntemplatesigner_create_object_v1_response_m_payload_TEST
