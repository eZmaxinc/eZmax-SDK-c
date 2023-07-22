#ifndef usergroupmembership_edit_object_v1_response_TEST
#define usergroupmembership_edit_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroupmembership_edit_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroupmembership_edit_object_v1_response.h"
usergroupmembership_edit_object_v1_response_t* instantiate_usergroupmembership_edit_object_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


usergroupmembership_edit_object_v1_response_t* instantiate_usergroupmembership_edit_object_v1_response(int include_optional) {
  usergroupmembership_edit_object_v1_response_t* usergroupmembership_edit_object_v1_response = NULL;
  if (include_optional) {
    usergroupmembership_edit_object_v1_response = usergroupmembership_edit_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    usergroupmembership_edit_object_v1_response = usergroupmembership_edit_object_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return usergroupmembership_edit_object_v1_response;
}


#ifdef usergroupmembership_edit_object_v1_response_MAIN

void test_usergroupmembership_edit_object_v1_response(int include_optional) {
    usergroupmembership_edit_object_v1_response_t* usergroupmembership_edit_object_v1_response_1 = instantiate_usergroupmembership_edit_object_v1_response(include_optional);

	cJSON* jsonusergroupmembership_edit_object_v1_response_1 = usergroupmembership_edit_object_v1_response_convertToJSON(usergroupmembership_edit_object_v1_response_1);
	printf("usergroupmembership_edit_object_v1_response :\n%s\n", cJSON_Print(jsonusergroupmembership_edit_object_v1_response_1));
	usergroupmembership_edit_object_v1_response_t* usergroupmembership_edit_object_v1_response_2 = usergroupmembership_edit_object_v1_response_parseFromJSON(jsonusergroupmembership_edit_object_v1_response_1);
	cJSON* jsonusergroupmembership_edit_object_v1_response_2 = usergroupmembership_edit_object_v1_response_convertToJSON(usergroupmembership_edit_object_v1_response_2);
	printf("repeating usergroupmembership_edit_object_v1_response:\n%s\n", cJSON_Print(jsonusergroupmembership_edit_object_v1_response_2));
}

int main() {
  test_usergroupmembership_edit_object_v1_response(1);
  test_usergroupmembership_edit_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroupmembership_edit_object_v1_response_MAIN
#endif // usergroupmembership_edit_object_v1_response_TEST
