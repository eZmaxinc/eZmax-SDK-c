#ifndef usergroupexternal_get_usergroupexternalmemberships_v1_response_TEST
#define usergroupexternal_get_usergroupexternalmemberships_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroupexternal_get_usergroupexternalmemberships_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroupexternal_get_usergroupexternalmemberships_v1_response.h"
usergroupexternal_get_usergroupexternalmemberships_v1_response_t* instantiate_usergroupexternal_get_usergroupexternalmemberships_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload.c"


usergroupexternal_get_usergroupexternalmemberships_v1_response_t* instantiate_usergroupexternal_get_usergroupexternalmemberships_v1_response(int include_optional) {
  usergroupexternal_get_usergroupexternalmemberships_v1_response_t* usergroupexternal_get_usergroupexternalmemberships_v1_response = NULL;
  if (include_optional) {
    usergroupexternal_get_usergroupexternalmemberships_v1_response = usergroupexternal_get_usergroupexternalmemberships_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_usergroupexternal_get_usergroupexternalmemberships_v1_response_m_payload(0)
    );
  } else {
    usergroupexternal_get_usergroupexternalmemberships_v1_response = usergroupexternal_get_usergroupexternalmemberships_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return usergroupexternal_get_usergroupexternalmemberships_v1_response;
}


#ifdef usergroupexternal_get_usergroupexternalmemberships_v1_response_MAIN

void test_usergroupexternal_get_usergroupexternalmemberships_v1_response(int include_optional) {
    usergroupexternal_get_usergroupexternalmemberships_v1_response_t* usergroupexternal_get_usergroupexternalmemberships_v1_response_1 = instantiate_usergroupexternal_get_usergroupexternalmemberships_v1_response(include_optional);

	cJSON* jsonusergroupexternal_get_usergroupexternalmemberships_v1_response_1 = usergroupexternal_get_usergroupexternalmemberships_v1_response_convertToJSON(usergroupexternal_get_usergroupexternalmemberships_v1_response_1);
	printf("usergroupexternal_get_usergroupexternalmemberships_v1_response :\n%s\n", cJSON_Print(jsonusergroupexternal_get_usergroupexternalmemberships_v1_response_1));
	usergroupexternal_get_usergroupexternalmemberships_v1_response_t* usergroupexternal_get_usergroupexternalmemberships_v1_response_2 = usergroupexternal_get_usergroupexternalmemberships_v1_response_parseFromJSON(jsonusergroupexternal_get_usergroupexternalmemberships_v1_response_1);
	cJSON* jsonusergroupexternal_get_usergroupexternalmemberships_v1_response_2 = usergroupexternal_get_usergroupexternalmemberships_v1_response_convertToJSON(usergroupexternal_get_usergroupexternalmemberships_v1_response_2);
	printf("repeating usergroupexternal_get_usergroupexternalmemberships_v1_response:\n%s\n", cJSON_Print(jsonusergroupexternal_get_usergroupexternalmemberships_v1_response_2));
}

int main() {
  test_usergroupexternal_get_usergroupexternalmemberships_v1_response(1);
  test_usergroupexternal_get_usergroupexternalmemberships_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroupexternal_get_usergroupexternalmemberships_v1_response_MAIN
#endif // usergroupexternal_get_usergroupexternalmemberships_v1_response_TEST
