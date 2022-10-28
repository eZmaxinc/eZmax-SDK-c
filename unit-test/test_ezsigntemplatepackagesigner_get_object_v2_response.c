#ifndef ezsigntemplatepackagesigner_get_object_v2_response_TEST
#define ezsigntemplatepackagesigner_get_object_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepackagesigner_get_object_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepackagesigner_get_object_v2_response.h"
ezsigntemplatepackagesigner_get_object_v2_response_t* instantiate_ezsigntemplatepackagesigner_get_object_v2_response(int include_optional);

#include "test_ezsigntemplatepackagesigner_get_object_v2_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


ezsigntemplatepackagesigner_get_object_v2_response_t* instantiate_ezsigntemplatepackagesigner_get_object_v2_response(int include_optional) {
  ezsigntemplatepackagesigner_get_object_v2_response_t* ezsigntemplatepackagesigner_get_object_v2_response = NULL;
  if (include_optional) {
    ezsigntemplatepackagesigner_get_object_v2_response = ezsigntemplatepackagesigner_get_object_v2_response_create(
       // false, not to have infinite recursion
      instantiate_ezsigntemplatepackagesigner_get_object_v2_response_m_payload(0),
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    ezsigntemplatepackagesigner_get_object_v2_response = ezsigntemplatepackagesigner_get_object_v2_response_create(
      NULL,
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return ezsigntemplatepackagesigner_get_object_v2_response;
}


#ifdef ezsigntemplatepackagesigner_get_object_v2_response_MAIN

void test_ezsigntemplatepackagesigner_get_object_v2_response(int include_optional) {
    ezsigntemplatepackagesigner_get_object_v2_response_t* ezsigntemplatepackagesigner_get_object_v2_response_1 = instantiate_ezsigntemplatepackagesigner_get_object_v2_response(include_optional);

	cJSON* jsonezsigntemplatepackagesigner_get_object_v2_response_1 = ezsigntemplatepackagesigner_get_object_v2_response_convertToJSON(ezsigntemplatepackagesigner_get_object_v2_response_1);
	printf("ezsigntemplatepackagesigner_get_object_v2_response :\n%s\n", cJSON_Print(jsonezsigntemplatepackagesigner_get_object_v2_response_1));
	ezsigntemplatepackagesigner_get_object_v2_response_t* ezsigntemplatepackagesigner_get_object_v2_response_2 = ezsigntemplatepackagesigner_get_object_v2_response_parseFromJSON(jsonezsigntemplatepackagesigner_get_object_v2_response_1);
	cJSON* jsonezsigntemplatepackagesigner_get_object_v2_response_2 = ezsigntemplatepackagesigner_get_object_v2_response_convertToJSON(ezsigntemplatepackagesigner_get_object_v2_response_2);
	printf("repeating ezsigntemplatepackagesigner_get_object_v2_response:\n%s\n", cJSON_Print(jsonezsigntemplatepackagesigner_get_object_v2_response_2));
}

int main() {
  test_ezsigntemplatepackagesigner_get_object_v2_response(1);
  test_ezsigntemplatepackagesigner_get_object_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepackagesigner_get_object_v2_response_MAIN
#endif // ezsigntemplatepackagesigner_get_object_v2_response_TEST
