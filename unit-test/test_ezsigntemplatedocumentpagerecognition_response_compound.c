#ifndef ezsigntemplatedocumentpagerecognition_response_compound_TEST
#define ezsigntemplatedocumentpagerecognition_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatedocumentpagerecognition_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatedocumentpagerecognition_response_compound.h"
ezsigntemplatedocumentpagerecognition_response_compound_t* instantiate_ezsigntemplatedocumentpagerecognition_response_compound(int include_optional);



ezsigntemplatedocumentpagerecognition_response_compound_t* instantiate_ezsigntemplatedocumentpagerecognition_response_compound(int include_optional) {
  ezsigntemplatedocumentpagerecognition_response_compound_t* ezsigntemplatedocumentpagerecognition_response_compound = NULL;
  if (include_optional) {
    ezsigntemplatedocumentpagerecognition_response_compound = ezsigntemplatedocumentpagerecognition_response_compound_create(
      126,
      85,
      ezmax_api_definition__full_ezsigntemplatedocumentpagerecognition_response_compound__"eq",
      ezmax_api_definition__full_ezsigntemplatedocumentpagerecognition_response_compound__"FirstLine",
      75,
      36325,
      407,
      29232,
      42651,
      "Contract"
    );
  } else {
    ezsigntemplatedocumentpagerecognition_response_compound = ezsigntemplatedocumentpagerecognition_response_compound_create(
      126,
      85,
      ezmax_api_definition__full_ezsigntemplatedocumentpagerecognition_response_compound__"eq",
      ezmax_api_definition__full_ezsigntemplatedocumentpagerecognition_response_compound__"FirstLine",
      75,
      36325,
      407,
      29232,
      42651,
      "Contract"
    );
  }

  return ezsigntemplatedocumentpagerecognition_response_compound;
}


#ifdef ezsigntemplatedocumentpagerecognition_response_compound_MAIN

void test_ezsigntemplatedocumentpagerecognition_response_compound(int include_optional) {
    ezsigntemplatedocumentpagerecognition_response_compound_t* ezsigntemplatedocumentpagerecognition_response_compound_1 = instantiate_ezsigntemplatedocumentpagerecognition_response_compound(include_optional);

	cJSON* jsonezsigntemplatedocumentpagerecognition_response_compound_1 = ezsigntemplatedocumentpagerecognition_response_compound_convertToJSON(ezsigntemplatedocumentpagerecognition_response_compound_1);
	printf("ezsigntemplatedocumentpagerecognition_response_compound :\n%s\n", cJSON_Print(jsonezsigntemplatedocumentpagerecognition_response_compound_1));
	ezsigntemplatedocumentpagerecognition_response_compound_t* ezsigntemplatedocumentpagerecognition_response_compound_2 = ezsigntemplatedocumentpagerecognition_response_compound_parseFromJSON(jsonezsigntemplatedocumentpagerecognition_response_compound_1);
	cJSON* jsonezsigntemplatedocumentpagerecognition_response_compound_2 = ezsigntemplatedocumentpagerecognition_response_compound_convertToJSON(ezsigntemplatedocumentpagerecognition_response_compound_2);
	printf("repeating ezsigntemplatedocumentpagerecognition_response_compound:\n%s\n", cJSON_Print(jsonezsigntemplatedocumentpagerecognition_response_compound_2));
}

int main() {
  test_ezsigntemplatedocumentpagerecognition_response_compound(1);
  test_ezsigntemplatedocumentpagerecognition_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatedocumentpagerecognition_response_compound_MAIN
#endif // ezsigntemplatedocumentpagerecognition_response_compound_TEST
