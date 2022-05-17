#ifndef notificationtest_response_TEST
#define notificationtest_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define notificationtest_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/notificationtest_response.h"
notificationtest_response_t* instantiate_notificationtest_response(int include_optional);



notificationtest_response_t* instantiate_notificationtest_response(int include_optional) {
  notificationtest_response_t* notificationtest_response = NULL;
  if (include_optional) {
    notificationtest_response = notificationtest_response_create(
      14,
      3,
      "Default",
      "Default"
    );
  } else {
    notificationtest_response = notificationtest_response_create(
      14,
      3,
      "Default",
      "Default"
    );
  }

  return notificationtest_response;
}


#ifdef notificationtest_response_MAIN

void test_notificationtest_response(int include_optional) {
    notificationtest_response_t* notificationtest_response_1 = instantiate_notificationtest_response(include_optional);

	cJSON* jsonnotificationtest_response_1 = notificationtest_response_convertToJSON(notificationtest_response_1);
	printf("notificationtest_response :\n%s\n", cJSON_Print(jsonnotificationtest_response_1));
	notificationtest_response_t* notificationtest_response_2 = notificationtest_response_parseFromJSON(jsonnotificationtest_response_1);
	cJSON* jsonnotificationtest_response_2 = notificationtest_response_convertToJSON(notificationtest_response_2);
	printf("repeating notificationtest_response:\n%s\n", cJSON_Print(jsonnotificationtest_response_2));
}

int main() {
  test_notificationtest_response(1);
  test_notificationtest_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // notificationtest_response_MAIN
#endif // notificationtest_response_TEST
