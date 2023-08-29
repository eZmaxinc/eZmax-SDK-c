#ifndef userstaged_get_list_v1_response_TEST
#define userstaged_get_list_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define userstaged_get_list_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/userstaged_get_list_v1_response.h"
userstaged_get_list_v1_response_t* instantiate_userstaged_get_list_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload_get_list.c"
#include "test_common_response_obj_debug.c"
#include "test_userstaged_get_list_v1_response_m_payload.c"


userstaged_get_list_v1_response_t* instantiate_userstaged_get_list_v1_response(int include_optional) {
  userstaged_get_list_v1_response_t* userstaged_get_list_v1_response = NULL;
  if (include_optional) {
    userstaged_get_list_v1_response = userstaged_get_list_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload_get_list(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_userstaged_get_list_v1_response_m_payload(0)
    );
  } else {
    userstaged_get_list_v1_response = userstaged_get_list_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return userstaged_get_list_v1_response;
}


#ifdef userstaged_get_list_v1_response_MAIN

void test_userstaged_get_list_v1_response(int include_optional) {
    userstaged_get_list_v1_response_t* userstaged_get_list_v1_response_1 = instantiate_userstaged_get_list_v1_response(include_optional);

	cJSON* jsonuserstaged_get_list_v1_response_1 = userstaged_get_list_v1_response_convertToJSON(userstaged_get_list_v1_response_1);
	printf("userstaged_get_list_v1_response :\n%s\n", cJSON_Print(jsonuserstaged_get_list_v1_response_1));
	userstaged_get_list_v1_response_t* userstaged_get_list_v1_response_2 = userstaged_get_list_v1_response_parseFromJSON(jsonuserstaged_get_list_v1_response_1);
	cJSON* jsonuserstaged_get_list_v1_response_2 = userstaged_get_list_v1_response_convertToJSON(userstaged_get_list_v1_response_2);
	printf("repeating userstaged_get_list_v1_response:\n%s\n", cJSON_Print(jsonuserstaged_get_list_v1_response_2));
}

int main() {
  test_userstaged_get_list_v1_response(1);
  test_userstaged_get_list_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // userstaged_get_list_v1_response_MAIN
#endif // userstaged_get_list_v1_response_TEST
