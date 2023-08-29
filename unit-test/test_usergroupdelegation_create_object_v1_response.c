#ifndef usergroupdelegation_create_object_v1_response_TEST
#define usergroupdelegation_create_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroupdelegation_create_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroupdelegation_create_object_v1_response.h"
usergroupdelegation_create_object_v1_response_t* instantiate_usergroupdelegation_create_object_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_usergroupdelegation_create_object_v1_response_m_payload.c"


usergroupdelegation_create_object_v1_response_t* instantiate_usergroupdelegation_create_object_v1_response(int include_optional) {
  usergroupdelegation_create_object_v1_response_t* usergroupdelegation_create_object_v1_response = NULL;
  if (include_optional) {
    usergroupdelegation_create_object_v1_response = usergroupdelegation_create_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_usergroupdelegation_create_object_v1_response_m_payload(0)
    );
  } else {
    usergroupdelegation_create_object_v1_response = usergroupdelegation_create_object_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return usergroupdelegation_create_object_v1_response;
}


#ifdef usergroupdelegation_create_object_v1_response_MAIN

void test_usergroupdelegation_create_object_v1_response(int include_optional) {
    usergroupdelegation_create_object_v1_response_t* usergroupdelegation_create_object_v1_response_1 = instantiate_usergroupdelegation_create_object_v1_response(include_optional);

	cJSON* jsonusergroupdelegation_create_object_v1_response_1 = usergroupdelegation_create_object_v1_response_convertToJSON(usergroupdelegation_create_object_v1_response_1);
	printf("usergroupdelegation_create_object_v1_response :\n%s\n", cJSON_Print(jsonusergroupdelegation_create_object_v1_response_1));
	usergroupdelegation_create_object_v1_response_t* usergroupdelegation_create_object_v1_response_2 = usergroupdelegation_create_object_v1_response_parseFromJSON(jsonusergroupdelegation_create_object_v1_response_1);
	cJSON* jsonusergroupdelegation_create_object_v1_response_2 = usergroupdelegation_create_object_v1_response_convertToJSON(usergroupdelegation_create_object_v1_response_2);
	printf("repeating usergroupdelegation_create_object_v1_response:\n%s\n", cJSON_Print(jsonusergroupdelegation_create_object_v1_response_2));
}

int main() {
  test_usergroupdelegation_create_object_v1_response(1);
  test_usergroupdelegation_create_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroupdelegation_create_object_v1_response_MAIN
#endif // usergroupdelegation_create_object_v1_response_TEST
