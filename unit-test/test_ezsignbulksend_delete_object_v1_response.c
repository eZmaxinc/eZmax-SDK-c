#ifndef ezsignbulksend_delete_object_v1_response_TEST
#define ezsignbulksend_delete_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksend_delete_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksend_delete_object_v1_response.h"
ezsignbulksend_delete_object_v1_response_t* instantiate_ezsignbulksend_delete_object_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


ezsignbulksend_delete_object_v1_response_t* instantiate_ezsignbulksend_delete_object_v1_response(int include_optional) {
  ezsignbulksend_delete_object_v1_response_t* ezsignbulksend_delete_object_v1_response = NULL;
  if (include_optional) {
    ezsignbulksend_delete_object_v1_response = ezsignbulksend_delete_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    ezsignbulksend_delete_object_v1_response = ezsignbulksend_delete_object_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return ezsignbulksend_delete_object_v1_response;
}


#ifdef ezsignbulksend_delete_object_v1_response_MAIN

void test_ezsignbulksend_delete_object_v1_response(int include_optional) {
    ezsignbulksend_delete_object_v1_response_t* ezsignbulksend_delete_object_v1_response_1 = instantiate_ezsignbulksend_delete_object_v1_response(include_optional);

	cJSON* jsonezsignbulksend_delete_object_v1_response_1 = ezsignbulksend_delete_object_v1_response_convertToJSON(ezsignbulksend_delete_object_v1_response_1);
	printf("ezsignbulksend_delete_object_v1_response :\n%s\n", cJSON_Print(jsonezsignbulksend_delete_object_v1_response_1));
	ezsignbulksend_delete_object_v1_response_t* ezsignbulksend_delete_object_v1_response_2 = ezsignbulksend_delete_object_v1_response_parseFromJSON(jsonezsignbulksend_delete_object_v1_response_1);
	cJSON* jsonezsignbulksend_delete_object_v1_response_2 = ezsignbulksend_delete_object_v1_response_convertToJSON(ezsignbulksend_delete_object_v1_response_2);
	printf("repeating ezsignbulksend_delete_object_v1_response:\n%s\n", cJSON_Print(jsonezsignbulksend_delete_object_v1_response_2));
}

int main() {
  test_ezsignbulksend_delete_object_v1_response(1);
  test_ezsignbulksend_delete_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksend_delete_object_v1_response_MAIN
#endif // ezsignbulksend_delete_object_v1_response_TEST
