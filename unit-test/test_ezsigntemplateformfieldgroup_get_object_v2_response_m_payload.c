#ifndef ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_TEST
#define ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplateformfieldgroup_get_object_v2_response_m_payload.h"
ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_t* instantiate_ezsigntemplateformfieldgroup_get_object_v2_response_m_payload(int include_optional);

#include "test_ezsigntemplateformfieldgroup_response_compound.c"


ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_t* instantiate_ezsigntemplateformfieldgroup_get_object_v2_response_m_payload(int include_optional) {
  ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_t* ezsigntemplateformfieldgroup_get_object_v2_response_m_payload = NULL;
  if (include_optional) {
    ezsigntemplateformfieldgroup_get_object_v2_response_m_payload = ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_create(
       // false, not to have infinite recursion
      instantiate_ezsigntemplateformfieldgroup_response_compound(0)
    );
  } else {
    ezsigntemplateformfieldgroup_get_object_v2_response_m_payload = ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_create(
      NULL
    );
  }

  return ezsigntemplateformfieldgroup_get_object_v2_response_m_payload;
}


#ifdef ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_MAIN

void test_ezsigntemplateformfieldgroup_get_object_v2_response_m_payload(int include_optional) {
    ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_t* ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_1 = instantiate_ezsigntemplateformfieldgroup_get_object_v2_response_m_payload(include_optional);

	cJSON* jsonezsigntemplateformfieldgroup_get_object_v2_response_m_payload_1 = ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_convertToJSON(ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_1);
	printf("ezsigntemplateformfieldgroup_get_object_v2_response_m_payload :\n%s\n", cJSON_Print(jsonezsigntemplateformfieldgroup_get_object_v2_response_m_payload_1));
	ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_t* ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_2 = ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_parseFromJSON(jsonezsigntemplateformfieldgroup_get_object_v2_response_m_payload_1);
	cJSON* jsonezsigntemplateformfieldgroup_get_object_v2_response_m_payload_2 = ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_convertToJSON(ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_2);
	printf("repeating ezsigntemplateformfieldgroup_get_object_v2_response_m_payload:\n%s\n", cJSON_Print(jsonezsigntemplateformfieldgroup_get_object_v2_response_m_payload_2));
}

int main() {
  test_ezsigntemplateformfieldgroup_get_object_v2_response_m_payload(1);
  test_ezsigntemplateformfieldgroup_get_object_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_MAIN
#endif // ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_TEST
