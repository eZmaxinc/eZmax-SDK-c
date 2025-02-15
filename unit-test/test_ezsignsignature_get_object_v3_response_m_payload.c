#ifndef ezsignsignature_get_object_v3_response_m_payload_TEST
#define ezsignsignature_get_object_v3_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignature_get_object_v3_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignature_get_object_v3_response_m_payload.h"
ezsignsignature_get_object_v3_response_m_payload_t* instantiate_ezsignsignature_get_object_v3_response_m_payload(int include_optional);

#include "test_ezsignsignature_response_compound_v3.c"


ezsignsignature_get_object_v3_response_m_payload_t* instantiate_ezsignsignature_get_object_v3_response_m_payload(int include_optional) {
  ezsignsignature_get_object_v3_response_m_payload_t* ezsignsignature_get_object_v3_response_m_payload = NULL;
  if (include_optional) {
    ezsignsignature_get_object_v3_response_m_payload = ezsignsignature_get_object_v3_response_m_payload_create(
       // false, not to have infinite recursion
      instantiate_ezsignsignature_response_compound_v3(0)
    );
  } else {
    ezsignsignature_get_object_v3_response_m_payload = ezsignsignature_get_object_v3_response_m_payload_create(
      NULL
    );
  }

  return ezsignsignature_get_object_v3_response_m_payload;
}


#ifdef ezsignsignature_get_object_v3_response_m_payload_MAIN

void test_ezsignsignature_get_object_v3_response_m_payload(int include_optional) {
    ezsignsignature_get_object_v3_response_m_payload_t* ezsignsignature_get_object_v3_response_m_payload_1 = instantiate_ezsignsignature_get_object_v3_response_m_payload(include_optional);

	cJSON* jsonezsignsignature_get_object_v3_response_m_payload_1 = ezsignsignature_get_object_v3_response_m_payload_convertToJSON(ezsignsignature_get_object_v3_response_m_payload_1);
	printf("ezsignsignature_get_object_v3_response_m_payload :\n%s\n", cJSON_Print(jsonezsignsignature_get_object_v3_response_m_payload_1));
	ezsignsignature_get_object_v3_response_m_payload_t* ezsignsignature_get_object_v3_response_m_payload_2 = ezsignsignature_get_object_v3_response_m_payload_parseFromJSON(jsonezsignsignature_get_object_v3_response_m_payload_1);
	cJSON* jsonezsignsignature_get_object_v3_response_m_payload_2 = ezsignsignature_get_object_v3_response_m_payload_convertToJSON(ezsignsignature_get_object_v3_response_m_payload_2);
	printf("repeating ezsignsignature_get_object_v3_response_m_payload:\n%s\n", cJSON_Print(jsonezsignsignature_get_object_v3_response_m_payload_2));
}

int main() {
  test_ezsignsignature_get_object_v3_response_m_payload(1);
  test_ezsignsignature_get_object_v3_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignature_get_object_v3_response_m_payload_MAIN
#endif // ezsignsignature_get_object_v3_response_m_payload_TEST
