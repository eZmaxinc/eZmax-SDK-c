#ifndef usergroup_create_object_v1_response_TEST
#define usergroup_create_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroup_create_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroup_create_object_v1_response.h"
usergroup_create_object_v1_response_t* instantiate_usergroup_create_object_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_usergroup_create_object_v1_response_m_payload.c"


usergroup_create_object_v1_response_t* instantiate_usergroup_create_object_v1_response(int include_optional) {
  usergroup_create_object_v1_response_t* usergroup_create_object_v1_response = NULL;
  if (include_optional) {
    usergroup_create_object_v1_response = usergroup_create_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_usergroup_create_object_v1_response_m_payload(0)
    );
  } else {
    usergroup_create_object_v1_response = usergroup_create_object_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return usergroup_create_object_v1_response;
}


#ifdef usergroup_create_object_v1_response_MAIN

void test_usergroup_create_object_v1_response(int include_optional) {
    usergroup_create_object_v1_response_t* usergroup_create_object_v1_response_1 = instantiate_usergroup_create_object_v1_response(include_optional);

	cJSON* jsonusergroup_create_object_v1_response_1 = usergroup_create_object_v1_response_convertToJSON(usergroup_create_object_v1_response_1);
	printf("usergroup_create_object_v1_response :\n%s\n", cJSON_Print(jsonusergroup_create_object_v1_response_1));
	usergroup_create_object_v1_response_t* usergroup_create_object_v1_response_2 = usergroup_create_object_v1_response_parseFromJSON(jsonusergroup_create_object_v1_response_1);
	cJSON* jsonusergroup_create_object_v1_response_2 = usergroup_create_object_v1_response_convertToJSON(usergroup_create_object_v1_response_2);
	printf("repeating usergroup_create_object_v1_response:\n%s\n", cJSON_Print(jsonusergroup_create_object_v1_response_2));
}

int main() {
  test_usergroup_create_object_v1_response(1);
  test_usergroup_create_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroup_create_object_v1_response_MAIN
#endif // usergroup_create_object_v1_response_TEST
