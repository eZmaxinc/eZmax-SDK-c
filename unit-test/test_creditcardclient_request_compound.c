#ifndef creditcardclient_request_compound_TEST
#define creditcardclient_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define creditcardclient_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/creditcardclient_request_compound.h"
creditcardclient_request_compound_t* instantiate_creditcardclient_request_compound(int include_optional);

#include "test_creditcarddetail_request.c"


creditcardclient_request_compound_t* instantiate_creditcardclient_request_compound(int include_optional) {
  creditcardclient_request_compound_t* creditcardclient_request_compound = NULL;
  if (include_optional) {
    creditcardclient_request_compound = creditcardclient_request_compound_create(
      114,
      "6B29FC40-CA47-1067-B31D-00DD010662DA",
      true,
      "Visa",
      true,
      true,
      true,
       // false, not to have infinite recursion
      instantiate_creditcarddetail_request(0),
      "a"
    );
  } else {
    creditcardclient_request_compound = creditcardclient_request_compound_create(
      114,
      "6B29FC40-CA47-1067-B31D-00DD010662DA",
      true,
      "Visa",
      true,
      true,
      true,
      NULL,
      "a"
    );
  }

  return creditcardclient_request_compound;
}


#ifdef creditcardclient_request_compound_MAIN

void test_creditcardclient_request_compound(int include_optional) {
    creditcardclient_request_compound_t* creditcardclient_request_compound_1 = instantiate_creditcardclient_request_compound(include_optional);

	cJSON* jsoncreditcardclient_request_compound_1 = creditcardclient_request_compound_convertToJSON(creditcardclient_request_compound_1);
	printf("creditcardclient_request_compound :\n%s\n", cJSON_Print(jsoncreditcardclient_request_compound_1));
	creditcardclient_request_compound_t* creditcardclient_request_compound_2 = creditcardclient_request_compound_parseFromJSON(jsoncreditcardclient_request_compound_1);
	cJSON* jsoncreditcardclient_request_compound_2 = creditcardclient_request_compound_convertToJSON(creditcardclient_request_compound_2);
	printf("repeating creditcardclient_request_compound:\n%s\n", cJSON_Print(jsoncreditcardclient_request_compound_2));
}

int main() {
  test_creditcardclient_request_compound(1);
  test_creditcardclient_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // creditcardclient_request_compound_MAIN
#endif // creditcardclient_request_compound_TEST
