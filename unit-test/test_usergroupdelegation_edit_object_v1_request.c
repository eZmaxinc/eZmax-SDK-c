#ifndef usergroupdelegation_edit_object_v1_request_TEST
#define usergroupdelegation_edit_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroupdelegation_edit_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroupdelegation_edit_object_v1_request.h"
usergroupdelegation_edit_object_v1_request_t* instantiate_usergroupdelegation_edit_object_v1_request(int include_optional);

#include "test_usergroupdelegation_request_compound.c"


usergroupdelegation_edit_object_v1_request_t* instantiate_usergroupdelegation_edit_object_v1_request(int include_optional) {
  usergroupdelegation_edit_object_v1_request_t* usergroupdelegation_edit_object_v1_request = NULL;
  if (include_optional) {
    usergroupdelegation_edit_object_v1_request = usergroupdelegation_edit_object_v1_request_create(
       // false, not to have infinite recursion
      instantiate_usergroupdelegation_request_compound(0)
    );
  } else {
    usergroupdelegation_edit_object_v1_request = usergroupdelegation_edit_object_v1_request_create(
      NULL
    );
  }

  return usergroupdelegation_edit_object_v1_request;
}


#ifdef usergroupdelegation_edit_object_v1_request_MAIN

void test_usergroupdelegation_edit_object_v1_request(int include_optional) {
    usergroupdelegation_edit_object_v1_request_t* usergroupdelegation_edit_object_v1_request_1 = instantiate_usergroupdelegation_edit_object_v1_request(include_optional);

	cJSON* jsonusergroupdelegation_edit_object_v1_request_1 = usergroupdelegation_edit_object_v1_request_convertToJSON(usergroupdelegation_edit_object_v1_request_1);
	printf("usergroupdelegation_edit_object_v1_request :\n%s\n", cJSON_Print(jsonusergroupdelegation_edit_object_v1_request_1));
	usergroupdelegation_edit_object_v1_request_t* usergroupdelegation_edit_object_v1_request_2 = usergroupdelegation_edit_object_v1_request_parseFromJSON(jsonusergroupdelegation_edit_object_v1_request_1);
	cJSON* jsonusergroupdelegation_edit_object_v1_request_2 = usergroupdelegation_edit_object_v1_request_convertToJSON(usergroupdelegation_edit_object_v1_request_2);
	printf("repeating usergroupdelegation_edit_object_v1_request:\n%s\n", cJSON_Print(jsonusergroupdelegation_edit_object_v1_request_2));
}

int main() {
  test_usergroupdelegation_edit_object_v1_request(1);
  test_usergroupdelegation_edit_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroupdelegation_edit_object_v1_request_MAIN
#endif // usergroupdelegation_edit_object_v1_request_TEST
