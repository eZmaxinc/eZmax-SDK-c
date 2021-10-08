#ifndef authenticate_authenticate_v2_response_TEST
#define authenticate_authenticate_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define authenticate_authenticate_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/authenticate_authenticate_v2_response.h"
authenticate_authenticate_v2_response_t* instantiate_authenticate_authenticate_v2_response(int include_optional);

#include "test_authenticate_authenticate_v2_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


authenticate_authenticate_v2_response_t* instantiate_authenticate_authenticate_v2_response(int include_optional) {
  authenticate_authenticate_v2_response_t* authenticate_authenticate_v2_response = NULL;
  if (include_optional) {
    authenticate_authenticate_v2_response = authenticate_authenticate_v2_response_create(
       // false, not to have infinite recursion
      instantiate_authenticate_authenticate_v2_response_m_payload(0),
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    authenticate_authenticate_v2_response = authenticate_authenticate_v2_response_create(
      NULL,
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return authenticate_authenticate_v2_response;
}


#ifdef authenticate_authenticate_v2_response_MAIN

void test_authenticate_authenticate_v2_response(int include_optional) {
    authenticate_authenticate_v2_response_t* authenticate_authenticate_v2_response_1 = instantiate_authenticate_authenticate_v2_response(include_optional);

	cJSON* jsonauthenticate_authenticate_v2_response_1 = authenticate_authenticate_v2_response_convertToJSON(authenticate_authenticate_v2_response_1);
	printf("authenticate_authenticate_v2_response :\n%s\n", cJSON_Print(jsonauthenticate_authenticate_v2_response_1));
	authenticate_authenticate_v2_response_t* authenticate_authenticate_v2_response_2 = authenticate_authenticate_v2_response_parseFromJSON(jsonauthenticate_authenticate_v2_response_1);
	cJSON* jsonauthenticate_authenticate_v2_response_2 = authenticate_authenticate_v2_response_convertToJSON(authenticate_authenticate_v2_response_2);
	printf("repeating authenticate_authenticate_v2_response:\n%s\n", cJSON_Print(jsonauthenticate_authenticate_v2_response_2));
}

int main() {
  test_authenticate_authenticate_v2_response(1);
  test_authenticate_authenticate_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // authenticate_authenticate_v2_response_MAIN
#endif // authenticate_authenticate_v2_response_TEST
