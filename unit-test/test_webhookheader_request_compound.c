#ifndef webhookheader_request_compound_TEST
#define webhookheader_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhookheader_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhookheader_request_compound.h"
webhookheader_request_compound_t* instantiate_webhookheader_request_compound(int include_optional);



webhookheader_request_compound_t* instantiate_webhookheader_request_compound(int include_optional) {
  webhookheader_request_compound_t* webhookheader_request_compound = NULL;
  if (include_optional) {
    webhookheader_request_compound = webhookheader_request_compound_create(
      77,
      "Authorization",
      "d75fca0e12b6c671e7f6d4df0cf59e4e"
    );
  } else {
    webhookheader_request_compound = webhookheader_request_compound_create(
      77,
      "Authorization",
      "d75fca0e12b6c671e7f6d4df0cf59e4e"
    );
  }

  return webhookheader_request_compound;
}


#ifdef webhookheader_request_compound_MAIN

void test_webhookheader_request_compound(int include_optional) {
    webhookheader_request_compound_t* webhookheader_request_compound_1 = instantiate_webhookheader_request_compound(include_optional);

	cJSON* jsonwebhookheader_request_compound_1 = webhookheader_request_compound_convertToJSON(webhookheader_request_compound_1);
	printf("webhookheader_request_compound :\n%s\n", cJSON_Print(jsonwebhookheader_request_compound_1));
	webhookheader_request_compound_t* webhookheader_request_compound_2 = webhookheader_request_compound_parseFromJSON(jsonwebhookheader_request_compound_1);
	cJSON* jsonwebhookheader_request_compound_2 = webhookheader_request_compound_convertToJSON(webhookheader_request_compound_2);
	printf("repeating webhookheader_request_compound:\n%s\n", cJSON_Print(jsonwebhookheader_request_compound_2));
}

int main() {
  test_webhookheader_request_compound(1);
  test_webhookheader_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhookheader_request_compound_MAIN
#endif // webhookheader_request_compound_TEST
