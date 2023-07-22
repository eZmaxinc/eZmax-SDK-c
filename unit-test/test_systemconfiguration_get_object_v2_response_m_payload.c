#ifndef systemconfiguration_get_object_v2_response_m_payload_TEST
#define systemconfiguration_get_object_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define systemconfiguration_get_object_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/systemconfiguration_get_object_v2_response_m_payload.h"
systemconfiguration_get_object_v2_response_m_payload_t* instantiate_systemconfiguration_get_object_v2_response_m_payload(int include_optional);

#include "test_systemconfiguration_response_compound.c"


systemconfiguration_get_object_v2_response_m_payload_t* instantiate_systemconfiguration_get_object_v2_response_m_payload(int include_optional) {
  systemconfiguration_get_object_v2_response_m_payload_t* systemconfiguration_get_object_v2_response_m_payload = NULL;
  if (include_optional) {
    systemconfiguration_get_object_v2_response_m_payload = systemconfiguration_get_object_v2_response_m_payload_create(
       // false, not to have infinite recursion
      instantiate_systemconfiguration_response_compound(0)
    );
  } else {
    systemconfiguration_get_object_v2_response_m_payload = systemconfiguration_get_object_v2_response_m_payload_create(
      NULL
    );
  }

  return systemconfiguration_get_object_v2_response_m_payload;
}


#ifdef systemconfiguration_get_object_v2_response_m_payload_MAIN

void test_systemconfiguration_get_object_v2_response_m_payload(int include_optional) {
    systemconfiguration_get_object_v2_response_m_payload_t* systemconfiguration_get_object_v2_response_m_payload_1 = instantiate_systemconfiguration_get_object_v2_response_m_payload(include_optional);

	cJSON* jsonsystemconfiguration_get_object_v2_response_m_payload_1 = systemconfiguration_get_object_v2_response_m_payload_convertToJSON(systemconfiguration_get_object_v2_response_m_payload_1);
	printf("systemconfiguration_get_object_v2_response_m_payload :\n%s\n", cJSON_Print(jsonsystemconfiguration_get_object_v2_response_m_payload_1));
	systemconfiguration_get_object_v2_response_m_payload_t* systemconfiguration_get_object_v2_response_m_payload_2 = systemconfiguration_get_object_v2_response_m_payload_parseFromJSON(jsonsystemconfiguration_get_object_v2_response_m_payload_1);
	cJSON* jsonsystemconfiguration_get_object_v2_response_m_payload_2 = systemconfiguration_get_object_v2_response_m_payload_convertToJSON(systemconfiguration_get_object_v2_response_m_payload_2);
	printf("repeating systemconfiguration_get_object_v2_response_m_payload:\n%s\n", cJSON_Print(jsonsystemconfiguration_get_object_v2_response_m_payload_2));
}

int main() {
  test_systemconfiguration_get_object_v2_response_m_payload(1);
  test_systemconfiguration_get_object_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // systemconfiguration_get_object_v2_response_m_payload_MAIN
#endif // systemconfiguration_get_object_v2_response_m_payload_TEST
