#ifndef usergroupmembership_edit_object_v1_request_TEST
#define usergroupmembership_edit_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroupmembership_edit_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroupmembership_edit_object_v1_request.h"
usergroupmembership_edit_object_v1_request_t* instantiate_usergroupmembership_edit_object_v1_request(int include_optional);

#include "test_usergroupmembership_request_compound.c"


usergroupmembership_edit_object_v1_request_t* instantiate_usergroupmembership_edit_object_v1_request(int include_optional) {
  usergroupmembership_edit_object_v1_request_t* usergroupmembership_edit_object_v1_request = NULL;
  if (include_optional) {
    usergroupmembership_edit_object_v1_request = usergroupmembership_edit_object_v1_request_create(
       // false, not to have infinite recursion
      instantiate_usergroupmembership_request_compound(0)
    );
  } else {
    usergroupmembership_edit_object_v1_request = usergroupmembership_edit_object_v1_request_create(
      NULL
    );
  }

  return usergroupmembership_edit_object_v1_request;
}


#ifdef usergroupmembership_edit_object_v1_request_MAIN

void test_usergroupmembership_edit_object_v1_request(int include_optional) {
    usergroupmembership_edit_object_v1_request_t* usergroupmembership_edit_object_v1_request_1 = instantiate_usergroupmembership_edit_object_v1_request(include_optional);

	cJSON* jsonusergroupmembership_edit_object_v1_request_1 = usergroupmembership_edit_object_v1_request_convertToJSON(usergroupmembership_edit_object_v1_request_1);
	printf("usergroupmembership_edit_object_v1_request :\n%s\n", cJSON_Print(jsonusergroupmembership_edit_object_v1_request_1));
	usergroupmembership_edit_object_v1_request_t* usergroupmembership_edit_object_v1_request_2 = usergroupmembership_edit_object_v1_request_parseFromJSON(jsonusergroupmembership_edit_object_v1_request_1);
	cJSON* jsonusergroupmembership_edit_object_v1_request_2 = usergroupmembership_edit_object_v1_request_convertToJSON(usergroupmembership_edit_object_v1_request_2);
	printf("repeating usergroupmembership_edit_object_v1_request:\n%s\n", cJSON_Print(jsonusergroupmembership_edit_object_v1_request_2));
}

int main() {
  test_usergroupmembership_edit_object_v1_request(1);
  test_usergroupmembership_edit_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroupmembership_edit_object_v1_request_MAIN
#endif // usergroupmembership_edit_object_v1_request_TEST
