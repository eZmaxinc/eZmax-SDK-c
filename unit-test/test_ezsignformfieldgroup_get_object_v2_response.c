#ifndef ezsignformfieldgroup_get_object_v2_response_TEST
#define ezsignformfieldgroup_get_object_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignformfieldgroup_get_object_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignformfieldgroup_get_object_v2_response.h"
ezsignformfieldgroup_get_object_v2_response_t* instantiate_ezsignformfieldgroup_get_object_v2_response(int include_optional);

#include "test_ezsignformfieldgroup_get_object_v2_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


ezsignformfieldgroup_get_object_v2_response_t* instantiate_ezsignformfieldgroup_get_object_v2_response(int include_optional) {
  ezsignformfieldgroup_get_object_v2_response_t* ezsignformfieldgroup_get_object_v2_response = NULL;
  if (include_optional) {
    ezsignformfieldgroup_get_object_v2_response = ezsignformfieldgroup_get_object_v2_response_create(
       // false, not to have infinite recursion
      instantiate_ezsignformfieldgroup_get_object_v2_response_m_payload(0),
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    ezsignformfieldgroup_get_object_v2_response = ezsignformfieldgroup_get_object_v2_response_create(
      NULL,
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return ezsignformfieldgroup_get_object_v2_response;
}


#ifdef ezsignformfieldgroup_get_object_v2_response_MAIN

void test_ezsignformfieldgroup_get_object_v2_response(int include_optional) {
    ezsignformfieldgroup_get_object_v2_response_t* ezsignformfieldgroup_get_object_v2_response_1 = instantiate_ezsignformfieldgroup_get_object_v2_response(include_optional);

	cJSON* jsonezsignformfieldgroup_get_object_v2_response_1 = ezsignformfieldgroup_get_object_v2_response_convertToJSON(ezsignformfieldgroup_get_object_v2_response_1);
	printf("ezsignformfieldgroup_get_object_v2_response :\n%s\n", cJSON_Print(jsonezsignformfieldgroup_get_object_v2_response_1));
	ezsignformfieldgroup_get_object_v2_response_t* ezsignformfieldgroup_get_object_v2_response_2 = ezsignformfieldgroup_get_object_v2_response_parseFromJSON(jsonezsignformfieldgroup_get_object_v2_response_1);
	cJSON* jsonezsignformfieldgroup_get_object_v2_response_2 = ezsignformfieldgroup_get_object_v2_response_convertToJSON(ezsignformfieldgroup_get_object_v2_response_2);
	printf("repeating ezsignformfieldgroup_get_object_v2_response:\n%s\n", cJSON_Print(jsonezsignformfieldgroup_get_object_v2_response_2));
}

int main() {
  test_ezsignformfieldgroup_get_object_v2_response(1);
  test_ezsignformfieldgroup_get_object_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignformfieldgroup_get_object_v2_response_MAIN
#endif // ezsignformfieldgroup_get_object_v2_response_TEST
