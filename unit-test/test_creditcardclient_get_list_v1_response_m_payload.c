#ifndef creditcardclient_get_list_v1_response_m_payload_TEST
#define creditcardclient_get_list_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define creditcardclient_get_list_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/creditcardclient_get_list_v1_response_m_payload.h"
creditcardclient_get_list_v1_response_m_payload_t* instantiate_creditcardclient_get_list_v1_response_m_payload(int include_optional);



creditcardclient_get_list_v1_response_m_payload_t* instantiate_creditcardclient_get_list_v1_response_m_payload(int include_optional) {
  creditcardclient_get_list_v1_response_m_payload_t* creditcardclient_get_list_v1_response_m_payload = NULL;
  if (include_optional) {
    creditcardclient_get_list_v1_response_m_payload = creditcardclient_get_list_v1_response_m_payload_create(
      100,
      533,
      list_createList()
    );
  } else {
    creditcardclient_get_list_v1_response_m_payload = creditcardclient_get_list_v1_response_m_payload_create(
      100,
      533,
      list_createList()
    );
  }

  return creditcardclient_get_list_v1_response_m_payload;
}


#ifdef creditcardclient_get_list_v1_response_m_payload_MAIN

void test_creditcardclient_get_list_v1_response_m_payload(int include_optional) {
    creditcardclient_get_list_v1_response_m_payload_t* creditcardclient_get_list_v1_response_m_payload_1 = instantiate_creditcardclient_get_list_v1_response_m_payload(include_optional);

	cJSON* jsoncreditcardclient_get_list_v1_response_m_payload_1 = creditcardclient_get_list_v1_response_m_payload_convertToJSON(creditcardclient_get_list_v1_response_m_payload_1);
	printf("creditcardclient_get_list_v1_response_m_payload :\n%s\n", cJSON_Print(jsoncreditcardclient_get_list_v1_response_m_payload_1));
	creditcardclient_get_list_v1_response_m_payload_t* creditcardclient_get_list_v1_response_m_payload_2 = creditcardclient_get_list_v1_response_m_payload_parseFromJSON(jsoncreditcardclient_get_list_v1_response_m_payload_1);
	cJSON* jsoncreditcardclient_get_list_v1_response_m_payload_2 = creditcardclient_get_list_v1_response_m_payload_convertToJSON(creditcardclient_get_list_v1_response_m_payload_2);
	printf("repeating creditcardclient_get_list_v1_response_m_payload:\n%s\n", cJSON_Print(jsoncreditcardclient_get_list_v1_response_m_payload_2));
}

int main() {
  test_creditcardclient_get_list_v1_response_m_payload(1);
  test_creditcardclient_get_list_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // creditcardclient_get_list_v1_response_m_payload_MAIN
#endif // creditcardclient_get_list_v1_response_m_payload_TEST
