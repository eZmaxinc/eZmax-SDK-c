#ifndef notificationsubsection_response_TEST
#define notificationsubsection_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define notificationsubsection_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/notificationsubsection_response.h"
notificationsubsection_response_t* instantiate_notificationsubsection_response(int include_optional);

#include "test_multilingual_notificationsubsection_name.c"


notificationsubsection_response_t* instantiate_notificationsubsection_response(int include_optional) {
  notificationsubsection_response_t* notificationsubsection_response = NULL;
  if (include_optional) {
    notificationsubsection_response = notificationsubsection_response_create(
      3,
      1,
       // false, not to have infinite recursion
      instantiate_multilingual_notificationsubsection_name(0),
      "Homepage",
      "Default"
    );
  } else {
    notificationsubsection_response = notificationsubsection_response_create(
      3,
      1,
      NULL,
      "Homepage",
      "Default"
    );
  }

  return notificationsubsection_response;
}


#ifdef notificationsubsection_response_MAIN

void test_notificationsubsection_response(int include_optional) {
    notificationsubsection_response_t* notificationsubsection_response_1 = instantiate_notificationsubsection_response(include_optional);

	cJSON* jsonnotificationsubsection_response_1 = notificationsubsection_response_convertToJSON(notificationsubsection_response_1);
	printf("notificationsubsection_response :\n%s\n", cJSON_Print(jsonnotificationsubsection_response_1));
	notificationsubsection_response_t* notificationsubsection_response_2 = notificationsubsection_response_parseFromJSON(jsonnotificationsubsection_response_1);
	cJSON* jsonnotificationsubsection_response_2 = notificationsubsection_response_convertToJSON(notificationsubsection_response_2);
	printf("repeating notificationsubsection_response:\n%s\n", cJSON_Print(jsonnotificationsubsection_response_2));
}

int main() {
  test_notificationsubsection_response(1);
  test_notificationsubsection_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // notificationsubsection_response_MAIN
#endif // notificationsubsection_response_TEST
