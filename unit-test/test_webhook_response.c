#ifndef webhook_response_TEST
#define webhook_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhook_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhook_response.h"
webhook_response_t* instantiate_webhook_response(int include_optional);

#include "test_common_audit.c"


webhook_response_t* instantiate_webhook_response(int include_optional) {
  webhook_response_t* webhook_response = NULL;
  if (include_optional) {
    webhook_response = webhook_response_create(
      77,
      56,
      "Import into our system",
      5,
      "Default",
      ezmax_api_definition__full_webhook_response__"Ezsign",
      ezmax_api_definition__full_webhook_response__"FolderCompleted",
      ezmax_api_definition__full_webhook_response__"UserCreated",
      "https://www.example.com",
      "email@example.com",
      "0",
      "0",
      true,
      true,
      false,
      "Authentification",
       // false, not to have infinite recursion
      instantiate_common_audit(0)
    );
  } else {
    webhook_response = webhook_response_create(
      77,
      56,
      "Import into our system",
      5,
      "Default",
      ezmax_api_definition__full_webhook_response__"Ezsign",
      ezmax_api_definition__full_webhook_response__"FolderCompleted",
      ezmax_api_definition__full_webhook_response__"UserCreated",
      "https://www.example.com",
      "email@example.com",
      "0",
      "0",
      true,
      true,
      false,
      "Authentification",
      NULL
    );
  }

  return webhook_response;
}


#ifdef webhook_response_MAIN

void test_webhook_response(int include_optional) {
    webhook_response_t* webhook_response_1 = instantiate_webhook_response(include_optional);

	cJSON* jsonwebhook_response_1 = webhook_response_convertToJSON(webhook_response_1);
	printf("webhook_response :\n%s\n", cJSON_Print(jsonwebhook_response_1));
	webhook_response_t* webhook_response_2 = webhook_response_parseFromJSON(jsonwebhook_response_1);
	cJSON* jsonwebhook_response_2 = webhook_response_convertToJSON(webhook_response_2);
	printf("repeating webhook_response:\n%s\n", cJSON_Print(jsonwebhook_response_2));
}

int main() {
  test_webhook_response(1);
  test_webhook_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhook_response_MAIN
#endif // webhook_response_TEST
