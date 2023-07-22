#ifndef signature_response_TEST
#define signature_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define signature_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/signature_response.h"
signature_response_t* instantiate_signature_response(int include_optional);



signature_response_t* instantiate_signature_response(int include_optional) {
  signature_response_t* signature_response = NULL;
  if (include_optional) {
    signature_response = signature_response_create(
      12,
      "https://www.example.com/signature.svg"
    );
  } else {
    signature_response = signature_response_create(
      12,
      "https://www.example.com/signature.svg"
    );
  }

  return signature_response;
}


#ifdef signature_response_MAIN

void test_signature_response(int include_optional) {
    signature_response_t* signature_response_1 = instantiate_signature_response(include_optional);

	cJSON* jsonsignature_response_1 = signature_response_convertToJSON(signature_response_1);
	printf("signature_response :\n%s\n", cJSON_Print(jsonsignature_response_1));
	signature_response_t* signature_response_2 = signature_response_parseFromJSON(jsonsignature_response_1);
	cJSON* jsonsignature_response_2 = signature_response_convertToJSON(signature_response_2);
	printf("repeating signature_response:\n%s\n", cJSON_Print(jsonsignature_response_2));
}

int main() {
  test_signature_response(1);
  test_signature_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // signature_response_MAIN
#endif // signature_response_TEST
