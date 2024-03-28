#ifndef webhookheader_response_compound_TEST
#define webhookheader_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhookheader_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhookheader_response_compound.h"
webhookheader_response_compound_t* instantiate_webhookheader_response_compound(int include_optional);



webhookheader_response_compound_t* instantiate_webhookheader_response_compound(int include_optional) {
  webhookheader_response_compound_t* webhookheader_response_compound = NULL;
  if (include_optional) {
    webhookheader_response_compound = webhookheader_response_compound_create(
      77,
      77,
      "Authorization",
      "d75fca0e12b6c671e7f6d4df0cf59e4e"
    );
  } else {
    webhookheader_response_compound = webhookheader_response_compound_create(
      77,
      77,
      "Authorization",
      "d75fca0e12b6c671e7f6d4df0cf59e4e"
    );
  }

  return webhookheader_response_compound;
}


#ifdef webhookheader_response_compound_MAIN

void test_webhookheader_response_compound(int include_optional) {
    webhookheader_response_compound_t* webhookheader_response_compound_1 = instantiate_webhookheader_response_compound(include_optional);

	cJSON* jsonwebhookheader_response_compound_1 = webhookheader_response_compound_convertToJSON(webhookheader_response_compound_1);
	printf("webhookheader_response_compound :\n%s\n", cJSON_Print(jsonwebhookheader_response_compound_1));
	webhookheader_response_compound_t* webhookheader_response_compound_2 = webhookheader_response_compound_parseFromJSON(jsonwebhookheader_response_compound_1);
	cJSON* jsonwebhookheader_response_compound_2 = webhookheader_response_compound_convertToJSON(webhookheader_response_compound_2);
	printf("repeating webhookheader_response_compound:\n%s\n", cJSON_Print(jsonwebhookheader_response_compound_2));
}

int main() {
  test_webhookheader_response_compound(1);
  test_webhookheader_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhookheader_response_compound_MAIN
#endif // webhookheader_response_compound_TEST
