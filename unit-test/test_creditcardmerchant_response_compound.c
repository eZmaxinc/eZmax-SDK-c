#ifndef creditcardmerchant_response_compound_TEST
#define creditcardmerchant_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define creditcardmerchant_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/creditcardmerchant_response_compound.h"
creditcardmerchant_response_compound_t* instantiate_creditcardmerchant_response_compound(int include_optional);



creditcardmerchant_response_compound_t* instantiate_creditcardmerchant_response_compound(int include_optional) {
  creditcardmerchant_response_compound_t* creditcardmerchant_response_compound = NULL;
  if (include_optional) {
    creditcardmerchant_response_compound = creditcardmerchant_response_compound_create(
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
    creditcardmerchant_response_compound = creditcardmerchant_response_compound_create(
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

  return creditcardmerchant_response_compound;
}


#ifdef creditcardmerchant_response_compound_MAIN

void test_creditcardmerchant_response_compound(int include_optional) {
    creditcardmerchant_response_compound_t* creditcardmerchant_response_compound_1 = instantiate_creditcardmerchant_response_compound(include_optional);

	cJSON* jsoncreditcardmerchant_response_compound_1 = creditcardmerchant_response_compound_convertToJSON(creditcardmerchant_response_compound_1);
	printf("creditcardmerchant_response_compound :\n%s\n", cJSON_Print(jsoncreditcardmerchant_response_compound_1));
	creditcardmerchant_response_compound_t* creditcardmerchant_response_compound_2 = creditcardmerchant_response_compound_parseFromJSON(jsoncreditcardmerchant_response_compound_1);
	cJSON* jsoncreditcardmerchant_response_compound_2 = creditcardmerchant_response_compound_convertToJSON(creditcardmerchant_response_compound_2);
	printf("repeating creditcardmerchant_response_compound:\n%s\n", cJSON_Print(jsoncreditcardmerchant_response_compound_2));
}

int main() {
  test_creditcardmerchant_response_compound(1);
  test_creditcardmerchant_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // creditcardmerchant_response_compound_MAIN
#endif // creditcardmerchant_response_compound_TEST
