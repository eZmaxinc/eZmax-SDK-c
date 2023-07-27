#ifndef ezsignsignergroupmembership_get_object_v2_response_TEST
#define ezsignsignergroupmembership_get_object_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignergroupmembership_get_object_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignergroupmembership_get_object_v2_response.h"
ezsignsignergroupmembership_get_object_v2_response_t* instantiate_ezsignsignergroupmembership_get_object_v2_response(int include_optional);

#include "test_ezsignsignergroupmembership_get_object_v2_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


ezsignsignergroupmembership_get_object_v2_response_t* instantiate_ezsignsignergroupmembership_get_object_v2_response(int include_optional) {
  ezsignsignergroupmembership_get_object_v2_response_t* ezsignsignergroupmembership_get_object_v2_response = NULL;
  if (include_optional) {
    ezsignsignergroupmembership_get_object_v2_response = ezsignsignergroupmembership_get_object_v2_response_create(
       // false, not to have infinite recursion
      instantiate_ezsignsignergroupmembership_get_object_v2_response_m_payload(0),
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    ezsignsignergroupmembership_get_object_v2_response = ezsignsignergroupmembership_get_object_v2_response_create(
      NULL,
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return ezsignsignergroupmembership_get_object_v2_response;
}


#ifdef ezsignsignergroupmembership_get_object_v2_response_MAIN

void test_ezsignsignergroupmembership_get_object_v2_response(int include_optional) {
    ezsignsignergroupmembership_get_object_v2_response_t* ezsignsignergroupmembership_get_object_v2_response_1 = instantiate_ezsignsignergroupmembership_get_object_v2_response(include_optional);

	cJSON* jsonezsignsignergroupmembership_get_object_v2_response_1 = ezsignsignergroupmembership_get_object_v2_response_convertToJSON(ezsignsignergroupmembership_get_object_v2_response_1);
	printf("ezsignsignergroupmembership_get_object_v2_response :\n%s\n", cJSON_Print(jsonezsignsignergroupmembership_get_object_v2_response_1));
	ezsignsignergroupmembership_get_object_v2_response_t* ezsignsignergroupmembership_get_object_v2_response_2 = ezsignsignergroupmembership_get_object_v2_response_parseFromJSON(jsonezsignsignergroupmembership_get_object_v2_response_1);
	cJSON* jsonezsignsignergroupmembership_get_object_v2_response_2 = ezsignsignergroupmembership_get_object_v2_response_convertToJSON(ezsignsignergroupmembership_get_object_v2_response_2);
	printf("repeating ezsignsignergroupmembership_get_object_v2_response:\n%s\n", cJSON_Print(jsonezsignsignergroupmembership_get_object_v2_response_2));
}

int main() {
  test_ezsignsignergroupmembership_get_object_v2_response(1);
  test_ezsignsignergroupmembership_get_object_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignergroupmembership_get_object_v2_response_MAIN
#endif // ezsignsignergroupmembership_get_object_v2_response_TEST
