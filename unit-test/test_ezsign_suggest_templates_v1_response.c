#ifndef ezsign_suggest_templates_v1_response_TEST
#define ezsign_suggest_templates_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsign_suggest_templates_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsign_suggest_templates_v1_response.h"
ezsign_suggest_templates_v1_response_t* instantiate_ezsign_suggest_templates_v1_response(int include_optional);

#include "test_ezsign_suggest_templates_v1_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


ezsign_suggest_templates_v1_response_t* instantiate_ezsign_suggest_templates_v1_response(int include_optional) {
  ezsign_suggest_templates_v1_response_t* ezsign_suggest_templates_v1_response = NULL;
  if (include_optional) {
    ezsign_suggest_templates_v1_response = ezsign_suggest_templates_v1_response_create(
       // false, not to have infinite recursion
      instantiate_ezsign_suggest_templates_v1_response_m_payload(0),
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    ezsign_suggest_templates_v1_response = ezsign_suggest_templates_v1_response_create(
      NULL,
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return ezsign_suggest_templates_v1_response;
}


#ifdef ezsign_suggest_templates_v1_response_MAIN

void test_ezsign_suggest_templates_v1_response(int include_optional) {
    ezsign_suggest_templates_v1_response_t* ezsign_suggest_templates_v1_response_1 = instantiate_ezsign_suggest_templates_v1_response(include_optional);

	cJSON* jsonezsign_suggest_templates_v1_response_1 = ezsign_suggest_templates_v1_response_convertToJSON(ezsign_suggest_templates_v1_response_1);
	printf("ezsign_suggest_templates_v1_response :\n%s\n", cJSON_Print(jsonezsign_suggest_templates_v1_response_1));
	ezsign_suggest_templates_v1_response_t* ezsign_suggest_templates_v1_response_2 = ezsign_suggest_templates_v1_response_parseFromJSON(jsonezsign_suggest_templates_v1_response_1);
	cJSON* jsonezsign_suggest_templates_v1_response_2 = ezsign_suggest_templates_v1_response_convertToJSON(ezsign_suggest_templates_v1_response_2);
	printf("repeating ezsign_suggest_templates_v1_response:\n%s\n", cJSON_Print(jsonezsign_suggest_templates_v1_response_2));
}

int main() {
  test_ezsign_suggest_templates_v1_response(1);
  test_ezsign_suggest_templates_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsign_suggest_templates_v1_response_MAIN
#endif // ezsign_suggest_templates_v1_response_TEST
