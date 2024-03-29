#ifndef ezsignfoldertype_create_object_v1_response_TEST
#define ezsignfoldertype_create_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfoldertype_create_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfoldertype_create_object_v1_response.h"
ezsignfoldertype_create_object_v1_response_t* instantiate_ezsignfoldertype_create_object_v1_response(int include_optional);

#include "test_ezsignfoldertype_create_object_v1_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


ezsignfoldertype_create_object_v1_response_t* instantiate_ezsignfoldertype_create_object_v1_response(int include_optional) {
  ezsignfoldertype_create_object_v1_response_t* ezsignfoldertype_create_object_v1_response = NULL;
  if (include_optional) {
    ezsignfoldertype_create_object_v1_response = ezsignfoldertype_create_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_ezsignfoldertype_create_object_v1_response_m_payload(0),
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    ezsignfoldertype_create_object_v1_response = ezsignfoldertype_create_object_v1_response_create(
      NULL,
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return ezsignfoldertype_create_object_v1_response;
}


#ifdef ezsignfoldertype_create_object_v1_response_MAIN

void test_ezsignfoldertype_create_object_v1_response(int include_optional) {
    ezsignfoldertype_create_object_v1_response_t* ezsignfoldertype_create_object_v1_response_1 = instantiate_ezsignfoldertype_create_object_v1_response(include_optional);

	cJSON* jsonezsignfoldertype_create_object_v1_response_1 = ezsignfoldertype_create_object_v1_response_convertToJSON(ezsignfoldertype_create_object_v1_response_1);
	printf("ezsignfoldertype_create_object_v1_response :\n%s\n", cJSON_Print(jsonezsignfoldertype_create_object_v1_response_1));
	ezsignfoldertype_create_object_v1_response_t* ezsignfoldertype_create_object_v1_response_2 = ezsignfoldertype_create_object_v1_response_parseFromJSON(jsonezsignfoldertype_create_object_v1_response_1);
	cJSON* jsonezsignfoldertype_create_object_v1_response_2 = ezsignfoldertype_create_object_v1_response_convertToJSON(ezsignfoldertype_create_object_v1_response_2);
	printf("repeating ezsignfoldertype_create_object_v1_response:\n%s\n", cJSON_Print(jsonezsignfoldertype_create_object_v1_response_2));
}

int main() {
  test_ezsignfoldertype_create_object_v1_response(1);
  test_ezsignfoldertype_create_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfoldertype_create_object_v1_response_MAIN
#endif // ezsignfoldertype_create_object_v1_response_TEST
