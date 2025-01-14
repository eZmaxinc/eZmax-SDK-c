#ifndef ezsigntemplatepublic_reset_url_v1_response_TEST
#define ezsigntemplatepublic_reset_url_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepublic_reset_url_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepublic_reset_url_v1_response.h"
ezsigntemplatepublic_reset_url_v1_response_t* instantiate_ezsigntemplatepublic_reset_url_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_ezsigntemplatepublic_reset_url_v1_response_m_payload.c"


ezsigntemplatepublic_reset_url_v1_response_t* instantiate_ezsigntemplatepublic_reset_url_v1_response(int include_optional) {
  ezsigntemplatepublic_reset_url_v1_response_t* ezsigntemplatepublic_reset_url_v1_response = NULL;
  if (include_optional) {
    ezsigntemplatepublic_reset_url_v1_response = ezsigntemplatepublic_reset_url_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_ezsigntemplatepublic_reset_url_v1_response_m_payload(0)
    );
  } else {
    ezsigntemplatepublic_reset_url_v1_response = ezsigntemplatepublic_reset_url_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return ezsigntemplatepublic_reset_url_v1_response;
}


#ifdef ezsigntemplatepublic_reset_url_v1_response_MAIN

void test_ezsigntemplatepublic_reset_url_v1_response(int include_optional) {
    ezsigntemplatepublic_reset_url_v1_response_t* ezsigntemplatepublic_reset_url_v1_response_1 = instantiate_ezsigntemplatepublic_reset_url_v1_response(include_optional);

	cJSON* jsonezsigntemplatepublic_reset_url_v1_response_1 = ezsigntemplatepublic_reset_url_v1_response_convertToJSON(ezsigntemplatepublic_reset_url_v1_response_1);
	printf("ezsigntemplatepublic_reset_url_v1_response :\n%s\n", cJSON_Print(jsonezsigntemplatepublic_reset_url_v1_response_1));
	ezsigntemplatepublic_reset_url_v1_response_t* ezsigntemplatepublic_reset_url_v1_response_2 = ezsigntemplatepublic_reset_url_v1_response_parseFromJSON(jsonezsigntemplatepublic_reset_url_v1_response_1);
	cJSON* jsonezsigntemplatepublic_reset_url_v1_response_2 = ezsigntemplatepublic_reset_url_v1_response_convertToJSON(ezsigntemplatepublic_reset_url_v1_response_2);
	printf("repeating ezsigntemplatepublic_reset_url_v1_response:\n%s\n", cJSON_Print(jsonezsigntemplatepublic_reset_url_v1_response_2));
}

int main() {
  test_ezsigntemplatepublic_reset_url_v1_response(1);
  test_ezsigntemplatepublic_reset_url_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepublic_reset_url_v1_response_MAIN
#endif // ezsigntemplatepublic_reset_url_v1_response_TEST
