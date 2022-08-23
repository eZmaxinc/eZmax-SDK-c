#ifndef webhook_request_TEST
#define webhook_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhook_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhook_request.h"
webhook_request_t* instantiate_webhook_request(int include_optional);



webhook_request_t* instantiate_webhook_request(int include_optional) {
  webhook_request_t* webhook_request = NULL;
  if (include_optional) {
    webhook_request = webhook_request_create(
      77,
      5,
      "Import into our system",
      ezmax_api_definition__full_webhook_request__"Ezsign",
      ezmax_api_definition__full_webhook_request__"FolderCompleted",
      ezmax_api_definition__full_webhook_request__"UserCreated",
      "https://www.example.com",
      "email@example.com",
      true,
      false
    );
  } else {
    webhook_request = webhook_request_create(
      77,
      5,
      "Import into our system",
      ezmax_api_definition__full_webhook_request__"Ezsign",
      ezmax_api_definition__full_webhook_request__"FolderCompleted",
      ezmax_api_definition__full_webhook_request__"UserCreated",
      "https://www.example.com",
      "email@example.com",
      true,
      false
    );
  }

  return webhook_request;
}


#ifdef webhook_request_MAIN

void test_webhook_request(int include_optional) {
    webhook_request_t* webhook_request_1 = instantiate_webhook_request(include_optional);

	cJSON* jsonwebhook_request_1 = webhook_request_convertToJSON(webhook_request_1);
	printf("webhook_request :\n%s\n", cJSON_Print(jsonwebhook_request_1));
	webhook_request_t* webhook_request_2 = webhook_request_parseFromJSON(jsonwebhook_request_1);
	cJSON* jsonwebhook_request_2 = webhook_request_convertToJSON(webhook_request_2);
	printf("repeating webhook_request:\n%s\n", cJSON_Print(jsonwebhook_request_2));
}

int main() {
  test_webhook_request(1);
  test_webhook_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhook_request_MAIN
#endif // webhook_request_TEST
