#ifndef notificationsection_get_notificationtests_v1_response_TEST
#define notificationsection_get_notificationtests_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define notificationsection_get_notificationtests_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/notificationsection_get_notificationtests_v1_response.h"
notificationsection_get_notificationtests_v1_response_t* instantiate_notificationsection_get_notificationtests_v1_response(int include_optional);

#include "test_notificationsection_get_notificationtests_v1_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


notificationsection_get_notificationtests_v1_response_t* instantiate_notificationsection_get_notificationtests_v1_response(int include_optional) {
  notificationsection_get_notificationtests_v1_response_t* notificationsection_get_notificationtests_v1_response = NULL;
  if (include_optional) {
    notificationsection_get_notificationtests_v1_response = notificationsection_get_notificationtests_v1_response_create(
       // false, not to have infinite recursion
      instantiate_notificationsection_get_notificationtests_v1_response_m_payload(0),
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    notificationsection_get_notificationtests_v1_response = notificationsection_get_notificationtests_v1_response_create(
      NULL,
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return notificationsection_get_notificationtests_v1_response;
}


#ifdef notificationsection_get_notificationtests_v1_response_MAIN

void test_notificationsection_get_notificationtests_v1_response(int include_optional) {
    notificationsection_get_notificationtests_v1_response_t* notificationsection_get_notificationtests_v1_response_1 = instantiate_notificationsection_get_notificationtests_v1_response(include_optional);

	cJSON* jsonnotificationsection_get_notificationtests_v1_response_1 = notificationsection_get_notificationtests_v1_response_convertToJSON(notificationsection_get_notificationtests_v1_response_1);
	printf("notificationsection_get_notificationtests_v1_response :\n%s\n", cJSON_Print(jsonnotificationsection_get_notificationtests_v1_response_1));
	notificationsection_get_notificationtests_v1_response_t* notificationsection_get_notificationtests_v1_response_2 = notificationsection_get_notificationtests_v1_response_parseFromJSON(jsonnotificationsection_get_notificationtests_v1_response_1);
	cJSON* jsonnotificationsection_get_notificationtests_v1_response_2 = notificationsection_get_notificationtests_v1_response_convertToJSON(notificationsection_get_notificationtests_v1_response_2);
	printf("repeating notificationsection_get_notificationtests_v1_response:\n%s\n", cJSON_Print(jsonnotificationsection_get_notificationtests_v1_response_2));
}

int main() {
  test_notificationsection_get_notificationtests_v1_response(1);
  test_notificationsection_get_notificationtests_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // notificationsection_get_notificationtests_v1_response_MAIN
#endif // notificationsection_get_notificationtests_v1_response_TEST
