#ifndef webhook_send_webhook_v1_request_TEST
#define webhook_send_webhook_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhook_send_webhook_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhook_send_webhook_v1_request.h"
webhook_send_webhook_v1_request_t* instantiate_webhook_send_webhook_v1_request(int include_optional);



webhook_send_webhook_v1_request_t* instantiate_webhook_send_webhook_v1_request(int include_optional) {
  webhook_send_webhook_v1_request_t* webhook_send_webhook_v1_request = NULL;
  if (include_optional) {
    webhook_send_webhook_v1_request = webhook_send_webhook_v1_request_create(
      ezmax_api_definition__full_webhook_send_webhook_v1_request__"Ezsign",
      ezmax_api_definition__full_webhook_send_webhook_v1_request__"FolderCompleted",
      ezmax_api_definition__full_webhook_send_webhook_v1_request__"UserCreated",
      33,
      97,
      89,
      70,
      90
    );
  } else {
    webhook_send_webhook_v1_request = webhook_send_webhook_v1_request_create(
      ezmax_api_definition__full_webhook_send_webhook_v1_request__"Ezsign",
      ezmax_api_definition__full_webhook_send_webhook_v1_request__"FolderCompleted",
      ezmax_api_definition__full_webhook_send_webhook_v1_request__"UserCreated",
      33,
      97,
      89,
      70,
      90
    );
  }

  return webhook_send_webhook_v1_request;
}


#ifdef webhook_send_webhook_v1_request_MAIN

void test_webhook_send_webhook_v1_request(int include_optional) {
    webhook_send_webhook_v1_request_t* webhook_send_webhook_v1_request_1 = instantiate_webhook_send_webhook_v1_request(include_optional);

	cJSON* jsonwebhook_send_webhook_v1_request_1 = webhook_send_webhook_v1_request_convertToJSON(webhook_send_webhook_v1_request_1);
	printf("webhook_send_webhook_v1_request :\n%s\n", cJSON_Print(jsonwebhook_send_webhook_v1_request_1));
	webhook_send_webhook_v1_request_t* webhook_send_webhook_v1_request_2 = webhook_send_webhook_v1_request_parseFromJSON(jsonwebhook_send_webhook_v1_request_1);
	cJSON* jsonwebhook_send_webhook_v1_request_2 = webhook_send_webhook_v1_request_convertToJSON(webhook_send_webhook_v1_request_2);
	printf("repeating webhook_send_webhook_v1_request:\n%s\n", cJSON_Print(jsonwebhook_send_webhook_v1_request_2));
}

int main() {
  test_webhook_send_webhook_v1_request(1);
  test_webhook_send_webhook_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhook_send_webhook_v1_request_MAIN
#endif // webhook_send_webhook_v1_request_TEST
