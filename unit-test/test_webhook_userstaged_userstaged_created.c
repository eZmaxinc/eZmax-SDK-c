#ifndef webhook_userstaged_userstaged_created_TEST
#define webhook_userstaged_userstaged_created_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhook_userstaged_userstaged_created_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhook_userstaged_userstaged_created.h"
webhook_userstaged_userstaged_created_t* instantiate_webhook_userstaged_userstaged_created(int include_optional);

#include "test_custom_webhook_response.c"
#include "test_userstaged_response_compound.c"


webhook_userstaged_userstaged_created_t* instantiate_webhook_userstaged_userstaged_created(int include_optional) {
  webhook_userstaged_userstaged_created_t* webhook_userstaged_userstaged_created = NULL;
  if (include_optional) {
    webhook_userstaged_userstaged_created = webhook_userstaged_userstaged_created_create(
       // false, not to have infinite recursion
      instantiate_custom_webhook_response(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_userstaged_response_compound(0)
    );
  } else {
    webhook_userstaged_userstaged_created = webhook_userstaged_userstaged_created_create(
      NULL,
      list_createList(),
      NULL
    );
  }

  return webhook_userstaged_userstaged_created;
}


#ifdef webhook_userstaged_userstaged_created_MAIN

void test_webhook_userstaged_userstaged_created(int include_optional) {
    webhook_userstaged_userstaged_created_t* webhook_userstaged_userstaged_created_1 = instantiate_webhook_userstaged_userstaged_created(include_optional);

	cJSON* jsonwebhook_userstaged_userstaged_created_1 = webhook_userstaged_userstaged_created_convertToJSON(webhook_userstaged_userstaged_created_1);
	printf("webhook_userstaged_userstaged_created :\n%s\n", cJSON_Print(jsonwebhook_userstaged_userstaged_created_1));
	webhook_userstaged_userstaged_created_t* webhook_userstaged_userstaged_created_2 = webhook_userstaged_userstaged_created_parseFromJSON(jsonwebhook_userstaged_userstaged_created_1);
	cJSON* jsonwebhook_userstaged_userstaged_created_2 = webhook_userstaged_userstaged_created_convertToJSON(webhook_userstaged_userstaged_created_2);
	printf("repeating webhook_userstaged_userstaged_created:\n%s\n", cJSON_Print(jsonwebhook_userstaged_userstaged_created_2));
}

int main() {
  test_webhook_userstaged_userstaged_created(1);
  test_webhook_userstaged_userstaged_created(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhook_userstaged_userstaged_created_MAIN
#endif // webhook_userstaged_userstaged_created_TEST
