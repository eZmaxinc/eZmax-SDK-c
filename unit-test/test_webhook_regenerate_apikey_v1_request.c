#ifndef webhook_regenerate_apikey_v1_request_TEST
#define webhook_regenerate_apikey_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhook_regenerate_apikey_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhook_regenerate_apikey_v1_request.h"
webhook_regenerate_apikey_v1_request_t* instantiate_webhook_regenerate_apikey_v1_request(int include_optional);



webhook_regenerate_apikey_v1_request_t* instantiate_webhook_regenerate_apikey_v1_request(int include_optional) {
  webhook_regenerate_apikey_v1_request_t* webhook_regenerate_apikey_v1_request = NULL;
  if (include_optional) {
    webhook_regenerate_apikey_v1_request = webhook_regenerate_apikey_v1_request_create(
      true
    );
  } else {
    webhook_regenerate_apikey_v1_request = webhook_regenerate_apikey_v1_request_create(
      true
    );
  }

  return webhook_regenerate_apikey_v1_request;
}


#ifdef webhook_regenerate_apikey_v1_request_MAIN

void test_webhook_regenerate_apikey_v1_request(int include_optional) {
    webhook_regenerate_apikey_v1_request_t* webhook_regenerate_apikey_v1_request_1 = instantiate_webhook_regenerate_apikey_v1_request(include_optional);

	cJSON* jsonwebhook_regenerate_apikey_v1_request_1 = webhook_regenerate_apikey_v1_request_convertToJSON(webhook_regenerate_apikey_v1_request_1);
	printf("webhook_regenerate_apikey_v1_request :\n%s\n", cJSON_Print(jsonwebhook_regenerate_apikey_v1_request_1));
	webhook_regenerate_apikey_v1_request_t* webhook_regenerate_apikey_v1_request_2 = webhook_regenerate_apikey_v1_request_parseFromJSON(jsonwebhook_regenerate_apikey_v1_request_1);
	cJSON* jsonwebhook_regenerate_apikey_v1_request_2 = webhook_regenerate_apikey_v1_request_convertToJSON(webhook_regenerate_apikey_v1_request_2);
	printf("repeating webhook_regenerate_apikey_v1_request:\n%s\n", cJSON_Print(jsonwebhook_regenerate_apikey_v1_request_2));
}

int main() {
  test_webhook_regenerate_apikey_v1_request(1);
  test_webhook_regenerate_apikey_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhook_regenerate_apikey_v1_request_MAIN
#endif // webhook_regenerate_apikey_v1_request_TEST
