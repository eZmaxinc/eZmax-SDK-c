#ifndef bankaccount_autocomplete_element_response_TEST
#define bankaccount_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define bankaccount_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/bankaccount_autocomplete_element_response.h"
bankaccount_autocomplete_element_response_t* instantiate_bankaccount_autocomplete_element_response(int include_optional);



bankaccount_autocomplete_element_response_t* instantiate_bankaccount_autocomplete_element_response(int include_optional) {
  bankaccount_autocomplete_element_response_t* bankaccount_autocomplete_element_response = NULL;
  if (include_optional) {
    bankaccount_autocomplete_element_response = bankaccount_autocomplete_element_response_create(
      46,
      "ACME Inc",
      true
    );
  } else {
    bankaccount_autocomplete_element_response = bankaccount_autocomplete_element_response_create(
      46,
      "ACME Inc",
      true
    );
  }

  return bankaccount_autocomplete_element_response;
}


#ifdef bankaccount_autocomplete_element_response_MAIN

void test_bankaccount_autocomplete_element_response(int include_optional) {
    bankaccount_autocomplete_element_response_t* bankaccount_autocomplete_element_response_1 = instantiate_bankaccount_autocomplete_element_response(include_optional);

	cJSON* jsonbankaccount_autocomplete_element_response_1 = bankaccount_autocomplete_element_response_convertToJSON(bankaccount_autocomplete_element_response_1);
	printf("bankaccount_autocomplete_element_response :\n%s\n", cJSON_Print(jsonbankaccount_autocomplete_element_response_1));
	bankaccount_autocomplete_element_response_t* bankaccount_autocomplete_element_response_2 = bankaccount_autocomplete_element_response_parseFromJSON(jsonbankaccount_autocomplete_element_response_1);
	cJSON* jsonbankaccount_autocomplete_element_response_2 = bankaccount_autocomplete_element_response_convertToJSON(bankaccount_autocomplete_element_response_2);
	printf("repeating bankaccount_autocomplete_element_response:\n%s\n", cJSON_Print(jsonbankaccount_autocomplete_element_response_2));
}

int main() {
  test_bankaccount_autocomplete_element_response(1);
  test_bankaccount_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // bankaccount_autocomplete_element_response_MAIN
#endif // bankaccount_autocomplete_element_response_TEST
