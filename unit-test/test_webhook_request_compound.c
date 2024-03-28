#ifndef webhook_request_compound_TEST
#define webhook_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhook_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhook_request_compound.h"
webhook_request_compound_t* instantiate_webhook_request_compound(int include_optional);



webhook_request_compound_t* instantiate_webhook_request_compound(int include_optional) {
  webhook_request_compound_t* webhook_request_compound = NULL;
  if (include_optional) {
    webhook_request_compound = webhook_request_compound_create(
      77,
      5,
      "Import into our system",
      ezmax_api_definition__full_webhook_request_compound__"Ezsign",
      ezmax_api_definition__full_webhook_request_compound__"FolderCompleted",
      ezmax_api_definition__full_webhook_request_compound__"UserCreated",
      "https://www.example.com",
      "email@example.com",
      true,
      true,
      false,
      list_createList()
    );
  } else {
    webhook_request_compound = webhook_request_compound_create(
      77,
      5,
      "Import into our system",
      ezmax_api_definition__full_webhook_request_compound__"Ezsign",
      ezmax_api_definition__full_webhook_request_compound__"FolderCompleted",
      ezmax_api_definition__full_webhook_request_compound__"UserCreated",
      "https://www.example.com",
      "email@example.com",
      true,
      true,
      false,
      list_createList()
    );
  }

  return webhook_request_compound;
}


#ifdef webhook_request_compound_MAIN

void test_webhook_request_compound(int include_optional) {
    webhook_request_compound_t* webhook_request_compound_1 = instantiate_webhook_request_compound(include_optional);

	cJSON* jsonwebhook_request_compound_1 = webhook_request_compound_convertToJSON(webhook_request_compound_1);
	printf("webhook_request_compound :\n%s\n", cJSON_Print(jsonwebhook_request_compound_1));
	webhook_request_compound_t* webhook_request_compound_2 = webhook_request_compound_parseFromJSON(jsonwebhook_request_compound_1);
	cJSON* jsonwebhook_request_compound_2 = webhook_request_compound_convertToJSON(webhook_request_compound_2);
	printf("repeating webhook_request_compound:\n%s\n", cJSON_Print(jsonwebhook_request_compound_2));
}

int main() {
  test_webhook_request_compound(1);
  test_webhook_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhook_request_compound_MAIN
#endif // webhook_request_compound_TEST
