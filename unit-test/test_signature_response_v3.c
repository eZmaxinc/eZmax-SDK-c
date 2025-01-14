#ifndef signature_response_v3_TEST
#define signature_response_v3_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define signature_response_v3_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/signature_response_v3.h"
signature_response_v3_t* instantiate_signature_response_v3(int include_optional);



signature_response_v3_t* instantiate_signature_response_v3(int include_optional) {
  signature_response_v3_t* signature_response_v3 = NULL;
  if (include_optional) {
    signature_response_v3 = signature_response_v3_create(
      12,
      1,
      ezmax_api_definition__full_signature_response_v3__"Text",
      false,
      false
    );
  } else {
    signature_response_v3 = signature_response_v3_create(
      12,
      1,
      ezmax_api_definition__full_signature_response_v3__"Text",
      false,
      false
    );
  }

  return signature_response_v3;
}


#ifdef signature_response_v3_MAIN

void test_signature_response_v3(int include_optional) {
    signature_response_v3_t* signature_response_v3_1 = instantiate_signature_response_v3(include_optional);

	cJSON* jsonsignature_response_v3_1 = signature_response_v3_convertToJSON(signature_response_v3_1);
	printf("signature_response_v3 :\n%s\n", cJSON_Print(jsonsignature_response_v3_1));
	signature_response_v3_t* signature_response_v3_2 = signature_response_v3_parseFromJSON(jsonsignature_response_v3_1);
	cJSON* jsonsignature_response_v3_2 = signature_response_v3_convertToJSON(signature_response_v3_2);
	printf("repeating signature_response_v3:\n%s\n", cJSON_Print(jsonsignature_response_v3_2));
}

int main() {
  test_signature_response_v3(1);
  test_signature_response_v3(0);

  printf("Hello world \n");
  return 0;
}

#endif // signature_response_v3_MAIN
#endif // signature_response_v3_TEST
