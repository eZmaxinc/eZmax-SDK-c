#ifndef emailtype_get_autocomplete_v2_response_m_payload_TEST
#define emailtype_get_autocomplete_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define emailtype_get_autocomplete_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/emailtype_get_autocomplete_v2_response_m_payload.h"
emailtype_get_autocomplete_v2_response_m_payload_t* instantiate_emailtype_get_autocomplete_v2_response_m_payload(int include_optional);



emailtype_get_autocomplete_v2_response_m_payload_t* instantiate_emailtype_get_autocomplete_v2_response_m_payload(int include_optional) {
  emailtype_get_autocomplete_v2_response_m_payload_t* emailtype_get_autocomplete_v2_response_m_payload = NULL;
  if (include_optional) {
    emailtype_get_autocomplete_v2_response_m_payload = emailtype_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  } else {
    emailtype_get_autocomplete_v2_response_m_payload = emailtype_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  }

  return emailtype_get_autocomplete_v2_response_m_payload;
}


#ifdef emailtype_get_autocomplete_v2_response_m_payload_MAIN

void test_emailtype_get_autocomplete_v2_response_m_payload(int include_optional) {
    emailtype_get_autocomplete_v2_response_m_payload_t* emailtype_get_autocomplete_v2_response_m_payload_1 = instantiate_emailtype_get_autocomplete_v2_response_m_payload(include_optional);

	cJSON* jsonemailtype_get_autocomplete_v2_response_m_payload_1 = emailtype_get_autocomplete_v2_response_m_payload_convertToJSON(emailtype_get_autocomplete_v2_response_m_payload_1);
	printf("emailtype_get_autocomplete_v2_response_m_payload :\n%s\n", cJSON_Print(jsonemailtype_get_autocomplete_v2_response_m_payload_1));
	emailtype_get_autocomplete_v2_response_m_payload_t* emailtype_get_autocomplete_v2_response_m_payload_2 = emailtype_get_autocomplete_v2_response_m_payload_parseFromJSON(jsonemailtype_get_autocomplete_v2_response_m_payload_1);
	cJSON* jsonemailtype_get_autocomplete_v2_response_m_payload_2 = emailtype_get_autocomplete_v2_response_m_payload_convertToJSON(emailtype_get_autocomplete_v2_response_m_payload_2);
	printf("repeating emailtype_get_autocomplete_v2_response_m_payload:\n%s\n", cJSON_Print(jsonemailtype_get_autocomplete_v2_response_m_payload_2));
}

int main() {
  test_emailtype_get_autocomplete_v2_response_m_payload(1);
  test_emailtype_get_autocomplete_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // emailtype_get_autocomplete_v2_response_m_payload_MAIN
#endif // emailtype_get_autocomplete_v2_response_m_payload_TEST
