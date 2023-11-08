#ifndef otherincome_get_communication_list_v1_response_TEST
#define otherincome_get_communication_list_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define otherincome_get_communication_list_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/otherincome_get_communication_list_v1_response.h"
otherincome_get_communication_list_v1_response_t* instantiate_otherincome_get_communication_list_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload_get_list.c"
#include "test_common_response_obj_debug.c"
#include "test_otherincome_get_communication_list_v1_response_m_payload.c"


otherincome_get_communication_list_v1_response_t* instantiate_otherincome_get_communication_list_v1_response(int include_optional) {
  otherincome_get_communication_list_v1_response_t* otherincome_get_communication_list_v1_response = NULL;
  if (include_optional) {
    otherincome_get_communication_list_v1_response = otherincome_get_communication_list_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload_get_list(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_otherincome_get_communication_list_v1_response_m_payload(0)
    );
  } else {
    otherincome_get_communication_list_v1_response = otherincome_get_communication_list_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return otherincome_get_communication_list_v1_response;
}


#ifdef otherincome_get_communication_list_v1_response_MAIN

void test_otherincome_get_communication_list_v1_response(int include_optional) {
    otherincome_get_communication_list_v1_response_t* otherincome_get_communication_list_v1_response_1 = instantiate_otherincome_get_communication_list_v1_response(include_optional);

	cJSON* jsonotherincome_get_communication_list_v1_response_1 = otherincome_get_communication_list_v1_response_convertToJSON(otherincome_get_communication_list_v1_response_1);
	printf("otherincome_get_communication_list_v1_response :\n%s\n", cJSON_Print(jsonotherincome_get_communication_list_v1_response_1));
	otherincome_get_communication_list_v1_response_t* otherincome_get_communication_list_v1_response_2 = otherincome_get_communication_list_v1_response_parseFromJSON(jsonotherincome_get_communication_list_v1_response_1);
	cJSON* jsonotherincome_get_communication_list_v1_response_2 = otherincome_get_communication_list_v1_response_convertToJSON(otherincome_get_communication_list_v1_response_2);
	printf("repeating otherincome_get_communication_list_v1_response:\n%s\n", cJSON_Print(jsonotherincome_get_communication_list_v1_response_2));
}

int main() {
  test_otherincome_get_communication_list_v1_response(1);
  test_otherincome_get_communication_list_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // otherincome_get_communication_list_v1_response_MAIN
#endif // otherincome_get_communication_list_v1_response_TEST
