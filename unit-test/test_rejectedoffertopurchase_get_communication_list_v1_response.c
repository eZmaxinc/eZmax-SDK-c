#ifndef rejectedoffertopurchase_get_communication_list_v1_response_TEST
#define rejectedoffertopurchase_get_communication_list_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define rejectedoffertopurchase_get_communication_list_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/rejectedoffertopurchase_get_communication_list_v1_response.h"
rejectedoffertopurchase_get_communication_list_v1_response_t* instantiate_rejectedoffertopurchase_get_communication_list_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload_get_list.c"
#include "test_common_response_obj_debug.c"
#include "test_rejectedoffertopurchase_get_communication_list_v1_response_m_payload.c"


rejectedoffertopurchase_get_communication_list_v1_response_t* instantiate_rejectedoffertopurchase_get_communication_list_v1_response(int include_optional) {
  rejectedoffertopurchase_get_communication_list_v1_response_t* rejectedoffertopurchase_get_communication_list_v1_response = NULL;
  if (include_optional) {
    rejectedoffertopurchase_get_communication_list_v1_response = rejectedoffertopurchase_get_communication_list_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload_get_list(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_rejectedoffertopurchase_get_communication_list_v1_response_m_payload(0)
    );
  } else {
    rejectedoffertopurchase_get_communication_list_v1_response = rejectedoffertopurchase_get_communication_list_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return rejectedoffertopurchase_get_communication_list_v1_response;
}


#ifdef rejectedoffertopurchase_get_communication_list_v1_response_MAIN

void test_rejectedoffertopurchase_get_communication_list_v1_response(int include_optional) {
    rejectedoffertopurchase_get_communication_list_v1_response_t* rejectedoffertopurchase_get_communication_list_v1_response_1 = instantiate_rejectedoffertopurchase_get_communication_list_v1_response(include_optional);

	cJSON* jsonrejectedoffertopurchase_get_communication_list_v1_response_1 = rejectedoffertopurchase_get_communication_list_v1_response_convertToJSON(rejectedoffertopurchase_get_communication_list_v1_response_1);
	printf("rejectedoffertopurchase_get_communication_list_v1_response :\n%s\n", cJSON_Print(jsonrejectedoffertopurchase_get_communication_list_v1_response_1));
	rejectedoffertopurchase_get_communication_list_v1_response_t* rejectedoffertopurchase_get_communication_list_v1_response_2 = rejectedoffertopurchase_get_communication_list_v1_response_parseFromJSON(jsonrejectedoffertopurchase_get_communication_list_v1_response_1);
	cJSON* jsonrejectedoffertopurchase_get_communication_list_v1_response_2 = rejectedoffertopurchase_get_communication_list_v1_response_convertToJSON(rejectedoffertopurchase_get_communication_list_v1_response_2);
	printf("repeating rejectedoffertopurchase_get_communication_list_v1_response:\n%s\n", cJSON_Print(jsonrejectedoffertopurchase_get_communication_list_v1_response_2));
}

int main() {
  test_rejectedoffertopurchase_get_communication_list_v1_response(1);
  test_rejectedoffertopurchase_get_communication_list_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // rejectedoffertopurchase_get_communication_list_v1_response_MAIN
#endif // rejectedoffertopurchase_get_communication_list_v1_response_TEST
