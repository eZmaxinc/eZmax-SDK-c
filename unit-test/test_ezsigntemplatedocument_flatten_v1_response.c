#ifndef ezsigntemplatedocument_flatten_v1_response_TEST
#define ezsigntemplatedocument_flatten_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatedocument_flatten_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatedocument_flatten_v1_response.h"
ezsigntemplatedocument_flatten_v1_response_t* instantiate_ezsigntemplatedocument_flatten_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


ezsigntemplatedocument_flatten_v1_response_t* instantiate_ezsigntemplatedocument_flatten_v1_response(int include_optional) {
  ezsigntemplatedocument_flatten_v1_response_t* ezsigntemplatedocument_flatten_v1_response = NULL;
  if (include_optional) {
    ezsigntemplatedocument_flatten_v1_response = ezsigntemplatedocument_flatten_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    ezsigntemplatedocument_flatten_v1_response = ezsigntemplatedocument_flatten_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return ezsigntemplatedocument_flatten_v1_response;
}


#ifdef ezsigntemplatedocument_flatten_v1_response_MAIN

void test_ezsigntemplatedocument_flatten_v1_response(int include_optional) {
    ezsigntemplatedocument_flatten_v1_response_t* ezsigntemplatedocument_flatten_v1_response_1 = instantiate_ezsigntemplatedocument_flatten_v1_response(include_optional);

	cJSON* jsonezsigntemplatedocument_flatten_v1_response_1 = ezsigntemplatedocument_flatten_v1_response_convertToJSON(ezsigntemplatedocument_flatten_v1_response_1);
	printf("ezsigntemplatedocument_flatten_v1_response :\n%s\n", cJSON_Print(jsonezsigntemplatedocument_flatten_v1_response_1));
	ezsigntemplatedocument_flatten_v1_response_t* ezsigntemplatedocument_flatten_v1_response_2 = ezsigntemplatedocument_flatten_v1_response_parseFromJSON(jsonezsigntemplatedocument_flatten_v1_response_1);
	cJSON* jsonezsigntemplatedocument_flatten_v1_response_2 = ezsigntemplatedocument_flatten_v1_response_convertToJSON(ezsigntemplatedocument_flatten_v1_response_2);
	printf("repeating ezsigntemplatedocument_flatten_v1_response:\n%s\n", cJSON_Print(jsonezsigntemplatedocument_flatten_v1_response_2));
}

int main() {
  test_ezsigntemplatedocument_flatten_v1_response(1);
  test_ezsigntemplatedocument_flatten_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatedocument_flatten_v1_response_MAIN
#endif // ezsigntemplatedocument_flatten_v1_response_TEST
