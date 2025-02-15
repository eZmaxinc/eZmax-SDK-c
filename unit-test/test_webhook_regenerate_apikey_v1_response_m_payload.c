#ifndef webhook_regenerate_apikey_v1_response_m_payload_TEST
#define webhook_regenerate_apikey_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhook_regenerate_apikey_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhook_regenerate_apikey_v1_response_m_payload.h"
webhook_regenerate_apikey_v1_response_m_payload_t* instantiate_webhook_regenerate_apikey_v1_response_m_payload(int include_optional);

#include "test_webhook_response_compound.c"


webhook_regenerate_apikey_v1_response_m_payload_t* instantiate_webhook_regenerate_apikey_v1_response_m_payload(int include_optional) {
  webhook_regenerate_apikey_v1_response_m_payload_t* webhook_regenerate_apikey_v1_response_m_payload = NULL;
  if (include_optional) {
    webhook_regenerate_apikey_v1_response_m_payload = webhook_regenerate_apikey_v1_response_m_payload_create(
       // false, not to have infinite recursion
      instantiate_webhook_response_compound(0)
    );
  } else {
    webhook_regenerate_apikey_v1_response_m_payload = webhook_regenerate_apikey_v1_response_m_payload_create(
      NULL
    );
  }

  return webhook_regenerate_apikey_v1_response_m_payload;
}


#ifdef webhook_regenerate_apikey_v1_response_m_payload_MAIN

void test_webhook_regenerate_apikey_v1_response_m_payload(int include_optional) {
    webhook_regenerate_apikey_v1_response_m_payload_t* webhook_regenerate_apikey_v1_response_m_payload_1 = instantiate_webhook_regenerate_apikey_v1_response_m_payload(include_optional);

	cJSON* jsonwebhook_regenerate_apikey_v1_response_m_payload_1 = webhook_regenerate_apikey_v1_response_m_payload_convertToJSON(webhook_regenerate_apikey_v1_response_m_payload_1);
	printf("webhook_regenerate_apikey_v1_response_m_payload :\n%s\n", cJSON_Print(jsonwebhook_regenerate_apikey_v1_response_m_payload_1));
	webhook_regenerate_apikey_v1_response_m_payload_t* webhook_regenerate_apikey_v1_response_m_payload_2 = webhook_regenerate_apikey_v1_response_m_payload_parseFromJSON(jsonwebhook_regenerate_apikey_v1_response_m_payload_1);
	cJSON* jsonwebhook_regenerate_apikey_v1_response_m_payload_2 = webhook_regenerate_apikey_v1_response_m_payload_convertToJSON(webhook_regenerate_apikey_v1_response_m_payload_2);
	printf("repeating webhook_regenerate_apikey_v1_response_m_payload:\n%s\n", cJSON_Print(jsonwebhook_regenerate_apikey_v1_response_m_payload_2));
}

int main() {
  test_webhook_regenerate_apikey_v1_response_m_payload(1);
  test_webhook_regenerate_apikey_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhook_regenerate_apikey_v1_response_m_payload_MAIN
#endif // webhook_regenerate_apikey_v1_response_m_payload_TEST
