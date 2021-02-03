#ifndef webhook_ezsign_folder_completed_TEST
#define webhook_ezsign_folder_completed_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhook_ezsign_folder_completed_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhook_ezsign_folder_completed.h"
webhook_ezsign_folder_completed_t* instantiate_webhook_ezsign_folder_completed(int include_optional);

#include "test_ezsignfolder_response.c"
#include "test_webhook_response.c"


webhook_ezsign_folder_completed_t* instantiate_webhook_ezsign_folder_completed(int include_optional) {
  webhook_ezsign_folder_completed_t* webhook_ezsign_folder_completed = NULL;
  if (include_optional) {
    webhook_ezsign_folder_completed = webhook_ezsign_folder_completed_create(
       // false, not to have infinite recursion
      instantiate_ezsignfolder_response(0),
       // false, not to have infinite recursion
      instantiate_webhook_response(0),
      list_create()
    );
  } else {
    webhook_ezsign_folder_completed = webhook_ezsign_folder_completed_create(
      NULL,
      NULL,
      list_create()
    );
  }

  return webhook_ezsign_folder_completed;
}


#ifdef webhook_ezsign_folder_completed_MAIN

void test_webhook_ezsign_folder_completed(int include_optional) {
    webhook_ezsign_folder_completed_t* webhook_ezsign_folder_completed_1 = instantiate_webhook_ezsign_folder_completed(include_optional);

	cJSON* jsonwebhook_ezsign_folder_completed_1 = webhook_ezsign_folder_completed_convertToJSON(webhook_ezsign_folder_completed_1);
	printf("webhook_ezsign_folder_completed :\n%s\n", cJSON_Print(jsonwebhook_ezsign_folder_completed_1));
	webhook_ezsign_folder_completed_t* webhook_ezsign_folder_completed_2 = webhook_ezsign_folder_completed_parseFromJSON(jsonwebhook_ezsign_folder_completed_1);
	cJSON* jsonwebhook_ezsign_folder_completed_2 = webhook_ezsign_folder_completed_convertToJSON(webhook_ezsign_folder_completed_2);
	printf("repeating webhook_ezsign_folder_completed:\n%s\n", cJSON_Print(jsonwebhook_ezsign_folder_completed_2));
}

int main() {
  test_webhook_ezsign_folder_completed(1);
  test_webhook_ezsign_folder_completed(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhook_ezsign_folder_completed_MAIN
#endif // webhook_ezsign_folder_completed_TEST
