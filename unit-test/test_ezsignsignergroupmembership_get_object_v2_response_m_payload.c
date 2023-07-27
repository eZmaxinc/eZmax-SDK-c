#ifndef ezsignsignergroupmembership_get_object_v2_response_m_payload_TEST
#define ezsignsignergroupmembership_get_object_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignergroupmembership_get_object_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignergroupmembership_get_object_v2_response_m_payload.h"
ezsignsignergroupmembership_get_object_v2_response_m_payload_t* instantiate_ezsignsignergroupmembership_get_object_v2_response_m_payload(int include_optional);

#include "test_ezsignsignergroupmembership_response_compound.c"


ezsignsignergroupmembership_get_object_v2_response_m_payload_t* instantiate_ezsignsignergroupmembership_get_object_v2_response_m_payload(int include_optional) {
  ezsignsignergroupmembership_get_object_v2_response_m_payload_t* ezsignsignergroupmembership_get_object_v2_response_m_payload = NULL;
  if (include_optional) {
    ezsignsignergroupmembership_get_object_v2_response_m_payload = ezsignsignergroupmembership_get_object_v2_response_m_payload_create(
       // false, not to have infinite recursion
      instantiate_ezsignsignergroupmembership_response_compound(0)
    );
  } else {
    ezsignsignergroupmembership_get_object_v2_response_m_payload = ezsignsignergroupmembership_get_object_v2_response_m_payload_create(
      NULL
    );
  }

  return ezsignsignergroupmembership_get_object_v2_response_m_payload;
}


#ifdef ezsignsignergroupmembership_get_object_v2_response_m_payload_MAIN

void test_ezsignsignergroupmembership_get_object_v2_response_m_payload(int include_optional) {
    ezsignsignergroupmembership_get_object_v2_response_m_payload_t* ezsignsignergroupmembership_get_object_v2_response_m_payload_1 = instantiate_ezsignsignergroupmembership_get_object_v2_response_m_payload(include_optional);

	cJSON* jsonezsignsignergroupmembership_get_object_v2_response_m_payload_1 = ezsignsignergroupmembership_get_object_v2_response_m_payload_convertToJSON(ezsignsignergroupmembership_get_object_v2_response_m_payload_1);
	printf("ezsignsignergroupmembership_get_object_v2_response_m_payload :\n%s\n", cJSON_Print(jsonezsignsignergroupmembership_get_object_v2_response_m_payload_1));
	ezsignsignergroupmembership_get_object_v2_response_m_payload_t* ezsignsignergroupmembership_get_object_v2_response_m_payload_2 = ezsignsignergroupmembership_get_object_v2_response_m_payload_parseFromJSON(jsonezsignsignergroupmembership_get_object_v2_response_m_payload_1);
	cJSON* jsonezsignsignergroupmembership_get_object_v2_response_m_payload_2 = ezsignsignergroupmembership_get_object_v2_response_m_payload_convertToJSON(ezsignsignergroupmembership_get_object_v2_response_m_payload_2);
	printf("repeating ezsignsignergroupmembership_get_object_v2_response_m_payload:\n%s\n", cJSON_Print(jsonezsignsignergroupmembership_get_object_v2_response_m_payload_2));
}

int main() {
  test_ezsignsignergroupmembership_get_object_v2_response_m_payload(1);
  test_ezsignsignergroupmembership_get_object_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignergroupmembership_get_object_v2_response_m_payload_MAIN
#endif // ezsignsignergroupmembership_get_object_v2_response_m_payload_TEST
