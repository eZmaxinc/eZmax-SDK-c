#ifndef creditcardmerchant_request_TEST
#define creditcardmerchant_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define creditcardmerchant_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/creditcardmerchant_request.h"
creditcardmerchant_request_t* instantiate_creditcardmerchant_request(int include_optional);



creditcardmerchant_request_t* instantiate_creditcardmerchant_request(int include_optional) {
  creditcardmerchant_request_t* creditcardmerchant_request = NULL;
  if (include_optional) {
    creditcardmerchant_request = creditcardmerchant_request_create(
      30,
      46,
      2,
      true,
      true,
      true,
      true,
      "REPLACEME",
      "Moneris",
      "REPLACEME"
    );
  } else {
    creditcardmerchant_request = creditcardmerchant_request_create(
      30,
      46,
      2,
      true,
      true,
      true,
      true,
      "REPLACEME",
      "Moneris",
      "REPLACEME"
    );
  }

  return creditcardmerchant_request;
}


#ifdef creditcardmerchant_request_MAIN

void test_creditcardmerchant_request(int include_optional) {
    creditcardmerchant_request_t* creditcardmerchant_request_1 = instantiate_creditcardmerchant_request(include_optional);

	cJSON* jsoncreditcardmerchant_request_1 = creditcardmerchant_request_convertToJSON(creditcardmerchant_request_1);
	printf("creditcardmerchant_request :\n%s\n", cJSON_Print(jsoncreditcardmerchant_request_1));
	creditcardmerchant_request_t* creditcardmerchant_request_2 = creditcardmerchant_request_parseFromJSON(jsoncreditcardmerchant_request_1);
	cJSON* jsoncreditcardmerchant_request_2 = creditcardmerchant_request_convertToJSON(creditcardmerchant_request_2);
	printf("repeating creditcardmerchant_request:\n%s\n", cJSON_Print(jsoncreditcardmerchant_request_2));
}

int main() {
  test_creditcardmerchant_request(1);
  test_creditcardmerchant_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // creditcardmerchant_request_MAIN
#endif // creditcardmerchant_request_TEST
