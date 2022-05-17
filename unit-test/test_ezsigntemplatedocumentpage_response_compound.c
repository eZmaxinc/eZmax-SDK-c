#ifndef ezsigntemplatedocumentpage_response_compound_TEST
#define ezsigntemplatedocumentpage_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatedocumentpage_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatedocumentpage_response_compound.h"
ezsigntemplatedocumentpage_response_compound_t* instantiate_ezsigntemplatedocumentpage_response_compound(int include_optional);



ezsigntemplatedocumentpage_response_compound_t* instantiate_ezsigntemplatedocumentpage_response_compound(int include_optional) {
  ezsigntemplatedocumentpage_response_compound_t* ezsigntemplatedocumentpage_response_compound = NULL;
  if (include_optional) {
    ezsigntemplatedocumentpage_response_compound = ezsigntemplatedocumentpage_response_compound_create(
      85,
      850,
      1100,
      612,
      792,
      1,
      "0"
    );
  } else {
    ezsigntemplatedocumentpage_response_compound = ezsigntemplatedocumentpage_response_compound_create(
      85,
      850,
      1100,
      612,
      792,
      1,
      "0"
    );
  }

  return ezsigntemplatedocumentpage_response_compound;
}


#ifdef ezsigntemplatedocumentpage_response_compound_MAIN

void test_ezsigntemplatedocumentpage_response_compound(int include_optional) {
    ezsigntemplatedocumentpage_response_compound_t* ezsigntemplatedocumentpage_response_compound_1 = instantiate_ezsigntemplatedocumentpage_response_compound(include_optional);

	cJSON* jsonezsigntemplatedocumentpage_response_compound_1 = ezsigntemplatedocumentpage_response_compound_convertToJSON(ezsigntemplatedocumentpage_response_compound_1);
	printf("ezsigntemplatedocumentpage_response_compound :\n%s\n", cJSON_Print(jsonezsigntemplatedocumentpage_response_compound_1));
	ezsigntemplatedocumentpage_response_compound_t* ezsigntemplatedocumentpage_response_compound_2 = ezsigntemplatedocumentpage_response_compound_parseFromJSON(jsonezsigntemplatedocumentpage_response_compound_1);
	cJSON* jsonezsigntemplatedocumentpage_response_compound_2 = ezsigntemplatedocumentpage_response_compound_convertToJSON(ezsigntemplatedocumentpage_response_compound_2);
	printf("repeating ezsigntemplatedocumentpage_response_compound:\n%s\n", cJSON_Print(jsonezsigntemplatedocumentpage_response_compound_2));
}

int main() {
  test_ezsigntemplatedocumentpage_response_compound(1);
  test_ezsigntemplatedocumentpage_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatedocumentpage_response_compound_MAIN
#endif // ezsigntemplatedocumentpage_response_compound_TEST
