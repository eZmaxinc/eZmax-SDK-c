#ifndef ezsignsignergroup_delete_object_v1_response_TEST
#define ezsignsignergroup_delete_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignergroup_delete_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignergroup_delete_object_v1_response.h"
ezsignsignergroup_delete_object_v1_response_t* instantiate_ezsignsignergroup_delete_object_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


ezsignsignergroup_delete_object_v1_response_t* instantiate_ezsignsignergroup_delete_object_v1_response(int include_optional) {
  ezsignsignergroup_delete_object_v1_response_t* ezsignsignergroup_delete_object_v1_response = NULL;
  if (include_optional) {
    ezsignsignergroup_delete_object_v1_response = ezsignsignergroup_delete_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    ezsignsignergroup_delete_object_v1_response = ezsignsignergroup_delete_object_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return ezsignsignergroup_delete_object_v1_response;
}


#ifdef ezsignsignergroup_delete_object_v1_response_MAIN

void test_ezsignsignergroup_delete_object_v1_response(int include_optional) {
    ezsignsignergroup_delete_object_v1_response_t* ezsignsignergroup_delete_object_v1_response_1 = instantiate_ezsignsignergroup_delete_object_v1_response(include_optional);

	cJSON* jsonezsignsignergroup_delete_object_v1_response_1 = ezsignsignergroup_delete_object_v1_response_convertToJSON(ezsignsignergroup_delete_object_v1_response_1);
	printf("ezsignsignergroup_delete_object_v1_response :\n%s\n", cJSON_Print(jsonezsignsignergroup_delete_object_v1_response_1));
	ezsignsignergroup_delete_object_v1_response_t* ezsignsignergroup_delete_object_v1_response_2 = ezsignsignergroup_delete_object_v1_response_parseFromJSON(jsonezsignsignergroup_delete_object_v1_response_1);
	cJSON* jsonezsignsignergroup_delete_object_v1_response_2 = ezsignsignergroup_delete_object_v1_response_convertToJSON(ezsignsignergroup_delete_object_v1_response_2);
	printf("repeating ezsignsignergroup_delete_object_v1_response:\n%s\n", cJSON_Print(jsonezsignsignergroup_delete_object_v1_response_2));
}

int main() {
  test_ezsignsignergroup_delete_object_v1_response(1);
  test_ezsignsignergroup_delete_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignergroup_delete_object_v1_response_MAIN
#endif // ezsignsignergroup_delete_object_v1_response_TEST
