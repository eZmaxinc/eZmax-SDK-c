#ifndef common_response_error_creditcard_validation_TEST
#define common_response_error_creditcard_validation_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define common_response_error_creditcard_validation_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/common_response_error_creditcard_validation.h"
common_response_error_creditcard_validation_t* instantiate_common_response_error_creditcard_validation(int include_optional);

#include "test_custom_creditcardtransactionresponse_response.c"


common_response_error_creditcard_validation_t* instantiate_common_response_error_creditcard_validation(int include_optional) {
  common_response_error_creditcard_validation_t* common_response_error_creditcard_validation = NULL;
  if (include_optional) {
    common_response_error_creditcard_validation = common_response_error_creditcard_validation_create(
      "Invalid Signature Headers",
      ezmax_api_definition__full_common_response_error_creditcard_validation__"BADREQUEST",
      list_createList(),
       // false, not to have infinite recursion
      instantiate_custom_creditcardtransactionresponse_response(0)
    );
  } else {
    common_response_error_creditcard_validation = common_response_error_creditcard_validation_create(
      "Invalid Signature Headers",
      ezmax_api_definition__full_common_response_error_creditcard_validation__"BADREQUEST",
      list_createList(),
      NULL
    );
  }

  return common_response_error_creditcard_validation;
}


#ifdef common_response_error_creditcard_validation_MAIN

void test_common_response_error_creditcard_validation(int include_optional) {
    common_response_error_creditcard_validation_t* common_response_error_creditcard_validation_1 = instantiate_common_response_error_creditcard_validation(include_optional);

	cJSON* jsoncommon_response_error_creditcard_validation_1 = common_response_error_creditcard_validation_convertToJSON(common_response_error_creditcard_validation_1);
	printf("common_response_error_creditcard_validation :\n%s\n", cJSON_Print(jsoncommon_response_error_creditcard_validation_1));
	common_response_error_creditcard_validation_t* common_response_error_creditcard_validation_2 = common_response_error_creditcard_validation_parseFromJSON(jsoncommon_response_error_creditcard_validation_1);
	cJSON* jsoncommon_response_error_creditcard_validation_2 = common_response_error_creditcard_validation_convertToJSON(common_response_error_creditcard_validation_2);
	printf("repeating common_response_error_creditcard_validation:\n%s\n", cJSON_Print(jsoncommon_response_error_creditcard_validation_2));
}

int main() {
  test_common_response_error_creditcard_validation(1);
  test_common_response_error_creditcard_validation(0);

  printf("Hello world \n");
  return 0;
}

#endif // common_response_error_creditcard_validation_MAIN
#endif // common_response_error_creditcard_validation_TEST
