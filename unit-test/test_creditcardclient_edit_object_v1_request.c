#ifndef creditcardclient_edit_object_v1_request_TEST
#define creditcardclient_edit_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define creditcardclient_edit_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/creditcardclient_edit_object_v1_request.h"
creditcardclient_edit_object_v1_request_t* instantiate_creditcardclient_edit_object_v1_request(int include_optional);

#include "test_creditcardclient_request_compound.c"


creditcardclient_edit_object_v1_request_t* instantiate_creditcardclient_edit_object_v1_request(int include_optional) {
  creditcardclient_edit_object_v1_request_t* creditcardclient_edit_object_v1_request = NULL;
  if (include_optional) {
    creditcardclient_edit_object_v1_request = creditcardclient_edit_object_v1_request_create(
       // false, not to have infinite recursion
      instantiate_creditcardclient_request_compound(0)
    );
  } else {
    creditcardclient_edit_object_v1_request = creditcardclient_edit_object_v1_request_create(
      NULL
    );
  }

  return creditcardclient_edit_object_v1_request;
}


#ifdef creditcardclient_edit_object_v1_request_MAIN

void test_creditcardclient_edit_object_v1_request(int include_optional) {
    creditcardclient_edit_object_v1_request_t* creditcardclient_edit_object_v1_request_1 = instantiate_creditcardclient_edit_object_v1_request(include_optional);

	cJSON* jsoncreditcardclient_edit_object_v1_request_1 = creditcardclient_edit_object_v1_request_convertToJSON(creditcardclient_edit_object_v1_request_1);
	printf("creditcardclient_edit_object_v1_request :\n%s\n", cJSON_Print(jsoncreditcardclient_edit_object_v1_request_1));
	creditcardclient_edit_object_v1_request_t* creditcardclient_edit_object_v1_request_2 = creditcardclient_edit_object_v1_request_parseFromJSON(jsoncreditcardclient_edit_object_v1_request_1);
	cJSON* jsoncreditcardclient_edit_object_v1_request_2 = creditcardclient_edit_object_v1_request_convertToJSON(creditcardclient_edit_object_v1_request_2);
	printf("repeating creditcardclient_edit_object_v1_request:\n%s\n", cJSON_Print(jsoncreditcardclient_edit_object_v1_request_2));
}

int main() {
  test_creditcardclient_edit_object_v1_request(1);
  test_creditcardclient_edit_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // creditcardclient_edit_object_v1_request_MAIN
#endif // creditcardclient_edit_object_v1_request_TEST
