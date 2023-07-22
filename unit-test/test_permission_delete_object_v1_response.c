#ifndef permission_delete_object_v1_response_TEST
#define permission_delete_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define permission_delete_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/permission_delete_object_v1_response.h"
permission_delete_object_v1_response_t* instantiate_permission_delete_object_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


permission_delete_object_v1_response_t* instantiate_permission_delete_object_v1_response(int include_optional) {
  permission_delete_object_v1_response_t* permission_delete_object_v1_response = NULL;
  if (include_optional) {
    permission_delete_object_v1_response = permission_delete_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    permission_delete_object_v1_response = permission_delete_object_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return permission_delete_object_v1_response;
}


#ifdef permission_delete_object_v1_response_MAIN

void test_permission_delete_object_v1_response(int include_optional) {
    permission_delete_object_v1_response_t* permission_delete_object_v1_response_1 = instantiate_permission_delete_object_v1_response(include_optional);

	cJSON* jsonpermission_delete_object_v1_response_1 = permission_delete_object_v1_response_convertToJSON(permission_delete_object_v1_response_1);
	printf("permission_delete_object_v1_response :\n%s\n", cJSON_Print(jsonpermission_delete_object_v1_response_1));
	permission_delete_object_v1_response_t* permission_delete_object_v1_response_2 = permission_delete_object_v1_response_parseFromJSON(jsonpermission_delete_object_v1_response_1);
	cJSON* jsonpermission_delete_object_v1_response_2 = permission_delete_object_v1_response_convertToJSON(permission_delete_object_v1_response_2);
	printf("repeating permission_delete_object_v1_response:\n%s\n", cJSON_Print(jsonpermission_delete_object_v1_response_2));
}

int main() {
  test_permission_delete_object_v1_response(1);
  test_permission_delete_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // permission_delete_object_v1_response_MAIN
#endif // permission_delete_object_v1_response_TEST
