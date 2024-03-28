#ifndef ezsignsigningreason_get_object_v2_response_TEST
#define ezsignsigningreason_get_object_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsigningreason_get_object_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsigningreason_get_object_v2_response.h"
ezsignsigningreason_get_object_v2_response_t* instantiate_ezsignsigningreason_get_object_v2_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_ezsignsigningreason_get_object_v2_response_m_payload.c"


ezsignsigningreason_get_object_v2_response_t* instantiate_ezsignsigningreason_get_object_v2_response(int include_optional) {
  ezsignsigningreason_get_object_v2_response_t* ezsignsigningreason_get_object_v2_response = NULL;
  if (include_optional) {
    ezsignsigningreason_get_object_v2_response = ezsignsigningreason_get_object_v2_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_ezsignsigningreason_get_object_v2_response_m_payload(0)
    );
  } else {
    ezsignsigningreason_get_object_v2_response = ezsignsigningreason_get_object_v2_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return ezsignsigningreason_get_object_v2_response;
}


#ifdef ezsignsigningreason_get_object_v2_response_MAIN

void test_ezsignsigningreason_get_object_v2_response(int include_optional) {
    ezsignsigningreason_get_object_v2_response_t* ezsignsigningreason_get_object_v2_response_1 = instantiate_ezsignsigningreason_get_object_v2_response(include_optional);

	cJSON* jsonezsignsigningreason_get_object_v2_response_1 = ezsignsigningreason_get_object_v2_response_convertToJSON(ezsignsigningreason_get_object_v2_response_1);
	printf("ezsignsigningreason_get_object_v2_response :\n%s\n", cJSON_Print(jsonezsignsigningreason_get_object_v2_response_1));
	ezsignsigningreason_get_object_v2_response_t* ezsignsigningreason_get_object_v2_response_2 = ezsignsigningreason_get_object_v2_response_parseFromJSON(jsonezsignsigningreason_get_object_v2_response_1);
	cJSON* jsonezsignsigningreason_get_object_v2_response_2 = ezsignsigningreason_get_object_v2_response_convertToJSON(ezsignsigningreason_get_object_v2_response_2);
	printf("repeating ezsignsigningreason_get_object_v2_response:\n%s\n", cJSON_Print(jsonezsignsigningreason_get_object_v2_response_2));
}

int main() {
  test_ezsignsigningreason_get_object_v2_response(1);
  test_ezsignsigningreason_get_object_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsigningreason_get_object_v2_response_MAIN
#endif // ezsignsigningreason_get_object_v2_response_TEST