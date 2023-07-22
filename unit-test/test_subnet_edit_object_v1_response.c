#ifndef subnet_edit_object_v1_response_TEST
#define subnet_edit_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define subnet_edit_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/subnet_edit_object_v1_response.h"
subnet_edit_object_v1_response_t* instantiate_subnet_edit_object_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


subnet_edit_object_v1_response_t* instantiate_subnet_edit_object_v1_response(int include_optional) {
  subnet_edit_object_v1_response_t* subnet_edit_object_v1_response = NULL;
  if (include_optional) {
    subnet_edit_object_v1_response = subnet_edit_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    subnet_edit_object_v1_response = subnet_edit_object_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return subnet_edit_object_v1_response;
}


#ifdef subnet_edit_object_v1_response_MAIN

void test_subnet_edit_object_v1_response(int include_optional) {
    subnet_edit_object_v1_response_t* subnet_edit_object_v1_response_1 = instantiate_subnet_edit_object_v1_response(include_optional);

	cJSON* jsonsubnet_edit_object_v1_response_1 = subnet_edit_object_v1_response_convertToJSON(subnet_edit_object_v1_response_1);
	printf("subnet_edit_object_v1_response :\n%s\n", cJSON_Print(jsonsubnet_edit_object_v1_response_1));
	subnet_edit_object_v1_response_t* subnet_edit_object_v1_response_2 = subnet_edit_object_v1_response_parseFromJSON(jsonsubnet_edit_object_v1_response_1);
	cJSON* jsonsubnet_edit_object_v1_response_2 = subnet_edit_object_v1_response_convertToJSON(subnet_edit_object_v1_response_2);
	printf("repeating subnet_edit_object_v1_response:\n%s\n", cJSON_Print(jsonsubnet_edit_object_v1_response_2));
}

int main() {
  test_subnet_edit_object_v1_response(1);
  test_subnet_edit_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // subnet_edit_object_v1_response_MAIN
#endif // subnet_edit_object_v1_response_TEST
