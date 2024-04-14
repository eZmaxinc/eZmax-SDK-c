#ifndef creditcardclient_response_TEST
#define creditcardclient_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define creditcardclient_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/creditcardclient_response.h"
creditcardclient_response_t* instantiate_creditcardclient_response(int include_optional);

#include "test_creditcarddetail_response_compound.c"


creditcardclient_response_t* instantiate_creditcardclient_response(int include_optional) {
  creditcardclient_response_t* creditcardclient_response = NULL;
  if (include_optional) {
    creditcardclient_response = creditcardclient_response_create(
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
    creditcardclient_response = creditcardclient_response_create(
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

  return creditcardclient_response;
}


#ifdef creditcardclient_response_MAIN

void test_creditcardclient_response(int include_optional) {
    creditcardclient_response_t* creditcardclient_response_1 = instantiate_creditcardclient_response(include_optional);

	cJSON* jsoncreditcardclient_response_1 = creditcardclient_response_convertToJSON(creditcardclient_response_1);
	printf("creditcardclient_response :\n%s\n", cJSON_Print(jsoncreditcardclient_response_1));
	creditcardclient_response_t* creditcardclient_response_2 = creditcardclient_response_parseFromJSON(jsoncreditcardclient_response_1);
	cJSON* jsoncreditcardclient_response_2 = creditcardclient_response_convertToJSON(creditcardclient_response_2);
	printf("repeating creditcardclient_response:\n%s\n", cJSON_Print(jsoncreditcardclient_response_2));
}

int main() {
  test_creditcardclient_response(1);
  test_creditcardclient_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // creditcardclient_response_MAIN
#endif // creditcardclient_response_TEST
