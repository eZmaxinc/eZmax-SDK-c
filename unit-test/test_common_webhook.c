#ifndef common_webhook_TEST
#define common_webhook_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define common_webhook_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/common_webhook.h"
common_webhook_t* instantiate_common_webhook(int include_optional);

#include "test_custom_webhook_response.c"


common_webhook_t* instantiate_common_webhook(int include_optional) {
  common_webhook_t* common_webhook = NULL;
  if (include_optional) {
    common_webhook = common_webhook_create(
       // false, not to have infinite recursion
      instantiate_custom_webhook_response(0),
      list_createList()
    );
  } else {
    common_webhook = common_webhook_create(
      NULL,
      list_createList()
    );
  }

  return common_webhook;
}


#ifdef common_webhook_MAIN

void test_common_webhook(int include_optional) {
    common_webhook_t* common_webhook_1 = instantiate_common_webhook(include_optional);

	cJSON* jsoncommon_webhook_1 = common_webhook_convertToJSON(common_webhook_1);
	printf("common_webhook :\n%s\n", cJSON_Print(jsoncommon_webhook_1));
	common_webhook_t* common_webhook_2 = common_webhook_parseFromJSON(jsoncommon_webhook_1);
	cJSON* jsoncommon_webhook_2 = common_webhook_convertToJSON(common_webhook_2);
	printf("repeating common_webhook:\n%s\n", cJSON_Print(jsoncommon_webhook_2));
}

int main() {
  test_common_webhook(1);
  test_common_webhook(0);

  printf("Hello world \n");
  return 0;
}

#endif // common_webhook_MAIN
#endif // common_webhook_TEST
