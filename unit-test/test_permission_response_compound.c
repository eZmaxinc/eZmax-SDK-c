#ifndef permission_response_compound_TEST
#define permission_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define permission_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/permission_response_compound.h"
permission_response_compound_t* instantiate_permission_response_compound(int include_optional);



permission_response_compound_t* instantiate_permission_response_compound(int include_optional) {
  permission_response_compound_t* permission_response_compound = NULL;
  if (include_optional) {
    permission_response_compound = permission_response_compound_create(
      31,
      70,
      99,
      2,
      1,
      53,
      "Acme inc."
    );
  } else {
    permission_response_compound = permission_response_compound_create(
      31,
      70,
      99,
      2,
      1,
      53,
      "Acme inc."
    );
  }

  return permission_response_compound;
}


#ifdef permission_response_compound_MAIN

void test_permission_response_compound(int include_optional) {
    permission_response_compound_t* permission_response_compound_1 = instantiate_permission_response_compound(include_optional);

	cJSON* jsonpermission_response_compound_1 = permission_response_compound_convertToJSON(permission_response_compound_1);
	printf("permission_response_compound :\n%s\n", cJSON_Print(jsonpermission_response_compound_1));
	permission_response_compound_t* permission_response_compound_2 = permission_response_compound_parseFromJSON(jsonpermission_response_compound_1);
	cJSON* jsonpermission_response_compound_2 = permission_response_compound_convertToJSON(permission_response_compound_2);
	printf("repeating permission_response_compound:\n%s\n", cJSON_Print(jsonpermission_response_compound_2));
}

int main() {
  test_permission_response_compound(1);
  test_permission_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // permission_response_compound_MAIN
#endif // permission_response_compound_TEST
