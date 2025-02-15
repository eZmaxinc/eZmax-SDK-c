#ifndef webhook_ezsign_folder_unsent_TEST
#define webhook_ezsign_folder_unsent_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhook_ezsign_folder_unsent_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhook_ezsign_folder_unsent.h"
webhook_ezsign_folder_unsent_t* instantiate_webhook_ezsign_folder_unsent(int include_optional);

#include "test_custom_webhook_response.c"
#include "test_ezsignfolder_response.c"


webhook_ezsign_folder_unsent_t* instantiate_webhook_ezsign_folder_unsent(int include_optional) {
  webhook_ezsign_folder_unsent_t* webhook_ezsign_folder_unsent = NULL;
  if (include_optional) {
    webhook_ezsign_folder_unsent = webhook_ezsign_folder_unsent_create(
       // false, not to have infinite recursion
      instantiate_custom_webhook_response(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_ezsignfolder_response(0)
    );
  } else {
    webhook_ezsign_folder_unsent = webhook_ezsign_folder_unsent_create(
      NULL,
      list_createList(),
      NULL
    );
  }

  return webhook_ezsign_folder_unsent;
}


#ifdef webhook_ezsign_folder_unsent_MAIN

void test_webhook_ezsign_folder_unsent(int include_optional) {
    webhook_ezsign_folder_unsent_t* webhook_ezsign_folder_unsent_1 = instantiate_webhook_ezsign_folder_unsent(include_optional);

	cJSON* jsonwebhook_ezsign_folder_unsent_1 = webhook_ezsign_folder_unsent_convertToJSON(webhook_ezsign_folder_unsent_1);
	printf("webhook_ezsign_folder_unsent :\n%s\n", cJSON_Print(jsonwebhook_ezsign_folder_unsent_1));
	webhook_ezsign_folder_unsent_t* webhook_ezsign_folder_unsent_2 = webhook_ezsign_folder_unsent_parseFromJSON(jsonwebhook_ezsign_folder_unsent_1);
	cJSON* jsonwebhook_ezsign_folder_unsent_2 = webhook_ezsign_folder_unsent_convertToJSON(webhook_ezsign_folder_unsent_2);
	printf("repeating webhook_ezsign_folder_unsent:\n%s\n", cJSON_Print(jsonwebhook_ezsign_folder_unsent_2));
}

int main() {
  test_webhook_ezsign_folder_unsent(1);
  test_webhook_ezsign_folder_unsent(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhook_ezsign_folder_unsent_MAIN
#endif // webhook_ezsign_folder_unsent_TEST
