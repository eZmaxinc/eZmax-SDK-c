#ifndef ezsignsignergroup_get_object_v2_response_m_payload_TEST
#define ezsignsignergroup_get_object_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignergroup_get_object_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignergroup_get_object_v2_response_m_payload.h"
ezsignsignergroup_get_object_v2_response_m_payload_t* instantiate_ezsignsignergroup_get_object_v2_response_m_payload(int include_optional);

#include "test_ezsignsignergroup_response_compound.c"


ezsignsignergroup_get_object_v2_response_m_payload_t* instantiate_ezsignsignergroup_get_object_v2_response_m_payload(int include_optional) {
  ezsignsignergroup_get_object_v2_response_m_payload_t* ezsignsignergroup_get_object_v2_response_m_payload = NULL;
  if (include_optional) {
    ezsignsignergroup_get_object_v2_response_m_payload = ezsignsignergroup_get_object_v2_response_m_payload_create(
       // false, not to have infinite recursion
      instantiate_ezsignsignergroup_response_compound(0)
    );
  } else {
    ezsignsignergroup_get_object_v2_response_m_payload = ezsignsignergroup_get_object_v2_response_m_payload_create(
      NULL
    );
  }

  return ezsignsignergroup_get_object_v2_response_m_payload;
}


#ifdef ezsignsignergroup_get_object_v2_response_m_payload_MAIN

void test_ezsignsignergroup_get_object_v2_response_m_payload(int include_optional) {
    ezsignsignergroup_get_object_v2_response_m_payload_t* ezsignsignergroup_get_object_v2_response_m_payload_1 = instantiate_ezsignsignergroup_get_object_v2_response_m_payload(include_optional);

	cJSON* jsonezsignsignergroup_get_object_v2_response_m_payload_1 = ezsignsignergroup_get_object_v2_response_m_payload_convertToJSON(ezsignsignergroup_get_object_v2_response_m_payload_1);
	printf("ezsignsignergroup_get_object_v2_response_m_payload :\n%s\n", cJSON_Print(jsonezsignsignergroup_get_object_v2_response_m_payload_1));
	ezsignsignergroup_get_object_v2_response_m_payload_t* ezsignsignergroup_get_object_v2_response_m_payload_2 = ezsignsignergroup_get_object_v2_response_m_payload_parseFromJSON(jsonezsignsignergroup_get_object_v2_response_m_payload_1);
	cJSON* jsonezsignsignergroup_get_object_v2_response_m_payload_2 = ezsignsignergroup_get_object_v2_response_m_payload_convertToJSON(ezsignsignergroup_get_object_v2_response_m_payload_2);
	printf("repeating ezsignsignergroup_get_object_v2_response_m_payload:\n%s\n", cJSON_Print(jsonezsignsignergroup_get_object_v2_response_m_payload_2));
}

int main() {
  test_ezsignsignergroup_get_object_v2_response_m_payload(1);
  test_ezsignsignergroup_get_object_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignergroup_get_object_v2_response_m_payload_MAIN
#endif // ezsignsignergroup_get_object_v2_response_m_payload_TEST
