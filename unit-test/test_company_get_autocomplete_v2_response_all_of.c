#ifndef company_get_autocomplete_v2_response_all_of_TEST
#define company_get_autocomplete_v2_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define company_get_autocomplete_v2_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/company_get_autocomplete_v2_response_all_of.h"
company_get_autocomplete_v2_response_all_of_t* instantiate_company_get_autocomplete_v2_response_all_of(int include_optional);

#include "test_company_get_autocomplete_v2_response_m_payload.c"


company_get_autocomplete_v2_response_all_of_t* instantiate_company_get_autocomplete_v2_response_all_of(int include_optional) {
  company_get_autocomplete_v2_response_all_of_t* company_get_autocomplete_v2_response_all_of = NULL;
  if (include_optional) {
    company_get_autocomplete_v2_response_all_of = company_get_autocomplete_v2_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_company_get_autocomplete_v2_response_m_payload(0)
    );
  } else {
    company_get_autocomplete_v2_response_all_of = company_get_autocomplete_v2_response_all_of_create(
      NULL
    );
  }

  return company_get_autocomplete_v2_response_all_of;
}


#ifdef company_get_autocomplete_v2_response_all_of_MAIN

void test_company_get_autocomplete_v2_response_all_of(int include_optional) {
    company_get_autocomplete_v2_response_all_of_t* company_get_autocomplete_v2_response_all_of_1 = instantiate_company_get_autocomplete_v2_response_all_of(include_optional);

	cJSON* jsoncompany_get_autocomplete_v2_response_all_of_1 = company_get_autocomplete_v2_response_all_of_convertToJSON(company_get_autocomplete_v2_response_all_of_1);
	printf("company_get_autocomplete_v2_response_all_of :\n%s\n", cJSON_Print(jsoncompany_get_autocomplete_v2_response_all_of_1));
	company_get_autocomplete_v2_response_all_of_t* company_get_autocomplete_v2_response_all_of_2 = company_get_autocomplete_v2_response_all_of_parseFromJSON(jsoncompany_get_autocomplete_v2_response_all_of_1);
	cJSON* jsoncompany_get_autocomplete_v2_response_all_of_2 = company_get_autocomplete_v2_response_all_of_convertToJSON(company_get_autocomplete_v2_response_all_of_2);
	printf("repeating company_get_autocomplete_v2_response_all_of:\n%s\n", cJSON_Print(jsoncompany_get_autocomplete_v2_response_all_of_2));
}

int main() {
  test_company_get_autocomplete_v2_response_all_of(1);
  test_company_get_autocomplete_v2_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // company_get_autocomplete_v2_response_all_of_MAIN
#endif // company_get_autocomplete_v2_response_all_of_TEST
