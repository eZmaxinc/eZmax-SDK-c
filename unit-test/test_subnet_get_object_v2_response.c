#ifndef subnet_get_object_v2_response_TEST
#define subnet_get_object_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define subnet_get_object_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/subnet_get_object_v2_response.h"
subnet_get_object_v2_response_t* instantiate_subnet_get_object_v2_response(int include_optional);

#include "test_subnet_get_object_v2_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


subnet_get_object_v2_response_t* instantiate_subnet_get_object_v2_response(int include_optional) {
  subnet_get_object_v2_response_t* subnet_get_object_v2_response = NULL;
  if (include_optional) {
    subnet_get_object_v2_response = subnet_get_object_v2_response_create(
       // false, not to have infinite recursion
      instantiate_subnet_get_object_v2_response_m_payload(0),
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    subnet_get_object_v2_response = subnet_get_object_v2_response_create(
      NULL,
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return subnet_get_object_v2_response;
}


#ifdef subnet_get_object_v2_response_MAIN

void test_subnet_get_object_v2_response(int include_optional) {
    subnet_get_object_v2_response_t* subnet_get_object_v2_response_1 = instantiate_subnet_get_object_v2_response(include_optional);

	cJSON* jsonsubnet_get_object_v2_response_1 = subnet_get_object_v2_response_convertToJSON(subnet_get_object_v2_response_1);
	printf("subnet_get_object_v2_response :\n%s\n", cJSON_Print(jsonsubnet_get_object_v2_response_1));
	subnet_get_object_v2_response_t* subnet_get_object_v2_response_2 = subnet_get_object_v2_response_parseFromJSON(jsonsubnet_get_object_v2_response_1);
	cJSON* jsonsubnet_get_object_v2_response_2 = subnet_get_object_v2_response_convertToJSON(subnet_get_object_v2_response_2);
	printf("repeating subnet_get_object_v2_response:\n%s\n", cJSON_Print(jsonsubnet_get_object_v2_response_2));
}

int main() {
  test_subnet_get_object_v2_response(1);
  test_subnet_get_object_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // subnet_get_object_v2_response_MAIN
#endif // subnet_get_object_v2_response_TEST
