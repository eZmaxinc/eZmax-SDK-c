#ifndef ezsigntemplatepackagesignermembership_delete_object_v1_response_TEST
#define ezsigntemplatepackagesignermembership_delete_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepackagesignermembership_delete_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepackagesignermembership_delete_object_v1_response.h"
ezsigntemplatepackagesignermembership_delete_object_v1_response_t* instantiate_ezsigntemplatepackagesignermembership_delete_object_v1_response(int include_optional);

#include "test_ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


ezsigntemplatepackagesignermembership_delete_object_v1_response_t* instantiate_ezsigntemplatepackagesignermembership_delete_object_v1_response(int include_optional) {
  ezsigntemplatepackagesignermembership_delete_object_v1_response_t* ezsigntemplatepackagesignermembership_delete_object_v1_response = NULL;
  if (include_optional) {
    ezsigntemplatepackagesignermembership_delete_object_v1_response = ezsigntemplatepackagesignermembership_delete_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_ezsigntemplatepackagesignermembership_delete_object_v1_response_m_payload(0),
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    ezsigntemplatepackagesignermembership_delete_object_v1_response = ezsigntemplatepackagesignermembership_delete_object_v1_response_create(
      NULL,
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return ezsigntemplatepackagesignermembership_delete_object_v1_response;
}


#ifdef ezsigntemplatepackagesignermembership_delete_object_v1_response_MAIN

void test_ezsigntemplatepackagesignermembership_delete_object_v1_response(int include_optional) {
    ezsigntemplatepackagesignermembership_delete_object_v1_response_t* ezsigntemplatepackagesignermembership_delete_object_v1_response_1 = instantiate_ezsigntemplatepackagesignermembership_delete_object_v1_response(include_optional);

	cJSON* jsonezsigntemplatepackagesignermembership_delete_object_v1_response_1 = ezsigntemplatepackagesignermembership_delete_object_v1_response_convertToJSON(ezsigntemplatepackagesignermembership_delete_object_v1_response_1);
	printf("ezsigntemplatepackagesignermembership_delete_object_v1_response :\n%s\n", cJSON_Print(jsonezsigntemplatepackagesignermembership_delete_object_v1_response_1));
	ezsigntemplatepackagesignermembership_delete_object_v1_response_t* ezsigntemplatepackagesignermembership_delete_object_v1_response_2 = ezsigntemplatepackagesignermembership_delete_object_v1_response_parseFromJSON(jsonezsigntemplatepackagesignermembership_delete_object_v1_response_1);
	cJSON* jsonezsigntemplatepackagesignermembership_delete_object_v1_response_2 = ezsigntemplatepackagesignermembership_delete_object_v1_response_convertToJSON(ezsigntemplatepackagesignermembership_delete_object_v1_response_2);
	printf("repeating ezsigntemplatepackagesignermembership_delete_object_v1_response:\n%s\n", cJSON_Print(jsonezsigntemplatepackagesignermembership_delete_object_v1_response_2));
}

int main() {
  test_ezsigntemplatepackagesignermembership_delete_object_v1_response(1);
  test_ezsigntemplatepackagesignermembership_delete_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepackagesignermembership_delete_object_v1_response_MAIN
#endif // ezsigntemplatepackagesignermembership_delete_object_v1_response_TEST
