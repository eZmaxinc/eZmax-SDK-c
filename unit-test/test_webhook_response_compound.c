#ifndef webhook_response_compound_TEST
#define webhook_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhook_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhook_response_compound.h"
webhook_response_compound_t* instantiate_webhook_response_compound(int include_optional);

#include "test_common_audit.c"


webhook_response_compound_t* instantiate_webhook_response_compound(int include_optional) {
  webhook_response_compound_t* webhook_response_compound = NULL;
  if (include_optional) {
    webhook_response_compound = webhook_response_compound_create(
      77,
      "Import into our system",
      5,
      "Default",
      ezmax_api_definition__full_webhook_response_compound__"Ezsign",
      ezmax_api_definition__full_webhook_response_compound__"FolderCompleted",
      ezmax_api_definition__full_webhook_response_compound__"UserCreated",
      "https://www.example.com",
      "email@example.com",
      "0",
      "0",
      true,
      true,
      false,
       // false, not to have infinite recursion
      instantiate_common_audit(0),
      "Ezsign-DocumentCompleted"
    );
  } else {
    webhook_response_compound = webhook_response_compound_create(
      77,
      "Import into our system",
      5,
      "Default",
      ezmax_api_definition__full_webhook_response_compound__"Ezsign",
      ezmax_api_definition__full_webhook_response_compound__"FolderCompleted",
      ezmax_api_definition__full_webhook_response_compound__"UserCreated",
      "https://www.example.com",
      "email@example.com",
      "0",
      "0",
      true,
      true,
      false,
      NULL,
      "Ezsign-DocumentCompleted"
    );
  }

  return webhook_response_compound;
}


#ifdef webhook_response_compound_MAIN

void test_webhook_response_compound(int include_optional) {
    webhook_response_compound_t* webhook_response_compound_1 = instantiate_webhook_response_compound(include_optional);

	cJSON* jsonwebhook_response_compound_1 = webhook_response_compound_convertToJSON(webhook_response_compound_1);
	printf("webhook_response_compound :\n%s\n", cJSON_Print(jsonwebhook_response_compound_1));
	webhook_response_compound_t* webhook_response_compound_2 = webhook_response_compound_parseFromJSON(jsonwebhook_response_compound_1);
	cJSON* jsonwebhook_response_compound_2 = webhook_response_compound_convertToJSON(webhook_response_compound_2);
	printf("repeating webhook_response_compound:\n%s\n", cJSON_Print(jsonwebhook_response_compound_2));
}

int main() {
  test_webhook_response_compound(1);
  test_webhook_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhook_response_compound_MAIN
#endif // webhook_response_compound_TEST
