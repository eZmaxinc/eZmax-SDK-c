#ifndef webhook_user_user_created_TEST
#define webhook_user_user_created_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhook_user_user_created_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhook_user_user_created.h"
webhook_user_user_created_t* instantiate_webhook_user_user_created(int include_optional);

#include "test_user_response_compound.c"
#include "test_webhook_response.c"


webhook_user_user_created_t* instantiate_webhook_user_user_created(int include_optional) {
  webhook_user_user_created_t* webhook_user_user_created = NULL;
  if (include_optional) {
    webhook_user_user_created = webhook_user_user_created_create(
       // false, not to have infinite recursion
      instantiate_user_response_compound(0),
       // false, not to have infinite recursion
      instantiate_webhook_response(0),
      list_createList()
    );
  } else {
    webhook_user_user_created = webhook_user_user_created_create(
      NULL,
      NULL,
      list_createList()
    );
  }

  return webhook_user_user_created;
}


#ifdef webhook_user_user_created_MAIN

void test_webhook_user_user_created(int include_optional) {
    webhook_user_user_created_t* webhook_user_user_created_1 = instantiate_webhook_user_user_created(include_optional);

	cJSON* jsonwebhook_user_user_created_1 = webhook_user_user_created_convertToJSON(webhook_user_user_created_1);
	printf("webhook_user_user_created :\n%s\n", cJSON_Print(jsonwebhook_user_user_created_1));
	webhook_user_user_created_t* webhook_user_user_created_2 = webhook_user_user_created_parseFromJSON(jsonwebhook_user_user_created_1);
	cJSON* jsonwebhook_user_user_created_2 = webhook_user_user_created_convertToJSON(webhook_user_user_created_2);
	printf("repeating webhook_user_user_created:\n%s\n", cJSON_Print(jsonwebhook_user_user_created_2));
}

int main() {
  test_webhook_user_user_created(1);
  test_webhook_user_user_created(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhook_user_user_created_MAIN
#endif // webhook_user_user_created_TEST
