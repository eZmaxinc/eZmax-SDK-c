#ifndef custom_notificationsubsectiongetnotificationtests_response_all_of_TEST
#define custom_notificationsubsectiongetnotificationtests_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_notificationsubsectiongetnotificationtests_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_notificationsubsectiongetnotificationtests_response_all_of.h"
custom_notificationsubsectiongetnotificationtests_response_all_of_t* instantiate_custom_notificationsubsectiongetnotificationtests_response_all_of(int include_optional);



custom_notificationsubsectiongetnotificationtests_response_all_of_t* instantiate_custom_notificationsubsectiongetnotificationtests_response_all_of(int include_optional) {
  custom_notificationsubsectiongetnotificationtests_response_all_of_t* custom_notificationsubsectiongetnotificationtests_response_all_of = NULL;
  if (include_optional) {
    custom_notificationsubsectiongetnotificationtests_response_all_of = custom_notificationsubsectiongetnotificationtests_response_all_of_create(
      list_createList()
    );
  } else {
    custom_notificationsubsectiongetnotificationtests_response_all_of = custom_notificationsubsectiongetnotificationtests_response_all_of_create(
      list_createList()
    );
  }

  return custom_notificationsubsectiongetnotificationtests_response_all_of;
}


#ifdef custom_notificationsubsectiongetnotificationtests_response_all_of_MAIN

void test_custom_notificationsubsectiongetnotificationtests_response_all_of(int include_optional) {
    custom_notificationsubsectiongetnotificationtests_response_all_of_t* custom_notificationsubsectiongetnotificationtests_response_all_of_1 = instantiate_custom_notificationsubsectiongetnotificationtests_response_all_of(include_optional);

	cJSON* jsoncustom_notificationsubsectiongetnotificationtests_response_all_of_1 = custom_notificationsubsectiongetnotificationtests_response_all_of_convertToJSON(custom_notificationsubsectiongetnotificationtests_response_all_of_1);
	printf("custom_notificationsubsectiongetnotificationtests_response_all_of :\n%s\n", cJSON_Print(jsoncustom_notificationsubsectiongetnotificationtests_response_all_of_1));
	custom_notificationsubsectiongetnotificationtests_response_all_of_t* custom_notificationsubsectiongetnotificationtests_response_all_of_2 = custom_notificationsubsectiongetnotificationtests_response_all_of_parseFromJSON(jsoncustom_notificationsubsectiongetnotificationtests_response_all_of_1);
	cJSON* jsoncustom_notificationsubsectiongetnotificationtests_response_all_of_2 = custom_notificationsubsectiongetnotificationtests_response_all_of_convertToJSON(custom_notificationsubsectiongetnotificationtests_response_all_of_2);
	printf("repeating custom_notificationsubsectiongetnotificationtests_response_all_of:\n%s\n", cJSON_Print(jsoncustom_notificationsubsectiongetnotificationtests_response_all_of_2));
}

int main() {
  test_custom_notificationsubsectiongetnotificationtests_response_all_of(1);
  test_custom_notificationsubsectiongetnotificationtests_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_notificationsubsectiongetnotificationtests_response_all_of_MAIN
#endif // custom_notificationsubsectiongetnotificationtests_response_all_of_TEST