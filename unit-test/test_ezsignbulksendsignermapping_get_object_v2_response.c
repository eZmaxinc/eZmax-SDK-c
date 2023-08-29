#ifndef ezsignbulksendsignermapping_get_object_v2_response_TEST
#define ezsignbulksendsignermapping_get_object_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksendsignermapping_get_object_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksendsignermapping_get_object_v2_response.h"
ezsignbulksendsignermapping_get_object_v2_response_t* instantiate_ezsignbulksendsignermapping_get_object_v2_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_ezsignbulksendsignermapping_get_object_v2_response_m_payload.c"


ezsignbulksendsignermapping_get_object_v2_response_t* instantiate_ezsignbulksendsignermapping_get_object_v2_response(int include_optional) {
  ezsignbulksendsignermapping_get_object_v2_response_t* ezsignbulksendsignermapping_get_object_v2_response = NULL;
  if (include_optional) {
    ezsignbulksendsignermapping_get_object_v2_response = ezsignbulksendsignermapping_get_object_v2_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_ezsignbulksendsignermapping_get_object_v2_response_m_payload(0)
    );
  } else {
    ezsignbulksendsignermapping_get_object_v2_response = ezsignbulksendsignermapping_get_object_v2_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return ezsignbulksendsignermapping_get_object_v2_response;
}


#ifdef ezsignbulksendsignermapping_get_object_v2_response_MAIN

void test_ezsignbulksendsignermapping_get_object_v2_response(int include_optional) {
    ezsignbulksendsignermapping_get_object_v2_response_t* ezsignbulksendsignermapping_get_object_v2_response_1 = instantiate_ezsignbulksendsignermapping_get_object_v2_response(include_optional);

	cJSON* jsonezsignbulksendsignermapping_get_object_v2_response_1 = ezsignbulksendsignermapping_get_object_v2_response_convertToJSON(ezsignbulksendsignermapping_get_object_v2_response_1);
	printf("ezsignbulksendsignermapping_get_object_v2_response :\n%s\n", cJSON_Print(jsonezsignbulksendsignermapping_get_object_v2_response_1));
	ezsignbulksendsignermapping_get_object_v2_response_t* ezsignbulksendsignermapping_get_object_v2_response_2 = ezsignbulksendsignermapping_get_object_v2_response_parseFromJSON(jsonezsignbulksendsignermapping_get_object_v2_response_1);
	cJSON* jsonezsignbulksendsignermapping_get_object_v2_response_2 = ezsignbulksendsignermapping_get_object_v2_response_convertToJSON(ezsignbulksendsignermapping_get_object_v2_response_2);
	printf("repeating ezsignbulksendsignermapping_get_object_v2_response:\n%s\n", cJSON_Print(jsonezsignbulksendsignermapping_get_object_v2_response_2));
}

int main() {
  test_ezsignbulksendsignermapping_get_object_v2_response(1);
  test_ezsignbulksendsignermapping_get_object_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksendsignermapping_get_object_v2_response_MAIN
#endif // ezsignbulksendsignermapping_get_object_v2_response_TEST
