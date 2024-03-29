#ifndef notificationsection_get_notificationtests_v1_response_m_payload_TEST
#define notificationsection_get_notificationtests_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define notificationsection_get_notificationtests_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/notificationsection_get_notificationtests_v1_response_m_payload.h"
notificationsection_get_notificationtests_v1_response_m_payload_t* instantiate_notificationsection_get_notificationtests_v1_response_m_payload(int include_optional);



notificationsection_get_notificationtests_v1_response_m_payload_t* instantiate_notificationsection_get_notificationtests_v1_response_m_payload(int include_optional) {
  notificationsection_get_notificationtests_v1_response_m_payload_t* notificationsection_get_notificationtests_v1_response_m_payload = NULL;
  if (include_optional) {
    notificationsection_get_notificationtests_v1_response_m_payload = notificationsection_get_notificationtests_v1_response_m_payload_create(
      list_createList()
    );
  } else {
    notificationsection_get_notificationtests_v1_response_m_payload = notificationsection_get_notificationtests_v1_response_m_payload_create(
      list_createList()
    );
  }

  return notificationsection_get_notificationtests_v1_response_m_payload;
}


#ifdef notificationsection_get_notificationtests_v1_response_m_payload_MAIN

void test_notificationsection_get_notificationtests_v1_response_m_payload(int include_optional) {
    notificationsection_get_notificationtests_v1_response_m_payload_t* notificationsection_get_notificationtests_v1_response_m_payload_1 = instantiate_notificationsection_get_notificationtests_v1_response_m_payload(include_optional);

	cJSON* jsonnotificationsection_get_notificationtests_v1_response_m_payload_1 = notificationsection_get_notificationtests_v1_response_m_payload_convertToJSON(notificationsection_get_notificationtests_v1_response_m_payload_1);
	printf("notificationsection_get_notificationtests_v1_response_m_payload :\n%s\n", cJSON_Print(jsonnotificationsection_get_notificationtests_v1_response_m_payload_1));
	notificationsection_get_notificationtests_v1_response_m_payload_t* notificationsection_get_notificationtests_v1_response_m_payload_2 = notificationsection_get_notificationtests_v1_response_m_payload_parseFromJSON(jsonnotificationsection_get_notificationtests_v1_response_m_payload_1);
	cJSON* jsonnotificationsection_get_notificationtests_v1_response_m_payload_2 = notificationsection_get_notificationtests_v1_response_m_payload_convertToJSON(notificationsection_get_notificationtests_v1_response_m_payload_2);
	printf("repeating notificationsection_get_notificationtests_v1_response_m_payload:\n%s\n", cJSON_Print(jsonnotificationsection_get_notificationtests_v1_response_m_payload_2));
}

int main() {
  test_notificationsection_get_notificationtests_v1_response_m_payload(1);
  test_notificationsection_get_notificationtests_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // notificationsection_get_notificationtests_v1_response_m_payload_MAIN
#endif // notificationsection_get_notificationtests_v1_response_m_payload_TEST
