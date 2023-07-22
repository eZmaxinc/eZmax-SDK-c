#ifndef permission_request_TEST
#define permission_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define permission_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/permission_request.h"
permission_request_t* instantiate_permission_request(int include_optional);



permission_request_t* instantiate_permission_request(int include_optional) {
  permission_request_t* permission_request = NULL;
  if (include_optional) {
    permission_request = permission_request_create(
      31,
      70,
      99,
      2,
      1,
      53
    );
  } else {
    permission_request = permission_request_create(
      31,
      70,
      99,
      2,
      1,
      53
    );
  }

  return permission_request;
}


#ifdef permission_request_MAIN

void test_permission_request(int include_optional) {
    permission_request_t* permission_request_1 = instantiate_permission_request(include_optional);

	cJSON* jsonpermission_request_1 = permission_request_convertToJSON(permission_request_1);
	printf("permission_request :\n%s\n", cJSON_Print(jsonpermission_request_1));
	permission_request_t* permission_request_2 = permission_request_parseFromJSON(jsonpermission_request_1);
	cJSON* jsonpermission_request_2 = permission_request_convertToJSON(permission_request_2);
	printf("repeating permission_request:\n%s\n", cJSON_Print(jsonpermission_request_2));
}

int main() {
  test_permission_request(1);
  test_permission_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // permission_request_MAIN
#endif // permission_request_TEST
