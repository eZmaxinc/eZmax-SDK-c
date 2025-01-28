#ifndef creditcardmerchant_request_compound_TEST
#define creditcardmerchant_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define creditcardmerchant_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/creditcardmerchant_request_compound.h"
creditcardmerchant_request_compound_t* instantiate_creditcardmerchant_request_compound(int include_optional);



creditcardmerchant_request_compound_t* instantiate_creditcardmerchant_request_compound(int include_optional) {
  creditcardmerchant_request_compound_t* creditcardmerchant_request_compound = NULL;
  if (include_optional) {
    creditcardmerchant_request_compound = creditcardmerchant_request_compound_create(
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
    creditcardmerchant_request_compound = creditcardmerchant_request_compound_create(
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

  return creditcardmerchant_request_compound;
}


#ifdef creditcardmerchant_request_compound_MAIN

void test_creditcardmerchant_request_compound(int include_optional) {
    creditcardmerchant_request_compound_t* creditcardmerchant_request_compound_1 = instantiate_creditcardmerchant_request_compound(include_optional);

	cJSON* jsoncreditcardmerchant_request_compound_1 = creditcardmerchant_request_compound_convertToJSON(creditcardmerchant_request_compound_1);
	printf("creditcardmerchant_request_compound :\n%s\n", cJSON_Print(jsoncreditcardmerchant_request_compound_1));
	creditcardmerchant_request_compound_t* creditcardmerchant_request_compound_2 = creditcardmerchant_request_compound_parseFromJSON(jsoncreditcardmerchant_request_compound_1);
	cJSON* jsoncreditcardmerchant_request_compound_2 = creditcardmerchant_request_compound_convertToJSON(creditcardmerchant_request_compound_2);
	printf("repeating creditcardmerchant_request_compound:\n%s\n", cJSON_Print(jsoncreditcardmerchant_request_compound_2));
}

int main() {
  test_creditcardmerchant_request_compound(1);
  test_creditcardmerchant_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // creditcardmerchant_request_compound_MAIN
#endif // creditcardmerchant_request_compound_TEST
