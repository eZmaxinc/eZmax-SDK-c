#ifndef ezsigntemplatepackagesigner_create_object_v1_response_TEST
#define ezsigntemplatepackagesigner_create_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepackagesigner_create_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepackagesigner_create_object_v1_response.h"
ezsigntemplatepackagesigner_create_object_v1_response_t* instantiate_ezsigntemplatepackagesigner_create_object_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_ezsigntemplatepackagesigner_create_object_v1_response_m_payload.c"


ezsigntemplatepackagesigner_create_object_v1_response_t* instantiate_ezsigntemplatepackagesigner_create_object_v1_response(int include_optional) {
  ezsigntemplatepackagesigner_create_object_v1_response_t* ezsigntemplatepackagesigner_create_object_v1_response = NULL;
  if (include_optional) {
    ezsigntemplatepackagesigner_create_object_v1_response = ezsigntemplatepackagesigner_create_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_ezsigntemplatepackagesigner_create_object_v1_response_m_payload(0)
    );
  } else {
    ezsigntemplatepackagesigner_create_object_v1_response = ezsigntemplatepackagesigner_create_object_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return ezsigntemplatepackagesigner_create_object_v1_response;
}


#ifdef ezsigntemplatepackagesigner_create_object_v1_response_MAIN

void test_ezsigntemplatepackagesigner_create_object_v1_response(int include_optional) {
    ezsigntemplatepackagesigner_create_object_v1_response_t* ezsigntemplatepackagesigner_create_object_v1_response_1 = instantiate_ezsigntemplatepackagesigner_create_object_v1_response(include_optional);

	cJSON* jsonezsigntemplatepackagesigner_create_object_v1_response_1 = ezsigntemplatepackagesigner_create_object_v1_response_convertToJSON(ezsigntemplatepackagesigner_create_object_v1_response_1);
	printf("ezsigntemplatepackagesigner_create_object_v1_response :\n%s\n", cJSON_Print(jsonezsigntemplatepackagesigner_create_object_v1_response_1));
	ezsigntemplatepackagesigner_create_object_v1_response_t* ezsigntemplatepackagesigner_create_object_v1_response_2 = ezsigntemplatepackagesigner_create_object_v1_response_parseFromJSON(jsonezsigntemplatepackagesigner_create_object_v1_response_1);
	cJSON* jsonezsigntemplatepackagesigner_create_object_v1_response_2 = ezsigntemplatepackagesigner_create_object_v1_response_convertToJSON(ezsigntemplatepackagesigner_create_object_v1_response_2);
	printf("repeating ezsigntemplatepackagesigner_create_object_v1_response:\n%s\n", cJSON_Print(jsonezsigntemplatepackagesigner_create_object_v1_response_2));
}

int main() {
  test_ezsigntemplatepackagesigner_create_object_v1_response(1);
  test_ezsigntemplatepackagesigner_create_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepackagesigner_create_object_v1_response_MAIN
#endif // ezsigntemplatepackagesigner_create_object_v1_response_TEST
