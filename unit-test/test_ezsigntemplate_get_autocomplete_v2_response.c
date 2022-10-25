#ifndef ezsigntemplate_get_autocomplete_v2_response_TEST
#define ezsigntemplate_get_autocomplete_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplate_get_autocomplete_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplate_get_autocomplete_v2_response.h"
ezsigntemplate_get_autocomplete_v2_response_t* instantiate_ezsigntemplate_get_autocomplete_v2_response(int include_optional);

#include "test_ezsigntemplate_get_autocomplete_v2_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


ezsigntemplate_get_autocomplete_v2_response_t* instantiate_ezsigntemplate_get_autocomplete_v2_response(int include_optional) {
  ezsigntemplate_get_autocomplete_v2_response_t* ezsigntemplate_get_autocomplete_v2_response = NULL;
  if (include_optional) {
    ezsigntemplate_get_autocomplete_v2_response = ezsigntemplate_get_autocomplete_v2_response_create(
       // false, not to have infinite recursion
      instantiate_ezsigntemplate_get_autocomplete_v2_response_m_payload(0),
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    ezsigntemplate_get_autocomplete_v2_response = ezsigntemplate_get_autocomplete_v2_response_create(
      NULL,
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return ezsigntemplate_get_autocomplete_v2_response;
}


#ifdef ezsigntemplate_get_autocomplete_v2_response_MAIN

void test_ezsigntemplate_get_autocomplete_v2_response(int include_optional) {
    ezsigntemplate_get_autocomplete_v2_response_t* ezsigntemplate_get_autocomplete_v2_response_1 = instantiate_ezsigntemplate_get_autocomplete_v2_response(include_optional);

	cJSON* jsonezsigntemplate_get_autocomplete_v2_response_1 = ezsigntemplate_get_autocomplete_v2_response_convertToJSON(ezsigntemplate_get_autocomplete_v2_response_1);
	printf("ezsigntemplate_get_autocomplete_v2_response :\n%s\n", cJSON_Print(jsonezsigntemplate_get_autocomplete_v2_response_1));
	ezsigntemplate_get_autocomplete_v2_response_t* ezsigntemplate_get_autocomplete_v2_response_2 = ezsigntemplate_get_autocomplete_v2_response_parseFromJSON(jsonezsigntemplate_get_autocomplete_v2_response_1);
	cJSON* jsonezsigntemplate_get_autocomplete_v2_response_2 = ezsigntemplate_get_autocomplete_v2_response_convertToJSON(ezsigntemplate_get_autocomplete_v2_response_2);
	printf("repeating ezsigntemplate_get_autocomplete_v2_response:\n%s\n", cJSON_Print(jsonezsigntemplate_get_autocomplete_v2_response_2));
}

int main() {
  test_ezsigntemplate_get_autocomplete_v2_response(1);
  test_ezsigntemplate_get_autocomplete_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplate_get_autocomplete_v2_response_MAIN
#endif // ezsigntemplate_get_autocomplete_v2_response_TEST
