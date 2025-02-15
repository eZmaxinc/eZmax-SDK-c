#ifndef webhook_ezsign_document_form_completed_TEST
#define webhook_ezsign_document_form_completed_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhook_ezsign_document_form_completed_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhook_ezsign_document_form_completed.h"
webhook_ezsign_document_form_completed_t* instantiate_webhook_ezsign_document_form_completed(int include_optional);

#include "test_custom_webhook_response.c"
#include "test_ezsigndocument_response.c"


webhook_ezsign_document_form_completed_t* instantiate_webhook_ezsign_document_form_completed(int include_optional) {
  webhook_ezsign_document_form_completed_t* webhook_ezsign_document_form_completed = NULL;
  if (include_optional) {
    webhook_ezsign_document_form_completed = webhook_ezsign_document_form_completed_create(
       // false, not to have infinite recursion
      instantiate_custom_webhook_response(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_ezsigndocument_response(0)
    );
  } else {
    webhook_ezsign_document_form_completed = webhook_ezsign_document_form_completed_create(
      NULL,
      list_createList(),
      NULL
    );
  }

  return webhook_ezsign_document_form_completed;
}


#ifdef webhook_ezsign_document_form_completed_MAIN

void test_webhook_ezsign_document_form_completed(int include_optional) {
    webhook_ezsign_document_form_completed_t* webhook_ezsign_document_form_completed_1 = instantiate_webhook_ezsign_document_form_completed(include_optional);

	cJSON* jsonwebhook_ezsign_document_form_completed_1 = webhook_ezsign_document_form_completed_convertToJSON(webhook_ezsign_document_form_completed_1);
	printf("webhook_ezsign_document_form_completed :\n%s\n", cJSON_Print(jsonwebhook_ezsign_document_form_completed_1));
	webhook_ezsign_document_form_completed_t* webhook_ezsign_document_form_completed_2 = webhook_ezsign_document_form_completed_parseFromJSON(jsonwebhook_ezsign_document_form_completed_1);
	cJSON* jsonwebhook_ezsign_document_form_completed_2 = webhook_ezsign_document_form_completed_convertToJSON(webhook_ezsign_document_form_completed_2);
	printf("repeating webhook_ezsign_document_form_completed:\n%s\n", cJSON_Print(jsonwebhook_ezsign_document_form_completed_2));
}

int main() {
  test_webhook_ezsign_document_form_completed(1);
  test_webhook_ezsign_document_form_completed(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhook_ezsign_document_form_completed_MAIN
#endif // webhook_ezsign_document_form_completed_TEST
