#ifndef ezsignsignature_create_object_v1_response_TEST
#define ezsignsignature_create_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignature_create_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignature_create_object_v1_response.h"
ezsignsignature_create_object_v1_response_t* instantiate_ezsignsignature_create_object_v1_response(int include_optional);

#include "test_ezsignsignature_create_object_v1_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


ezsignsignature_create_object_v1_response_t* instantiate_ezsignsignature_create_object_v1_response(int include_optional) {
  ezsignsignature_create_object_v1_response_t* ezsignsignature_create_object_v1_response = NULL;
  if (include_optional) {
    ezsignsignature_create_object_v1_response = ezsignsignature_create_object_v1_response_create(
      {"a_pkiEzsignsignatureID":[95,96]},
      {"iVersionMin":1,"iVersionMax":2,"a_RequiredPermissions":[45,61]},
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    ezsignsignature_create_object_v1_response = ezsignsignature_create_object_v1_response_create(
      {"a_pkiEzsignsignatureID":[95,96]},
      {"iVersionMin":1,"iVersionMax":2,"a_RequiredPermissions":[45,61]},
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return ezsignsignature_create_object_v1_response;
}


#ifdef ezsignsignature_create_object_v1_response_MAIN

void test_ezsignsignature_create_object_v1_response(int include_optional) {
    ezsignsignature_create_object_v1_response_t* ezsignsignature_create_object_v1_response_1 = instantiate_ezsignsignature_create_object_v1_response(include_optional);

	cJSON* jsonezsignsignature_create_object_v1_response_1 = ezsignsignature_create_object_v1_response_convertToJSON(ezsignsignature_create_object_v1_response_1);
	printf("ezsignsignature_create_object_v1_response :\n%s\n", cJSON_Print(jsonezsignsignature_create_object_v1_response_1));
	ezsignsignature_create_object_v1_response_t* ezsignsignature_create_object_v1_response_2 = ezsignsignature_create_object_v1_response_parseFromJSON(jsonezsignsignature_create_object_v1_response_1);
	cJSON* jsonezsignsignature_create_object_v1_response_2 = ezsignsignature_create_object_v1_response_convertToJSON(ezsignsignature_create_object_v1_response_2);
	printf("repeating ezsignsignature_create_object_v1_response:\n%s\n", cJSON_Print(jsonezsignsignature_create_object_v1_response_2));
}

int main() {
  test_ezsignsignature_create_object_v1_response(1);
  test_ezsignsignature_create_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignature_create_object_v1_response_MAIN
#endif // ezsignsignature_create_object_v1_response_TEST
