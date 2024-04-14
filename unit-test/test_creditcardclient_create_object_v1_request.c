#ifndef creditcardclient_create_object_v1_request_TEST
#define creditcardclient_create_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define creditcardclient_create_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/creditcardclient_create_object_v1_request.h"
creditcardclient_create_object_v1_request_t* instantiate_creditcardclient_create_object_v1_request(int include_optional);



creditcardclient_create_object_v1_request_t* instantiate_creditcardclient_create_object_v1_request(int include_optional) {
  creditcardclient_create_object_v1_request_t* creditcardclient_create_object_v1_request = NULL;
  if (include_optional) {
    creditcardclient_create_object_v1_request = creditcardclient_create_object_v1_request_create(
      list_createList()
    );
  } else {
    creditcardclient_create_object_v1_request = creditcardclient_create_object_v1_request_create(
      list_createList()
    );
  }

  return creditcardclient_create_object_v1_request;
}


#ifdef creditcardclient_create_object_v1_request_MAIN

void test_creditcardclient_create_object_v1_request(int include_optional) {
    creditcardclient_create_object_v1_request_t* creditcardclient_create_object_v1_request_1 = instantiate_creditcardclient_create_object_v1_request(include_optional);

	cJSON* jsoncreditcardclient_create_object_v1_request_1 = creditcardclient_create_object_v1_request_convertToJSON(creditcardclient_create_object_v1_request_1);
	printf("creditcardclient_create_object_v1_request :\n%s\n", cJSON_Print(jsoncreditcardclient_create_object_v1_request_1));
	creditcardclient_create_object_v1_request_t* creditcardclient_create_object_v1_request_2 = creditcardclient_create_object_v1_request_parseFromJSON(jsoncreditcardclient_create_object_v1_request_1);
	cJSON* jsoncreditcardclient_create_object_v1_request_2 = creditcardclient_create_object_v1_request_convertToJSON(creditcardclient_create_object_v1_request_2);
	printf("repeating creditcardclient_create_object_v1_request:\n%s\n", cJSON_Print(jsoncreditcardclient_create_object_v1_request_2));
}

int main() {
  test_creditcardclient_create_object_v1_request(1);
  test_creditcardclient_create_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // creditcardclient_create_object_v1_request_MAIN
#endif // creditcardclient_create_object_v1_request_TEST
