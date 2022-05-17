#ifndef custom_notificationsubsectiongetnotificationtests_response_TEST
#define custom_notificationsubsectiongetnotificationtests_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_notificationsubsectiongetnotificationtests_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_notificationsubsectiongetnotificationtests_response.h"
custom_notificationsubsectiongetnotificationtests_response_t* instantiate_custom_notificationsubsectiongetnotificationtests_response(int include_optional);



custom_notificationsubsectiongetnotificationtests_response_t* instantiate_custom_notificationsubsectiongetnotificationtests_response(int include_optional) {
  custom_notificationsubsectiongetnotificationtests_response_t* custom_notificationsubsectiongetnotificationtests_response = NULL;
  if (include_optional) {
    custom_notificationsubsectiongetnotificationtests_response = custom_notificationsubsectiongetnotificationtests_response_create(
      3,
      1,
      "Default",
      list_createList()
    );
  } else {
    custom_notificationsubsectiongetnotificationtests_response = custom_notificationsubsectiongetnotificationtests_response_create(
      3,
      1,
      "Default",
      list_createList()
    );
  }

  return custom_notificationsubsectiongetnotificationtests_response;
}


#ifdef custom_notificationsubsectiongetnotificationtests_response_MAIN

void test_custom_notificationsubsectiongetnotificationtests_response(int include_optional) {
    custom_notificationsubsectiongetnotificationtests_response_t* custom_notificationsubsectiongetnotificationtests_response_1 = instantiate_custom_notificationsubsectiongetnotificationtests_response(include_optional);

	cJSON* jsoncustom_notificationsubsectiongetnotificationtests_response_1 = custom_notificationsubsectiongetnotificationtests_response_convertToJSON(custom_notificationsubsectiongetnotificationtests_response_1);
	printf("custom_notificationsubsectiongetnotificationtests_response :\n%s\n", cJSON_Print(jsoncustom_notificationsubsectiongetnotificationtests_response_1));
	custom_notificationsubsectiongetnotificationtests_response_t* custom_notificationsubsectiongetnotificationtests_response_2 = custom_notificationsubsectiongetnotificationtests_response_parseFromJSON(jsoncustom_notificationsubsectiongetnotificationtests_response_1);
	cJSON* jsoncustom_notificationsubsectiongetnotificationtests_response_2 = custom_notificationsubsectiongetnotificationtests_response_convertToJSON(custom_notificationsubsectiongetnotificationtests_response_2);
	printf("repeating custom_notificationsubsectiongetnotificationtests_response:\n%s\n", cJSON_Print(jsoncustom_notificationsubsectiongetnotificationtests_response_2));
}

int main() {
  test_custom_notificationsubsectiongetnotificationtests_response(1);
  test_custom_notificationsubsectiongetnotificationtests_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_notificationsubsectiongetnotificationtests_response_MAIN
#endif // custom_notificationsubsectiongetnotificationtests_response_TEST
