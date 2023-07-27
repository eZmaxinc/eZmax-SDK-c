#ifndef ezsignsignergroup_get_object_v2_response_TEST
#define ezsignsignergroup_get_object_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignergroup_get_object_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignergroup_get_object_v2_response.h"
ezsignsignergroup_get_object_v2_response_t* instantiate_ezsignsignergroup_get_object_v2_response(int include_optional);

#include "test_ezsignsignergroup_get_object_v2_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


ezsignsignergroup_get_object_v2_response_t* instantiate_ezsignsignergroup_get_object_v2_response(int include_optional) {
  ezsignsignergroup_get_object_v2_response_t* ezsignsignergroup_get_object_v2_response = NULL;
  if (include_optional) {
    ezsignsignergroup_get_object_v2_response = ezsignsignergroup_get_object_v2_response_create(
       // false, not to have infinite recursion
      instantiate_ezsignsignergroup_get_object_v2_response_m_payload(0),
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    ezsignsignergroup_get_object_v2_response = ezsignsignergroup_get_object_v2_response_create(
      NULL,
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return ezsignsignergroup_get_object_v2_response;
}


#ifdef ezsignsignergroup_get_object_v2_response_MAIN

void test_ezsignsignergroup_get_object_v2_response(int include_optional) {
    ezsignsignergroup_get_object_v2_response_t* ezsignsignergroup_get_object_v2_response_1 = instantiate_ezsignsignergroup_get_object_v2_response(include_optional);

	cJSON* jsonezsignsignergroup_get_object_v2_response_1 = ezsignsignergroup_get_object_v2_response_convertToJSON(ezsignsignergroup_get_object_v2_response_1);
	printf("ezsignsignergroup_get_object_v2_response :\n%s\n", cJSON_Print(jsonezsignsignergroup_get_object_v2_response_1));
	ezsignsignergroup_get_object_v2_response_t* ezsignsignergroup_get_object_v2_response_2 = ezsignsignergroup_get_object_v2_response_parseFromJSON(jsonezsignsignergroup_get_object_v2_response_1);
	cJSON* jsonezsignsignergroup_get_object_v2_response_2 = ezsignsignergroup_get_object_v2_response_convertToJSON(ezsignsignergroup_get_object_v2_response_2);
	printf("repeating ezsignsignergroup_get_object_v2_response:\n%s\n", cJSON_Print(jsonezsignsignergroup_get_object_v2_response_2));
}

int main() {
  test_ezsignsignergroup_get_object_v2_response(1);
  test_ezsignsignergroup_get_object_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignergroup_get_object_v2_response_MAIN
#endif // ezsignsignergroup_get_object_v2_response_TEST
