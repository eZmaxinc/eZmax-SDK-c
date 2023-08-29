#ifndef ezsigntemplatedocument_request_compound_TEST
#define ezsigntemplatedocument_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatedocument_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatedocument_request_compound.h"
ezsigntemplatedocument_request_compound_t* instantiate_ezsigntemplatedocument_request_compound(int include_optional);



ezsigntemplatedocument_request_compound_t* instantiate_ezsigntemplatedocument_request_compound(int include_optional) {
  ezsigntemplatedocument_request_compound_t* ezsigntemplatedocument_request_compound = NULL;
  if (include_optional) {
    ezsigntemplatedocument_request_compound = ezsigntemplatedocument_request_compound_create(
      133,
      36,
      97,
      9,
      "Standard Contract",
      ezmax_api_definition__full_ezsigntemplatedocument_request_compound_EEZSIGNTEMPLATEDOCUMENTSOURCE_Base64,
      ezmax_api_definition__full_ezsigntemplatedocument_request_compound_EEZSIGNTEMPLATEDOCUMENTFORMAT_Pdf,
      "[B@40f70521",
      "http://www.example.com/template.pdf",
      1,
      ezmax_api_definition__full_ezsigntemplatedocument_request_compound_EEZSIGNTEMPLATEDOCUMENTFORM_Keep,
      "0"
    );
  } else {
    ezsigntemplatedocument_request_compound = ezsigntemplatedocument_request_compound_create(
      133,
      36,
      97,
      9,
      "Standard Contract",
      ezmax_api_definition__full_ezsigntemplatedocument_request_compound_EEZSIGNTEMPLATEDOCUMENTSOURCE_Base64,
      ezmax_api_definition__full_ezsigntemplatedocument_request_compound_EEZSIGNTEMPLATEDOCUMENTFORMAT_Pdf,
      "[B@40f70521",
      "http://www.example.com/template.pdf",
      1,
      ezmax_api_definition__full_ezsigntemplatedocument_request_compound_EEZSIGNTEMPLATEDOCUMENTFORM_Keep,
      "0"
    );
  }

  return ezsigntemplatedocument_request_compound;
}


#ifdef ezsigntemplatedocument_request_compound_MAIN

void test_ezsigntemplatedocument_request_compound(int include_optional) {
    ezsigntemplatedocument_request_compound_t* ezsigntemplatedocument_request_compound_1 = instantiate_ezsigntemplatedocument_request_compound(include_optional);

	cJSON* jsonezsigntemplatedocument_request_compound_1 = ezsigntemplatedocument_request_compound_convertToJSON(ezsigntemplatedocument_request_compound_1);
	printf("ezsigntemplatedocument_request_compound :\n%s\n", cJSON_Print(jsonezsigntemplatedocument_request_compound_1));
	ezsigntemplatedocument_request_compound_t* ezsigntemplatedocument_request_compound_2 = ezsigntemplatedocument_request_compound_parseFromJSON(jsonezsigntemplatedocument_request_compound_1);
	cJSON* jsonezsigntemplatedocument_request_compound_2 = ezsigntemplatedocument_request_compound_convertToJSON(ezsigntemplatedocument_request_compound_2);
	printf("repeating ezsigntemplatedocument_request_compound:\n%s\n", cJSON_Print(jsonezsigntemplatedocument_request_compound_2));
}

int main() {
  test_ezsigntemplatedocument_request_compound(1);
  test_ezsigntemplatedocument_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatedocument_request_compound_MAIN
#endif // ezsigntemplatedocument_request_compound_TEST
