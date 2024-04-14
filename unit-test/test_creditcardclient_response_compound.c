#ifndef creditcardclient_response_compound_TEST
#define creditcardclient_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define creditcardclient_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/creditcardclient_response_compound.h"
creditcardclient_response_compound_t* instantiate_creditcardclient_response_compound(int include_optional);

#include "test_creditcarddetail_response_compound.c"


creditcardclient_response_compound_t* instantiate_creditcardclient_response_compound(int include_optional) {
  creditcardclient_response_compound_t* creditcardclient_response_compound = NULL;
  if (include_optional) {
    creditcardclient_response_compound = creditcardclient_response_compound_create(
      114,
      53,
      true,
      "Visa",
      true,
      true,
      true,
      true,
       // false, not to have infinite recursion
      instantiate_creditcarddetail_response_compound(0)
    );
  } else {
    creditcardclient_response_compound = creditcardclient_response_compound_create(
      114,
      53,
      true,
      "Visa",
      true,
      true,
      true,
      true,
      NULL
    );
  }

  return creditcardclient_response_compound;
}


#ifdef creditcardclient_response_compound_MAIN

void test_creditcardclient_response_compound(int include_optional) {
    creditcardclient_response_compound_t* creditcardclient_response_compound_1 = instantiate_creditcardclient_response_compound(include_optional);

	cJSON* jsoncreditcardclient_response_compound_1 = creditcardclient_response_compound_convertToJSON(creditcardclient_response_compound_1);
	printf("creditcardclient_response_compound :\n%s\n", cJSON_Print(jsoncreditcardclient_response_compound_1));
	creditcardclient_response_compound_t* creditcardclient_response_compound_2 = creditcardclient_response_compound_parseFromJSON(jsoncreditcardclient_response_compound_1);
	cJSON* jsoncreditcardclient_response_compound_2 = creditcardclient_response_compound_convertToJSON(creditcardclient_response_compound_2);
	printf("repeating creditcardclient_response_compound:\n%s\n", cJSON_Print(jsoncreditcardclient_response_compound_2));
}

int main() {
  test_creditcardclient_response_compound(1);
  test_creditcardclient_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // creditcardclient_response_compound_MAIN
#endif // creditcardclient_response_compound_TEST
