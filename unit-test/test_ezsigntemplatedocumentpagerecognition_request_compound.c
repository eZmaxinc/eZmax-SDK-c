#ifndef ezsigntemplatedocumentpagerecognition_request_compound_TEST
#define ezsigntemplatedocumentpagerecognition_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatedocumentpagerecognition_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatedocumentpagerecognition_request_compound.h"
ezsigntemplatedocumentpagerecognition_request_compound_t* instantiate_ezsigntemplatedocumentpagerecognition_request_compound(int include_optional);



ezsigntemplatedocumentpagerecognition_request_compound_t* instantiate_ezsigntemplatedocumentpagerecognition_request_compound(int include_optional) {
  ezsigntemplatedocumentpagerecognition_request_compound_t* ezsigntemplatedocumentpagerecognition_request_compound = NULL;
  if (include_optional) {
    ezsigntemplatedocumentpagerecognition_request_compound = ezsigntemplatedocumentpagerecognition_request_compound_create(
      126,
      85,
      ezmax_api_definition__full_ezsigntemplatedocumentpagerecognition_request_compound__"eq",
      ezmax_api_definition__full_ezsigntemplatedocumentpagerecognition_request_compound__"FirstLine",
      50,
      36325,
      407,
      29232,
      42651,
      "Contract"
    );
  } else {
    ezsigntemplatedocumentpagerecognition_request_compound = ezsigntemplatedocumentpagerecognition_request_compound_create(
      126,
      85,
      ezmax_api_definition__full_ezsigntemplatedocumentpagerecognition_request_compound__"eq",
      ezmax_api_definition__full_ezsigntemplatedocumentpagerecognition_request_compound__"FirstLine",
      50,
      36325,
      407,
      29232,
      42651,
      "Contract"
    );
  }

  return ezsigntemplatedocumentpagerecognition_request_compound;
}


#ifdef ezsigntemplatedocumentpagerecognition_request_compound_MAIN

void test_ezsigntemplatedocumentpagerecognition_request_compound(int include_optional) {
    ezsigntemplatedocumentpagerecognition_request_compound_t* ezsigntemplatedocumentpagerecognition_request_compound_1 = instantiate_ezsigntemplatedocumentpagerecognition_request_compound(include_optional);

	cJSON* jsonezsigntemplatedocumentpagerecognition_request_compound_1 = ezsigntemplatedocumentpagerecognition_request_compound_convertToJSON(ezsigntemplatedocumentpagerecognition_request_compound_1);
	printf("ezsigntemplatedocumentpagerecognition_request_compound :\n%s\n", cJSON_Print(jsonezsigntemplatedocumentpagerecognition_request_compound_1));
	ezsigntemplatedocumentpagerecognition_request_compound_t* ezsigntemplatedocumentpagerecognition_request_compound_2 = ezsigntemplatedocumentpagerecognition_request_compound_parseFromJSON(jsonezsigntemplatedocumentpagerecognition_request_compound_1);
	cJSON* jsonezsigntemplatedocumentpagerecognition_request_compound_2 = ezsigntemplatedocumentpagerecognition_request_compound_convertToJSON(ezsigntemplatedocumentpagerecognition_request_compound_2);
	printf("repeating ezsigntemplatedocumentpagerecognition_request_compound:\n%s\n", cJSON_Print(jsonezsigntemplatedocumentpagerecognition_request_compound_2));
}

int main() {
  test_ezsigntemplatedocumentpagerecognition_request_compound(1);
  test_ezsigntemplatedocumentpagerecognition_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatedocumentpagerecognition_request_compound_MAIN
#endif // ezsigntemplatedocumentpagerecognition_request_compound_TEST
