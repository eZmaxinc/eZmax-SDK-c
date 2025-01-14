#ifndef tranqcontract_get_communication_list_v1_response_TEST
#define tranqcontract_get_communication_list_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tranqcontract_get_communication_list_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tranqcontract_get_communication_list_v1_response.h"
tranqcontract_get_communication_list_v1_response_t* instantiate_tranqcontract_get_communication_list_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload_get_list.c"
#include "test_common_response_obj_debug.c"
#include "test_tranqcontract_get_communication_list_v1_response_m_payload.c"


tranqcontract_get_communication_list_v1_response_t* instantiate_tranqcontract_get_communication_list_v1_response(int include_optional) {
  tranqcontract_get_communication_list_v1_response_t* tranqcontract_get_communication_list_v1_response = NULL;
  if (include_optional) {
    tranqcontract_get_communication_list_v1_response = tranqcontract_get_communication_list_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload_get_list(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_tranqcontract_get_communication_list_v1_response_m_payload(0)
    );
  } else {
    tranqcontract_get_communication_list_v1_response = tranqcontract_get_communication_list_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return tranqcontract_get_communication_list_v1_response;
}


#ifdef tranqcontract_get_communication_list_v1_response_MAIN

void test_tranqcontract_get_communication_list_v1_response(int include_optional) {
    tranqcontract_get_communication_list_v1_response_t* tranqcontract_get_communication_list_v1_response_1 = instantiate_tranqcontract_get_communication_list_v1_response(include_optional);

	cJSON* jsontranqcontract_get_communication_list_v1_response_1 = tranqcontract_get_communication_list_v1_response_convertToJSON(tranqcontract_get_communication_list_v1_response_1);
	printf("tranqcontract_get_communication_list_v1_response :\n%s\n", cJSON_Print(jsontranqcontract_get_communication_list_v1_response_1));
	tranqcontract_get_communication_list_v1_response_t* tranqcontract_get_communication_list_v1_response_2 = tranqcontract_get_communication_list_v1_response_parseFromJSON(jsontranqcontract_get_communication_list_v1_response_1);
	cJSON* jsontranqcontract_get_communication_list_v1_response_2 = tranqcontract_get_communication_list_v1_response_convertToJSON(tranqcontract_get_communication_list_v1_response_2);
	printf("repeating tranqcontract_get_communication_list_v1_response:\n%s\n", cJSON_Print(jsontranqcontract_get_communication_list_v1_response_2));
}

int main() {
  test_tranqcontract_get_communication_list_v1_response(1);
  test_tranqcontract_get_communication_list_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // tranqcontract_get_communication_list_v1_response_MAIN
#endif // tranqcontract_get_communication_list_v1_response_TEST
