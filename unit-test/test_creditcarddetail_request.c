#ifndef creditcarddetail_request_TEST
#define creditcarddetail_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define creditcarddetail_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/creditcarddetail_request.h"
creditcarddetail_request_t* instantiate_creditcarddetail_request(int include_optional);



creditcarddetail_request_t* instantiate_creditcarddetail_request(int include_optional) {
  creditcarddetail_request_t* creditcarddetail_request = NULL;
  if (include_optional) {
    creditcarddetail_request = creditcarddetail_request_create(
      10,
      2024,
      "2500",
      "Daniel-Johnson Blvd",
      "H7T 2P6"
    );
  } else {
    creditcarddetail_request = creditcarddetail_request_create(
      10,
      2024,
      "2500",
      "Daniel-Johnson Blvd",
      "H7T 2P6"
    );
  }

  return creditcarddetail_request;
}


#ifdef creditcarddetail_request_MAIN

void test_creditcarddetail_request(int include_optional) {
    creditcarddetail_request_t* creditcarddetail_request_1 = instantiate_creditcarddetail_request(include_optional);

	cJSON* jsoncreditcarddetail_request_1 = creditcarddetail_request_convertToJSON(creditcarddetail_request_1);
	printf("creditcarddetail_request :\n%s\n", cJSON_Print(jsoncreditcarddetail_request_1));
	creditcarddetail_request_t* creditcarddetail_request_2 = creditcarddetail_request_parseFromJSON(jsoncreditcarddetail_request_1);
	cJSON* jsoncreditcarddetail_request_2 = creditcarddetail_request_convertToJSON(creditcarddetail_request_2);
	printf("repeating creditcarddetail_request:\n%s\n", cJSON_Print(jsoncreditcarddetail_request_2));
}

int main() {
  test_creditcarddetail_request(1);
  test_creditcarddetail_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // creditcarddetail_request_MAIN
#endif // creditcarddetail_request_TEST
