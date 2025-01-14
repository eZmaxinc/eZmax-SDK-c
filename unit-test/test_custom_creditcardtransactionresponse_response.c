#ifndef custom_creditcardtransactionresponse_response_TEST
#define custom_creditcardtransactionresponse_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_creditcardtransactionresponse_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_creditcardtransactionresponse_response.h"
custom_creditcardtransactionresponse_response_t* instantiate_custom_creditcardtransactionresponse_response(int include_optional);



custom_creditcardtransactionresponse_response_t* instantiate_custom_creditcardtransactionresponse_response(int include_optional) {
  custom_creditcardtransactionresponse_response_t* custom_creditcardtransactionresponse_response = NULL;
  if (include_optional) {
    custom_creditcardtransactionresponse_response = custom_creditcardtransactionresponse_response_create(
      "01",
      "027",
      "APPROVED",
      ezmax_api_definition__full_custom_creditcardtransactionresponse_response__"Match",
      ezmax_api_definition__full_custom_creditcardtransactionresponse_response__"Match"
    );
  } else {
    custom_creditcardtransactionresponse_response = custom_creditcardtransactionresponse_response_create(
      "01",
      "027",
      "APPROVED",
      ezmax_api_definition__full_custom_creditcardtransactionresponse_response__"Match",
      ezmax_api_definition__full_custom_creditcardtransactionresponse_response__"Match"
    );
  }

  return custom_creditcardtransactionresponse_response;
}


#ifdef custom_creditcardtransactionresponse_response_MAIN

void test_custom_creditcardtransactionresponse_response(int include_optional) {
    custom_creditcardtransactionresponse_response_t* custom_creditcardtransactionresponse_response_1 = instantiate_custom_creditcardtransactionresponse_response(include_optional);

	cJSON* jsoncustom_creditcardtransactionresponse_response_1 = custom_creditcardtransactionresponse_response_convertToJSON(custom_creditcardtransactionresponse_response_1);
	printf("custom_creditcardtransactionresponse_response :\n%s\n", cJSON_Print(jsoncustom_creditcardtransactionresponse_response_1));
	custom_creditcardtransactionresponse_response_t* custom_creditcardtransactionresponse_response_2 = custom_creditcardtransactionresponse_response_parseFromJSON(jsoncustom_creditcardtransactionresponse_response_1);
	cJSON* jsoncustom_creditcardtransactionresponse_response_2 = custom_creditcardtransactionresponse_response_convertToJSON(custom_creditcardtransactionresponse_response_2);
	printf("repeating custom_creditcardtransactionresponse_response:\n%s\n", cJSON_Print(jsoncustom_creditcardtransactionresponse_response_2));
}

int main() {
  test_custom_creditcardtransactionresponse_response(1);
  test_custom_creditcardtransactionresponse_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_creditcardtransactionresponse_response_MAIN
#endif // custom_creditcardtransactionresponse_response_TEST
