#ifndef webhook_ezsign_ezsignsigner_connect_TEST
#define webhook_ezsign_ezsignsigner_connect_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhook_ezsign_ezsignsigner_connect_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhook_ezsign_ezsignsigner_connect.h"
webhook_ezsign_ezsignsigner_connect_t* instantiate_webhook_ezsign_ezsignsigner_connect(int include_optional);

#include "test_ezsignfolder_response.c"
#include "test_ezsignfoldersignerassociation_response_compound.c"
#include "test_custom_webhook_response.c"


webhook_ezsign_ezsignsigner_connect_t* instantiate_webhook_ezsign_ezsignsigner_connect(int include_optional) {
  webhook_ezsign_ezsignsigner_connect_t* webhook_ezsign_ezsignsigner_connect = NULL;
  if (include_optional) {
    webhook_ezsign_ezsignsigner_connect = webhook_ezsign_ezsignsigner_connect_create(
       // false, not to have infinite recursion
      instantiate_ezsignfolder_response(0),
       // false, not to have infinite recursion
      instantiate_ezsignfoldersignerassociation_response_compound(0),
       // false, not to have infinite recursion
      instantiate_custom_webhook_response(0),
      list_createList()
    );
  } else {
    webhook_ezsign_ezsignsigner_connect = webhook_ezsign_ezsignsigner_connect_create(
      NULL,
      NULL,
      NULL,
      list_createList()
    );
  }

  return webhook_ezsign_ezsignsigner_connect;
}


#ifdef webhook_ezsign_ezsignsigner_connect_MAIN

void test_webhook_ezsign_ezsignsigner_connect(int include_optional) {
    webhook_ezsign_ezsignsigner_connect_t* webhook_ezsign_ezsignsigner_connect_1 = instantiate_webhook_ezsign_ezsignsigner_connect(include_optional);

	cJSON* jsonwebhook_ezsign_ezsignsigner_connect_1 = webhook_ezsign_ezsignsigner_connect_convertToJSON(webhook_ezsign_ezsignsigner_connect_1);
	printf("webhook_ezsign_ezsignsigner_connect :\n%s\n", cJSON_Print(jsonwebhook_ezsign_ezsignsigner_connect_1));
	webhook_ezsign_ezsignsigner_connect_t* webhook_ezsign_ezsignsigner_connect_2 = webhook_ezsign_ezsignsigner_connect_parseFromJSON(jsonwebhook_ezsign_ezsignsigner_connect_1);
	cJSON* jsonwebhook_ezsign_ezsignsigner_connect_2 = webhook_ezsign_ezsignsigner_connect_convertToJSON(webhook_ezsign_ezsignsigner_connect_2);
	printf("repeating webhook_ezsign_ezsignsigner_connect:\n%s\n", cJSON_Print(jsonwebhook_ezsign_ezsignsigner_connect_2));
}

int main() {
  test_webhook_ezsign_ezsignsigner_connect(1);
  test_webhook_ezsign_ezsignsigner_connect(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhook_ezsign_ezsignsigner_connect_MAIN
#endif // webhook_ezsign_ezsignsigner_connect_TEST
