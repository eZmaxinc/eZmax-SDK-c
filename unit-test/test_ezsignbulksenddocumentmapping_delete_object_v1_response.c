#ifndef ezsignbulksenddocumentmapping_delete_object_v1_response_TEST
#define ezsignbulksenddocumentmapping_delete_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksenddocumentmapping_delete_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksenddocumentmapping_delete_object_v1_response.h"
ezsignbulksenddocumentmapping_delete_object_v1_response_t* instantiate_ezsignbulksenddocumentmapping_delete_object_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


ezsignbulksenddocumentmapping_delete_object_v1_response_t* instantiate_ezsignbulksenddocumentmapping_delete_object_v1_response(int include_optional) {
  ezsignbulksenddocumentmapping_delete_object_v1_response_t* ezsignbulksenddocumentmapping_delete_object_v1_response = NULL;
  if (include_optional) {
    ezsignbulksenddocumentmapping_delete_object_v1_response = ezsignbulksenddocumentmapping_delete_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    ezsignbulksenddocumentmapping_delete_object_v1_response = ezsignbulksenddocumentmapping_delete_object_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return ezsignbulksenddocumentmapping_delete_object_v1_response;
}


#ifdef ezsignbulksenddocumentmapping_delete_object_v1_response_MAIN

void test_ezsignbulksenddocumentmapping_delete_object_v1_response(int include_optional) {
    ezsignbulksenddocumentmapping_delete_object_v1_response_t* ezsignbulksenddocumentmapping_delete_object_v1_response_1 = instantiate_ezsignbulksenddocumentmapping_delete_object_v1_response(include_optional);

	cJSON* jsonezsignbulksenddocumentmapping_delete_object_v1_response_1 = ezsignbulksenddocumentmapping_delete_object_v1_response_convertToJSON(ezsignbulksenddocumentmapping_delete_object_v1_response_1);
	printf("ezsignbulksenddocumentmapping_delete_object_v1_response :\n%s\n", cJSON_Print(jsonezsignbulksenddocumentmapping_delete_object_v1_response_1));
	ezsignbulksenddocumentmapping_delete_object_v1_response_t* ezsignbulksenddocumentmapping_delete_object_v1_response_2 = ezsignbulksenddocumentmapping_delete_object_v1_response_parseFromJSON(jsonezsignbulksenddocumentmapping_delete_object_v1_response_1);
	cJSON* jsonezsignbulksenddocumentmapping_delete_object_v1_response_2 = ezsignbulksenddocumentmapping_delete_object_v1_response_convertToJSON(ezsignbulksenddocumentmapping_delete_object_v1_response_2);
	printf("repeating ezsignbulksenddocumentmapping_delete_object_v1_response:\n%s\n", cJSON_Print(jsonezsignbulksenddocumentmapping_delete_object_v1_response_2));
}

int main() {
  test_ezsignbulksenddocumentmapping_delete_object_v1_response(1);
  test_ezsignbulksenddocumentmapping_delete_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksenddocumentmapping_delete_object_v1_response_MAIN
#endif // ezsignbulksenddocumentmapping_delete_object_v1_response_TEST
