#ifndef signature_request_TEST
#define signature_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define signature_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/signature_request.h"
signature_request_t* instantiate_signature_request(int include_optional);



signature_request_t* instantiate_signature_request(int include_optional) {
  signature_request_t* signature_request = NULL;
  if (include_optional) {
    signature_request = signature_request_create(
      12,
      1,
      ezmax_api_definition__full_signature_request__"Text",
      "{"$ref":"#/components/examples/Svg/value"}",
      "{"$ref":"#/components/examples/Svg/value"}"
    );
  } else {
    signature_request = signature_request_create(
      12,
      1,
      ezmax_api_definition__full_signature_request__"Text",
      "{"$ref":"#/components/examples/Svg/value"}",
      "{"$ref":"#/components/examples/Svg/value"}"
    );
  }

  return signature_request;
}


#ifdef signature_request_MAIN

void test_signature_request(int include_optional) {
    signature_request_t* signature_request_1 = instantiate_signature_request(include_optional);

	cJSON* jsonsignature_request_1 = signature_request_convertToJSON(signature_request_1);
	printf("signature_request :\n%s\n", cJSON_Print(jsonsignature_request_1));
	signature_request_t* signature_request_2 = signature_request_parseFromJSON(jsonsignature_request_1);
	cJSON* jsonsignature_request_2 = signature_request_convertToJSON(signature_request_2);
	printf("repeating signature_request:\n%s\n", cJSON_Print(jsonsignature_request_2));
}

int main() {
  test_signature_request(1);
  test_signature_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // signature_request_MAIN
#endif // signature_request_TEST
