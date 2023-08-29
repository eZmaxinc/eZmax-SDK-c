#ifndef ezsigntemplateformfieldgroup_get_object_v2_response_TEST
#define ezsigntemplateformfieldgroup_get_object_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplateformfieldgroup_get_object_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplateformfieldgroup_get_object_v2_response.h"
ezsigntemplateformfieldgroup_get_object_v2_response_t* instantiate_ezsigntemplateformfieldgroup_get_object_v2_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_ezsigntemplateformfieldgroup_get_object_v2_response_m_payload.c"


ezsigntemplateformfieldgroup_get_object_v2_response_t* instantiate_ezsigntemplateformfieldgroup_get_object_v2_response(int include_optional) {
  ezsigntemplateformfieldgroup_get_object_v2_response_t* ezsigntemplateformfieldgroup_get_object_v2_response = NULL;
  if (include_optional) {
    ezsigntemplateformfieldgroup_get_object_v2_response = ezsigntemplateformfieldgroup_get_object_v2_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_ezsigntemplateformfieldgroup_get_object_v2_response_m_payload(0)
    );
  } else {
    ezsigntemplateformfieldgroup_get_object_v2_response = ezsigntemplateformfieldgroup_get_object_v2_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return ezsigntemplateformfieldgroup_get_object_v2_response;
}


#ifdef ezsigntemplateformfieldgroup_get_object_v2_response_MAIN

void test_ezsigntemplateformfieldgroup_get_object_v2_response(int include_optional) {
    ezsigntemplateformfieldgroup_get_object_v2_response_t* ezsigntemplateformfieldgroup_get_object_v2_response_1 = instantiate_ezsigntemplateformfieldgroup_get_object_v2_response(include_optional);

	cJSON* jsonezsigntemplateformfieldgroup_get_object_v2_response_1 = ezsigntemplateformfieldgroup_get_object_v2_response_convertToJSON(ezsigntemplateformfieldgroup_get_object_v2_response_1);
	printf("ezsigntemplateformfieldgroup_get_object_v2_response :\n%s\n", cJSON_Print(jsonezsigntemplateformfieldgroup_get_object_v2_response_1));
	ezsigntemplateformfieldgroup_get_object_v2_response_t* ezsigntemplateformfieldgroup_get_object_v2_response_2 = ezsigntemplateformfieldgroup_get_object_v2_response_parseFromJSON(jsonezsigntemplateformfieldgroup_get_object_v2_response_1);
	cJSON* jsonezsigntemplateformfieldgroup_get_object_v2_response_2 = ezsigntemplateformfieldgroup_get_object_v2_response_convertToJSON(ezsigntemplateformfieldgroup_get_object_v2_response_2);
	printf("repeating ezsigntemplateformfieldgroup_get_object_v2_response:\n%s\n", cJSON_Print(jsonezsigntemplateformfieldgroup_get_object_v2_response_2));
}

int main() {
  test_ezsigntemplateformfieldgroup_get_object_v2_response(1);
  test_ezsigntemplateformfieldgroup_get_object_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplateformfieldgroup_get_object_v2_response_MAIN
#endif // ezsigntemplateformfieldgroup_get_object_v2_response_TEST
