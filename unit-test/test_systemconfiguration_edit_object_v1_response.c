#ifndef systemconfiguration_edit_object_v1_response_TEST
#define systemconfiguration_edit_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define systemconfiguration_edit_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/systemconfiguration_edit_object_v1_response.h"
systemconfiguration_edit_object_v1_response_t* instantiate_systemconfiguration_edit_object_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


systemconfiguration_edit_object_v1_response_t* instantiate_systemconfiguration_edit_object_v1_response(int include_optional) {
  systemconfiguration_edit_object_v1_response_t* systemconfiguration_edit_object_v1_response = NULL;
  if (include_optional) {
    systemconfiguration_edit_object_v1_response = systemconfiguration_edit_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    systemconfiguration_edit_object_v1_response = systemconfiguration_edit_object_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return systemconfiguration_edit_object_v1_response;
}


#ifdef systemconfiguration_edit_object_v1_response_MAIN

void test_systemconfiguration_edit_object_v1_response(int include_optional) {
    systemconfiguration_edit_object_v1_response_t* systemconfiguration_edit_object_v1_response_1 = instantiate_systemconfiguration_edit_object_v1_response(include_optional);

	cJSON* jsonsystemconfiguration_edit_object_v1_response_1 = systemconfiguration_edit_object_v1_response_convertToJSON(systemconfiguration_edit_object_v1_response_1);
	printf("systemconfiguration_edit_object_v1_response :\n%s\n", cJSON_Print(jsonsystemconfiguration_edit_object_v1_response_1));
	systemconfiguration_edit_object_v1_response_t* systemconfiguration_edit_object_v1_response_2 = systemconfiguration_edit_object_v1_response_parseFromJSON(jsonsystemconfiguration_edit_object_v1_response_1);
	cJSON* jsonsystemconfiguration_edit_object_v1_response_2 = systemconfiguration_edit_object_v1_response_convertToJSON(systemconfiguration_edit_object_v1_response_2);
	printf("repeating systemconfiguration_edit_object_v1_response:\n%s\n", cJSON_Print(jsonsystemconfiguration_edit_object_v1_response_2));
}

int main() {
  test_systemconfiguration_edit_object_v1_response(1);
  test_systemconfiguration_edit_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // systemconfiguration_edit_object_v1_response_MAIN
#endif // systemconfiguration_edit_object_v1_response_TEST
