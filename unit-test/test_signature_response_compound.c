#ifndef signature_response_compound_TEST
#define signature_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define signature_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/signature_response_compound.h"
signature_response_compound_t* instantiate_signature_response_compound(int include_optional);



signature_response_compound_t* instantiate_signature_response_compound(int include_optional) {
  signature_response_compound_t* signature_response_compound = NULL;
  if (include_optional) {
    signature_response_compound = signature_response_compound_create(
      12,
      1,
      "https://www.example.com/signature.svg",
      "https://www.example.com/signature.svg"
    );
  } else {
    signature_response_compound = signature_response_compound_create(
      12,
      1,
      "https://www.example.com/signature.svg",
      "https://www.example.com/signature.svg"
    );
  }

  return signature_response_compound;
}


#ifdef signature_response_compound_MAIN

void test_signature_response_compound(int include_optional) {
    signature_response_compound_t* signature_response_compound_1 = instantiate_signature_response_compound(include_optional);

	cJSON* jsonsignature_response_compound_1 = signature_response_compound_convertToJSON(signature_response_compound_1);
	printf("signature_response_compound :\n%s\n", cJSON_Print(jsonsignature_response_compound_1));
	signature_response_compound_t* signature_response_compound_2 = signature_response_compound_parseFromJSON(jsonsignature_response_compound_1);
	cJSON* jsonsignature_response_compound_2 = signature_response_compound_convertToJSON(signature_response_compound_2);
	printf("repeating signature_response_compound:\n%s\n", cJSON_Print(jsonsignature_response_compound_2));
}

int main() {
  test_signature_response_compound(1);
  test_signature_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // signature_response_compound_MAIN
#endif // signature_response_compound_TEST
