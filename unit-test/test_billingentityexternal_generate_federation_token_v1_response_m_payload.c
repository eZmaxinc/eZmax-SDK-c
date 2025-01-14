#ifndef billingentityexternal_generate_federation_token_v1_response_m_payload_TEST
#define billingentityexternal_generate_federation_token_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define billingentityexternal_generate_federation_token_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/billingentityexternal_generate_federation_token_v1_response_m_payload.h"
billingentityexternal_generate_federation_token_v1_response_m_payload_t* instantiate_billingentityexternal_generate_federation_token_v1_response_m_payload(int include_optional);

#include "test_custom_apikeyfederation.c"


billingentityexternal_generate_federation_token_v1_response_m_payload_t* instantiate_billingentityexternal_generate_federation_token_v1_response_m_payload(int include_optional) {
  billingentityexternal_generate_federation_token_v1_response_m_payload_t* billingentityexternal_generate_federation_token_v1_response_m_payload = NULL;
  if (include_optional) {
    billingentityexternal_generate_federation_token_v1_response_m_payload = billingentityexternal_generate_federation_token_v1_response_m_payload_create(
       // false, not to have infinite recursion
      instantiate_custom_apikeyfederation(0),
      "http://www.website.com/avatar.jpg"
    );
  } else {
    billingentityexternal_generate_federation_token_v1_response_m_payload = billingentityexternal_generate_federation_token_v1_response_m_payload_create(
      NULL,
      "http://www.website.com/avatar.jpg"
    );
  }

  return billingentityexternal_generate_federation_token_v1_response_m_payload;
}


#ifdef billingentityexternal_generate_federation_token_v1_response_m_payload_MAIN

void test_billingentityexternal_generate_federation_token_v1_response_m_payload(int include_optional) {
    billingentityexternal_generate_federation_token_v1_response_m_payload_t* billingentityexternal_generate_federation_token_v1_response_m_payload_1 = instantiate_billingentityexternal_generate_federation_token_v1_response_m_payload(include_optional);

	cJSON* jsonbillingentityexternal_generate_federation_token_v1_response_m_payload_1 = billingentityexternal_generate_federation_token_v1_response_m_payload_convertToJSON(billingentityexternal_generate_federation_token_v1_response_m_payload_1);
	printf("billingentityexternal_generate_federation_token_v1_response_m_payload :\n%s\n", cJSON_Print(jsonbillingentityexternal_generate_federation_token_v1_response_m_payload_1));
	billingentityexternal_generate_federation_token_v1_response_m_payload_t* billingentityexternal_generate_federation_token_v1_response_m_payload_2 = billingentityexternal_generate_federation_token_v1_response_m_payload_parseFromJSON(jsonbillingentityexternal_generate_federation_token_v1_response_m_payload_1);
	cJSON* jsonbillingentityexternal_generate_federation_token_v1_response_m_payload_2 = billingentityexternal_generate_federation_token_v1_response_m_payload_convertToJSON(billingentityexternal_generate_federation_token_v1_response_m_payload_2);
	printf("repeating billingentityexternal_generate_federation_token_v1_response_m_payload:\n%s\n", cJSON_Print(jsonbillingentityexternal_generate_federation_token_v1_response_m_payload_2));
}

int main() {
  test_billingentityexternal_generate_federation_token_v1_response_m_payload(1);
  test_billingentityexternal_generate_federation_token_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // billingentityexternal_generate_federation_token_v1_response_m_payload_MAIN
#endif // billingentityexternal_generate_federation_token_v1_response_m_payload_TEST
