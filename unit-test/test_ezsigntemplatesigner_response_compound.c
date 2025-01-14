#ifndef ezsigntemplatesigner_response_compound_TEST
#define ezsigntemplatesigner_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatesigner_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatesigner_response_compound.h"
ezsigntemplatesigner_response_compound_t* instantiate_ezsigntemplatesigner_response_compound(int include_optional);



ezsigntemplatesigner_response_compound_t* instantiate_ezsigntemplatesigner_response_compound(int include_optional) {
  ezsigntemplatesigner_response_compound_t* ezsigntemplatesigner_response_compound = NULL;
  if (include_optional) {
    ezsigntemplatesigner_response_compound = ezsigntemplatesigner_response_compound_create(
      9,
      36,
      70,
      2,
      95,
      1,
      ezmax_api_definition__full_ezsigntemplatesigner_response_compound__"Manual",
      "Customer",
      "Default",
      "Administration"
    );
  } else {
    ezsigntemplatesigner_response_compound = ezsigntemplatesigner_response_compound_create(
      9,
      36,
      70,
      2,
      95,
      1,
      ezmax_api_definition__full_ezsigntemplatesigner_response_compound__"Manual",
      "Customer",
      "Default",
      "Administration"
    );
  }

  return ezsigntemplatesigner_response_compound;
}


#ifdef ezsigntemplatesigner_response_compound_MAIN

void test_ezsigntemplatesigner_response_compound(int include_optional) {
    ezsigntemplatesigner_response_compound_t* ezsigntemplatesigner_response_compound_1 = instantiate_ezsigntemplatesigner_response_compound(include_optional);

	cJSON* jsonezsigntemplatesigner_response_compound_1 = ezsigntemplatesigner_response_compound_convertToJSON(ezsigntemplatesigner_response_compound_1);
	printf("ezsigntemplatesigner_response_compound :\n%s\n", cJSON_Print(jsonezsigntemplatesigner_response_compound_1));
	ezsigntemplatesigner_response_compound_t* ezsigntemplatesigner_response_compound_2 = ezsigntemplatesigner_response_compound_parseFromJSON(jsonezsigntemplatesigner_response_compound_1);
	cJSON* jsonezsigntemplatesigner_response_compound_2 = ezsigntemplatesigner_response_compound_convertToJSON(ezsigntemplatesigner_response_compound_2);
	printf("repeating ezsigntemplatesigner_response_compound:\n%s\n", cJSON_Print(jsonezsigntemplatesigner_response_compound_2));
}

int main() {
  test_ezsigntemplatesigner_response_compound(1);
  test_ezsigntemplatesigner_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatesigner_response_compound_MAIN
#endif // ezsigntemplatesigner_response_compound_TEST
