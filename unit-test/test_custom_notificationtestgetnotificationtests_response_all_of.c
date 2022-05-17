#ifndef custom_notificationtestgetnotificationtests_response_all_of_TEST
#define custom_notificationtestgetnotificationtests_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_notificationtestgetnotificationtests_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_notificationtestgetnotificationtests_response_all_of.h"
custom_notificationtestgetnotificationtests_response_all_of_t* instantiate_custom_notificationtestgetnotificationtests_response_all_of(int include_optional);



custom_notificationtestgetnotificationtests_response_all_of_t* instantiate_custom_notificationtestgetnotificationtests_response_all_of(int include_optional) {
  custom_notificationtestgetnotificationtests_response_all_of_t* custom_notificationtestgetnotificationtests_response_all_of = NULL;
  if (include_optional) {
    custom_notificationtestgetnotificationtests_response_all_of = custom_notificationtestgetnotificationtests_response_all_of_create(
      ezmax_api_definition__full_custom_notificationtestgetnotificationtests_response_all_of__"Show",
      27
    );
  } else {
    custom_notificationtestgetnotificationtests_response_all_of = custom_notificationtestgetnotificationtests_response_all_of_create(
      ezmax_api_definition__full_custom_notificationtestgetnotificationtests_response_all_of__"Show",
      27
    );
  }

  return custom_notificationtestgetnotificationtests_response_all_of;
}


#ifdef custom_notificationtestgetnotificationtests_response_all_of_MAIN

void test_custom_notificationtestgetnotificationtests_response_all_of(int include_optional) {
    custom_notificationtestgetnotificationtests_response_all_of_t* custom_notificationtestgetnotificationtests_response_all_of_1 = instantiate_custom_notificationtestgetnotificationtests_response_all_of(include_optional);

	cJSON* jsoncustom_notificationtestgetnotificationtests_response_all_of_1 = custom_notificationtestgetnotificationtests_response_all_of_convertToJSON(custom_notificationtestgetnotificationtests_response_all_of_1);
	printf("custom_notificationtestgetnotificationtests_response_all_of :\n%s\n", cJSON_Print(jsoncustom_notificationtestgetnotificationtests_response_all_of_1));
	custom_notificationtestgetnotificationtests_response_all_of_t* custom_notificationtestgetnotificationtests_response_all_of_2 = custom_notificationtestgetnotificationtests_response_all_of_parseFromJSON(jsoncustom_notificationtestgetnotificationtests_response_all_of_1);
	cJSON* jsoncustom_notificationtestgetnotificationtests_response_all_of_2 = custom_notificationtestgetnotificationtests_response_all_of_convertToJSON(custom_notificationtestgetnotificationtests_response_all_of_2);
	printf("repeating custom_notificationtestgetnotificationtests_response_all_of:\n%s\n", cJSON_Print(jsoncustom_notificationtestgetnotificationtests_response_all_of_2));
}

int main() {
  test_custom_notificationtestgetnotificationtests_response_all_of(1);
  test_custom_notificationtestgetnotificationtests_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_notificationtestgetnotificationtests_response_all_of_MAIN
#endif // custom_notificationtestgetnotificationtests_response_all_of_TEST
