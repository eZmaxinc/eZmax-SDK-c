#ifndef company_autocomplete_element_response_TEST
#define company_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define company_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/company_autocomplete_element_response.h"
company_autocomplete_element_response_t* instantiate_company_autocomplete_element_response(int include_optional);



company_autocomplete_element_response_t* instantiate_company_autocomplete_element_response(int include_optional) {
  company_autocomplete_element_response_t* company_autocomplete_element_response = NULL;
  if (include_optional) {
    company_autocomplete_element_response = company_autocomplete_element_response_create(
      1,
      "Acme inc.",
      true
    );
  } else {
    company_autocomplete_element_response = company_autocomplete_element_response_create(
      1,
      "Acme inc.",
      true
    );
  }

  return company_autocomplete_element_response;
}


#ifdef company_autocomplete_element_response_MAIN

void test_company_autocomplete_element_response(int include_optional) {
    company_autocomplete_element_response_t* company_autocomplete_element_response_1 = instantiate_company_autocomplete_element_response(include_optional);

	cJSON* jsoncompany_autocomplete_element_response_1 = company_autocomplete_element_response_convertToJSON(company_autocomplete_element_response_1);
	printf("company_autocomplete_element_response :\n%s\n", cJSON_Print(jsoncompany_autocomplete_element_response_1));
	company_autocomplete_element_response_t* company_autocomplete_element_response_2 = company_autocomplete_element_response_parseFromJSON(jsoncompany_autocomplete_element_response_1);
	cJSON* jsoncompany_autocomplete_element_response_2 = company_autocomplete_element_response_convertToJSON(company_autocomplete_element_response_2);
	printf("repeating company_autocomplete_element_response:\n%s\n", cJSON_Print(jsoncompany_autocomplete_element_response_2));
}

int main() {
  test_company_autocomplete_element_response(1);
  test_company_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // company_autocomplete_element_response_MAIN
#endif // company_autocomplete_element_response_TEST
