#ifndef creditcardmerchant_autocomplete_element_response_TEST
#define creditcardmerchant_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define creditcardmerchant_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/creditcardmerchant_autocomplete_element_response.h"
creditcardmerchant_autocomplete_element_response_t* instantiate_creditcardmerchant_autocomplete_element_response(int include_optional);



creditcardmerchant_autocomplete_element_response_t* instantiate_creditcardmerchant_autocomplete_element_response(int include_optional) {
  creditcardmerchant_autocomplete_element_response_t* creditcardmerchant_autocomplete_element_response = NULL;
  if (include_optional) {
    creditcardmerchant_autocomplete_element_response = creditcardmerchant_autocomplete_element_response_create(
      30,
      "Moneris",
      true
    );
  } else {
    creditcardmerchant_autocomplete_element_response = creditcardmerchant_autocomplete_element_response_create(
      30,
      "Moneris",
      true
    );
  }

  return creditcardmerchant_autocomplete_element_response;
}


#ifdef creditcardmerchant_autocomplete_element_response_MAIN

void test_creditcardmerchant_autocomplete_element_response(int include_optional) {
    creditcardmerchant_autocomplete_element_response_t* creditcardmerchant_autocomplete_element_response_1 = instantiate_creditcardmerchant_autocomplete_element_response(include_optional);

	cJSON* jsoncreditcardmerchant_autocomplete_element_response_1 = creditcardmerchant_autocomplete_element_response_convertToJSON(creditcardmerchant_autocomplete_element_response_1);
	printf("creditcardmerchant_autocomplete_element_response :\n%s\n", cJSON_Print(jsoncreditcardmerchant_autocomplete_element_response_1));
	creditcardmerchant_autocomplete_element_response_t* creditcardmerchant_autocomplete_element_response_2 = creditcardmerchant_autocomplete_element_response_parseFromJSON(jsoncreditcardmerchant_autocomplete_element_response_1);
	cJSON* jsoncreditcardmerchant_autocomplete_element_response_2 = creditcardmerchant_autocomplete_element_response_convertToJSON(creditcardmerchant_autocomplete_element_response_2);
	printf("repeating creditcardmerchant_autocomplete_element_response:\n%s\n", cJSON_Print(jsoncreditcardmerchant_autocomplete_element_response_2));
}

int main() {
  test_creditcardmerchant_autocomplete_element_response(1);
  test_creditcardmerchant_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // creditcardmerchant_autocomplete_element_response_MAIN
#endif // creditcardmerchant_autocomplete_element_response_TEST
