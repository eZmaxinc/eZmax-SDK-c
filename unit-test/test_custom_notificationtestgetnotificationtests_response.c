#ifndef custom_notificationtestgetnotificationtests_response_TEST
#define custom_notificationtestgetnotificationtests_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_notificationtestgetnotificationtests_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_notificationtestgetnotificationtests_response.h"
custom_notificationtestgetnotificationtests_response_t* instantiate_custom_notificationtestgetnotificationtests_response(int include_optional);

#include "test_multilingual_notificationtest_name.c"


custom_notificationtestgetnotificationtests_response_t* instantiate_custom_notificationtestgetnotificationtests_response(int include_optional) {
  custom_notificationtestgetnotificationtests_response_t* custom_notificationtestgetnotificationtests_response = NULL;
  if (include_optional) {
    custom_notificationtestgetnotificationtests_response = custom_notificationtestgetnotificationtests_response_create(
      14,
       // false, not to have infinite recursion
      instantiate_multilingual_notificationtest_name(0),
      3,
      "Default",
      "Default",
      ezmax_api_definition__full_custom_notificationtestgetnotificationtests_response__"Show",
      27
    );
  } else {
    custom_notificationtestgetnotificationtests_response = custom_notificationtestgetnotificationtests_response_create(
      14,
      NULL,
      3,
      "Default",
      "Default",
      ezmax_api_definition__full_custom_notificationtestgetnotificationtests_response__"Show",
      27
    );
  }

  return custom_notificationtestgetnotificationtests_response;
}


#ifdef custom_notificationtestgetnotificationtests_response_MAIN

void test_custom_notificationtestgetnotificationtests_response(int include_optional) {
    custom_notificationtestgetnotificationtests_response_t* custom_notificationtestgetnotificationtests_response_1 = instantiate_custom_notificationtestgetnotificationtests_response(include_optional);

	cJSON* jsoncustom_notificationtestgetnotificationtests_response_1 = custom_notificationtestgetnotificationtests_response_convertToJSON(custom_notificationtestgetnotificationtests_response_1);
	printf("custom_notificationtestgetnotificationtests_response :\n%s\n", cJSON_Print(jsoncustom_notificationtestgetnotificationtests_response_1));
	custom_notificationtestgetnotificationtests_response_t* custom_notificationtestgetnotificationtests_response_2 = custom_notificationtestgetnotificationtests_response_parseFromJSON(jsoncustom_notificationtestgetnotificationtests_response_1);
	cJSON* jsoncustom_notificationtestgetnotificationtests_response_2 = custom_notificationtestgetnotificationtests_response_convertToJSON(custom_notificationtestgetnotificationtests_response_2);
	printf("repeating custom_notificationtestgetnotificationtests_response:\n%s\n", cJSON_Print(jsoncustom_notificationtestgetnotificationtests_response_2));
}

int main() {
  test_custom_notificationtestgetnotificationtests_response(1);
  test_custom_notificationtestgetnotificationtests_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_notificationtestgetnotificationtests_response_MAIN
#endif // custom_notificationtestgetnotificationtests_response_TEST
