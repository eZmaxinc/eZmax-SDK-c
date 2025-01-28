#ifndef permission_edit_object_v1_request_TEST
#define permission_edit_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define permission_edit_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/permission_edit_object_v1_request.h"
permission_edit_object_v1_request_t* instantiate_permission_edit_object_v1_request(int include_optional);

#include "test_permission_request_compound.c"


permission_edit_object_v1_request_t* instantiate_permission_edit_object_v1_request(int include_optional) {
  permission_edit_object_v1_request_t* permission_edit_object_v1_request = NULL;
  if (include_optional) {
    permission_edit_object_v1_request = permission_edit_object_v1_request_create(
       // false, not to have infinite recursion
      instantiate_permission_request_compound(0)
    );
  } else {
    permission_edit_object_v1_request = permission_edit_object_v1_request_create(
      NULL
    );
  }

  return permission_edit_object_v1_request;
}


#ifdef permission_edit_object_v1_request_MAIN

void test_permission_edit_object_v1_request(int include_optional) {
    permission_edit_object_v1_request_t* permission_edit_object_v1_request_1 = instantiate_permission_edit_object_v1_request(include_optional);

	cJSON* jsonpermission_edit_object_v1_request_1 = permission_edit_object_v1_request_convertToJSON(permission_edit_object_v1_request_1);
	printf("permission_edit_object_v1_request :\n%s\n", cJSON_Print(jsonpermission_edit_object_v1_request_1));
	permission_edit_object_v1_request_t* permission_edit_object_v1_request_2 = permission_edit_object_v1_request_parseFromJSON(jsonpermission_edit_object_v1_request_1);
	cJSON* jsonpermission_edit_object_v1_request_2 = permission_edit_object_v1_request_convertToJSON(permission_edit_object_v1_request_2);
	printf("repeating permission_edit_object_v1_request:\n%s\n", cJSON_Print(jsonpermission_edit_object_v1_request_2));
}

int main() {
  test_permission_edit_object_v1_request(1);
  test_permission_edit_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // permission_edit_object_v1_request_MAIN
#endif // permission_edit_object_v1_request_TEST
