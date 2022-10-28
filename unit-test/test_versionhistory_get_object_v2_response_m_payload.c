#ifndef versionhistory_get_object_v2_response_m_payload_TEST
#define versionhistory_get_object_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define versionhistory_get_object_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/versionhistory_get_object_v2_response_m_payload.h"
versionhistory_get_object_v2_response_m_payload_t* instantiate_versionhistory_get_object_v2_response_m_payload(int include_optional);

#include "test_versionhistory_response_compound.c"


versionhistory_get_object_v2_response_m_payload_t* instantiate_versionhistory_get_object_v2_response_m_payload(int include_optional) {
  versionhistory_get_object_v2_response_m_payload_t* versionhistory_get_object_v2_response_m_payload = NULL;
  if (include_optional) {
    versionhistory_get_object_v2_response_m_payload = versionhistory_get_object_v2_response_m_payload_create(
       // false, not to have infinite recursion
      instantiate_versionhistory_response_compound(0)
    );
  } else {
    versionhistory_get_object_v2_response_m_payload = versionhistory_get_object_v2_response_m_payload_create(
      NULL
    );
  }

  return versionhistory_get_object_v2_response_m_payload;
}


#ifdef versionhistory_get_object_v2_response_m_payload_MAIN

void test_versionhistory_get_object_v2_response_m_payload(int include_optional) {
    versionhistory_get_object_v2_response_m_payload_t* versionhistory_get_object_v2_response_m_payload_1 = instantiate_versionhistory_get_object_v2_response_m_payload(include_optional);

	cJSON* jsonversionhistory_get_object_v2_response_m_payload_1 = versionhistory_get_object_v2_response_m_payload_convertToJSON(versionhistory_get_object_v2_response_m_payload_1);
	printf("versionhistory_get_object_v2_response_m_payload :\n%s\n", cJSON_Print(jsonversionhistory_get_object_v2_response_m_payload_1));
	versionhistory_get_object_v2_response_m_payload_t* versionhistory_get_object_v2_response_m_payload_2 = versionhistory_get_object_v2_response_m_payload_parseFromJSON(jsonversionhistory_get_object_v2_response_m_payload_1);
	cJSON* jsonversionhistory_get_object_v2_response_m_payload_2 = versionhistory_get_object_v2_response_m_payload_convertToJSON(versionhistory_get_object_v2_response_m_payload_2);
	printf("repeating versionhistory_get_object_v2_response_m_payload:\n%s\n", cJSON_Print(jsonversionhistory_get_object_v2_response_m_payload_2));
}

int main() {
  test_versionhistory_get_object_v2_response_m_payload(1);
  test_versionhistory_get_object_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // versionhistory_get_object_v2_response_m_payload_MAIN
#endif // versionhistory_get_object_v2_response_m_payload_TEST
