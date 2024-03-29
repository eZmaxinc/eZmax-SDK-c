#ifndef webhook_get_object_v2_response_all_of_TEST
#define webhook_get_object_v2_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhook_get_object_v2_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhook_get_object_v2_response_all_of.h"
webhook_get_object_v2_response_all_of_t* instantiate_webhook_get_object_v2_response_all_of(int include_optional);

#include "test_webhook_get_object_v2_response_m_payload.c"


webhook_get_object_v2_response_all_of_t* instantiate_webhook_get_object_v2_response_all_of(int include_optional) {
  webhook_get_object_v2_response_all_of_t* webhook_get_object_v2_response_all_of = NULL;
  if (include_optional) {
    webhook_get_object_v2_response_all_of = webhook_get_object_v2_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_webhook_get_object_v2_response_m_payload(0)
    );
  } else {
    webhook_get_object_v2_response_all_of = webhook_get_object_v2_response_all_of_create(
      NULL
    );
  }

  return webhook_get_object_v2_response_all_of;
}


#ifdef webhook_get_object_v2_response_all_of_MAIN

void test_webhook_get_object_v2_response_all_of(int include_optional) {
    webhook_get_object_v2_response_all_of_t* webhook_get_object_v2_response_all_of_1 = instantiate_webhook_get_object_v2_response_all_of(include_optional);

	cJSON* jsonwebhook_get_object_v2_response_all_of_1 = webhook_get_object_v2_response_all_of_convertToJSON(webhook_get_object_v2_response_all_of_1);
	printf("webhook_get_object_v2_response_all_of :\n%s\n", cJSON_Print(jsonwebhook_get_object_v2_response_all_of_1));
	webhook_get_object_v2_response_all_of_t* webhook_get_object_v2_response_all_of_2 = webhook_get_object_v2_response_all_of_parseFromJSON(jsonwebhook_get_object_v2_response_all_of_1);
	cJSON* jsonwebhook_get_object_v2_response_all_of_2 = webhook_get_object_v2_response_all_of_convertToJSON(webhook_get_object_v2_response_all_of_2);
	printf("repeating webhook_get_object_v2_response_all_of:\n%s\n", cJSON_Print(jsonwebhook_get_object_v2_response_all_of_2));
}

int main() {
  test_webhook_get_object_v2_response_all_of(1);
  test_webhook_get_object_v2_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhook_get_object_v2_response_all_of_MAIN
#endif // webhook_get_object_v2_response_all_of_TEST
