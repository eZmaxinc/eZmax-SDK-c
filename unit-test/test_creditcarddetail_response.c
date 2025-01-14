#ifndef creditcarddetail_response_TEST
#define creditcarddetail_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define creditcarddetail_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/creditcarddetail_response.h"
creditcarddetail_response_t* instantiate_creditcarddetail_response(int include_optional);



creditcarddetail_response_t* instantiate_creditcarddetail_response(int include_optional) {
  creditcarddetail_response_t* creditcarddetail_response = NULL;
  if (include_optional) {
    creditcarddetail_response = creditcarddetail_response_create(
      53,
      2,
      4242,
      10,
      2024,
      "2500",
      "Daniel-Johnson Blvd.",
      "H7T 2P6"
    );
  } else {
    creditcarddetail_response = creditcarddetail_response_create(
      53,
      2,
      4242,
      10,
      2024,
      "2500",
      "Daniel-Johnson Blvd.",
      "H7T 2P6"
    );
  }

  return creditcarddetail_response;
}


#ifdef creditcarddetail_response_MAIN

void test_creditcarddetail_response(int include_optional) {
    creditcarddetail_response_t* creditcarddetail_response_1 = instantiate_creditcarddetail_response(include_optional);

	cJSON* jsoncreditcarddetail_response_1 = creditcarddetail_response_convertToJSON(creditcarddetail_response_1);
	printf("creditcarddetail_response :\n%s\n", cJSON_Print(jsoncreditcarddetail_response_1));
	creditcarddetail_response_t* creditcarddetail_response_2 = creditcarddetail_response_parseFromJSON(jsoncreditcarddetail_response_1);
	cJSON* jsoncreditcarddetail_response_2 = creditcarddetail_response_convertToJSON(creditcarddetail_response_2);
	printf("repeating creditcarddetail_response:\n%s\n", cJSON_Print(jsoncreditcarddetail_response_2));
}

int main() {
  test_creditcarddetail_response(1);
  test_creditcarddetail_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // creditcarddetail_response_MAIN
#endif // creditcarddetail_response_TEST
