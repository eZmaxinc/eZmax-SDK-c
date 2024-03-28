#ifndef webhook_ezsign_folder_disposed_TEST
#define webhook_ezsign_folder_disposed_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhook_ezsign_folder_disposed_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhook_ezsign_folder_disposed.h"
webhook_ezsign_folder_disposed_t* instantiate_webhook_ezsign_folder_disposed(int include_optional);

#include "test_custom_webhook_response.c"
#include "test_ezsignfolder_response.c"


webhook_ezsign_folder_disposed_t* instantiate_webhook_ezsign_folder_disposed(int include_optional) {
  webhook_ezsign_folder_disposed_t* webhook_ezsign_folder_disposed = NULL;
  if (include_optional) {
    webhook_ezsign_folder_disposed = webhook_ezsign_folder_disposed_create(
       // false, not to have infinite recursion
      instantiate_custom_webhook_response(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_ezsignfolder_response(0)
    );
  } else {
    webhook_ezsign_folder_disposed = webhook_ezsign_folder_disposed_create(
      NULL,
      list_createList(),
      NULL
    );
  }

  return webhook_ezsign_folder_disposed;
}


#ifdef webhook_ezsign_folder_disposed_MAIN

void test_webhook_ezsign_folder_disposed(int include_optional) {
    webhook_ezsign_folder_disposed_t* webhook_ezsign_folder_disposed_1 = instantiate_webhook_ezsign_folder_disposed(include_optional);

	cJSON* jsonwebhook_ezsign_folder_disposed_1 = webhook_ezsign_folder_disposed_convertToJSON(webhook_ezsign_folder_disposed_1);
	printf("webhook_ezsign_folder_disposed :\n%s\n", cJSON_Print(jsonwebhook_ezsign_folder_disposed_1));
	webhook_ezsign_folder_disposed_t* webhook_ezsign_folder_disposed_2 = webhook_ezsign_folder_disposed_parseFromJSON(jsonwebhook_ezsign_folder_disposed_1);
	cJSON* jsonwebhook_ezsign_folder_disposed_2 = webhook_ezsign_folder_disposed_convertToJSON(webhook_ezsign_folder_disposed_2);
	printf("repeating webhook_ezsign_folder_disposed:\n%s\n", cJSON_Print(jsonwebhook_ezsign_folder_disposed_2));
}

int main() {
  test_webhook_ezsign_folder_disposed(1);
  test_webhook_ezsign_folder_disposed(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhook_ezsign_folder_disposed_MAIN
#endif // webhook_ezsign_folder_disposed_TEST
