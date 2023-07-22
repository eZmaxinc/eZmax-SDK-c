#ifndef custom_creditcardtransaction_response_TEST
#define custom_creditcardtransaction_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_creditcardtransaction_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_creditcardtransaction_response.h"
custom_creditcardtransaction_response_t* instantiate_custom_creditcardtransaction_response(int include_optional);



custom_creditcardtransaction_response_t* instantiate_custom_creditcardtransaction_response(int include_optional) {
  custom_creditcardtransaction_response_t* custom_creditcardtransaction_response = NULL;
  if (include_optional) {
    custom_creditcardtransaction_response = custom_creditcardtransaction_response_create(
      ezmax_api_definition__full_custom_creditcardtransaction_response__"visa",
      "167.58",
      "XXXX XXXX XXXX 1234",
      "651447854715478415"
    );
  } else {
    custom_creditcardtransaction_response = custom_creditcardtransaction_response_create(
      ezmax_api_definition__full_custom_creditcardtransaction_response__"visa",
      "167.58",
      "XXXX XXXX XXXX 1234",
      "651447854715478415"
    );
  }

  return custom_creditcardtransaction_response;
}


#ifdef custom_creditcardtransaction_response_MAIN

void test_custom_creditcardtransaction_response(int include_optional) {
    custom_creditcardtransaction_response_t* custom_creditcardtransaction_response_1 = instantiate_custom_creditcardtransaction_response(include_optional);

	cJSON* jsoncustom_creditcardtransaction_response_1 = custom_creditcardtransaction_response_convertToJSON(custom_creditcardtransaction_response_1);
	printf("custom_creditcardtransaction_response :\n%s\n", cJSON_Print(jsoncustom_creditcardtransaction_response_1));
	custom_creditcardtransaction_response_t* custom_creditcardtransaction_response_2 = custom_creditcardtransaction_response_parseFromJSON(jsoncustom_creditcardtransaction_response_1);
	cJSON* jsoncustom_creditcardtransaction_response_2 = custom_creditcardtransaction_response_convertToJSON(custom_creditcardtransaction_response_2);
	printf("repeating custom_creditcardtransaction_response:\n%s\n", cJSON_Print(jsoncustom_creditcardtransaction_response_2));
}

int main() {
  test_custom_creditcardtransaction_response(1);
  test_custom_creditcardtransaction_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_creditcardtransaction_response_MAIN
#endif // custom_creditcardtransaction_response_TEST
