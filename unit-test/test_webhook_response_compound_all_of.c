#ifndef webhook_response_compound_all_of_TEST
#define webhook_response_compound_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhook_response_compound_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhook_response_compound_all_of.h"
webhook_response_compound_all_of_t* instantiate_webhook_response_compound_all_of(int include_optional);



webhook_response_compound_all_of_t* instantiate_webhook_response_compound_all_of(int include_optional) {
  webhook_response_compound_all_of_t* webhook_response_compound_all_of = NULL;
  if (include_optional) {
    webhook_response_compound_all_of = webhook_response_compound_all_of_create(
      "Ezsign-DocumentCompleted"
    );
  } else {
    webhook_response_compound_all_of = webhook_response_compound_all_of_create(
      "Ezsign-DocumentCompleted"
    );
  }

  return webhook_response_compound_all_of;
}


#ifdef webhook_response_compound_all_of_MAIN

void test_webhook_response_compound_all_of(int include_optional) {
    webhook_response_compound_all_of_t* webhook_response_compound_all_of_1 = instantiate_webhook_response_compound_all_of(include_optional);

	cJSON* jsonwebhook_response_compound_all_of_1 = webhook_response_compound_all_of_convertToJSON(webhook_response_compound_all_of_1);
	printf("webhook_response_compound_all_of :\n%s\n", cJSON_Print(jsonwebhook_response_compound_all_of_1));
	webhook_response_compound_all_of_t* webhook_response_compound_all_of_2 = webhook_response_compound_all_of_parseFromJSON(jsonwebhook_response_compound_all_of_1);
	cJSON* jsonwebhook_response_compound_all_of_2 = webhook_response_compound_all_of_convertToJSON(webhook_response_compound_all_of_2);
	printf("repeating webhook_response_compound_all_of:\n%s\n", cJSON_Print(jsonwebhook_response_compound_all_of_2));
}

int main() {
  test_webhook_response_compound_all_of(1);
  test_webhook_response_compound_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhook_response_compound_all_of_MAIN
#endif // webhook_response_compound_all_of_TEST
