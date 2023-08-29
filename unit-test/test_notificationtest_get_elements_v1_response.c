#ifndef notificationtest_get_elements_v1_response_TEST
#define notificationtest_get_elements_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define notificationtest_get_elements_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/notificationtest_get_elements_v1_response.h"
notificationtest_get_elements_v1_response_t* instantiate_notificationtest_get_elements_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_notificationtest_get_elements_v1_response_m_payload.c"


notificationtest_get_elements_v1_response_t* instantiate_notificationtest_get_elements_v1_response(int include_optional) {
  notificationtest_get_elements_v1_response_t* notificationtest_get_elements_v1_response = NULL;
  if (include_optional) {
    notificationtest_get_elements_v1_response = notificationtest_get_elements_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_notificationtest_get_elements_v1_response_m_payload(0)
    );
  } else {
    notificationtest_get_elements_v1_response = notificationtest_get_elements_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return notificationtest_get_elements_v1_response;
}


#ifdef notificationtest_get_elements_v1_response_MAIN

void test_notificationtest_get_elements_v1_response(int include_optional) {
    notificationtest_get_elements_v1_response_t* notificationtest_get_elements_v1_response_1 = instantiate_notificationtest_get_elements_v1_response(include_optional);

	cJSON* jsonnotificationtest_get_elements_v1_response_1 = notificationtest_get_elements_v1_response_convertToJSON(notificationtest_get_elements_v1_response_1);
	printf("notificationtest_get_elements_v1_response :\n%s\n", cJSON_Print(jsonnotificationtest_get_elements_v1_response_1));
	notificationtest_get_elements_v1_response_t* notificationtest_get_elements_v1_response_2 = notificationtest_get_elements_v1_response_parseFromJSON(jsonnotificationtest_get_elements_v1_response_1);
	cJSON* jsonnotificationtest_get_elements_v1_response_2 = notificationtest_get_elements_v1_response_convertToJSON(notificationtest_get_elements_v1_response_2);
	printf("repeating notificationtest_get_elements_v1_response:\n%s\n", cJSON_Print(jsonnotificationtest_get_elements_v1_response_2));
}

int main() {
  test_notificationtest_get_elements_v1_response(1);
  test_notificationtest_get_elements_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // notificationtest_get_elements_v1_response_MAIN
#endif // notificationtest_get_elements_v1_response_TEST
