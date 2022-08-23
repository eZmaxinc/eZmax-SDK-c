#ifndef department_get_members_v1_response_TEST
#define department_get_members_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define department_get_members_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/department_get_members_v1_response.h"
department_get_members_v1_response_t* instantiate_department_get_members_v1_response(int include_optional);

#include "test_department_get_members_v1_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


department_get_members_v1_response_t* instantiate_department_get_members_v1_response(int include_optional) {
  department_get_members_v1_response_t* department_get_members_v1_response = NULL;
  if (include_optional) {
    department_get_members_v1_response = department_get_members_v1_response_create(
       // false, not to have infinite recursion
      instantiate_department_get_members_v1_response_m_payload(0),
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    department_get_members_v1_response = department_get_members_v1_response_create(
      NULL,
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return department_get_members_v1_response;
}


#ifdef department_get_members_v1_response_MAIN

void test_department_get_members_v1_response(int include_optional) {
    department_get_members_v1_response_t* department_get_members_v1_response_1 = instantiate_department_get_members_v1_response(include_optional);

	cJSON* jsondepartment_get_members_v1_response_1 = department_get_members_v1_response_convertToJSON(department_get_members_v1_response_1);
	printf("department_get_members_v1_response :\n%s\n", cJSON_Print(jsondepartment_get_members_v1_response_1));
	department_get_members_v1_response_t* department_get_members_v1_response_2 = department_get_members_v1_response_parseFromJSON(jsondepartment_get_members_v1_response_1);
	cJSON* jsondepartment_get_members_v1_response_2 = department_get_members_v1_response_convertToJSON(department_get_members_v1_response_2);
	printf("repeating department_get_members_v1_response:\n%s\n", cJSON_Print(jsondepartment_get_members_v1_response_2));
}

int main() {
  test_department_get_members_v1_response(1);
  test_department_get_members_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // department_get_members_v1_response_MAIN
#endif // department_get_members_v1_response_TEST
