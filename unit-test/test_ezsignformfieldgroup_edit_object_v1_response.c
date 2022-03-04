#ifndef ezsignformfieldgroup_edit_object_v1_response_TEST
#define ezsignformfieldgroup_edit_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignformfieldgroup_edit_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignformfieldgroup_edit_object_v1_response.h"
ezsignformfieldgroup_edit_object_v1_response_t* instantiate_ezsignformfieldgroup_edit_object_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


ezsignformfieldgroup_edit_object_v1_response_t* instantiate_ezsignformfieldgroup_edit_object_v1_response(int include_optional) {
  ezsignformfieldgroup_edit_object_v1_response_t* ezsignformfieldgroup_edit_object_v1_response = NULL;
  if (include_optional) {
    ezsignformfieldgroup_edit_object_v1_response = ezsignformfieldgroup_edit_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    ezsignformfieldgroup_edit_object_v1_response = ezsignformfieldgroup_edit_object_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return ezsignformfieldgroup_edit_object_v1_response;
}


#ifdef ezsignformfieldgroup_edit_object_v1_response_MAIN

void test_ezsignformfieldgroup_edit_object_v1_response(int include_optional) {
    ezsignformfieldgroup_edit_object_v1_response_t* ezsignformfieldgroup_edit_object_v1_response_1 = instantiate_ezsignformfieldgroup_edit_object_v1_response(include_optional);

	cJSON* jsonezsignformfieldgroup_edit_object_v1_response_1 = ezsignformfieldgroup_edit_object_v1_response_convertToJSON(ezsignformfieldgroup_edit_object_v1_response_1);
	printf("ezsignformfieldgroup_edit_object_v1_response :\n%s\n", cJSON_Print(jsonezsignformfieldgroup_edit_object_v1_response_1));
	ezsignformfieldgroup_edit_object_v1_response_t* ezsignformfieldgroup_edit_object_v1_response_2 = ezsignformfieldgroup_edit_object_v1_response_parseFromJSON(jsonezsignformfieldgroup_edit_object_v1_response_1);
	cJSON* jsonezsignformfieldgroup_edit_object_v1_response_2 = ezsignformfieldgroup_edit_object_v1_response_convertToJSON(ezsignformfieldgroup_edit_object_v1_response_2);
	printf("repeating ezsignformfieldgroup_edit_object_v1_response:\n%s\n", cJSON_Print(jsonezsignformfieldgroup_edit_object_v1_response_2));
}

int main() {
  test_ezsignformfieldgroup_edit_object_v1_response(1);
  test_ezsignformfieldgroup_edit_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignformfieldgroup_edit_object_v1_response_MAIN
#endif // ezsignformfieldgroup_edit_object_v1_response_TEST
