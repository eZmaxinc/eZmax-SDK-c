#ifndef ezsigntemplatesigner_get_object_v2_response_TEST
#define ezsigntemplatesigner_get_object_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatesigner_get_object_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatesigner_get_object_v2_response.h"
ezsigntemplatesigner_get_object_v2_response_t* instantiate_ezsigntemplatesigner_get_object_v2_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_ezsigntemplatesigner_get_object_v2_response_m_payload.c"


ezsigntemplatesigner_get_object_v2_response_t* instantiate_ezsigntemplatesigner_get_object_v2_response(int include_optional) {
  ezsigntemplatesigner_get_object_v2_response_t* ezsigntemplatesigner_get_object_v2_response = NULL;
  if (include_optional) {
    ezsigntemplatesigner_get_object_v2_response = ezsigntemplatesigner_get_object_v2_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_ezsigntemplatesigner_get_object_v2_response_m_payload(0)
    );
  } else {
    ezsigntemplatesigner_get_object_v2_response = ezsigntemplatesigner_get_object_v2_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return ezsigntemplatesigner_get_object_v2_response;
}


#ifdef ezsigntemplatesigner_get_object_v2_response_MAIN

void test_ezsigntemplatesigner_get_object_v2_response(int include_optional) {
    ezsigntemplatesigner_get_object_v2_response_t* ezsigntemplatesigner_get_object_v2_response_1 = instantiate_ezsigntemplatesigner_get_object_v2_response(include_optional);

	cJSON* jsonezsigntemplatesigner_get_object_v2_response_1 = ezsigntemplatesigner_get_object_v2_response_convertToJSON(ezsigntemplatesigner_get_object_v2_response_1);
	printf("ezsigntemplatesigner_get_object_v2_response :\n%s\n", cJSON_Print(jsonezsigntemplatesigner_get_object_v2_response_1));
	ezsigntemplatesigner_get_object_v2_response_t* ezsigntemplatesigner_get_object_v2_response_2 = ezsigntemplatesigner_get_object_v2_response_parseFromJSON(jsonezsigntemplatesigner_get_object_v2_response_1);
	cJSON* jsonezsigntemplatesigner_get_object_v2_response_2 = ezsigntemplatesigner_get_object_v2_response_convertToJSON(ezsigntemplatesigner_get_object_v2_response_2);
	printf("repeating ezsigntemplatesigner_get_object_v2_response:\n%s\n", cJSON_Print(jsonezsigntemplatesigner_get_object_v2_response_2));
}

int main() {
  test_ezsigntemplatesigner_get_object_v2_response(1);
  test_ezsigntemplatesigner_get_object_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatesigner_get_object_v2_response_MAIN
#endif // ezsigntemplatesigner_get_object_v2_response_TEST
