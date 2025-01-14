#ifndef creditcardclient_request_patch_TEST
#define creditcardclient_request_patch_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define creditcardclient_request_patch_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/creditcardclient_request_patch.h"
creditcardclient_request_patch_t* instantiate_creditcardclient_request_patch(int include_optional);



creditcardclient_request_patch_t* instantiate_creditcardclient_request_patch(int include_optional) {
  creditcardclient_request_patch_t* creditcardclient_request_patch = NULL;
  if (include_optional) {
    creditcardclient_request_patch = creditcardclient_request_patch_create(
      true
    );
  } else {
    creditcardclient_request_patch = creditcardclient_request_patch_create(
      true
    );
  }

  return creditcardclient_request_patch;
}


#ifdef creditcardclient_request_patch_MAIN

void test_creditcardclient_request_patch(int include_optional) {
    creditcardclient_request_patch_t* creditcardclient_request_patch_1 = instantiate_creditcardclient_request_patch(include_optional);

	cJSON* jsoncreditcardclient_request_patch_1 = creditcardclient_request_patch_convertToJSON(creditcardclient_request_patch_1);
	printf("creditcardclient_request_patch :\n%s\n", cJSON_Print(jsoncreditcardclient_request_patch_1));
	creditcardclient_request_patch_t* creditcardclient_request_patch_2 = creditcardclient_request_patch_parseFromJSON(jsoncreditcardclient_request_patch_1);
	cJSON* jsoncreditcardclient_request_patch_2 = creditcardclient_request_patch_convertToJSON(creditcardclient_request_patch_2);
	printf("repeating creditcardclient_request_patch:\n%s\n", cJSON_Print(jsoncreditcardclient_request_patch_2));
}

int main() {
  test_creditcardclient_request_patch(1);
  test_creditcardclient_request_patch(0);

  printf("Hello world \n");
  return 0;
}

#endif // creditcardclient_request_patch_MAIN
#endif // creditcardclient_request_patch_TEST
