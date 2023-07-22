#ifndef ezsignpage_consult_v1_response_TEST
#define ezsignpage_consult_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignpage_consult_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignpage_consult_v1_response.h"
ezsignpage_consult_v1_response_t* instantiate_ezsignpage_consult_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


ezsignpage_consult_v1_response_t* instantiate_ezsignpage_consult_v1_response(int include_optional) {
  ezsignpage_consult_v1_response_t* ezsignpage_consult_v1_response = NULL;
  if (include_optional) {
    ezsignpage_consult_v1_response = ezsignpage_consult_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    ezsignpage_consult_v1_response = ezsignpage_consult_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return ezsignpage_consult_v1_response;
}


#ifdef ezsignpage_consult_v1_response_MAIN

void test_ezsignpage_consult_v1_response(int include_optional) {
    ezsignpage_consult_v1_response_t* ezsignpage_consult_v1_response_1 = instantiate_ezsignpage_consult_v1_response(include_optional);

	cJSON* jsonezsignpage_consult_v1_response_1 = ezsignpage_consult_v1_response_convertToJSON(ezsignpage_consult_v1_response_1);
	printf("ezsignpage_consult_v1_response :\n%s\n", cJSON_Print(jsonezsignpage_consult_v1_response_1));
	ezsignpage_consult_v1_response_t* ezsignpage_consult_v1_response_2 = ezsignpage_consult_v1_response_parseFromJSON(jsonezsignpage_consult_v1_response_1);
	cJSON* jsonezsignpage_consult_v1_response_2 = ezsignpage_consult_v1_response_convertToJSON(ezsignpage_consult_v1_response_2);
	printf("repeating ezsignpage_consult_v1_response:\n%s\n", cJSON_Print(jsonezsignpage_consult_v1_response_2));
}

int main() {
  test_ezsignpage_consult_v1_response(1);
  test_ezsignpage_consult_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignpage_consult_v1_response_MAIN
#endif // ezsignpage_consult_v1_response_TEST
