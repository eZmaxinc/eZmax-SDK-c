#ifndef ezsignbulksendsignermapping_create_object_v1_response_TEST
#define ezsignbulksendsignermapping_create_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksendsignermapping_create_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksendsignermapping_create_object_v1_response.h"
ezsignbulksendsignermapping_create_object_v1_response_t* instantiate_ezsignbulksendsignermapping_create_object_v1_response(int include_optional);

#include "test_ezsignbulksendsignermapping_create_object_v1_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


ezsignbulksendsignermapping_create_object_v1_response_t* instantiate_ezsignbulksendsignermapping_create_object_v1_response(int include_optional) {
  ezsignbulksendsignermapping_create_object_v1_response_t* ezsignbulksendsignermapping_create_object_v1_response = NULL;
  if (include_optional) {
    ezsignbulksendsignermapping_create_object_v1_response = ezsignbulksendsignermapping_create_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_ezsignbulksendsignermapping_create_object_v1_response_m_payload(0),
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    ezsignbulksendsignermapping_create_object_v1_response = ezsignbulksendsignermapping_create_object_v1_response_create(
      NULL,
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return ezsignbulksendsignermapping_create_object_v1_response;
}


#ifdef ezsignbulksendsignermapping_create_object_v1_response_MAIN

void test_ezsignbulksendsignermapping_create_object_v1_response(int include_optional) {
    ezsignbulksendsignermapping_create_object_v1_response_t* ezsignbulksendsignermapping_create_object_v1_response_1 = instantiate_ezsignbulksendsignermapping_create_object_v1_response(include_optional);

	cJSON* jsonezsignbulksendsignermapping_create_object_v1_response_1 = ezsignbulksendsignermapping_create_object_v1_response_convertToJSON(ezsignbulksendsignermapping_create_object_v1_response_1);
	printf("ezsignbulksendsignermapping_create_object_v1_response :\n%s\n", cJSON_Print(jsonezsignbulksendsignermapping_create_object_v1_response_1));
	ezsignbulksendsignermapping_create_object_v1_response_t* ezsignbulksendsignermapping_create_object_v1_response_2 = ezsignbulksendsignermapping_create_object_v1_response_parseFromJSON(jsonezsignbulksendsignermapping_create_object_v1_response_1);
	cJSON* jsonezsignbulksendsignermapping_create_object_v1_response_2 = ezsignbulksendsignermapping_create_object_v1_response_convertToJSON(ezsignbulksendsignermapping_create_object_v1_response_2);
	printf("repeating ezsignbulksendsignermapping_create_object_v1_response:\n%s\n", cJSON_Print(jsonezsignbulksendsignermapping_create_object_v1_response_2));
}

int main() {
  test_ezsignbulksendsignermapping_create_object_v1_response(1);
  test_ezsignbulksendsignermapping_create_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksendsignermapping_create_object_v1_response_MAIN
#endif // ezsignbulksendsignermapping_create_object_v1_response_TEST
