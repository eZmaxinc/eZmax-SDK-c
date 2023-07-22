#ifndef permission_create_object_v1_request_TEST
#define permission_create_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define permission_create_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/permission_create_object_v1_request.h"
permission_create_object_v1_request_t* instantiate_permission_create_object_v1_request(int include_optional);



permission_create_object_v1_request_t* instantiate_permission_create_object_v1_request(int include_optional) {
  permission_create_object_v1_request_t* permission_create_object_v1_request = NULL;
  if (include_optional) {
    permission_create_object_v1_request = permission_create_object_v1_request_create(
      list_createList()
    );
  } else {
    permission_create_object_v1_request = permission_create_object_v1_request_create(
      list_createList()
    );
  }

  return permission_create_object_v1_request;
}


#ifdef permission_create_object_v1_request_MAIN

void test_permission_create_object_v1_request(int include_optional) {
    permission_create_object_v1_request_t* permission_create_object_v1_request_1 = instantiate_permission_create_object_v1_request(include_optional);

	cJSON* jsonpermission_create_object_v1_request_1 = permission_create_object_v1_request_convertToJSON(permission_create_object_v1_request_1);
	printf("permission_create_object_v1_request :\n%s\n", cJSON_Print(jsonpermission_create_object_v1_request_1));
	permission_create_object_v1_request_t* permission_create_object_v1_request_2 = permission_create_object_v1_request_parseFromJSON(jsonpermission_create_object_v1_request_1);
	cJSON* jsonpermission_create_object_v1_request_2 = permission_create_object_v1_request_convertToJSON(permission_create_object_v1_request_2);
	printf("repeating permission_create_object_v1_request:\n%s\n", cJSON_Print(jsonpermission_create_object_v1_request_2));
}

int main() {
  test_permission_create_object_v1_request(1);
  test_permission_create_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // permission_create_object_v1_request_MAIN
#endif // permission_create_object_v1_request_TEST
