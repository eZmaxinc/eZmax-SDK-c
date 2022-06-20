#ifndef notificationtest_get_elements_v1_response_m_payload_TEST
#define notificationtest_get_elements_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define notificationtest_get_elements_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/notificationtest_get_elements_v1_response_m_payload.h"
notificationtest_get_elements_v1_response_m_payload_t* instantiate_notificationtest_get_elements_v1_response_m_payload(int include_optional);



notificationtest_get_elements_v1_response_m_payload_t* instantiate_notificationtest_get_elements_v1_response_m_payload(int include_optional) {
  notificationtest_get_elements_v1_response_m_payload_t* notificationtest_get_elements_v1_response_m_payload = NULL;
  if (include_optional) {
    notificationtest_get_elements_v1_response_m_payload = notificationtest_get_elements_v1_response_m_payload_create(
      14,
      "Default",
      list_createList(),
      list_createList()
    );
  } else {
    notificationtest_get_elements_v1_response_m_payload = notificationtest_get_elements_v1_response_m_payload_create(
      14,
      "Default",
      list_createList(),
      list_createList()
    );
  }

  return notificationtest_get_elements_v1_response_m_payload;
}


#ifdef notificationtest_get_elements_v1_response_m_payload_MAIN

void test_notificationtest_get_elements_v1_response_m_payload(int include_optional) {
    notificationtest_get_elements_v1_response_m_payload_t* notificationtest_get_elements_v1_response_m_payload_1 = instantiate_notificationtest_get_elements_v1_response_m_payload(include_optional);

	cJSON* jsonnotificationtest_get_elements_v1_response_m_payload_1 = notificationtest_get_elements_v1_response_m_payload_convertToJSON(notificationtest_get_elements_v1_response_m_payload_1);
	printf("notificationtest_get_elements_v1_response_m_payload :\n%s\n", cJSON_Print(jsonnotificationtest_get_elements_v1_response_m_payload_1));
	notificationtest_get_elements_v1_response_m_payload_t* notificationtest_get_elements_v1_response_m_payload_2 = notificationtest_get_elements_v1_response_m_payload_parseFromJSON(jsonnotificationtest_get_elements_v1_response_m_payload_1);
	cJSON* jsonnotificationtest_get_elements_v1_response_m_payload_2 = notificationtest_get_elements_v1_response_m_payload_convertToJSON(notificationtest_get_elements_v1_response_m_payload_2);
	printf("repeating notificationtest_get_elements_v1_response_m_payload:\n%s\n", cJSON_Print(jsonnotificationtest_get_elements_v1_response_m_payload_2));
}

int main() {
  test_notificationtest_get_elements_v1_response_m_payload(1);
  test_notificationtest_get_elements_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // notificationtest_get_elements_v1_response_m_payload_MAIN
#endif // notificationtest_get_elements_v1_response_m_payload_TEST
