#ifndef ezsigntemplatesigner_create_object_v1_response_TEST
#define ezsigntemplatesigner_create_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatesigner_create_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatesigner_create_object_v1_response.h"
ezsigntemplatesigner_create_object_v1_response_t* instantiate_ezsigntemplatesigner_create_object_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_ezsigntemplatesigner_create_object_v1_response_m_payload.c"


ezsigntemplatesigner_create_object_v1_response_t* instantiate_ezsigntemplatesigner_create_object_v1_response(int include_optional) {
  ezsigntemplatesigner_create_object_v1_response_t* ezsigntemplatesigner_create_object_v1_response = NULL;
  if (include_optional) {
    ezsigntemplatesigner_create_object_v1_response = ezsigntemplatesigner_create_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_ezsigntemplatesigner_create_object_v1_response_m_payload(0)
    );
  } else {
    ezsigntemplatesigner_create_object_v1_response = ezsigntemplatesigner_create_object_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return ezsigntemplatesigner_create_object_v1_response;
}


#ifdef ezsigntemplatesigner_create_object_v1_response_MAIN

void test_ezsigntemplatesigner_create_object_v1_response(int include_optional) {
    ezsigntemplatesigner_create_object_v1_response_t* ezsigntemplatesigner_create_object_v1_response_1 = instantiate_ezsigntemplatesigner_create_object_v1_response(include_optional);

	cJSON* jsonezsigntemplatesigner_create_object_v1_response_1 = ezsigntemplatesigner_create_object_v1_response_convertToJSON(ezsigntemplatesigner_create_object_v1_response_1);
	printf("ezsigntemplatesigner_create_object_v1_response :\n%s\n", cJSON_Print(jsonezsigntemplatesigner_create_object_v1_response_1));
	ezsigntemplatesigner_create_object_v1_response_t* ezsigntemplatesigner_create_object_v1_response_2 = ezsigntemplatesigner_create_object_v1_response_parseFromJSON(jsonezsigntemplatesigner_create_object_v1_response_1);
	cJSON* jsonezsigntemplatesigner_create_object_v1_response_2 = ezsigntemplatesigner_create_object_v1_response_convertToJSON(ezsigntemplatesigner_create_object_v1_response_2);
	printf("repeating ezsigntemplatesigner_create_object_v1_response:\n%s\n", cJSON_Print(jsonezsigntemplatesigner_create_object_v1_response_2));
}

int main() {
  test_ezsigntemplatesigner_create_object_v1_response(1);
  test_ezsigntemplatesigner_create_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatesigner_create_object_v1_response_MAIN
#endif // ezsigntemplatesigner_create_object_v1_response_TEST
