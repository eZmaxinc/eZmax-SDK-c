#ifndef versionhistory_get_object_v2_response_TEST
#define versionhistory_get_object_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define versionhistory_get_object_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/versionhistory_get_object_v2_response.h"
versionhistory_get_object_v2_response_t* instantiate_versionhistory_get_object_v2_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_versionhistory_get_object_v2_response_m_payload.c"


versionhistory_get_object_v2_response_t* instantiate_versionhistory_get_object_v2_response(int include_optional) {
  versionhistory_get_object_v2_response_t* versionhistory_get_object_v2_response = NULL;
  if (include_optional) {
    versionhistory_get_object_v2_response = versionhistory_get_object_v2_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_versionhistory_get_object_v2_response_m_payload(0)
    );
  } else {
    versionhistory_get_object_v2_response = versionhistory_get_object_v2_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return versionhistory_get_object_v2_response;
}


#ifdef versionhistory_get_object_v2_response_MAIN

void test_versionhistory_get_object_v2_response(int include_optional) {
    versionhistory_get_object_v2_response_t* versionhistory_get_object_v2_response_1 = instantiate_versionhistory_get_object_v2_response(include_optional);

	cJSON* jsonversionhistory_get_object_v2_response_1 = versionhistory_get_object_v2_response_convertToJSON(versionhistory_get_object_v2_response_1);
	printf("versionhistory_get_object_v2_response :\n%s\n", cJSON_Print(jsonversionhistory_get_object_v2_response_1));
	versionhistory_get_object_v2_response_t* versionhistory_get_object_v2_response_2 = versionhistory_get_object_v2_response_parseFromJSON(jsonversionhistory_get_object_v2_response_1);
	cJSON* jsonversionhistory_get_object_v2_response_2 = versionhistory_get_object_v2_response_convertToJSON(versionhistory_get_object_v2_response_2);
	printf("repeating versionhistory_get_object_v2_response:\n%s\n", cJSON_Print(jsonversionhistory_get_object_v2_response_2));
}

int main() {
  test_versionhistory_get_object_v2_response(1);
  test_versionhistory_get_object_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // versionhistory_get_object_v2_response_MAIN
#endif // versionhistory_get_object_v2_response_TEST
