#ifndef custom_webhook_response_TEST
#define custom_webhook_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_webhook_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_webhook_response.h"
custom_webhook_response_t* instantiate_custom_webhook_response(int include_optional);

#include "test_common_audit.c"


custom_webhook_response_t* instantiate_custom_webhook_response(int include_optional) {
  custom_webhook_response_t* custom_webhook_response = NULL;
  if (include_optional) {
    custom_webhook_response = custom_webhook_response_create(
      77,
      "Import into our system",
      5,
      "Default",
      ezmax_api_definition__full_custom_webhook_response__"Ezsign",
      ezmax_api_definition__full_custom_webhook_response__"FolderCompleted",
      ezmax_api_definition__full_custom_webhook_response__"UserCreated",
      "https://www.example.com",
      "email@example.com",
      "0",
      "0",
      true,
      true,
      false,
       // false, not to have infinite recursion
      instantiate_common_audit(0),
      "demo",
      1
    );
  } else {
    custom_webhook_response = custom_webhook_response_create(
      77,
      "Import into our system",
      5,
      "Default",
      ezmax_api_definition__full_custom_webhook_response__"Ezsign",
      ezmax_api_definition__full_custom_webhook_response__"FolderCompleted",
      ezmax_api_definition__full_custom_webhook_response__"UserCreated",
      "https://www.example.com",
      "email@example.com",
      "0",
      "0",
      true,
      true,
      false,
      NULL,
      "demo",
      1
    );
  }

  return custom_webhook_response;
}


#ifdef custom_webhook_response_MAIN

void test_custom_webhook_response(int include_optional) {
    custom_webhook_response_t* custom_webhook_response_1 = instantiate_custom_webhook_response(include_optional);

	cJSON* jsoncustom_webhook_response_1 = custom_webhook_response_convertToJSON(custom_webhook_response_1);
	printf("custom_webhook_response :\n%s\n", cJSON_Print(jsoncustom_webhook_response_1));
	custom_webhook_response_t* custom_webhook_response_2 = custom_webhook_response_parseFromJSON(jsoncustom_webhook_response_1);
	cJSON* jsoncustom_webhook_response_2 = custom_webhook_response_convertToJSON(custom_webhook_response_2);
	printf("repeating custom_webhook_response:\n%s\n", cJSON_Print(jsoncustom_webhook_response_2));
}

int main() {
  test_custom_webhook_response(1);
  test_custom_webhook_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_webhook_response_MAIN
#endif // custom_webhook_response_TEST
