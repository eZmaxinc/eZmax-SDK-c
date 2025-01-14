#ifndef ezsigntemplate_edit_object_v3_response_TEST
#define ezsigntemplate_edit_object_v3_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplate_edit_object_v3_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplate_edit_object_v3_response.h"
ezsigntemplate_edit_object_v3_response_t* instantiate_ezsigntemplate_edit_object_v3_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


ezsigntemplate_edit_object_v3_response_t* instantiate_ezsigntemplate_edit_object_v3_response(int include_optional) {
  ezsigntemplate_edit_object_v3_response_t* ezsigntemplate_edit_object_v3_response = NULL;
  if (include_optional) {
    ezsigntemplate_edit_object_v3_response = ezsigntemplate_edit_object_v3_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    ezsigntemplate_edit_object_v3_response = ezsigntemplate_edit_object_v3_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return ezsigntemplate_edit_object_v3_response;
}


#ifdef ezsigntemplate_edit_object_v3_response_MAIN

void test_ezsigntemplate_edit_object_v3_response(int include_optional) {
    ezsigntemplate_edit_object_v3_response_t* ezsigntemplate_edit_object_v3_response_1 = instantiate_ezsigntemplate_edit_object_v3_response(include_optional);

	cJSON* jsonezsigntemplate_edit_object_v3_response_1 = ezsigntemplate_edit_object_v3_response_convertToJSON(ezsigntemplate_edit_object_v3_response_1);
	printf("ezsigntemplate_edit_object_v3_response :\n%s\n", cJSON_Print(jsonezsigntemplate_edit_object_v3_response_1));
	ezsigntemplate_edit_object_v3_response_t* ezsigntemplate_edit_object_v3_response_2 = ezsigntemplate_edit_object_v3_response_parseFromJSON(jsonezsigntemplate_edit_object_v3_response_1);
	cJSON* jsonezsigntemplate_edit_object_v3_response_2 = ezsigntemplate_edit_object_v3_response_convertToJSON(ezsigntemplate_edit_object_v3_response_2);
	printf("repeating ezsigntemplate_edit_object_v3_response:\n%s\n", cJSON_Print(jsonezsigntemplate_edit_object_v3_response_2));
}

int main() {
  test_ezsigntemplate_edit_object_v3_response(1);
  test_ezsigntemplate_edit_object_v3_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplate_edit_object_v3_response_MAIN
#endif // ezsigntemplate_edit_object_v3_response_TEST
