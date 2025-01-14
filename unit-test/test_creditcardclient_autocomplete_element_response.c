#ifndef creditcardclient_autocomplete_element_response_TEST
#define creditcardclient_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define creditcardclient_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/creditcardclient_autocomplete_element_response.h"
creditcardclient_autocomplete_element_response_t* instantiate_creditcardclient_autocomplete_element_response(int include_optional);



creditcardclient_autocomplete_element_response_t* instantiate_creditcardclient_autocomplete_element_response(int include_optional) {
  creditcardclient_autocomplete_element_response_t* creditcardclient_autocomplete_element_response = NULL;
  if (include_optional) {
    creditcardclient_autocomplete_element_response = creditcardclient_autocomplete_element_response_create(
      114,
      "Visa"
    );
  } else {
    creditcardclient_autocomplete_element_response = creditcardclient_autocomplete_element_response_create(
      114,
      "Visa"
    );
  }

  return creditcardclient_autocomplete_element_response;
}


#ifdef creditcardclient_autocomplete_element_response_MAIN

void test_creditcardclient_autocomplete_element_response(int include_optional) {
    creditcardclient_autocomplete_element_response_t* creditcardclient_autocomplete_element_response_1 = instantiate_creditcardclient_autocomplete_element_response(include_optional);

	cJSON* jsoncreditcardclient_autocomplete_element_response_1 = creditcardclient_autocomplete_element_response_convertToJSON(creditcardclient_autocomplete_element_response_1);
	printf("creditcardclient_autocomplete_element_response :\n%s\n", cJSON_Print(jsoncreditcardclient_autocomplete_element_response_1));
	creditcardclient_autocomplete_element_response_t* creditcardclient_autocomplete_element_response_2 = creditcardclient_autocomplete_element_response_parseFromJSON(jsoncreditcardclient_autocomplete_element_response_1);
	cJSON* jsoncreditcardclient_autocomplete_element_response_2 = creditcardclient_autocomplete_element_response_convertToJSON(creditcardclient_autocomplete_element_response_2);
	printf("repeating creditcardclient_autocomplete_element_response:\n%s\n", cJSON_Print(jsoncreditcardclient_autocomplete_element_response_2));
}

int main() {
  test_creditcardclient_autocomplete_element_response(1);
  test_creditcardclient_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // creditcardclient_autocomplete_element_response_MAIN
#endif // creditcardclient_autocomplete_element_response_TEST
