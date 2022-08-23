#ifndef webhook_edit_object_v1_request_TEST
#define webhook_edit_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhook_edit_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhook_edit_object_v1_request.h"
webhook_edit_object_v1_request_t* instantiate_webhook_edit_object_v1_request(int include_optional);

#include "test_webhook_request_compound.c"


webhook_edit_object_v1_request_t* instantiate_webhook_edit_object_v1_request(int include_optional) {
  webhook_edit_object_v1_request_t* webhook_edit_object_v1_request = NULL;
  if (include_optional) {
    webhook_edit_object_v1_request = webhook_edit_object_v1_request_create(
       // false, not to have infinite recursion
      instantiate_webhook_request_compound(0)
    );
  } else {
    webhook_edit_object_v1_request = webhook_edit_object_v1_request_create(
      NULL
    );
  }

  return webhook_edit_object_v1_request;
}


#ifdef webhook_edit_object_v1_request_MAIN

void test_webhook_edit_object_v1_request(int include_optional) {
    webhook_edit_object_v1_request_t* webhook_edit_object_v1_request_1 = instantiate_webhook_edit_object_v1_request(include_optional);

	cJSON* jsonwebhook_edit_object_v1_request_1 = webhook_edit_object_v1_request_convertToJSON(webhook_edit_object_v1_request_1);
	printf("webhook_edit_object_v1_request :\n%s\n", cJSON_Print(jsonwebhook_edit_object_v1_request_1));
	webhook_edit_object_v1_request_t* webhook_edit_object_v1_request_2 = webhook_edit_object_v1_request_parseFromJSON(jsonwebhook_edit_object_v1_request_1);
	cJSON* jsonwebhook_edit_object_v1_request_2 = webhook_edit_object_v1_request_convertToJSON(webhook_edit_object_v1_request_2);
	printf("repeating webhook_edit_object_v1_request:\n%s\n", cJSON_Print(jsonwebhook_edit_object_v1_request_2));
}

int main() {
  test_webhook_edit_object_v1_request(1);
  test_webhook_edit_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhook_edit_object_v1_request_MAIN
#endif // webhook_edit_object_v1_request_TEST
