#ifndef webhook_list_element_TEST
#define webhook_list_element_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhook_list_element_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhook_list_element.h"
webhook_list_element_t* instantiate_webhook_list_element(int include_optional);



webhook_list_element_t* instantiate_webhook_list_element(int include_optional) {
  webhook_list_element_t* webhook_list_element = NULL;
  if (include_optional) {
    webhook_list_element = webhook_list_element_create(
      77,
      "Import into our system",
      "https://www.example.com",
      "Ezsign-DocumentCompleted",
      "email@example.com",
      ezmax_api_definition__full_webhook_list_element__"Ezsign",
      ezmax_api_definition__full_webhook_list_element__"FolderCompleted",
      ezmax_api_definition__full_webhook_list_element__"UserCreated",
      true
    );
  } else {
    webhook_list_element = webhook_list_element_create(
      77,
      "Import into our system",
      "https://www.example.com",
      "Ezsign-DocumentCompleted",
      "email@example.com",
      ezmax_api_definition__full_webhook_list_element__"Ezsign",
      ezmax_api_definition__full_webhook_list_element__"FolderCompleted",
      ezmax_api_definition__full_webhook_list_element__"UserCreated",
      true
    );
  }

  return webhook_list_element;
}


#ifdef webhook_list_element_MAIN

void test_webhook_list_element(int include_optional) {
    webhook_list_element_t* webhook_list_element_1 = instantiate_webhook_list_element(include_optional);

	cJSON* jsonwebhook_list_element_1 = webhook_list_element_convertToJSON(webhook_list_element_1);
	printf("webhook_list_element :\n%s\n", cJSON_Print(jsonwebhook_list_element_1));
	webhook_list_element_t* webhook_list_element_2 = webhook_list_element_parseFromJSON(jsonwebhook_list_element_1);
	cJSON* jsonwebhook_list_element_2 = webhook_list_element_convertToJSON(webhook_list_element_2);
	printf("repeating webhook_list_element:\n%s\n", cJSON_Print(jsonwebhook_list_element_2));
}

int main() {
  test_webhook_list_element(1);
  test_webhook_list_element(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhook_list_element_MAIN
#endif // webhook_list_element_TEST
