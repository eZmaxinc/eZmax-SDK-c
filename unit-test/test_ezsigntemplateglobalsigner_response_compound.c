#ifndef ezsigntemplateglobalsigner_response_compound_TEST
#define ezsigntemplateglobalsigner_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplateglobalsigner_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplateglobalsigner_response_compound.h"
ezsigntemplateglobalsigner_response_compound_t* instantiate_ezsigntemplateglobalsigner_response_compound(int include_optional);



ezsigntemplateglobalsigner_response_compound_t* instantiate_ezsigntemplateglobalsigner_response_compound(int include_optional) {
  ezsigntemplateglobalsigner_response_compound_t* ezsigntemplateglobalsigner_response_compound = NULL;
  if (include_optional) {
    ezsigntemplateglobalsigner_response_compound = ezsigntemplateglobalsigner_response_compound_create(
      9,
      36,
      "Customer"
    );
  } else {
    ezsigntemplateglobalsigner_response_compound = ezsigntemplateglobalsigner_response_compound_create(
      9,
      36,
      "Customer"
    );
  }

  return ezsigntemplateglobalsigner_response_compound;
}


#ifdef ezsigntemplateglobalsigner_response_compound_MAIN

void test_ezsigntemplateglobalsigner_response_compound(int include_optional) {
    ezsigntemplateglobalsigner_response_compound_t* ezsigntemplateglobalsigner_response_compound_1 = instantiate_ezsigntemplateglobalsigner_response_compound(include_optional);

	cJSON* jsonezsigntemplateglobalsigner_response_compound_1 = ezsigntemplateglobalsigner_response_compound_convertToJSON(ezsigntemplateglobalsigner_response_compound_1);
	printf("ezsigntemplateglobalsigner_response_compound :\n%s\n", cJSON_Print(jsonezsigntemplateglobalsigner_response_compound_1));
	ezsigntemplateglobalsigner_response_compound_t* ezsigntemplateglobalsigner_response_compound_2 = ezsigntemplateglobalsigner_response_compound_parseFromJSON(jsonezsigntemplateglobalsigner_response_compound_1);
	cJSON* jsonezsigntemplateglobalsigner_response_compound_2 = ezsigntemplateglobalsigner_response_compound_convertToJSON(ezsigntemplateglobalsigner_response_compound_2);
	printf("repeating ezsigntemplateglobalsigner_response_compound:\n%s\n", cJSON_Print(jsonezsigntemplateglobalsigner_response_compound_2));
}

int main() {
  test_ezsigntemplateglobalsigner_response_compound(1);
  test_ezsigntemplateglobalsigner_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplateglobalsigner_response_compound_MAIN
#endif // ezsigntemplateglobalsigner_response_compound_TEST
