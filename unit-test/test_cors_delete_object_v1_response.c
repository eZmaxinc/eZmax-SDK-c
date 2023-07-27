#ifndef cors_delete_object_v1_response_TEST
#define cors_delete_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cors_delete_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cors_delete_object_v1_response.h"
cors_delete_object_v1_response_t* instantiate_cors_delete_object_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


cors_delete_object_v1_response_t* instantiate_cors_delete_object_v1_response(int include_optional) {
  cors_delete_object_v1_response_t* cors_delete_object_v1_response = NULL;
  if (include_optional) {
    cors_delete_object_v1_response = cors_delete_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    cors_delete_object_v1_response = cors_delete_object_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return cors_delete_object_v1_response;
}


#ifdef cors_delete_object_v1_response_MAIN

void test_cors_delete_object_v1_response(int include_optional) {
    cors_delete_object_v1_response_t* cors_delete_object_v1_response_1 = instantiate_cors_delete_object_v1_response(include_optional);

	cJSON* jsoncors_delete_object_v1_response_1 = cors_delete_object_v1_response_convertToJSON(cors_delete_object_v1_response_1);
	printf("cors_delete_object_v1_response :\n%s\n", cJSON_Print(jsoncors_delete_object_v1_response_1));
	cors_delete_object_v1_response_t* cors_delete_object_v1_response_2 = cors_delete_object_v1_response_parseFromJSON(jsoncors_delete_object_v1_response_1);
	cJSON* jsoncors_delete_object_v1_response_2 = cors_delete_object_v1_response_convertToJSON(cors_delete_object_v1_response_2);
	printf("repeating cors_delete_object_v1_response:\n%s\n", cJSON_Print(jsoncors_delete_object_v1_response_2));
}

int main() {
  test_cors_delete_object_v1_response(1);
  test_cors_delete_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // cors_delete_object_v1_response_MAIN
#endif // cors_delete_object_v1_response_TEST
