#ifndef ezmaxinvoicing_get_object_v2_response_TEST
#define ezmaxinvoicing_get_object_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezmaxinvoicing_get_object_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezmaxinvoicing_get_object_v2_response.h"
ezmaxinvoicing_get_object_v2_response_t* instantiate_ezmaxinvoicing_get_object_v2_response(int include_optional);

#include "test_ezmaxinvoicing_get_object_v2_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


ezmaxinvoicing_get_object_v2_response_t* instantiate_ezmaxinvoicing_get_object_v2_response(int include_optional) {
  ezmaxinvoicing_get_object_v2_response_t* ezmaxinvoicing_get_object_v2_response = NULL;
  if (include_optional) {
    ezmaxinvoicing_get_object_v2_response = ezmaxinvoicing_get_object_v2_response_create(
       // false, not to have infinite recursion
      instantiate_ezmaxinvoicing_get_object_v2_response_m_payload(0),
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    ezmaxinvoicing_get_object_v2_response = ezmaxinvoicing_get_object_v2_response_create(
      NULL,
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return ezmaxinvoicing_get_object_v2_response;
}


#ifdef ezmaxinvoicing_get_object_v2_response_MAIN

void test_ezmaxinvoicing_get_object_v2_response(int include_optional) {
    ezmaxinvoicing_get_object_v2_response_t* ezmaxinvoicing_get_object_v2_response_1 = instantiate_ezmaxinvoicing_get_object_v2_response(include_optional);

	cJSON* jsonezmaxinvoicing_get_object_v2_response_1 = ezmaxinvoicing_get_object_v2_response_convertToJSON(ezmaxinvoicing_get_object_v2_response_1);
	printf("ezmaxinvoicing_get_object_v2_response :\n%s\n", cJSON_Print(jsonezmaxinvoicing_get_object_v2_response_1));
	ezmaxinvoicing_get_object_v2_response_t* ezmaxinvoicing_get_object_v2_response_2 = ezmaxinvoicing_get_object_v2_response_parseFromJSON(jsonezmaxinvoicing_get_object_v2_response_1);
	cJSON* jsonezmaxinvoicing_get_object_v2_response_2 = ezmaxinvoicing_get_object_v2_response_convertToJSON(ezmaxinvoicing_get_object_v2_response_2);
	printf("repeating ezmaxinvoicing_get_object_v2_response:\n%s\n", cJSON_Print(jsonezmaxinvoicing_get_object_v2_response_2));
}

int main() {
  test_ezmaxinvoicing_get_object_v2_response(1);
  test_ezmaxinvoicing_get_object_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezmaxinvoicing_get_object_v2_response_MAIN
#endif // ezmaxinvoicing_get_object_v2_response_TEST