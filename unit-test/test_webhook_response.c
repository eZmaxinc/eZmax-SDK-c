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



webhook_response_t* instantiate_webhook_response(int include_optional) {
  webhook_response_t* webhook_response = NULL;
  if (include_optional) {
    webhook_response = webhook_response_create(
      "demo",
      56,
      ezmax_api_definition__full_webhook_response_EWEBHOOKMODULE_Ezsign,
      ezmax_api_definition__full_webhook_response_EWEBHOOKEZSIGNEVENT_DocumentCompleted,
      ezmax_api_definition__full_webhook_response_EWEBHOOKMANAGEMENTEVENT_UserCreated,
      "0",
      1,
      1,
      "0"
    );
  } else {
    webhook_response = webhook_response_create(
      "demo",
      56,
      ezmax_api_definition__full_webhook_response_EWEBHOOKMODULE_Ezsign,
      ezmax_api_definition__full_webhook_response_EWEBHOOKEZSIGNEVENT_DocumentCompleted,
      ezmax_api_definition__full_webhook_response_EWEBHOOKMANAGEMENTEVENT_UserCreated,
      "0",
      1,
      1,
      "0"
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
