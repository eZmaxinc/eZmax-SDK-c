#ifndef ezsignsignergroupmembership_create_object_v1_response_TEST
#define ezsignsignergroupmembership_create_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignergroupmembership_create_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignergroupmembership_create_object_v1_response.h"
ezsignsignergroupmembership_create_object_v1_response_t* instantiate_ezsignsignergroupmembership_create_object_v1_response(int include_optional);

#include "test_ezsignsignergroupmembership_create_object_v1_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


ezsignsignergroupmembership_create_object_v1_response_t* instantiate_ezsignsignergroupmembership_create_object_v1_response(int include_optional) {
  ezsignsignergroupmembership_create_object_v1_response_t* ezsignsignergroupmembership_create_object_v1_response = NULL;
  if (include_optional) {
    ezsignsignergroupmembership_create_object_v1_response = ezsignsignergroupmembership_create_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_ezsignsignergroupmembership_create_object_v1_response_m_payload(0),
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    ezsignsignergroupmembership_create_object_v1_response = ezsignsignergroupmembership_create_object_v1_response_create(
      NULL,
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return ezsignsignergroupmembership_create_object_v1_response;
}


#ifdef ezsignsignergroupmembership_create_object_v1_response_MAIN

void test_ezsignsignergroupmembership_create_object_v1_response(int include_optional) {
    ezsignsignergroupmembership_create_object_v1_response_t* ezsignsignergroupmembership_create_object_v1_response_1 = instantiate_ezsignsignergroupmembership_create_object_v1_response(include_optional);

	cJSON* jsonezsignsignergroupmembership_create_object_v1_response_1 = ezsignsignergroupmembership_create_object_v1_response_convertToJSON(ezsignsignergroupmembership_create_object_v1_response_1);
	printf("ezsignsignergroupmembership_create_object_v1_response :\n%s\n", cJSON_Print(jsonezsignsignergroupmembership_create_object_v1_response_1));
	ezsignsignergroupmembership_create_object_v1_response_t* ezsignsignergroupmembership_create_object_v1_response_2 = ezsignsignergroupmembership_create_object_v1_response_parseFromJSON(jsonezsignsignergroupmembership_create_object_v1_response_1);
	cJSON* jsonezsignsignergroupmembership_create_object_v1_response_2 = ezsignsignergroupmembership_create_object_v1_response_convertToJSON(ezsignsignergroupmembership_create_object_v1_response_2);
	printf("repeating ezsignsignergroupmembership_create_object_v1_response:\n%s\n", cJSON_Print(jsonezsignsignergroupmembership_create_object_v1_response_2));
}

int main() {
  test_ezsignsignergroupmembership_create_object_v1_response(1);
  test_ezsignsignergroupmembership_create_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignergroupmembership_create_object_v1_response_MAIN
#endif // ezsignsignergroupmembership_create_object_v1_response_TEST
