#ifndef billingentityinternal_get_list_v1_response_m_payload_all_of_TEST
#define billingentityinternal_get_list_v1_response_m_payload_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define billingentityinternal_get_list_v1_response_m_payload_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/billingentityinternal_get_list_v1_response_m_payload_all_of.h"
billingentityinternal_get_list_v1_response_m_payload_all_of_t* instantiate_billingentityinternal_get_list_v1_response_m_payload_all_of(int include_optional);



billingentityinternal_get_list_v1_response_m_payload_all_of_t* instantiate_billingentityinternal_get_list_v1_response_m_payload_all_of(int include_optional) {
  billingentityinternal_get_list_v1_response_m_payload_all_of_t* billingentityinternal_get_list_v1_response_m_payload_all_of = NULL;
  if (include_optional) {
    billingentityinternal_get_list_v1_response_m_payload_all_of = billingentityinternal_get_list_v1_response_m_payload_all_of_create(
      list_createList()
    );
  } else {
    billingentityinternal_get_list_v1_response_m_payload_all_of = billingentityinternal_get_list_v1_response_m_payload_all_of_create(
      list_createList()
    );
  }

  return billingentityinternal_get_list_v1_response_m_payload_all_of;
}


#ifdef billingentityinternal_get_list_v1_response_m_payload_all_of_MAIN

void test_billingentityinternal_get_list_v1_response_m_payload_all_of(int include_optional) {
    billingentityinternal_get_list_v1_response_m_payload_all_of_t* billingentityinternal_get_list_v1_response_m_payload_all_of_1 = instantiate_billingentityinternal_get_list_v1_response_m_payload_all_of(include_optional);

	cJSON* jsonbillingentityinternal_get_list_v1_response_m_payload_all_of_1 = billingentityinternal_get_list_v1_response_m_payload_all_of_convertToJSON(billingentityinternal_get_list_v1_response_m_payload_all_of_1);
	printf("billingentityinternal_get_list_v1_response_m_payload_all_of :\n%s\n", cJSON_Print(jsonbillingentityinternal_get_list_v1_response_m_payload_all_of_1));
	billingentityinternal_get_list_v1_response_m_payload_all_of_t* billingentityinternal_get_list_v1_response_m_payload_all_of_2 = billingentityinternal_get_list_v1_response_m_payload_all_of_parseFromJSON(jsonbillingentityinternal_get_list_v1_response_m_payload_all_of_1);
	cJSON* jsonbillingentityinternal_get_list_v1_response_m_payload_all_of_2 = billingentityinternal_get_list_v1_response_m_payload_all_of_convertToJSON(billingentityinternal_get_list_v1_response_m_payload_all_of_2);
	printf("repeating billingentityinternal_get_list_v1_response_m_payload_all_of:\n%s\n", cJSON_Print(jsonbillingentityinternal_get_list_v1_response_m_payload_all_of_2));
}

int main() {
  test_billingentityinternal_get_list_v1_response_m_payload_all_of(1);
  test_billingentityinternal_get_list_v1_response_m_payload_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // billingentityinternal_get_list_v1_response_m_payload_all_of_MAIN
#endif // billingentityinternal_get_list_v1_response_m_payload_all_of_TEST
