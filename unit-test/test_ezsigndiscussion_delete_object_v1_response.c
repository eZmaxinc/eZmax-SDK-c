#ifndef ezsigndiscussion_delete_object_v1_response_TEST
#define ezsigndiscussion_delete_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigndiscussion_delete_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigndiscussion_delete_object_v1_response.h"
ezsigndiscussion_delete_object_v1_response_t* instantiate_ezsigndiscussion_delete_object_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


ezsigndiscussion_delete_object_v1_response_t* instantiate_ezsigndiscussion_delete_object_v1_response(int include_optional) {
  ezsigndiscussion_delete_object_v1_response_t* ezsigndiscussion_delete_object_v1_response = NULL;
  if (include_optional) {
    ezsigndiscussion_delete_object_v1_response = ezsigndiscussion_delete_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    ezsigndiscussion_delete_object_v1_response = ezsigndiscussion_delete_object_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return ezsigndiscussion_delete_object_v1_response;
}


#ifdef ezsigndiscussion_delete_object_v1_response_MAIN

void test_ezsigndiscussion_delete_object_v1_response(int include_optional) {
    ezsigndiscussion_delete_object_v1_response_t* ezsigndiscussion_delete_object_v1_response_1 = instantiate_ezsigndiscussion_delete_object_v1_response(include_optional);

	cJSON* jsonezsigndiscussion_delete_object_v1_response_1 = ezsigndiscussion_delete_object_v1_response_convertToJSON(ezsigndiscussion_delete_object_v1_response_1);
	printf("ezsigndiscussion_delete_object_v1_response :\n%s\n", cJSON_Print(jsonezsigndiscussion_delete_object_v1_response_1));
	ezsigndiscussion_delete_object_v1_response_t* ezsigndiscussion_delete_object_v1_response_2 = ezsigndiscussion_delete_object_v1_response_parseFromJSON(jsonezsigndiscussion_delete_object_v1_response_1);
	cJSON* jsonezsigndiscussion_delete_object_v1_response_2 = ezsigndiscussion_delete_object_v1_response_convertToJSON(ezsigndiscussion_delete_object_v1_response_2);
	printf("repeating ezsigndiscussion_delete_object_v1_response:\n%s\n", cJSON_Print(jsonezsigndiscussion_delete_object_v1_response_2));
}

int main() {
  test_ezsigndiscussion_delete_object_v1_response(1);
  test_ezsigndiscussion_delete_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigndiscussion_delete_object_v1_response_MAIN
#endif // ezsigndiscussion_delete_object_v1_response_TEST
