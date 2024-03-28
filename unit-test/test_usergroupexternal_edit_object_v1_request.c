#ifndef usergroupexternal_edit_object_v1_request_TEST
#define usergroupexternal_edit_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroupexternal_edit_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroupexternal_edit_object_v1_request.h"
usergroupexternal_edit_object_v1_request_t* instantiate_usergroupexternal_edit_object_v1_request(int include_optional);

#include "test_usergroupexternal_request_compound.c"


usergroupexternal_edit_object_v1_request_t* instantiate_usergroupexternal_edit_object_v1_request(int include_optional) {
  usergroupexternal_edit_object_v1_request_t* usergroupexternal_edit_object_v1_request = NULL;
  if (include_optional) {
    usergroupexternal_edit_object_v1_request = usergroupexternal_edit_object_v1_request_create(
       // false, not to have infinite recursion
      instantiate_usergroupexternal_request_compound(0)
    );
  } else {
    usergroupexternal_edit_object_v1_request = usergroupexternal_edit_object_v1_request_create(
      NULL
    );
  }

  return usergroupexternal_edit_object_v1_request;
}


#ifdef usergroupexternal_edit_object_v1_request_MAIN

void test_usergroupexternal_edit_object_v1_request(int include_optional) {
    usergroupexternal_edit_object_v1_request_t* usergroupexternal_edit_object_v1_request_1 = instantiate_usergroupexternal_edit_object_v1_request(include_optional);

	cJSON* jsonusergroupexternal_edit_object_v1_request_1 = usergroupexternal_edit_object_v1_request_convertToJSON(usergroupexternal_edit_object_v1_request_1);
	printf("usergroupexternal_edit_object_v1_request :\n%s\n", cJSON_Print(jsonusergroupexternal_edit_object_v1_request_1));
	usergroupexternal_edit_object_v1_request_t* usergroupexternal_edit_object_v1_request_2 = usergroupexternal_edit_object_v1_request_parseFromJSON(jsonusergroupexternal_edit_object_v1_request_1);
	cJSON* jsonusergroupexternal_edit_object_v1_request_2 = usergroupexternal_edit_object_v1_request_convertToJSON(usergroupexternal_edit_object_v1_request_2);
	printf("repeating usergroupexternal_edit_object_v1_request:\n%s\n", cJSON_Print(jsonusergroupexternal_edit_object_v1_request_2));
}

int main() {
  test_usergroupexternal_edit_object_v1_request(1);
  test_usergroupexternal_edit_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroupexternal_edit_object_v1_request_MAIN
#endif // usergroupexternal_edit_object_v1_request_TEST