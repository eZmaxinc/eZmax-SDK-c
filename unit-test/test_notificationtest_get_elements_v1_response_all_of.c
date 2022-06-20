#ifndef notificationtest_get_elements_v1_response_all_of_TEST
#define notificationtest_get_elements_v1_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define notificationtest_get_elements_v1_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/notificationtest_get_elements_v1_response_all_of.h"
notificationtest_get_elements_v1_response_all_of_t* instantiate_notificationtest_get_elements_v1_response_all_of(int include_optional);

#include "test_notificationtest_get_elements_v1_response_m_payload.c"


notificationtest_get_elements_v1_response_all_of_t* instantiate_notificationtest_get_elements_v1_response_all_of(int include_optional) {
  notificationtest_get_elements_v1_response_all_of_t* notificationtest_get_elements_v1_response_all_of = NULL;
  if (include_optional) {
    notificationtest_get_elements_v1_response_all_of = notificationtest_get_elements_v1_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_notificationtest_get_elements_v1_response_m_payload(0)
    );
  } else {
    notificationtest_get_elements_v1_response_all_of = notificationtest_get_elements_v1_response_all_of_create(
      NULL
    );
  }

  return notificationtest_get_elements_v1_response_all_of;
}


#ifdef notificationtest_get_elements_v1_response_all_of_MAIN

void test_notificationtest_get_elements_v1_response_all_of(int include_optional) {
    notificationtest_get_elements_v1_response_all_of_t* notificationtest_get_elements_v1_response_all_of_1 = instantiate_notificationtest_get_elements_v1_response_all_of(include_optional);

	cJSON* jsonnotificationtest_get_elements_v1_response_all_of_1 = notificationtest_get_elements_v1_response_all_of_convertToJSON(notificationtest_get_elements_v1_response_all_of_1);
	printf("notificationtest_get_elements_v1_response_all_of :\n%s\n", cJSON_Print(jsonnotificationtest_get_elements_v1_response_all_of_1));
	notificationtest_get_elements_v1_response_all_of_t* notificationtest_get_elements_v1_response_all_of_2 = notificationtest_get_elements_v1_response_all_of_parseFromJSON(jsonnotificationtest_get_elements_v1_response_all_of_1);
	cJSON* jsonnotificationtest_get_elements_v1_response_all_of_2 = notificationtest_get_elements_v1_response_all_of_convertToJSON(notificationtest_get_elements_v1_response_all_of_2);
	printf("repeating notificationtest_get_elements_v1_response_all_of:\n%s\n", cJSON_Print(jsonnotificationtest_get_elements_v1_response_all_of_2));
}

int main() {
  test_notificationtest_get_elements_v1_response_all_of(1);
  test_notificationtest_get_elements_v1_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // notificationtest_get_elements_v1_response_all_of_MAIN
#endif // notificationtest_get_elements_v1_response_all_of_TEST
