#ifndef creditcardclient_list_element_TEST
#define creditcardclient_list_element_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define creditcardclient_list_element_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/creditcardclient_list_element.h"
creditcardclient_list_element_t* instantiate_creditcardclient_list_element(int include_optional);



creditcardclient_list_element_t* instantiate_creditcardclient_list_element(int include_optional) {
  creditcardclient_list_element_t* creditcardclient_list_element = NULL;
  if (include_optional) {
    creditcardclient_list_element = creditcardclient_list_element_create(
      114,
      53,
      2,
      true,
      "Visa",
      true,
      true,
      10,
      2024,
      4242
    );
  } else {
    creditcardclient_list_element = creditcardclient_list_element_create(
      114,
      53,
      2,
      true,
      "Visa",
      true,
      true,
      10,
      2024,
      4242
    );
  }

  return creditcardclient_list_element;
}


#ifdef creditcardclient_list_element_MAIN

void test_creditcardclient_list_element(int include_optional) {
    creditcardclient_list_element_t* creditcardclient_list_element_1 = instantiate_creditcardclient_list_element(include_optional);

	cJSON* jsoncreditcardclient_list_element_1 = creditcardclient_list_element_convertToJSON(creditcardclient_list_element_1);
	printf("creditcardclient_list_element :\n%s\n", cJSON_Print(jsoncreditcardclient_list_element_1));
	creditcardclient_list_element_t* creditcardclient_list_element_2 = creditcardclient_list_element_parseFromJSON(jsoncreditcardclient_list_element_1);
	cJSON* jsoncreditcardclient_list_element_2 = creditcardclient_list_element_convertToJSON(creditcardclient_list_element_2);
	printf("repeating creditcardclient_list_element:\n%s\n", cJSON_Print(jsoncreditcardclient_list_element_2));
}

int main() {
  test_creditcardclient_list_element(1);
  test_creditcardclient_list_element(0);

  printf("Hello world \n");
  return 0;
}

#endif // creditcardclient_list_element_MAIN
#endif // creditcardclient_list_element_TEST
