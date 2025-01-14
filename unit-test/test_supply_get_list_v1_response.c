#ifndef supply_get_list_v1_response_TEST
#define supply_get_list_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define supply_get_list_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/supply_get_list_v1_response.h"
supply_get_list_v1_response_t* instantiate_supply_get_list_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload_get_list.c"
#include "test_common_response_obj_debug.c"
#include "test_supply_get_list_v1_response_m_payload.c"


supply_get_list_v1_response_t* instantiate_supply_get_list_v1_response(int include_optional) {
  supply_get_list_v1_response_t* supply_get_list_v1_response = NULL;
  if (include_optional) {
    supply_get_list_v1_response = supply_get_list_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload_get_list(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_supply_get_list_v1_response_m_payload(0)
    );
  } else {
    supply_get_list_v1_response = supply_get_list_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return supply_get_list_v1_response;
}


#ifdef supply_get_list_v1_response_MAIN

void test_supply_get_list_v1_response(int include_optional) {
    supply_get_list_v1_response_t* supply_get_list_v1_response_1 = instantiate_supply_get_list_v1_response(include_optional);

	cJSON* jsonsupply_get_list_v1_response_1 = supply_get_list_v1_response_convertToJSON(supply_get_list_v1_response_1);
	printf("supply_get_list_v1_response :\n%s\n", cJSON_Print(jsonsupply_get_list_v1_response_1));
	supply_get_list_v1_response_t* supply_get_list_v1_response_2 = supply_get_list_v1_response_parseFromJSON(jsonsupply_get_list_v1_response_1);
	cJSON* jsonsupply_get_list_v1_response_2 = supply_get_list_v1_response_convertToJSON(supply_get_list_v1_response_2);
	printf("repeating supply_get_list_v1_response:\n%s\n", cJSON_Print(jsonsupply_get_list_v1_response_2));
}

int main() {
  test_supply_get_list_v1_response(1);
  test_supply_get_list_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // supply_get_list_v1_response_MAIN
#endif // supply_get_list_v1_response_TEST
