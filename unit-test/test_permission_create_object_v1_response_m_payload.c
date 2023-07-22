#ifndef permission_create_object_v1_response_m_payload_TEST
#define permission_create_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define permission_create_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/permission_create_object_v1_response_m_payload.h"
permission_create_object_v1_response_m_payload_t* instantiate_permission_create_object_v1_response_m_payload(int include_optional);



permission_create_object_v1_response_m_payload_t* instantiate_permission_create_object_v1_response_m_payload(int include_optional) {
  permission_create_object_v1_response_m_payload_t* permission_create_object_v1_response_m_payload = NULL;
  if (include_optional) {
    permission_create_object_v1_response_m_payload = permission_create_object_v1_response_m_payload_create(
      list_createList()
    );
  } else {
    permission_create_object_v1_response_m_payload = permission_create_object_v1_response_m_payload_create(
      list_createList()
    );
  }

  return permission_create_object_v1_response_m_payload;
}


#ifdef permission_create_object_v1_response_m_payload_MAIN

void test_permission_create_object_v1_response_m_payload(int include_optional) {
    permission_create_object_v1_response_m_payload_t* permission_create_object_v1_response_m_payload_1 = instantiate_permission_create_object_v1_response_m_payload(include_optional);

	cJSON* jsonpermission_create_object_v1_response_m_payload_1 = permission_create_object_v1_response_m_payload_convertToJSON(permission_create_object_v1_response_m_payload_1);
	printf("permission_create_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsonpermission_create_object_v1_response_m_payload_1));
	permission_create_object_v1_response_m_payload_t* permission_create_object_v1_response_m_payload_2 = permission_create_object_v1_response_m_payload_parseFromJSON(jsonpermission_create_object_v1_response_m_payload_1);
	cJSON* jsonpermission_create_object_v1_response_m_payload_2 = permission_create_object_v1_response_m_payload_convertToJSON(permission_create_object_v1_response_m_payload_2);
	printf("repeating permission_create_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsonpermission_create_object_v1_response_m_payload_2));
}

int main() {
  test_permission_create_object_v1_response_m_payload(1);
  test_permission_create_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // permission_create_object_v1_response_m_payload_MAIN
#endif // permission_create_object_v1_response_m_payload_TEST
