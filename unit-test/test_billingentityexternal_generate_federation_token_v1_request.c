#ifndef billingentityexternal_generate_federation_token_v1_request_TEST
#define billingentityexternal_generate_federation_token_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define billingentityexternal_generate_federation_token_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/billingentityexternal_generate_federation_token_v1_request.h"
billingentityexternal_generate_federation_token_v1_request_t* instantiate_billingentityexternal_generate_federation_token_v1_request(int include_optional);



billingentityexternal_generate_federation_token_v1_request_t* instantiate_billingentityexternal_generate_federation_token_v1_request(int include_optional) {
  billingentityexternal_generate_federation_token_v1_request_t* billingentityexternal_generate_federation_token_v1_request = NULL;
  if (include_optional) {
    billingentityexternal_generate_federation_token_v1_request = billingentityexternal_generate_federation_token_v1_request_create(
      "demo"
    );
  } else {
    billingentityexternal_generate_federation_token_v1_request = billingentityexternal_generate_federation_token_v1_request_create(
      "demo"
    );
  }

  return billingentityexternal_generate_federation_token_v1_request;
}


#ifdef billingentityexternal_generate_federation_token_v1_request_MAIN

void test_billingentityexternal_generate_federation_token_v1_request(int include_optional) {
    billingentityexternal_generate_federation_token_v1_request_t* billingentityexternal_generate_federation_token_v1_request_1 = instantiate_billingentityexternal_generate_federation_token_v1_request(include_optional);

	cJSON* jsonbillingentityexternal_generate_federation_token_v1_request_1 = billingentityexternal_generate_federation_token_v1_request_convertToJSON(billingentityexternal_generate_federation_token_v1_request_1);
	printf("billingentityexternal_generate_federation_token_v1_request :\n%s\n", cJSON_Print(jsonbillingentityexternal_generate_federation_token_v1_request_1));
	billingentityexternal_generate_federation_token_v1_request_t* billingentityexternal_generate_federation_token_v1_request_2 = billingentityexternal_generate_federation_token_v1_request_parseFromJSON(jsonbillingentityexternal_generate_federation_token_v1_request_1);
	cJSON* jsonbillingentityexternal_generate_federation_token_v1_request_2 = billingentityexternal_generate_federation_token_v1_request_convertToJSON(billingentityexternal_generate_federation_token_v1_request_2);
	printf("repeating billingentityexternal_generate_federation_token_v1_request:\n%s\n", cJSON_Print(jsonbillingentityexternal_generate_federation_token_v1_request_2));
}

int main() {
  test_billingentityexternal_generate_federation_token_v1_request(1);
  test_billingentityexternal_generate_federation_token_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // billingentityexternal_generate_federation_token_v1_request_MAIN
#endif // billingentityexternal_generate_federation_token_v1_request_TEST
