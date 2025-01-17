#ifndef permission_get_object_v2_response_m_payload_TEST
#define permission_get_object_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define permission_get_object_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/permission_get_object_v2_response_m_payload.h"
permission_get_object_v2_response_m_payload_t* instantiate_permission_get_object_v2_response_m_payload(int include_optional);

#include "test_permission_response_compound.c"


permission_get_object_v2_response_m_payload_t* instantiate_permission_get_object_v2_response_m_payload(int include_optional) {
  permission_get_object_v2_response_m_payload_t* permission_get_object_v2_response_m_payload = NULL;
  if (include_optional) {
    permission_get_object_v2_response_m_payload = permission_get_object_v2_response_m_payload_create(
       // false, not to have infinite recursion
      instantiate_permission_response_compound(0)
    );
  } else {
    permission_get_object_v2_response_m_payload = permission_get_object_v2_response_m_payload_create(
      NULL
    );
  }

  return permission_get_object_v2_response_m_payload;
}


#ifdef permission_get_object_v2_response_m_payload_MAIN

void test_permission_get_object_v2_response_m_payload(int include_optional) {
    permission_get_object_v2_response_m_payload_t* permission_get_object_v2_response_m_payload_1 = instantiate_permission_get_object_v2_response_m_payload(include_optional);

	cJSON* jsonpermission_get_object_v2_response_m_payload_1 = permission_get_object_v2_response_m_payload_convertToJSON(permission_get_object_v2_response_m_payload_1);
	printf("permission_get_object_v2_response_m_payload :\n%s\n", cJSON_Print(jsonpermission_get_object_v2_response_m_payload_1));
	permission_get_object_v2_response_m_payload_t* permission_get_object_v2_response_m_payload_2 = permission_get_object_v2_response_m_payload_parseFromJSON(jsonpermission_get_object_v2_response_m_payload_1);
	cJSON* jsonpermission_get_object_v2_response_m_payload_2 = permission_get_object_v2_response_m_payload_convertToJSON(permission_get_object_v2_response_m_payload_2);
	printf("repeating permission_get_object_v2_response_m_payload:\n%s\n", cJSON_Print(jsonpermission_get_object_v2_response_m_payload_2));
}

int main() {
  test_permission_get_object_v2_response_m_payload(1);
  test_permission_get_object_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // permission_get_object_v2_response_m_payload_MAIN
#endif // permission_get_object_v2_response_m_payload_TEST
