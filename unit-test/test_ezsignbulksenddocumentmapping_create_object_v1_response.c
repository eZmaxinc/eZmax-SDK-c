#ifndef ezsignbulksenddocumentmapping_create_object_v1_response_TEST
#define ezsignbulksenddocumentmapping_create_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksenddocumentmapping_create_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksenddocumentmapping_create_object_v1_response.h"
ezsignbulksenddocumentmapping_create_object_v1_response_t* instantiate_ezsignbulksenddocumentmapping_create_object_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_ezsignbulksenddocumentmapping_create_object_v1_response_m_payload.c"


ezsignbulksenddocumentmapping_create_object_v1_response_t* instantiate_ezsignbulksenddocumentmapping_create_object_v1_response(int include_optional) {
  ezsignbulksenddocumentmapping_create_object_v1_response_t* ezsignbulksenddocumentmapping_create_object_v1_response = NULL;
  if (include_optional) {
    ezsignbulksenddocumentmapping_create_object_v1_response = ezsignbulksenddocumentmapping_create_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_ezsignbulksenddocumentmapping_create_object_v1_response_m_payload(0)
    );
  } else {
    ezsignbulksenddocumentmapping_create_object_v1_response = ezsignbulksenddocumentmapping_create_object_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return ezsignbulksenddocumentmapping_create_object_v1_response;
}


#ifdef ezsignbulksenddocumentmapping_create_object_v1_response_MAIN

void test_ezsignbulksenddocumentmapping_create_object_v1_response(int include_optional) {
    ezsignbulksenddocumentmapping_create_object_v1_response_t* ezsignbulksenddocumentmapping_create_object_v1_response_1 = instantiate_ezsignbulksenddocumentmapping_create_object_v1_response(include_optional);

	cJSON* jsonezsignbulksenddocumentmapping_create_object_v1_response_1 = ezsignbulksenddocumentmapping_create_object_v1_response_convertToJSON(ezsignbulksenddocumentmapping_create_object_v1_response_1);
	printf("ezsignbulksenddocumentmapping_create_object_v1_response :\n%s\n", cJSON_Print(jsonezsignbulksenddocumentmapping_create_object_v1_response_1));
	ezsignbulksenddocumentmapping_create_object_v1_response_t* ezsignbulksenddocumentmapping_create_object_v1_response_2 = ezsignbulksenddocumentmapping_create_object_v1_response_parseFromJSON(jsonezsignbulksenddocumentmapping_create_object_v1_response_1);
	cJSON* jsonezsignbulksenddocumentmapping_create_object_v1_response_2 = ezsignbulksenddocumentmapping_create_object_v1_response_convertToJSON(ezsignbulksenddocumentmapping_create_object_v1_response_2);
	printf("repeating ezsignbulksenddocumentmapping_create_object_v1_response:\n%s\n", cJSON_Print(jsonezsignbulksenddocumentmapping_create_object_v1_response_2));
}

int main() {
  test_ezsignbulksenddocumentmapping_create_object_v1_response(1);
  test_ezsignbulksenddocumentmapping_create_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksenddocumentmapping_create_object_v1_response_MAIN
#endif // ezsignbulksenddocumentmapping_create_object_v1_response_TEST
