#ifndef ezsigntemplatepublic_edit_object_v1_response_TEST
#define ezsigntemplatepublic_edit_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepublic_edit_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepublic_edit_object_v1_response.h"
ezsigntemplatepublic_edit_object_v1_response_t* instantiate_ezsigntemplatepublic_edit_object_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


ezsigntemplatepublic_edit_object_v1_response_t* instantiate_ezsigntemplatepublic_edit_object_v1_response(int include_optional) {
  ezsigntemplatepublic_edit_object_v1_response_t* ezsigntemplatepublic_edit_object_v1_response = NULL;
  if (include_optional) {
    ezsigntemplatepublic_edit_object_v1_response = ezsigntemplatepublic_edit_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    ezsigntemplatepublic_edit_object_v1_response = ezsigntemplatepublic_edit_object_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return ezsigntemplatepublic_edit_object_v1_response;
}


#ifdef ezsigntemplatepublic_edit_object_v1_response_MAIN

void test_ezsigntemplatepublic_edit_object_v1_response(int include_optional) {
    ezsigntemplatepublic_edit_object_v1_response_t* ezsigntemplatepublic_edit_object_v1_response_1 = instantiate_ezsigntemplatepublic_edit_object_v1_response(include_optional);

	cJSON* jsonezsigntemplatepublic_edit_object_v1_response_1 = ezsigntemplatepublic_edit_object_v1_response_convertToJSON(ezsigntemplatepublic_edit_object_v1_response_1);
	printf("ezsigntemplatepublic_edit_object_v1_response :\n%s\n", cJSON_Print(jsonezsigntemplatepublic_edit_object_v1_response_1));
	ezsigntemplatepublic_edit_object_v1_response_t* ezsigntemplatepublic_edit_object_v1_response_2 = ezsigntemplatepublic_edit_object_v1_response_parseFromJSON(jsonezsigntemplatepublic_edit_object_v1_response_1);
	cJSON* jsonezsigntemplatepublic_edit_object_v1_response_2 = ezsigntemplatepublic_edit_object_v1_response_convertToJSON(ezsigntemplatepublic_edit_object_v1_response_2);
	printf("repeating ezsigntemplatepublic_edit_object_v1_response:\n%s\n", cJSON_Print(jsonezsigntemplatepublic_edit_object_v1_response_2));
}

int main() {
  test_ezsigntemplatepublic_edit_object_v1_response(1);
  test_ezsigntemplatepublic_edit_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepublic_edit_object_v1_response_MAIN
#endif // ezsigntemplatepublic_edit_object_v1_response_TEST
