#ifndef webhook_ezsign_ezsignsigner_acceptclause_TEST
#define webhook_ezsign_ezsignsigner_acceptclause_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhook_ezsign_ezsignsigner_acceptclause_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhook_ezsign_ezsignsigner_acceptclause.h"
webhook_ezsign_ezsignsigner_acceptclause_t* instantiate_webhook_ezsign_ezsignsigner_acceptclause(int include_optional);

#include "test_custom_webhook_response.c"
#include "test_ezsignfolder_response.c"
#include "test_ezsignfoldersignerassociation_response_compound.c"


webhook_ezsign_ezsignsigner_acceptclause_t* instantiate_webhook_ezsign_ezsignsigner_acceptclause(int include_optional) {
  webhook_ezsign_ezsignsigner_acceptclause_t* webhook_ezsign_ezsignsigner_acceptclause = NULL;
  if (include_optional) {
    webhook_ezsign_ezsignsigner_acceptclause = webhook_ezsign_ezsignsigner_acceptclause_create(
       // false, not to have infinite recursion
      instantiate_custom_webhook_response(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_ezsignfolder_response(0),
       // false, not to have infinite recursion
      instantiate_ezsignfoldersignerassociation_response_compound(0)
    );
  } else {
    webhook_ezsign_ezsignsigner_acceptclause = webhook_ezsign_ezsignsigner_acceptclause_create(
      NULL,
      list_createList(),
      NULL,
      NULL
    );
  }

  return webhook_ezsign_ezsignsigner_acceptclause;
}


#ifdef webhook_ezsign_ezsignsigner_acceptclause_MAIN

void test_webhook_ezsign_ezsignsigner_acceptclause(int include_optional) {
    webhook_ezsign_ezsignsigner_acceptclause_t* webhook_ezsign_ezsignsigner_acceptclause_1 = instantiate_webhook_ezsign_ezsignsigner_acceptclause(include_optional);

	cJSON* jsonwebhook_ezsign_ezsignsigner_acceptclause_1 = webhook_ezsign_ezsignsigner_acceptclause_convertToJSON(webhook_ezsign_ezsignsigner_acceptclause_1);
	printf("webhook_ezsign_ezsignsigner_acceptclause :\n%s\n", cJSON_Print(jsonwebhook_ezsign_ezsignsigner_acceptclause_1));
	webhook_ezsign_ezsignsigner_acceptclause_t* webhook_ezsign_ezsignsigner_acceptclause_2 = webhook_ezsign_ezsignsigner_acceptclause_parseFromJSON(jsonwebhook_ezsign_ezsignsigner_acceptclause_1);
	cJSON* jsonwebhook_ezsign_ezsignsigner_acceptclause_2 = webhook_ezsign_ezsignsigner_acceptclause_convertToJSON(webhook_ezsign_ezsignsigner_acceptclause_2);
	printf("repeating webhook_ezsign_ezsignsigner_acceptclause:\n%s\n", cJSON_Print(jsonwebhook_ezsign_ezsignsigner_acceptclause_2));
}

int main() {
  test_webhook_ezsign_ezsignsigner_acceptclause(1);
  test_webhook_ezsign_ezsignsigner_acceptclause(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhook_ezsign_ezsignsigner_acceptclause_MAIN
#endif // webhook_ezsign_ezsignsigner_acceptclause_TEST
