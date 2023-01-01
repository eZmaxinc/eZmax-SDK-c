#ifndef communication_get_object_v2_response_TEST
#define communication_get_object_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define communication_get_object_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/communication_get_object_v2_response.h"
communication_get_object_v2_response_t* instantiate_communication_get_object_v2_response(int include_optional);

#include "test_communication_get_object_v2_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


communication_get_object_v2_response_t* instantiate_communication_get_object_v2_response(int include_optional) {
  communication_get_object_v2_response_t* communication_get_object_v2_response = NULL;
  if (include_optional) {
    communication_get_object_v2_response = communication_get_object_v2_response_create(
       // false, not to have infinite recursion
      instantiate_communication_get_object_v2_response_m_payload(0),
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    communication_get_object_v2_response = communication_get_object_v2_response_create(
      NULL,
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return communication_get_object_v2_response;
}


#ifdef communication_get_object_v2_response_MAIN

void test_communication_get_object_v2_response(int include_optional) {
    communication_get_object_v2_response_t* communication_get_object_v2_response_1 = instantiate_communication_get_object_v2_response(include_optional);

	cJSON* jsoncommunication_get_object_v2_response_1 = communication_get_object_v2_response_convertToJSON(communication_get_object_v2_response_1);
	printf("communication_get_object_v2_response :\n%s\n", cJSON_Print(jsoncommunication_get_object_v2_response_1));
	communication_get_object_v2_response_t* communication_get_object_v2_response_2 = communication_get_object_v2_response_parseFromJSON(jsoncommunication_get_object_v2_response_1);
	cJSON* jsoncommunication_get_object_v2_response_2 = communication_get_object_v2_response_convertToJSON(communication_get_object_v2_response_2);
	printf("repeating communication_get_object_v2_response:\n%s\n", cJSON_Print(jsoncommunication_get_object_v2_response_2));
}

int main() {
  test_communication_get_object_v2_response(1);
  test_communication_get_object_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // communication_get_object_v2_response_MAIN
#endif // communication_get_object_v2_response_TEST
