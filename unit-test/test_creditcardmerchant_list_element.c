#ifndef creditcardmerchant_list_element_TEST
#define creditcardmerchant_list_element_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define creditcardmerchant_list_element_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/creditcardmerchant_list_element.h"
creditcardmerchant_list_element_t* instantiate_creditcardmerchant_list_element(int include_optional);



creditcardmerchant_list_element_t* instantiate_creditcardmerchant_list_element(int include_optional) {
  creditcardmerchant_list_element_t* creditcardmerchant_list_element = NULL;
  if (include_optional) {
    creditcardmerchant_list_element = creditcardmerchant_list_element_create(
      30,
      46,
      2,
      true,
      true,
      true,
      true,
      "Moneris",
      "REPLACEME"
    );
  } else {
    creditcardmerchant_list_element = creditcardmerchant_list_element_create(
      30,
      46,
      2,
      true,
      true,
      true,
      true,
      "Moneris",
      "REPLACEME"
    );
  }

  return creditcardmerchant_list_element;
}


#ifdef creditcardmerchant_list_element_MAIN

void test_creditcardmerchant_list_element(int include_optional) {
    creditcardmerchant_list_element_t* creditcardmerchant_list_element_1 = instantiate_creditcardmerchant_list_element(include_optional);

	cJSON* jsoncreditcardmerchant_list_element_1 = creditcardmerchant_list_element_convertToJSON(creditcardmerchant_list_element_1);
	printf("creditcardmerchant_list_element :\n%s\n", cJSON_Print(jsoncreditcardmerchant_list_element_1));
	creditcardmerchant_list_element_t* creditcardmerchant_list_element_2 = creditcardmerchant_list_element_parseFromJSON(jsoncreditcardmerchant_list_element_1);
	cJSON* jsoncreditcardmerchant_list_element_2 = creditcardmerchant_list_element_convertToJSON(creditcardmerchant_list_element_2);
	printf("repeating creditcardmerchant_list_element:\n%s\n", cJSON_Print(jsoncreditcardmerchant_list_element_2));
}

int main() {
  test_creditcardmerchant_list_element(1);
  test_creditcardmerchant_list_element(0);

  printf("Hello world \n");
  return 0;
}

#endif // creditcardmerchant_list_element_MAIN
#endif // creditcardmerchant_list_element_TEST
