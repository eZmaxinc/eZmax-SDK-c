#ifndef notificationsection_get_notificationtests_v1_response_all_of_TEST
#define notificationsection_get_notificationtests_v1_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define notificationsection_get_notificationtests_v1_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/notificationsection_get_notificationtests_v1_response_all_of.h"
notificationsection_get_notificationtests_v1_response_all_of_t* instantiate_notificationsection_get_notificationtests_v1_response_all_of(int include_optional);

#include "test_notificationsection_get_notificationtests_v1_response_m_payload.c"


notificationsection_get_notificationtests_v1_response_all_of_t* instantiate_notificationsection_get_notificationtests_v1_response_all_of(int include_optional) {
  notificationsection_get_notificationtests_v1_response_all_of_t* notificationsection_get_notificationtests_v1_response_all_of = NULL;
  if (include_optional) {
    notificationsection_get_notificationtests_v1_response_all_of = notificationsection_get_notificationtests_v1_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_notificationsection_get_notificationtests_v1_response_m_payload(0)
    );
  } else {
    notificationsection_get_notificationtests_v1_response_all_of = notificationsection_get_notificationtests_v1_response_all_of_create(
      NULL
    );
  }

  return notificationsection_get_notificationtests_v1_response_all_of;
}


#ifdef notificationsection_get_notificationtests_v1_response_all_of_MAIN

void test_notificationsection_get_notificationtests_v1_response_all_of(int include_optional) {
    notificationsection_get_notificationtests_v1_response_all_of_t* notificationsection_get_notificationtests_v1_response_all_of_1 = instantiate_notificationsection_get_notificationtests_v1_response_all_of(include_optional);

	cJSON* jsonnotificationsection_get_notificationtests_v1_response_all_of_1 = notificationsection_get_notificationtests_v1_response_all_of_convertToJSON(notificationsection_get_notificationtests_v1_response_all_of_1);
	printf("notificationsection_get_notificationtests_v1_response_all_of :\n%s\n", cJSON_Print(jsonnotificationsection_get_notificationtests_v1_response_all_of_1));
	notificationsection_get_notificationtests_v1_response_all_of_t* notificationsection_get_notificationtests_v1_response_all_of_2 = notificationsection_get_notificationtests_v1_response_all_of_parseFromJSON(jsonnotificationsection_get_notificationtests_v1_response_all_of_1);
	cJSON* jsonnotificationsection_get_notificationtests_v1_response_all_of_2 = notificationsection_get_notificationtests_v1_response_all_of_convertToJSON(notificationsection_get_notificationtests_v1_response_all_of_2);
	printf("repeating notificationsection_get_notificationtests_v1_response_all_of:\n%s\n", cJSON_Print(jsonnotificationsection_get_notificationtests_v1_response_all_of_2));
}

int main() {
  test_notificationsection_get_notificationtests_v1_response_all_of(1);
  test_notificationsection_get_notificationtests_v1_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // notificationsection_get_notificationtests_v1_response_all_of_MAIN
#endif // notificationsection_get_notificationtests_v1_response_all_of_TEST
