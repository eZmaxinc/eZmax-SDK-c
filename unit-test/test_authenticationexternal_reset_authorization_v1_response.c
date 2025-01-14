#ifndef authenticationexternal_reset_authorization_v1_response_TEST
#define authenticationexternal_reset_authorization_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define authenticationexternal_reset_authorization_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/authenticationexternal_reset_authorization_v1_response.h"
authenticationexternal_reset_authorization_v1_response_t* instantiate_authenticationexternal_reset_authorization_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


authenticationexternal_reset_authorization_v1_response_t* instantiate_authenticationexternal_reset_authorization_v1_response(int include_optional) {
  authenticationexternal_reset_authorization_v1_response_t* authenticationexternal_reset_authorization_v1_response = NULL;
  if (include_optional) {
    authenticationexternal_reset_authorization_v1_response = authenticationexternal_reset_authorization_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    authenticationexternal_reset_authorization_v1_response = authenticationexternal_reset_authorization_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return authenticationexternal_reset_authorization_v1_response;
}


#ifdef authenticationexternal_reset_authorization_v1_response_MAIN

void test_authenticationexternal_reset_authorization_v1_response(int include_optional) {
    authenticationexternal_reset_authorization_v1_response_t* authenticationexternal_reset_authorization_v1_response_1 = instantiate_authenticationexternal_reset_authorization_v1_response(include_optional);

	cJSON* jsonauthenticationexternal_reset_authorization_v1_response_1 = authenticationexternal_reset_authorization_v1_response_convertToJSON(authenticationexternal_reset_authorization_v1_response_1);
	printf("authenticationexternal_reset_authorization_v1_response :\n%s\n", cJSON_Print(jsonauthenticationexternal_reset_authorization_v1_response_1));
	authenticationexternal_reset_authorization_v1_response_t* authenticationexternal_reset_authorization_v1_response_2 = authenticationexternal_reset_authorization_v1_response_parseFromJSON(jsonauthenticationexternal_reset_authorization_v1_response_1);
	cJSON* jsonauthenticationexternal_reset_authorization_v1_response_2 = authenticationexternal_reset_authorization_v1_response_convertToJSON(authenticationexternal_reset_authorization_v1_response_2);
	printf("repeating authenticationexternal_reset_authorization_v1_response:\n%s\n", cJSON_Print(jsonauthenticationexternal_reset_authorization_v1_response_2));
}

int main() {
  test_authenticationexternal_reset_authorization_v1_response(1);
  test_authenticationexternal_reset_authorization_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // authenticationexternal_reset_authorization_v1_response_MAIN
#endif // authenticationexternal_reset_authorization_v1_response_TEST
