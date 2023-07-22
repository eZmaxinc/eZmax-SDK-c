#ifndef company_get_autocomplete_v2_response_m_payload_TEST
#define company_get_autocomplete_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define company_get_autocomplete_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/company_get_autocomplete_v2_response_m_payload.h"
company_get_autocomplete_v2_response_m_payload_t* instantiate_company_get_autocomplete_v2_response_m_payload(int include_optional);



company_get_autocomplete_v2_response_m_payload_t* instantiate_company_get_autocomplete_v2_response_m_payload(int include_optional) {
  company_get_autocomplete_v2_response_m_payload_t* company_get_autocomplete_v2_response_m_payload = NULL;
  if (include_optional) {
    company_get_autocomplete_v2_response_m_payload = company_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  } else {
    company_get_autocomplete_v2_response_m_payload = company_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  }

  return company_get_autocomplete_v2_response_m_payload;
}


#ifdef company_get_autocomplete_v2_response_m_payload_MAIN

void test_company_get_autocomplete_v2_response_m_payload(int include_optional) {
    company_get_autocomplete_v2_response_m_payload_t* company_get_autocomplete_v2_response_m_payload_1 = instantiate_company_get_autocomplete_v2_response_m_payload(include_optional);

	cJSON* jsoncompany_get_autocomplete_v2_response_m_payload_1 = company_get_autocomplete_v2_response_m_payload_convertToJSON(company_get_autocomplete_v2_response_m_payload_1);
	printf("company_get_autocomplete_v2_response_m_payload :\n%s\n", cJSON_Print(jsoncompany_get_autocomplete_v2_response_m_payload_1));
	company_get_autocomplete_v2_response_m_payload_t* company_get_autocomplete_v2_response_m_payload_2 = company_get_autocomplete_v2_response_m_payload_parseFromJSON(jsoncompany_get_autocomplete_v2_response_m_payload_1);
	cJSON* jsoncompany_get_autocomplete_v2_response_m_payload_2 = company_get_autocomplete_v2_response_m_payload_convertToJSON(company_get_autocomplete_v2_response_m_payload_2);
	printf("repeating company_get_autocomplete_v2_response_m_payload:\n%s\n", cJSON_Print(jsoncompany_get_autocomplete_v2_response_m_payload_2));
}

int main() {
  test_company_get_autocomplete_v2_response_m_payload(1);
  test_company_get_autocomplete_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // company_get_autocomplete_v2_response_m_payload_MAIN
#endif // company_get_autocomplete_v2_response_m_payload_TEST
