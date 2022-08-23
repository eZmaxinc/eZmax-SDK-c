#ifndef custom_webhooklog_response_TEST
#define custom_webhooklog_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_webhooklog_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_webhooklog_response.h"
custom_webhooklog_response_t* instantiate_custom_webhooklog_response(int include_optional);



custom_webhooklog_response_t* instantiate_custom_webhooklog_response(int include_optional) {
  custom_webhooklog_response_t* custom_webhooklog_response = NULL;
  if (include_optional) {
    custom_webhooklog_response = custom_webhooklog_response_create(
      "2020-12-31 23:59:59",
      "{}"
    );
  } else {
    custom_webhooklog_response = custom_webhooklog_response_create(
      "2020-12-31 23:59:59",
      "{}"
    );
  }

  return custom_webhooklog_response;
}


#ifdef custom_webhooklog_response_MAIN

void test_custom_webhooklog_response(int include_optional) {
    custom_webhooklog_response_t* custom_webhooklog_response_1 = instantiate_custom_webhooklog_response(include_optional);

	cJSON* jsoncustom_webhooklog_response_1 = custom_webhooklog_response_convertToJSON(custom_webhooklog_response_1);
	printf("custom_webhooklog_response :\n%s\n", cJSON_Print(jsoncustom_webhooklog_response_1));
	custom_webhooklog_response_t* custom_webhooklog_response_2 = custom_webhooklog_response_parseFromJSON(jsoncustom_webhooklog_response_1);
	cJSON* jsoncustom_webhooklog_response_2 = custom_webhooklog_response_convertToJSON(custom_webhooklog_response_2);
	printf("repeating custom_webhooklog_response:\n%s\n", cJSON_Print(jsoncustom_webhooklog_response_2));
}

int main() {
  test_custom_webhooklog_response(1);
  test_custom_webhooklog_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_webhooklog_response_MAIN
#endif // custom_webhooklog_response_TEST
