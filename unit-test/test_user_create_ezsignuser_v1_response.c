#ifndef user_create_ezsignuser_v1_response_TEST
#define user_create_ezsignuser_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define user_create_ezsignuser_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/user_create_ezsignuser_v1_response.h"
user_create_ezsignuser_v1_response_t* instantiate_user_create_ezsignuser_v1_response(int include_optional);

#include "test_user_create_ezsignuser_v1_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


user_create_ezsignuser_v1_response_t* instantiate_user_create_ezsignuser_v1_response(int include_optional) {
  user_create_ezsignuser_v1_response_t* user_create_ezsignuser_v1_response = NULL;
  if (include_optional) {
    user_create_ezsignuser_v1_response = user_create_ezsignuser_v1_response_create(
      {"a_sEmailAddressSuccess":["someone@example.com","someone2@example.com"],"a_sEmailAddressFailure":["UserAlreadyExists@example.com"]},
      {"iVersionMin":1,"iVersionMax":2,"a_RequiredPermissions":[45,61]},
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    user_create_ezsignuser_v1_response = user_create_ezsignuser_v1_response_create(
      {"a_sEmailAddressSuccess":["someone@example.com","someone2@example.com"],"a_sEmailAddressFailure":["UserAlreadyExists@example.com"]},
      {"iVersionMin":1,"iVersionMax":2,"a_RequiredPermissions":[45,61]},
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return user_create_ezsignuser_v1_response;
}


#ifdef user_create_ezsignuser_v1_response_MAIN

void test_user_create_ezsignuser_v1_response(int include_optional) {
    user_create_ezsignuser_v1_response_t* user_create_ezsignuser_v1_response_1 = instantiate_user_create_ezsignuser_v1_response(include_optional);

	cJSON* jsonuser_create_ezsignuser_v1_response_1 = user_create_ezsignuser_v1_response_convertToJSON(user_create_ezsignuser_v1_response_1);
	printf("user_create_ezsignuser_v1_response :\n%s\n", cJSON_Print(jsonuser_create_ezsignuser_v1_response_1));
	user_create_ezsignuser_v1_response_t* user_create_ezsignuser_v1_response_2 = user_create_ezsignuser_v1_response_parseFromJSON(jsonuser_create_ezsignuser_v1_response_1);
	cJSON* jsonuser_create_ezsignuser_v1_response_2 = user_create_ezsignuser_v1_response_convertToJSON(user_create_ezsignuser_v1_response_2);
	printf("repeating user_create_ezsignuser_v1_response:\n%s\n", cJSON_Print(jsonuser_create_ezsignuser_v1_response_2));
}

int main() {
  test_user_create_ezsignuser_v1_response(1);
  test_user_create_ezsignuser_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // user_create_ezsignuser_v1_response_MAIN
#endif // user_create_ezsignuser_v1_response_TEST
