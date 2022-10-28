#ifndef ezsignformfieldgroup_get_object_v2_response_m_payload_TEST
#define ezsignformfieldgroup_get_object_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignformfieldgroup_get_object_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignformfieldgroup_get_object_v2_response_m_payload.h"
ezsignformfieldgroup_get_object_v2_response_m_payload_t* instantiate_ezsignformfieldgroup_get_object_v2_response_m_payload(int include_optional);

#include "test_ezsignformfieldgroup_response_compound.c"


ezsignformfieldgroup_get_object_v2_response_m_payload_t* instantiate_ezsignformfieldgroup_get_object_v2_response_m_payload(int include_optional) {
  ezsignformfieldgroup_get_object_v2_response_m_payload_t* ezsignformfieldgroup_get_object_v2_response_m_payload = NULL;
  if (include_optional) {
    ezsignformfieldgroup_get_object_v2_response_m_payload = ezsignformfieldgroup_get_object_v2_response_m_payload_create(
       // false, not to have infinite recursion
      instantiate_ezsignformfieldgroup_response_compound(0)
    );
  } else {
    ezsignformfieldgroup_get_object_v2_response_m_payload = ezsignformfieldgroup_get_object_v2_response_m_payload_create(
      NULL
    );
  }

  return ezsignformfieldgroup_get_object_v2_response_m_payload;
}


#ifdef ezsignformfieldgroup_get_object_v2_response_m_payload_MAIN

void test_ezsignformfieldgroup_get_object_v2_response_m_payload(int include_optional) {
    ezsignformfieldgroup_get_object_v2_response_m_payload_t* ezsignformfieldgroup_get_object_v2_response_m_payload_1 = instantiate_ezsignformfieldgroup_get_object_v2_response_m_payload(include_optional);

	cJSON* jsonezsignformfieldgroup_get_object_v2_response_m_payload_1 = ezsignformfieldgroup_get_object_v2_response_m_payload_convertToJSON(ezsignformfieldgroup_get_object_v2_response_m_payload_1);
	printf("ezsignformfieldgroup_get_object_v2_response_m_payload :\n%s\n", cJSON_Print(jsonezsignformfieldgroup_get_object_v2_response_m_payload_1));
	ezsignformfieldgroup_get_object_v2_response_m_payload_t* ezsignformfieldgroup_get_object_v2_response_m_payload_2 = ezsignformfieldgroup_get_object_v2_response_m_payload_parseFromJSON(jsonezsignformfieldgroup_get_object_v2_response_m_payload_1);
	cJSON* jsonezsignformfieldgroup_get_object_v2_response_m_payload_2 = ezsignformfieldgroup_get_object_v2_response_m_payload_convertToJSON(ezsignformfieldgroup_get_object_v2_response_m_payload_2);
	printf("repeating ezsignformfieldgroup_get_object_v2_response_m_payload:\n%s\n", cJSON_Print(jsonezsignformfieldgroup_get_object_v2_response_m_payload_2));
}

int main() {
  test_ezsignformfieldgroup_get_object_v2_response_m_payload(1);
  test_ezsignformfieldgroup_get_object_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignformfieldgroup_get_object_v2_response_m_payload_MAIN
#endif // ezsignformfieldgroup_get_object_v2_response_m_payload_TEST
