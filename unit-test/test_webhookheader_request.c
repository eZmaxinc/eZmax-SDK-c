#ifndef webhookheader_request_TEST
#define webhookheader_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhookheader_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhookheader_request.h"
webhookheader_request_t* instantiate_webhookheader_request(int include_optional);



webhookheader_request_t* instantiate_webhookheader_request(int include_optional) {
  webhookheader_request_t* webhookheader_request = NULL;
  if (include_optional) {
    webhookheader_request = webhookheader_request_create(
      77,
      "Authorization",
      "d75fca0e12b6c671e7f6d4df0cf59e4e"
    );
  } else {
    webhookheader_request = webhookheader_request_create(
      77,
      "Authorization",
      "d75fca0e12b6c671e7f6d4df0cf59e4e"
    );
  }

  return webhookheader_request;
}


#ifdef webhookheader_request_MAIN

void test_webhookheader_request(int include_optional) {
    webhookheader_request_t* webhookheader_request_1 = instantiate_webhookheader_request(include_optional);

	cJSON* jsonwebhookheader_request_1 = webhookheader_request_convertToJSON(webhookheader_request_1);
	printf("webhookheader_request :\n%s\n", cJSON_Print(jsonwebhookheader_request_1));
	webhookheader_request_t* webhookheader_request_2 = webhookheader_request_parseFromJSON(jsonwebhookheader_request_1);
	cJSON* jsonwebhookheader_request_2 = webhookheader_request_convertToJSON(webhookheader_request_2);
	printf("repeating webhookheader_request:\n%s\n", cJSON_Print(jsonwebhookheader_request_2));
}

int main() {
  test_webhookheader_request(1);
  test_webhookheader_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhookheader_request_MAIN
#endif // webhookheader_request_TEST
