#ifndef webhook_get_history_v1_response_m_payload_TEST
#define webhook_get_history_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhook_get_history_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhook_get_history_v1_response_m_payload.h"
webhook_get_history_v1_response_m_payload_t* instantiate_webhook_get_history_v1_response_m_payload(int include_optional);



webhook_get_history_v1_response_m_payload_t* instantiate_webhook_get_history_v1_response_m_payload(int include_optional) {
  webhook_get_history_v1_response_m_payload_t* webhook_get_history_v1_response_m_payload = NULL;
  if (include_optional) {
    webhook_get_history_v1_response_m_payload = webhook_get_history_v1_response_m_payload_create(
      list_createList()
    );
  } else {
    webhook_get_history_v1_response_m_payload = webhook_get_history_v1_response_m_payload_create(
      list_createList()
    );
  }

  return webhook_get_history_v1_response_m_payload;
}


#ifdef webhook_get_history_v1_response_m_payload_MAIN

void test_webhook_get_history_v1_response_m_payload(int include_optional) {
    webhook_get_history_v1_response_m_payload_t* webhook_get_history_v1_response_m_payload_1 = instantiate_webhook_get_history_v1_response_m_payload(include_optional);

	cJSON* jsonwebhook_get_history_v1_response_m_payload_1 = webhook_get_history_v1_response_m_payload_convertToJSON(webhook_get_history_v1_response_m_payload_1);
	printf("webhook_get_history_v1_response_m_payload :\n%s\n", cJSON_Print(jsonwebhook_get_history_v1_response_m_payload_1));
	webhook_get_history_v1_response_m_payload_t* webhook_get_history_v1_response_m_payload_2 = webhook_get_history_v1_response_m_payload_parseFromJSON(jsonwebhook_get_history_v1_response_m_payload_1);
	cJSON* jsonwebhook_get_history_v1_response_m_payload_2 = webhook_get_history_v1_response_m_payload_convertToJSON(webhook_get_history_v1_response_m_payload_2);
	printf("repeating webhook_get_history_v1_response_m_payload:\n%s\n", cJSON_Print(jsonwebhook_get_history_v1_response_m_payload_2));
}

int main() {
  test_webhook_get_history_v1_response_m_payload(1);
  test_webhook_get_history_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhook_get_history_v1_response_m_payload_MAIN
#endif // webhook_get_history_v1_response_m_payload_TEST
