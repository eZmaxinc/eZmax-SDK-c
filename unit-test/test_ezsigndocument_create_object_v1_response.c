#ifndef ezsigndocument_create_object_v1_response_TEST
#define ezsigndocument_create_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigndocument_create_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigndocument_create_object_v1_response.h"
ezsigndocument_create_object_v1_response_t* instantiate_ezsigndocument_create_object_v1_response(int include_optional);

#include "test_ezsigndocument_create_object_v1_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


ezsigndocument_create_object_v1_response_t* instantiate_ezsigndocument_create_object_v1_response(int include_optional) {
  ezsigndocument_create_object_v1_response_t* ezsigndocument_create_object_v1_response = NULL;
  if (include_optional) {
    ezsigndocument_create_object_v1_response = ezsigndocument_create_object_v1_response_create(
      {"a_pkiEzsigndocumentID":[95,96]},
      {"iVersionMin":1,"iVersionMax":2,"a_RequiredPermissions":[45,61]},
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    ezsigndocument_create_object_v1_response = ezsigndocument_create_object_v1_response_create(
      {"a_pkiEzsigndocumentID":[95,96]},
      {"iVersionMin":1,"iVersionMax":2,"a_RequiredPermissions":[45,61]},
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return ezsigndocument_create_object_v1_response;
}


#ifdef ezsigndocument_create_object_v1_response_MAIN

void test_ezsigndocument_create_object_v1_response(int include_optional) {
    ezsigndocument_create_object_v1_response_t* ezsigndocument_create_object_v1_response_1 = instantiate_ezsigndocument_create_object_v1_response(include_optional);

	cJSON* jsonezsigndocument_create_object_v1_response_1 = ezsigndocument_create_object_v1_response_convertToJSON(ezsigndocument_create_object_v1_response_1);
	printf("ezsigndocument_create_object_v1_response :\n%s\n", cJSON_Print(jsonezsigndocument_create_object_v1_response_1));
	ezsigndocument_create_object_v1_response_t* ezsigndocument_create_object_v1_response_2 = ezsigndocument_create_object_v1_response_parseFromJSON(jsonezsigndocument_create_object_v1_response_1);
	cJSON* jsonezsigndocument_create_object_v1_response_2 = ezsigndocument_create_object_v1_response_convertToJSON(ezsigndocument_create_object_v1_response_2);
	printf("repeating ezsigndocument_create_object_v1_response:\n%s\n", cJSON_Print(jsonezsigndocument_create_object_v1_response_2));
}

int main() {
  test_ezsigndocument_create_object_v1_response(1);
  test_ezsigndocument_create_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigndocument_create_object_v1_response_MAIN
#endif // ezsigndocument_create_object_v1_response_TEST
