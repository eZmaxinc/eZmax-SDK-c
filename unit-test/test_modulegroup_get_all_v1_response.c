#ifndef modulegroup_get_all_v1_response_TEST
#define modulegroup_get_all_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define modulegroup_get_all_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/modulegroup_get_all_v1_response.h"
modulegroup_get_all_v1_response_t* instantiate_modulegroup_get_all_v1_response(int include_optional);

#include "test_modulegroup_get_all_v1_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


modulegroup_get_all_v1_response_t* instantiate_modulegroup_get_all_v1_response(int include_optional) {
  modulegroup_get_all_v1_response_t* modulegroup_get_all_v1_response = NULL;
  if (include_optional) {
    modulegroup_get_all_v1_response = modulegroup_get_all_v1_response_create(
       // false, not to have infinite recursion
      instantiate_modulegroup_get_all_v1_response_m_payload(0),
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    modulegroup_get_all_v1_response = modulegroup_get_all_v1_response_create(
      NULL,
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return modulegroup_get_all_v1_response;
}


#ifdef modulegroup_get_all_v1_response_MAIN

void test_modulegroup_get_all_v1_response(int include_optional) {
    modulegroup_get_all_v1_response_t* modulegroup_get_all_v1_response_1 = instantiate_modulegroup_get_all_v1_response(include_optional);

	cJSON* jsonmodulegroup_get_all_v1_response_1 = modulegroup_get_all_v1_response_convertToJSON(modulegroup_get_all_v1_response_1);
	printf("modulegroup_get_all_v1_response :\n%s\n", cJSON_Print(jsonmodulegroup_get_all_v1_response_1));
	modulegroup_get_all_v1_response_t* modulegroup_get_all_v1_response_2 = modulegroup_get_all_v1_response_parseFromJSON(jsonmodulegroup_get_all_v1_response_1);
	cJSON* jsonmodulegroup_get_all_v1_response_2 = modulegroup_get_all_v1_response_convertToJSON(modulegroup_get_all_v1_response_2);
	printf("repeating modulegroup_get_all_v1_response:\n%s\n", cJSON_Print(jsonmodulegroup_get_all_v1_response_2));
}

int main() {
  test_modulegroup_get_all_v1_response(1);
  test_modulegroup_get_all_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // modulegroup_get_all_v1_response_MAIN
#endif // modulegroup_get_all_v1_response_TEST
