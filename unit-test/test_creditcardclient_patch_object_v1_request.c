#ifndef creditcardclient_patch_object_v1_request_TEST
#define creditcardclient_patch_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define creditcardclient_patch_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/creditcardclient_patch_object_v1_request.h"
creditcardclient_patch_object_v1_request_t* instantiate_creditcardclient_patch_object_v1_request(int include_optional);

#include "test_creditcardclient_request_patch.c"


creditcardclient_patch_object_v1_request_t* instantiate_creditcardclient_patch_object_v1_request(int include_optional) {
  creditcardclient_patch_object_v1_request_t* creditcardclient_patch_object_v1_request = NULL;
  if (include_optional) {
    creditcardclient_patch_object_v1_request = creditcardclient_patch_object_v1_request_create(
       // false, not to have infinite recursion
      instantiate_creditcardclient_request_patch(0)
    );
  } else {
    creditcardclient_patch_object_v1_request = creditcardclient_patch_object_v1_request_create(
      NULL
    );
  }

  return creditcardclient_patch_object_v1_request;
}


#ifdef creditcardclient_patch_object_v1_request_MAIN

void test_creditcardclient_patch_object_v1_request(int include_optional) {
    creditcardclient_patch_object_v1_request_t* creditcardclient_patch_object_v1_request_1 = instantiate_creditcardclient_patch_object_v1_request(include_optional);

	cJSON* jsoncreditcardclient_patch_object_v1_request_1 = creditcardclient_patch_object_v1_request_convertToJSON(creditcardclient_patch_object_v1_request_1);
	printf("creditcardclient_patch_object_v1_request :\n%s\n", cJSON_Print(jsoncreditcardclient_patch_object_v1_request_1));
	creditcardclient_patch_object_v1_request_t* creditcardclient_patch_object_v1_request_2 = creditcardclient_patch_object_v1_request_parseFromJSON(jsoncreditcardclient_patch_object_v1_request_1);
	cJSON* jsoncreditcardclient_patch_object_v1_request_2 = creditcardclient_patch_object_v1_request_convertToJSON(creditcardclient_patch_object_v1_request_2);
	printf("repeating creditcardclient_patch_object_v1_request:\n%s\n", cJSON_Print(jsoncreditcardclient_patch_object_v1_request_2));
}

int main() {
  test_creditcardclient_patch_object_v1_request(1);
  test_creditcardclient_patch_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // creditcardclient_patch_object_v1_request_MAIN
#endif // creditcardclient_patch_object_v1_request_TEST
