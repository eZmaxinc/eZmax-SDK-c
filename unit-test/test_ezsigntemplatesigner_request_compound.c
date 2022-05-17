#ifndef ezsigntemplatesigner_request_compound_TEST
#define ezsigntemplatesigner_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatesigner_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatesigner_request_compound.h"
ezsigntemplatesigner_request_compound_t* instantiate_ezsigntemplatesigner_request_compound(int include_optional);



ezsigntemplatesigner_request_compound_t* instantiate_ezsigntemplatesigner_request_compound(int include_optional) {
  ezsigntemplatesigner_request_compound_t* ezsigntemplatesigner_request_compound = NULL;
  if (include_optional) {
    ezsigntemplatesigner_request_compound = ezsigntemplatesigner_request_compound_create(
      9,
      36,
      "Customer"
    );
  } else {
    ezsigntemplatesigner_request_compound = ezsigntemplatesigner_request_compound_create(
      9,
      36,
      "Customer"
    );
  }

  return ezsigntemplatesigner_request_compound;
}


#ifdef ezsigntemplatesigner_request_compound_MAIN

void test_ezsigntemplatesigner_request_compound(int include_optional) {
    ezsigntemplatesigner_request_compound_t* ezsigntemplatesigner_request_compound_1 = instantiate_ezsigntemplatesigner_request_compound(include_optional);

	cJSON* jsonezsigntemplatesigner_request_compound_1 = ezsigntemplatesigner_request_compound_convertToJSON(ezsigntemplatesigner_request_compound_1);
	printf("ezsigntemplatesigner_request_compound :\n%s\n", cJSON_Print(jsonezsigntemplatesigner_request_compound_1));
	ezsigntemplatesigner_request_compound_t* ezsigntemplatesigner_request_compound_2 = ezsigntemplatesigner_request_compound_parseFromJSON(jsonezsigntemplatesigner_request_compound_1);
	cJSON* jsonezsigntemplatesigner_request_compound_2 = ezsigntemplatesigner_request_compound_convertToJSON(ezsigntemplatesigner_request_compound_2);
	printf("repeating ezsigntemplatesigner_request_compound:\n%s\n", cJSON_Print(jsonezsigntemplatesigner_request_compound_2));
}

int main() {
  test_ezsigntemplatesigner_request_compound(1);
  test_ezsigntemplatesigner_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatesigner_request_compound_MAIN
#endif // ezsigntemplatesigner_request_compound_TEST
