#ifndef creditcardmerchant_response_TEST
#define creditcardmerchant_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define creditcardmerchant_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/creditcardmerchant_response.h"
creditcardmerchant_response_t* instantiate_creditcardmerchant_response(int include_optional);



creditcardmerchant_response_t* instantiate_creditcardmerchant_response(int include_optional) {
  creditcardmerchant_response_t* creditcardmerchant_response = NULL;
  if (include_optional) {
    creditcardmerchant_response = creditcardmerchant_response_create(
      30,
      46,
      "ACME Inc",
      2,
      "English",
      true,
      true,
      true,
      true,
      "Moneris",
      "REPLACEME"
    );
  } else {
    creditcardmerchant_response = creditcardmerchant_response_create(
      30,
      46,
      "ACME Inc",
      2,
      "English",
      true,
      true,
      true,
      true,
      "Moneris",
      "REPLACEME"
    );
  }

  return creditcardmerchant_response;
}


#ifdef creditcardmerchant_response_MAIN

void test_creditcardmerchant_response(int include_optional) {
    creditcardmerchant_response_t* creditcardmerchant_response_1 = instantiate_creditcardmerchant_response(include_optional);

	cJSON* jsoncreditcardmerchant_response_1 = creditcardmerchant_response_convertToJSON(creditcardmerchant_response_1);
	printf("creditcardmerchant_response :\n%s\n", cJSON_Print(jsoncreditcardmerchant_response_1));
	creditcardmerchant_response_t* creditcardmerchant_response_2 = creditcardmerchant_response_parseFromJSON(jsoncreditcardmerchant_response_1);
	cJSON* jsoncreditcardmerchant_response_2 = creditcardmerchant_response_convertToJSON(creditcardmerchant_response_2);
	printf("repeating creditcardmerchant_response:\n%s\n", cJSON_Print(jsoncreditcardmerchant_response_2));
}

int main() {
  test_creditcardmerchant_response(1);
  test_creditcardmerchant_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // creditcardmerchant_response_MAIN
#endif // creditcardmerchant_response_TEST
