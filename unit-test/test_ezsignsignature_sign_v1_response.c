#ifndef ezsignsignature_sign_v1_response_TEST
#define ezsignsignature_sign_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignature_sign_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignature_sign_v1_response.h"
ezsignsignature_sign_v1_response_t* instantiate_ezsignsignature_sign_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_ezsignsignature_sign_v1_response_m_payload.c"


ezsignsignature_sign_v1_response_t* instantiate_ezsignsignature_sign_v1_response(int include_optional) {
  ezsignsignature_sign_v1_response_t* ezsignsignature_sign_v1_response = NULL;
  if (include_optional) {
    ezsignsignature_sign_v1_response = ezsignsignature_sign_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_ezsignsignature_sign_v1_response_m_payload(0)
    );
  } else {
    ezsignsignature_sign_v1_response = ezsignsignature_sign_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return ezsignsignature_sign_v1_response;
}


#ifdef ezsignsignature_sign_v1_response_MAIN

void test_ezsignsignature_sign_v1_response(int include_optional) {
    ezsignsignature_sign_v1_response_t* ezsignsignature_sign_v1_response_1 = instantiate_ezsignsignature_sign_v1_response(include_optional);

	cJSON* jsonezsignsignature_sign_v1_response_1 = ezsignsignature_sign_v1_response_convertToJSON(ezsignsignature_sign_v1_response_1);
	printf("ezsignsignature_sign_v1_response :\n%s\n", cJSON_Print(jsonezsignsignature_sign_v1_response_1));
	ezsignsignature_sign_v1_response_t* ezsignsignature_sign_v1_response_2 = ezsignsignature_sign_v1_response_parseFromJSON(jsonezsignsignature_sign_v1_response_1);
	cJSON* jsonezsignsignature_sign_v1_response_2 = ezsignsignature_sign_v1_response_convertToJSON(ezsignsignature_sign_v1_response_2);
	printf("repeating ezsignsignature_sign_v1_response:\n%s\n", cJSON_Print(jsonezsignsignature_sign_v1_response_2));
}

int main() {
  test_ezsignsignature_sign_v1_response(1);
  test_ezsignsignature_sign_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignature_sign_v1_response_MAIN
#endif // ezsignsignature_sign_v1_response_TEST
