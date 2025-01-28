#ifndef creditcardmerchant_create_object_v1_request_TEST
#define creditcardmerchant_create_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define creditcardmerchant_create_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/creditcardmerchant_create_object_v1_request.h"
creditcardmerchant_create_object_v1_request_t* instantiate_creditcardmerchant_create_object_v1_request(int include_optional);



creditcardmerchant_create_object_v1_request_t* instantiate_creditcardmerchant_create_object_v1_request(int include_optional) {
  creditcardmerchant_create_object_v1_request_t* creditcardmerchant_create_object_v1_request = NULL;
  if (include_optional) {
    creditcardmerchant_create_object_v1_request = creditcardmerchant_create_object_v1_request_create(
      list_createList()
    );
  } else {
    creditcardmerchant_create_object_v1_request = creditcardmerchant_create_object_v1_request_create(
      list_createList()
    );
  }

  return creditcardmerchant_create_object_v1_request;
}


#ifdef creditcardmerchant_create_object_v1_request_MAIN

void test_creditcardmerchant_create_object_v1_request(int include_optional) {
    creditcardmerchant_create_object_v1_request_t* creditcardmerchant_create_object_v1_request_1 = instantiate_creditcardmerchant_create_object_v1_request(include_optional);

	cJSON* jsoncreditcardmerchant_create_object_v1_request_1 = creditcardmerchant_create_object_v1_request_convertToJSON(creditcardmerchant_create_object_v1_request_1);
	printf("creditcardmerchant_create_object_v1_request :\n%s\n", cJSON_Print(jsoncreditcardmerchant_create_object_v1_request_1));
	creditcardmerchant_create_object_v1_request_t* creditcardmerchant_create_object_v1_request_2 = creditcardmerchant_create_object_v1_request_parseFromJSON(jsoncreditcardmerchant_create_object_v1_request_1);
	cJSON* jsoncreditcardmerchant_create_object_v1_request_2 = creditcardmerchant_create_object_v1_request_convertToJSON(creditcardmerchant_create_object_v1_request_2);
	printf("repeating creditcardmerchant_create_object_v1_request:\n%s\n", cJSON_Print(jsoncreditcardmerchant_create_object_v1_request_2));
}

int main() {
  test_creditcardmerchant_create_object_v1_request(1);
  test_creditcardmerchant_create_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // creditcardmerchant_create_object_v1_request_MAIN
#endif // creditcardmerchant_create_object_v1_request_TEST
