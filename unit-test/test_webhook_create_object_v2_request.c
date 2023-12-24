#ifndef webhook_create_object_v2_request_TEST
#define webhook_create_object_v2_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhook_create_object_v2_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhook_create_object_v2_request.h"
webhook_create_object_v2_request_t* instantiate_webhook_create_object_v2_request(int include_optional);



webhook_create_object_v2_request_t* instantiate_webhook_create_object_v2_request(int include_optional) {
  webhook_create_object_v2_request_t* webhook_create_object_v2_request = NULL;
  if (include_optional) {
    webhook_create_object_v2_request = webhook_create_object_v2_request_create(
      list_createList()
    );
  } else {
    webhook_create_object_v2_request = webhook_create_object_v2_request_create(
      list_createList()
    );
  }

  return webhook_create_object_v2_request;
}


#ifdef webhook_create_object_v2_request_MAIN

void test_webhook_create_object_v2_request(int include_optional) {
    webhook_create_object_v2_request_t* webhook_create_object_v2_request_1 = instantiate_webhook_create_object_v2_request(include_optional);

	cJSON* jsonwebhook_create_object_v2_request_1 = webhook_create_object_v2_request_convertToJSON(webhook_create_object_v2_request_1);
	printf("webhook_create_object_v2_request :\n%s\n", cJSON_Print(jsonwebhook_create_object_v2_request_1));
	webhook_create_object_v2_request_t* webhook_create_object_v2_request_2 = webhook_create_object_v2_request_parseFromJSON(jsonwebhook_create_object_v2_request_1);
	cJSON* jsonwebhook_create_object_v2_request_2 = webhook_create_object_v2_request_convertToJSON(webhook_create_object_v2_request_2);
	printf("repeating webhook_create_object_v2_request:\n%s\n", cJSON_Print(jsonwebhook_create_object_v2_request_2));
}

int main() {
  test_webhook_create_object_v2_request(1);
  test_webhook_create_object_v2_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhook_create_object_v2_request_MAIN
#endif // webhook_create_object_v2_request_TEST
