#ifndef signature_request_compound_TEST
#define signature_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define signature_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/signature_request_compound.h"
signature_request_compound_t* instantiate_signature_request_compound(int include_optional);



signature_request_compound_t* instantiate_signature_request_compound(int include_optional) {
  signature_request_compound_t* signature_request_compound = NULL;
  if (include_optional) {
    signature_request_compound = signature_request_compound_create(
      12,
      "{"$ref":"#/components/examples/Svg/value"}"
    );
  } else {
    signature_request_compound = signature_request_compound_create(
      12,
      "{"$ref":"#/components/examples/Svg/value"}"
    );
  }

  return signature_request_compound;
}


#ifdef signature_request_compound_MAIN

void test_signature_request_compound(int include_optional) {
    signature_request_compound_t* signature_request_compound_1 = instantiate_signature_request_compound(include_optional);

	cJSON* jsonsignature_request_compound_1 = signature_request_compound_convertToJSON(signature_request_compound_1);
	printf("signature_request_compound :\n%s\n", cJSON_Print(jsonsignature_request_compound_1));
	signature_request_compound_t* signature_request_compound_2 = signature_request_compound_parseFromJSON(jsonsignature_request_compound_1);
	cJSON* jsonsignature_request_compound_2 = signature_request_compound_convertToJSON(signature_request_compound_2);
	printf("repeating signature_request_compound:\n%s\n", cJSON_Print(jsonsignature_request_compound_2));
}

int main() {
  test_signature_request_compound(1);
  test_signature_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // signature_request_compound_MAIN
#endif // signature_request_compound_TEST
