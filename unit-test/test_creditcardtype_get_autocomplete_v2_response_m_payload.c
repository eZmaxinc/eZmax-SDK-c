#ifndef creditcardtype_get_autocomplete_v2_response_m_payload_TEST
#define creditcardtype_get_autocomplete_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define creditcardtype_get_autocomplete_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/creditcardtype_get_autocomplete_v2_response_m_payload.h"
creditcardtype_get_autocomplete_v2_response_m_payload_t* instantiate_creditcardtype_get_autocomplete_v2_response_m_payload(int include_optional);



creditcardtype_get_autocomplete_v2_response_m_payload_t* instantiate_creditcardtype_get_autocomplete_v2_response_m_payload(int include_optional) {
  creditcardtype_get_autocomplete_v2_response_m_payload_t* creditcardtype_get_autocomplete_v2_response_m_payload = NULL;
  if (include_optional) {
    creditcardtype_get_autocomplete_v2_response_m_payload = creditcardtype_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  } else {
    creditcardtype_get_autocomplete_v2_response_m_payload = creditcardtype_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  }

  return creditcardtype_get_autocomplete_v2_response_m_payload;
}


#ifdef creditcardtype_get_autocomplete_v2_response_m_payload_MAIN

void test_creditcardtype_get_autocomplete_v2_response_m_payload(int include_optional) {
    creditcardtype_get_autocomplete_v2_response_m_payload_t* creditcardtype_get_autocomplete_v2_response_m_payload_1 = instantiate_creditcardtype_get_autocomplete_v2_response_m_payload(include_optional);

	cJSON* jsoncreditcardtype_get_autocomplete_v2_response_m_payload_1 = creditcardtype_get_autocomplete_v2_response_m_payload_convertToJSON(creditcardtype_get_autocomplete_v2_response_m_payload_1);
	printf("creditcardtype_get_autocomplete_v2_response_m_payload :\n%s\n", cJSON_Print(jsoncreditcardtype_get_autocomplete_v2_response_m_payload_1));
	creditcardtype_get_autocomplete_v2_response_m_payload_t* creditcardtype_get_autocomplete_v2_response_m_payload_2 = creditcardtype_get_autocomplete_v2_response_m_payload_parseFromJSON(jsoncreditcardtype_get_autocomplete_v2_response_m_payload_1);
	cJSON* jsoncreditcardtype_get_autocomplete_v2_response_m_payload_2 = creditcardtype_get_autocomplete_v2_response_m_payload_convertToJSON(creditcardtype_get_autocomplete_v2_response_m_payload_2);
	printf("repeating creditcardtype_get_autocomplete_v2_response_m_payload:\n%s\n", cJSON_Print(jsoncreditcardtype_get_autocomplete_v2_response_m_payload_2));
}

int main() {
  test_creditcardtype_get_autocomplete_v2_response_m_payload(1);
  test_creditcardtype_get_autocomplete_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // creditcardtype_get_autocomplete_v2_response_m_payload_MAIN
#endif // creditcardtype_get_autocomplete_v2_response_m_payload_TEST
