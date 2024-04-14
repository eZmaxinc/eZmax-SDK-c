#ifndef creditcardtype_autocomplete_element_response_TEST
#define creditcardtype_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define creditcardtype_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/creditcardtype_autocomplete_element_response.h"
creditcardtype_autocomplete_element_response_t* instantiate_creditcardtype_autocomplete_element_response(int include_optional);



creditcardtype_autocomplete_element_response_t* instantiate_creditcardtype_autocomplete_element_response(int include_optional) {
  creditcardtype_autocomplete_element_response_t* creditcardtype_autocomplete_element_response = NULL;
  if (include_optional) {
    creditcardtype_autocomplete_element_response = creditcardtype_autocomplete_element_response_create(
      "Visa",
      2,
      ezmax_api_definition__full_creditcardtype_autocomplete_element_response__"visa"
    );
  } else {
    creditcardtype_autocomplete_element_response = creditcardtype_autocomplete_element_response_create(
      "Visa",
      2,
      ezmax_api_definition__full_creditcardtype_autocomplete_element_response__"visa"
    );
  }

  return creditcardtype_autocomplete_element_response;
}


#ifdef creditcardtype_autocomplete_element_response_MAIN

void test_creditcardtype_autocomplete_element_response(int include_optional) {
    creditcardtype_autocomplete_element_response_t* creditcardtype_autocomplete_element_response_1 = instantiate_creditcardtype_autocomplete_element_response(include_optional);

	cJSON* jsoncreditcardtype_autocomplete_element_response_1 = creditcardtype_autocomplete_element_response_convertToJSON(creditcardtype_autocomplete_element_response_1);
	printf("creditcardtype_autocomplete_element_response :\n%s\n", cJSON_Print(jsoncreditcardtype_autocomplete_element_response_1));
	creditcardtype_autocomplete_element_response_t* creditcardtype_autocomplete_element_response_2 = creditcardtype_autocomplete_element_response_parseFromJSON(jsoncreditcardtype_autocomplete_element_response_1);
	cJSON* jsoncreditcardtype_autocomplete_element_response_2 = creditcardtype_autocomplete_element_response_convertToJSON(creditcardtype_autocomplete_element_response_2);
	printf("repeating creditcardtype_autocomplete_element_response:\n%s\n", cJSON_Print(jsoncreditcardtype_autocomplete_element_response_2));
}

int main() {
  test_creditcardtype_autocomplete_element_response(1);
  test_creditcardtype_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // creditcardtype_autocomplete_element_response_MAIN
#endif // creditcardtype_autocomplete_element_response_TEST
