#ifndef creditcardmerchant_create_object_v1_response_m_payload_TEST
#define creditcardmerchant_create_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define creditcardmerchant_create_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/creditcardmerchant_create_object_v1_response_m_payload.h"
creditcardmerchant_create_object_v1_response_m_payload_t* instantiate_creditcardmerchant_create_object_v1_response_m_payload(int include_optional);



creditcardmerchant_create_object_v1_response_m_payload_t* instantiate_creditcardmerchant_create_object_v1_response_m_payload(int include_optional) {
  creditcardmerchant_create_object_v1_response_m_payload_t* creditcardmerchant_create_object_v1_response_m_payload = NULL;
  if (include_optional) {
    creditcardmerchant_create_object_v1_response_m_payload = creditcardmerchant_create_object_v1_response_m_payload_create(
      list_createList()
    );
  } else {
    creditcardmerchant_create_object_v1_response_m_payload = creditcardmerchant_create_object_v1_response_m_payload_create(
      list_createList()
    );
  }

  return creditcardmerchant_create_object_v1_response_m_payload;
}


#ifdef creditcardmerchant_create_object_v1_response_m_payload_MAIN

void test_creditcardmerchant_create_object_v1_response_m_payload(int include_optional) {
    creditcardmerchant_create_object_v1_response_m_payload_t* creditcardmerchant_create_object_v1_response_m_payload_1 = instantiate_creditcardmerchant_create_object_v1_response_m_payload(include_optional);

	cJSON* jsoncreditcardmerchant_create_object_v1_response_m_payload_1 = creditcardmerchant_create_object_v1_response_m_payload_convertToJSON(creditcardmerchant_create_object_v1_response_m_payload_1);
	printf("creditcardmerchant_create_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsoncreditcardmerchant_create_object_v1_response_m_payload_1));
	creditcardmerchant_create_object_v1_response_m_payload_t* creditcardmerchant_create_object_v1_response_m_payload_2 = creditcardmerchant_create_object_v1_response_m_payload_parseFromJSON(jsoncreditcardmerchant_create_object_v1_response_m_payload_1);
	cJSON* jsoncreditcardmerchant_create_object_v1_response_m_payload_2 = creditcardmerchant_create_object_v1_response_m_payload_convertToJSON(creditcardmerchant_create_object_v1_response_m_payload_2);
	printf("repeating creditcardmerchant_create_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsoncreditcardmerchant_create_object_v1_response_m_payload_2));
}

int main() {
  test_creditcardmerchant_create_object_v1_response_m_payload(1);
  test_creditcardmerchant_create_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // creditcardmerchant_create_object_v1_response_m_payload_MAIN
#endif // creditcardmerchant_create_object_v1_response_m_payload_TEST
