#ifndef cors_get_object_v2_response_TEST
#define cors_get_object_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cors_get_object_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cors_get_object_v2_response.h"
cors_get_object_v2_response_t* instantiate_cors_get_object_v2_response(int include_optional);

#include "test_cors_get_object_v2_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


cors_get_object_v2_response_t* instantiate_cors_get_object_v2_response(int include_optional) {
  cors_get_object_v2_response_t* cors_get_object_v2_response = NULL;
  if (include_optional) {
    cors_get_object_v2_response = cors_get_object_v2_response_create(
       // false, not to have infinite recursion
      instantiate_cors_get_object_v2_response_m_payload(0),
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    cors_get_object_v2_response = cors_get_object_v2_response_create(
      NULL,
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return cors_get_object_v2_response;
}


#ifdef cors_get_object_v2_response_MAIN

void test_cors_get_object_v2_response(int include_optional) {
    cors_get_object_v2_response_t* cors_get_object_v2_response_1 = instantiate_cors_get_object_v2_response(include_optional);

	cJSON* jsoncors_get_object_v2_response_1 = cors_get_object_v2_response_convertToJSON(cors_get_object_v2_response_1);
	printf("cors_get_object_v2_response :\n%s\n", cJSON_Print(jsoncors_get_object_v2_response_1));
	cors_get_object_v2_response_t* cors_get_object_v2_response_2 = cors_get_object_v2_response_parseFromJSON(jsoncors_get_object_v2_response_1);
	cJSON* jsoncors_get_object_v2_response_2 = cors_get_object_v2_response_convertToJSON(cors_get_object_v2_response_2);
	printf("repeating cors_get_object_v2_response:\n%s\n", cJSON_Print(jsoncors_get_object_v2_response_2));
}

int main() {
  test_cors_get_object_v2_response(1);
  test_cors_get_object_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // cors_get_object_v2_response_MAIN
#endif // cors_get_object_v2_response_TEST
