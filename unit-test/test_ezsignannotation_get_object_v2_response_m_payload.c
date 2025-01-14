#ifndef ezsignannotation_get_object_v2_response_m_payload_TEST
#define ezsignannotation_get_object_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignannotation_get_object_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignannotation_get_object_v2_response_m_payload.h"
ezsignannotation_get_object_v2_response_m_payload_t* instantiate_ezsignannotation_get_object_v2_response_m_payload(int include_optional);

#include "test_ezsignannotation_response_compound.c"


ezsignannotation_get_object_v2_response_m_payload_t* instantiate_ezsignannotation_get_object_v2_response_m_payload(int include_optional) {
  ezsignannotation_get_object_v2_response_m_payload_t* ezsignannotation_get_object_v2_response_m_payload = NULL;
  if (include_optional) {
    ezsignannotation_get_object_v2_response_m_payload = ezsignannotation_get_object_v2_response_m_payload_create(
       // false, not to have infinite recursion
      instantiate_ezsignannotation_response_compound(0)
    );
  } else {
    ezsignannotation_get_object_v2_response_m_payload = ezsignannotation_get_object_v2_response_m_payload_create(
      NULL
    );
  }

  return ezsignannotation_get_object_v2_response_m_payload;
}


#ifdef ezsignannotation_get_object_v2_response_m_payload_MAIN

void test_ezsignannotation_get_object_v2_response_m_payload(int include_optional) {
    ezsignannotation_get_object_v2_response_m_payload_t* ezsignannotation_get_object_v2_response_m_payload_1 = instantiate_ezsignannotation_get_object_v2_response_m_payload(include_optional);

	cJSON* jsonezsignannotation_get_object_v2_response_m_payload_1 = ezsignannotation_get_object_v2_response_m_payload_convertToJSON(ezsignannotation_get_object_v2_response_m_payload_1);
	printf("ezsignannotation_get_object_v2_response_m_payload :\n%s\n", cJSON_Print(jsonezsignannotation_get_object_v2_response_m_payload_1));
	ezsignannotation_get_object_v2_response_m_payload_t* ezsignannotation_get_object_v2_response_m_payload_2 = ezsignannotation_get_object_v2_response_m_payload_parseFromJSON(jsonezsignannotation_get_object_v2_response_m_payload_1);
	cJSON* jsonezsignannotation_get_object_v2_response_m_payload_2 = ezsignannotation_get_object_v2_response_m_payload_convertToJSON(ezsignannotation_get_object_v2_response_m_payload_2);
	printf("repeating ezsignannotation_get_object_v2_response_m_payload:\n%s\n", cJSON_Print(jsonezsignannotation_get_object_v2_response_m_payload_2));
}

int main() {
  test_ezsignannotation_get_object_v2_response_m_payload(1);
  test_ezsignannotation_get_object_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignannotation_get_object_v2_response_m_payload_MAIN
#endif // ezsignannotation_get_object_v2_response_m_payload_TEST
