#ifndef billingentityinternal_create_object_v1_response_m_payload_TEST
#define billingentityinternal_create_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define billingentityinternal_create_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/billingentityinternal_create_object_v1_response_m_payload.h"
billingentityinternal_create_object_v1_response_m_payload_t* instantiate_billingentityinternal_create_object_v1_response_m_payload(int include_optional);



billingentityinternal_create_object_v1_response_m_payload_t* instantiate_billingentityinternal_create_object_v1_response_m_payload(int include_optional) {
  billingentityinternal_create_object_v1_response_m_payload_t* billingentityinternal_create_object_v1_response_m_payload = NULL;
  if (include_optional) {
    billingentityinternal_create_object_v1_response_m_payload = billingentityinternal_create_object_v1_response_m_payload_create(
      list_createList()
    );
  } else {
    billingentityinternal_create_object_v1_response_m_payload = billingentityinternal_create_object_v1_response_m_payload_create(
      list_createList()
    );
  }

  return billingentityinternal_create_object_v1_response_m_payload;
}


#ifdef billingentityinternal_create_object_v1_response_m_payload_MAIN

void test_billingentityinternal_create_object_v1_response_m_payload(int include_optional) {
    billingentityinternal_create_object_v1_response_m_payload_t* billingentityinternal_create_object_v1_response_m_payload_1 = instantiate_billingentityinternal_create_object_v1_response_m_payload(include_optional);

	cJSON* jsonbillingentityinternal_create_object_v1_response_m_payload_1 = billingentityinternal_create_object_v1_response_m_payload_convertToJSON(billingentityinternal_create_object_v1_response_m_payload_1);
	printf("billingentityinternal_create_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsonbillingentityinternal_create_object_v1_response_m_payload_1));
	billingentityinternal_create_object_v1_response_m_payload_t* billingentityinternal_create_object_v1_response_m_payload_2 = billingentityinternal_create_object_v1_response_m_payload_parseFromJSON(jsonbillingentityinternal_create_object_v1_response_m_payload_1);
	cJSON* jsonbillingentityinternal_create_object_v1_response_m_payload_2 = billingentityinternal_create_object_v1_response_m_payload_convertToJSON(billingentityinternal_create_object_v1_response_m_payload_2);
	printf("repeating billingentityinternal_create_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsonbillingentityinternal_create_object_v1_response_m_payload_2));
}

int main() {
  test_billingentityinternal_create_object_v1_response_m_payload(1);
  test_billingentityinternal_create_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // billingentityinternal_create_object_v1_response_m_payload_MAIN
#endif // billingentityinternal_create_object_v1_response_m_payload_TEST
