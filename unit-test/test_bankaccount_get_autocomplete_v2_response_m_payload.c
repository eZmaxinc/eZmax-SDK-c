#ifndef bankaccount_get_autocomplete_v2_response_m_payload_TEST
#define bankaccount_get_autocomplete_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define bankaccount_get_autocomplete_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/bankaccount_get_autocomplete_v2_response_m_payload.h"
bankaccount_get_autocomplete_v2_response_m_payload_t* instantiate_bankaccount_get_autocomplete_v2_response_m_payload(int include_optional);



bankaccount_get_autocomplete_v2_response_m_payload_t* instantiate_bankaccount_get_autocomplete_v2_response_m_payload(int include_optional) {
  bankaccount_get_autocomplete_v2_response_m_payload_t* bankaccount_get_autocomplete_v2_response_m_payload = NULL;
  if (include_optional) {
    bankaccount_get_autocomplete_v2_response_m_payload = bankaccount_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  } else {
    bankaccount_get_autocomplete_v2_response_m_payload = bankaccount_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  }

  return bankaccount_get_autocomplete_v2_response_m_payload;
}


#ifdef bankaccount_get_autocomplete_v2_response_m_payload_MAIN

void test_bankaccount_get_autocomplete_v2_response_m_payload(int include_optional) {
    bankaccount_get_autocomplete_v2_response_m_payload_t* bankaccount_get_autocomplete_v2_response_m_payload_1 = instantiate_bankaccount_get_autocomplete_v2_response_m_payload(include_optional);

	cJSON* jsonbankaccount_get_autocomplete_v2_response_m_payload_1 = bankaccount_get_autocomplete_v2_response_m_payload_convertToJSON(bankaccount_get_autocomplete_v2_response_m_payload_1);
	printf("bankaccount_get_autocomplete_v2_response_m_payload :\n%s\n", cJSON_Print(jsonbankaccount_get_autocomplete_v2_response_m_payload_1));
	bankaccount_get_autocomplete_v2_response_m_payload_t* bankaccount_get_autocomplete_v2_response_m_payload_2 = bankaccount_get_autocomplete_v2_response_m_payload_parseFromJSON(jsonbankaccount_get_autocomplete_v2_response_m_payload_1);
	cJSON* jsonbankaccount_get_autocomplete_v2_response_m_payload_2 = bankaccount_get_autocomplete_v2_response_m_payload_convertToJSON(bankaccount_get_autocomplete_v2_response_m_payload_2);
	printf("repeating bankaccount_get_autocomplete_v2_response_m_payload:\n%s\n", cJSON_Print(jsonbankaccount_get_autocomplete_v2_response_m_payload_2));
}

int main() {
  test_bankaccount_get_autocomplete_v2_response_m_payload(1);
  test_bankaccount_get_autocomplete_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // bankaccount_get_autocomplete_v2_response_m_payload_MAIN
#endif // bankaccount_get_autocomplete_v2_response_m_payload_TEST
