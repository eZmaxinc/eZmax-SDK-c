#ifndef ezsigntemplatesignature_create_object_v2_response_m_payload_TEST
#define ezsigntemplatesignature_create_object_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatesignature_create_object_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatesignature_create_object_v2_response_m_payload.h"
ezsigntemplatesignature_create_object_v2_response_m_payload_t* instantiate_ezsigntemplatesignature_create_object_v2_response_m_payload(int include_optional);



ezsigntemplatesignature_create_object_v2_response_m_payload_t* instantiate_ezsigntemplatesignature_create_object_v2_response_m_payload(int include_optional) {
  ezsigntemplatesignature_create_object_v2_response_m_payload_t* ezsigntemplatesignature_create_object_v2_response_m_payload = NULL;
  if (include_optional) {
    ezsigntemplatesignature_create_object_v2_response_m_payload = ezsigntemplatesignature_create_object_v2_response_m_payload_create(
      list_createList()
    );
  } else {
    ezsigntemplatesignature_create_object_v2_response_m_payload = ezsigntemplatesignature_create_object_v2_response_m_payload_create(
      list_createList()
    );
  }

  return ezsigntemplatesignature_create_object_v2_response_m_payload;
}


#ifdef ezsigntemplatesignature_create_object_v2_response_m_payload_MAIN

void test_ezsigntemplatesignature_create_object_v2_response_m_payload(int include_optional) {
    ezsigntemplatesignature_create_object_v2_response_m_payload_t* ezsigntemplatesignature_create_object_v2_response_m_payload_1 = instantiate_ezsigntemplatesignature_create_object_v2_response_m_payload(include_optional);

	cJSON* jsonezsigntemplatesignature_create_object_v2_response_m_payload_1 = ezsigntemplatesignature_create_object_v2_response_m_payload_convertToJSON(ezsigntemplatesignature_create_object_v2_response_m_payload_1);
	printf("ezsigntemplatesignature_create_object_v2_response_m_payload :\n%s\n", cJSON_Print(jsonezsigntemplatesignature_create_object_v2_response_m_payload_1));
	ezsigntemplatesignature_create_object_v2_response_m_payload_t* ezsigntemplatesignature_create_object_v2_response_m_payload_2 = ezsigntemplatesignature_create_object_v2_response_m_payload_parseFromJSON(jsonezsigntemplatesignature_create_object_v2_response_m_payload_1);
	cJSON* jsonezsigntemplatesignature_create_object_v2_response_m_payload_2 = ezsigntemplatesignature_create_object_v2_response_m_payload_convertToJSON(ezsigntemplatesignature_create_object_v2_response_m_payload_2);
	printf("repeating ezsigntemplatesignature_create_object_v2_response_m_payload:\n%s\n", cJSON_Print(jsonezsigntemplatesignature_create_object_v2_response_m_payload_2));
}

int main() {
  test_ezsigntemplatesignature_create_object_v2_response_m_payload(1);
  test_ezsigntemplatesignature_create_object_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatesignature_create_object_v2_response_m_payload_MAIN
#endif // ezsigntemplatesignature_create_object_v2_response_m_payload_TEST
