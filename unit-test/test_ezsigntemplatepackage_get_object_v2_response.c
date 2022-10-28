#ifndef ezsigntemplatepackage_get_object_v2_response_TEST
#define ezsigntemplatepackage_get_object_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepackage_get_object_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepackage_get_object_v2_response.h"
ezsigntemplatepackage_get_object_v2_response_t* instantiate_ezsigntemplatepackage_get_object_v2_response(int include_optional);

#include "test_ezsigntemplatepackage_get_object_v2_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


ezsigntemplatepackage_get_object_v2_response_t* instantiate_ezsigntemplatepackage_get_object_v2_response(int include_optional) {
  ezsigntemplatepackage_get_object_v2_response_t* ezsigntemplatepackage_get_object_v2_response = NULL;
  if (include_optional) {
    ezsigntemplatepackage_get_object_v2_response = ezsigntemplatepackage_get_object_v2_response_create(
       // false, not to have infinite recursion
      instantiate_ezsigntemplatepackage_get_object_v2_response_m_payload(0),
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    ezsigntemplatepackage_get_object_v2_response = ezsigntemplatepackage_get_object_v2_response_create(
      NULL,
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return ezsigntemplatepackage_get_object_v2_response;
}


#ifdef ezsigntemplatepackage_get_object_v2_response_MAIN

void test_ezsigntemplatepackage_get_object_v2_response(int include_optional) {
    ezsigntemplatepackage_get_object_v2_response_t* ezsigntemplatepackage_get_object_v2_response_1 = instantiate_ezsigntemplatepackage_get_object_v2_response(include_optional);

	cJSON* jsonezsigntemplatepackage_get_object_v2_response_1 = ezsigntemplatepackage_get_object_v2_response_convertToJSON(ezsigntemplatepackage_get_object_v2_response_1);
	printf("ezsigntemplatepackage_get_object_v2_response :\n%s\n", cJSON_Print(jsonezsigntemplatepackage_get_object_v2_response_1));
	ezsigntemplatepackage_get_object_v2_response_t* ezsigntemplatepackage_get_object_v2_response_2 = ezsigntemplatepackage_get_object_v2_response_parseFromJSON(jsonezsigntemplatepackage_get_object_v2_response_1);
	cJSON* jsonezsigntemplatepackage_get_object_v2_response_2 = ezsigntemplatepackage_get_object_v2_response_convertToJSON(ezsigntemplatepackage_get_object_v2_response_2);
	printf("repeating ezsigntemplatepackage_get_object_v2_response:\n%s\n", cJSON_Print(jsonezsigntemplatepackage_get_object_v2_response_2));
}

int main() {
  test_ezsigntemplatepackage_get_object_v2_response(1);
  test_ezsigntemplatepackage_get_object_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepackage_get_object_v2_response_MAIN
#endif // ezsigntemplatepackage_get_object_v2_response_TEST
