#ifndef permission_get_object_v2_response_all_of_TEST
#define permission_get_object_v2_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define permission_get_object_v2_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/permission_get_object_v2_response_all_of.h"
permission_get_object_v2_response_all_of_t* instantiate_permission_get_object_v2_response_all_of(int include_optional);

#include "test_permission_get_object_v2_response_m_payload.c"


permission_get_object_v2_response_all_of_t* instantiate_permission_get_object_v2_response_all_of(int include_optional) {
  permission_get_object_v2_response_all_of_t* permission_get_object_v2_response_all_of = NULL;
  if (include_optional) {
    permission_get_object_v2_response_all_of = permission_get_object_v2_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_permission_get_object_v2_response_m_payload(0)
    );
  } else {
    permission_get_object_v2_response_all_of = permission_get_object_v2_response_all_of_create(
      NULL
    );
  }

  return permission_get_object_v2_response_all_of;
}


#ifdef permission_get_object_v2_response_all_of_MAIN

void test_permission_get_object_v2_response_all_of(int include_optional) {
    permission_get_object_v2_response_all_of_t* permission_get_object_v2_response_all_of_1 = instantiate_permission_get_object_v2_response_all_of(include_optional);

	cJSON* jsonpermission_get_object_v2_response_all_of_1 = permission_get_object_v2_response_all_of_convertToJSON(permission_get_object_v2_response_all_of_1);
	printf("permission_get_object_v2_response_all_of :\n%s\n", cJSON_Print(jsonpermission_get_object_v2_response_all_of_1));
	permission_get_object_v2_response_all_of_t* permission_get_object_v2_response_all_of_2 = permission_get_object_v2_response_all_of_parseFromJSON(jsonpermission_get_object_v2_response_all_of_1);
	cJSON* jsonpermission_get_object_v2_response_all_of_2 = permission_get_object_v2_response_all_of_convertToJSON(permission_get_object_v2_response_all_of_2);
	printf("repeating permission_get_object_v2_response_all_of:\n%s\n", cJSON_Print(jsonpermission_get_object_v2_response_all_of_2));
}

int main() {
  test_permission_get_object_v2_response_all_of(1);
  test_permission_get_object_v2_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // permission_get_object_v2_response_all_of_MAIN
#endif // permission_get_object_v2_response_all_of_TEST
