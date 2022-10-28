#ifndef ezsignfoldertype_get_object_v2_response_TEST
#define ezsignfoldertype_get_object_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfoldertype_get_object_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfoldertype_get_object_v2_response.h"
ezsignfoldertype_get_object_v2_response_t* instantiate_ezsignfoldertype_get_object_v2_response(int include_optional);

#include "test_ezsignfoldertype_get_object_v2_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


ezsignfoldertype_get_object_v2_response_t* instantiate_ezsignfoldertype_get_object_v2_response(int include_optional) {
  ezsignfoldertype_get_object_v2_response_t* ezsignfoldertype_get_object_v2_response = NULL;
  if (include_optional) {
    ezsignfoldertype_get_object_v2_response = ezsignfoldertype_get_object_v2_response_create(
       // false, not to have infinite recursion
      instantiate_ezsignfoldertype_get_object_v2_response_m_payload(0),
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    ezsignfoldertype_get_object_v2_response = ezsignfoldertype_get_object_v2_response_create(
      NULL,
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return ezsignfoldertype_get_object_v2_response;
}


#ifdef ezsignfoldertype_get_object_v2_response_MAIN

void test_ezsignfoldertype_get_object_v2_response(int include_optional) {
    ezsignfoldertype_get_object_v2_response_t* ezsignfoldertype_get_object_v2_response_1 = instantiate_ezsignfoldertype_get_object_v2_response(include_optional);

	cJSON* jsonezsignfoldertype_get_object_v2_response_1 = ezsignfoldertype_get_object_v2_response_convertToJSON(ezsignfoldertype_get_object_v2_response_1);
	printf("ezsignfoldertype_get_object_v2_response :\n%s\n", cJSON_Print(jsonezsignfoldertype_get_object_v2_response_1));
	ezsignfoldertype_get_object_v2_response_t* ezsignfoldertype_get_object_v2_response_2 = ezsignfoldertype_get_object_v2_response_parseFromJSON(jsonezsignfoldertype_get_object_v2_response_1);
	cJSON* jsonezsignfoldertype_get_object_v2_response_2 = ezsignfoldertype_get_object_v2_response_convertToJSON(ezsignfoldertype_get_object_v2_response_2);
	printf("repeating ezsignfoldertype_get_object_v2_response:\n%s\n", cJSON_Print(jsonezsignfoldertype_get_object_v2_response_2));
}

int main() {
  test_ezsignfoldertype_get_object_v2_response(1);
  test_ezsignfoldertype_get_object_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfoldertype_get_object_v2_response_MAIN
#endif // ezsignfoldertype_get_object_v2_response_TEST
