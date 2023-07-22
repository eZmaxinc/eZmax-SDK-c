#ifndef permission_response_TEST
#define permission_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define permission_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/permission_response.h"
permission_response_t* instantiate_permission_response(int include_optional);



permission_response_t* instantiate_permission_response(int include_optional) {
  permission_response_t* permission_response = NULL;
  if (include_optional) {
    permission_response = permission_response_create(
      31,
      70,
      99,
      2,
      1,
      53,
      "Acme inc."
    );
  } else {
    permission_response = permission_response_create(
      31,
      70,
      99,
      2,
      1,
      53,
      "Acme inc."
    );
  }

  return permission_response;
}


#ifdef permission_response_MAIN

void test_permission_response(int include_optional) {
    permission_response_t* permission_response_1 = instantiate_permission_response(include_optional);

	cJSON* jsonpermission_response_1 = permission_response_convertToJSON(permission_response_1);
	printf("permission_response :\n%s\n", cJSON_Print(jsonpermission_response_1));
	permission_response_t* permission_response_2 = permission_response_parseFromJSON(jsonpermission_response_1);
	cJSON* jsonpermission_response_2 = permission_response_convertToJSON(permission_response_2);
	printf("repeating permission_response:\n%s\n", cJSON_Print(jsonpermission_response_2));
}

int main() {
  test_permission_response(1);
  test_permission_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // permission_response_MAIN
#endif // permission_response_TEST
