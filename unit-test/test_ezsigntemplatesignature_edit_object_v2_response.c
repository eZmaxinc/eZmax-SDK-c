#ifndef ezsigntemplatesignature_edit_object_v2_response_TEST
#define ezsigntemplatesignature_edit_object_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatesignature_edit_object_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatesignature_edit_object_v2_response.h"
ezsigntemplatesignature_edit_object_v2_response_t* instantiate_ezsigntemplatesignature_edit_object_v2_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


ezsigntemplatesignature_edit_object_v2_response_t* instantiate_ezsigntemplatesignature_edit_object_v2_response(int include_optional) {
  ezsigntemplatesignature_edit_object_v2_response_t* ezsigntemplatesignature_edit_object_v2_response = NULL;
  if (include_optional) {
    ezsigntemplatesignature_edit_object_v2_response = ezsigntemplatesignature_edit_object_v2_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    ezsigntemplatesignature_edit_object_v2_response = ezsigntemplatesignature_edit_object_v2_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return ezsigntemplatesignature_edit_object_v2_response;
}


#ifdef ezsigntemplatesignature_edit_object_v2_response_MAIN

void test_ezsigntemplatesignature_edit_object_v2_response(int include_optional) {
    ezsigntemplatesignature_edit_object_v2_response_t* ezsigntemplatesignature_edit_object_v2_response_1 = instantiate_ezsigntemplatesignature_edit_object_v2_response(include_optional);

	cJSON* jsonezsigntemplatesignature_edit_object_v2_response_1 = ezsigntemplatesignature_edit_object_v2_response_convertToJSON(ezsigntemplatesignature_edit_object_v2_response_1);
	printf("ezsigntemplatesignature_edit_object_v2_response :\n%s\n", cJSON_Print(jsonezsigntemplatesignature_edit_object_v2_response_1));
	ezsigntemplatesignature_edit_object_v2_response_t* ezsigntemplatesignature_edit_object_v2_response_2 = ezsigntemplatesignature_edit_object_v2_response_parseFromJSON(jsonezsigntemplatesignature_edit_object_v2_response_1);
	cJSON* jsonezsigntemplatesignature_edit_object_v2_response_2 = ezsigntemplatesignature_edit_object_v2_response_convertToJSON(ezsigntemplatesignature_edit_object_v2_response_2);
	printf("repeating ezsigntemplatesignature_edit_object_v2_response:\n%s\n", cJSON_Print(jsonezsigntemplatesignature_edit_object_v2_response_2));
}

int main() {
  test_ezsigntemplatesignature_edit_object_v2_response(1);
  test_ezsigntemplatesignature_edit_object_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatesignature_edit_object_v2_response_MAIN
#endif // ezsigntemplatesignature_edit_object_v2_response_TEST
