#ifndef user_edit_colleagues_v2_response_TEST
#define user_edit_colleagues_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define user_edit_colleagues_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/user_edit_colleagues_v2_response.h"
user_edit_colleagues_v2_response_t* instantiate_user_edit_colleagues_v2_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_user_edit_colleagues_v2_response_m_payload.c"


user_edit_colleagues_v2_response_t* instantiate_user_edit_colleagues_v2_response(int include_optional) {
  user_edit_colleagues_v2_response_t* user_edit_colleagues_v2_response = NULL;
  if (include_optional) {
    user_edit_colleagues_v2_response = user_edit_colleagues_v2_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_user_edit_colleagues_v2_response_m_payload(0)
    );
  } else {
    user_edit_colleagues_v2_response = user_edit_colleagues_v2_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return user_edit_colleagues_v2_response;
}


#ifdef user_edit_colleagues_v2_response_MAIN

void test_user_edit_colleagues_v2_response(int include_optional) {
    user_edit_colleagues_v2_response_t* user_edit_colleagues_v2_response_1 = instantiate_user_edit_colleagues_v2_response(include_optional);

	cJSON* jsonuser_edit_colleagues_v2_response_1 = user_edit_colleagues_v2_response_convertToJSON(user_edit_colleagues_v2_response_1);
	printf("user_edit_colleagues_v2_response :\n%s\n", cJSON_Print(jsonuser_edit_colleagues_v2_response_1));
	user_edit_colleagues_v2_response_t* user_edit_colleagues_v2_response_2 = user_edit_colleagues_v2_response_parseFromJSON(jsonuser_edit_colleagues_v2_response_1);
	cJSON* jsonuser_edit_colleagues_v2_response_2 = user_edit_colleagues_v2_response_convertToJSON(user_edit_colleagues_v2_response_2);
	printf("repeating user_edit_colleagues_v2_response:\n%s\n", cJSON_Print(jsonuser_edit_colleagues_v2_response_2));
}

int main() {
  test_user_edit_colleagues_v2_response(1);
  test_user_edit_colleagues_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // user_edit_colleagues_v2_response_MAIN
#endif // user_edit_colleagues_v2_response_TEST
