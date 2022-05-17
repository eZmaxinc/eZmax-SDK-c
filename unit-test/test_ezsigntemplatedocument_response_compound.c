#ifndef ezsigntemplatedocument_response_compound_TEST
#define ezsigntemplatedocument_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatedocument_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatedocument_response_compound.h"
ezsigntemplatedocument_response_compound_t* instantiate_ezsigntemplatedocument_response_compound(int include_optional);



ezsigntemplatedocument_response_compound_t* instantiate_ezsigntemplatedocument_response_compound(int include_optional) {
  ezsigntemplatedocument_response_compound_t* ezsigntemplatedocument_response_compound = NULL;
  if (include_optional) {
    ezsigntemplatedocument_response_compound = ezsigntemplatedocument_response_compound_create(
      133,
      36,
      "Standard Contract",
      5,
      8
    );
  } else {
    ezsigntemplatedocument_response_compound = ezsigntemplatedocument_response_compound_create(
      133,
      36,
      "Standard Contract",
      5,
      8
    );
  }

  return ezsigntemplatedocument_response_compound;
}


#ifdef ezsigntemplatedocument_response_compound_MAIN

void test_ezsigntemplatedocument_response_compound(int include_optional) {
    ezsigntemplatedocument_response_compound_t* ezsigntemplatedocument_response_compound_1 = instantiate_ezsigntemplatedocument_response_compound(include_optional);

	cJSON* jsonezsigntemplatedocument_response_compound_1 = ezsigntemplatedocument_response_compound_convertToJSON(ezsigntemplatedocument_response_compound_1);
	printf("ezsigntemplatedocument_response_compound :\n%s\n", cJSON_Print(jsonezsigntemplatedocument_response_compound_1));
	ezsigntemplatedocument_response_compound_t* ezsigntemplatedocument_response_compound_2 = ezsigntemplatedocument_response_compound_parseFromJSON(jsonezsigntemplatedocument_response_compound_1);
	cJSON* jsonezsigntemplatedocument_response_compound_2 = ezsigntemplatedocument_response_compound_convertToJSON(ezsigntemplatedocument_response_compound_2);
	printf("repeating ezsigntemplatedocument_response_compound:\n%s\n", cJSON_Print(jsonezsigntemplatedocument_response_compound_2));
}

int main() {
  test_ezsigntemplatedocument_response_compound(1);
  test_ezsigntemplatedocument_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatedocument_response_compound_MAIN
#endif // ezsigntemplatedocument_response_compound_TEST
