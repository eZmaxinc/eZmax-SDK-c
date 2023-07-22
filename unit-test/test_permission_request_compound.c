#ifndef permission_request_compound_TEST
#define permission_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define permission_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/permission_request_compound.h"
permission_request_compound_t* instantiate_permission_request_compound(int include_optional);



permission_request_compound_t* instantiate_permission_request_compound(int include_optional) {
  permission_request_compound_t* permission_request_compound = NULL;
  if (include_optional) {
    permission_request_compound = permission_request_compound_create(
      31,
      70,
      99,
      2,
      1,
      53
    );
  } else {
    permission_request_compound = permission_request_compound_create(
      31,
      70,
      99,
      2,
      1,
      53
    );
  }

  return permission_request_compound;
}


#ifdef permission_request_compound_MAIN

void test_permission_request_compound(int include_optional) {
    permission_request_compound_t* permission_request_compound_1 = instantiate_permission_request_compound(include_optional);

	cJSON* jsonpermission_request_compound_1 = permission_request_compound_convertToJSON(permission_request_compound_1);
	printf("permission_request_compound :\n%s\n", cJSON_Print(jsonpermission_request_compound_1));
	permission_request_compound_t* permission_request_compound_2 = permission_request_compound_parseFromJSON(jsonpermission_request_compound_1);
	cJSON* jsonpermission_request_compound_2 = permission_request_compound_convertToJSON(permission_request_compound_2);
	printf("repeating permission_request_compound:\n%s\n", cJSON_Print(jsonpermission_request_compound_2));
}

int main() {
  test_permission_request_compound(1);
  test_permission_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // permission_request_compound_MAIN
#endif // permission_request_compound_TEST
