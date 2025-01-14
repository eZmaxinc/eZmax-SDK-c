#ifndef ezsigntemplatepackage_request_compound_TEST
#define ezsigntemplatepackage_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepackage_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepackage_request_compound.h"
ezsigntemplatepackage_request_compound_t* instantiate_ezsigntemplatepackage_request_compound(int include_optional);



ezsigntemplatepackage_request_compound_t* instantiate_ezsigntemplatepackage_request_compound(int include_optional) {
  ezsigntemplatepackage_request_compound_t* ezsigntemplatepackage_request_compound = NULL;
  if (include_optional) {
    ezsigntemplatepackage_request_compound = ezsigntemplatepackage_request_compound_create(
      99,
      5,
      95,
      2,
      "Package for new clients",
      1,
      true
    );
  } else {
    ezsigntemplatepackage_request_compound = ezsigntemplatepackage_request_compound_create(
      99,
      5,
      95,
      2,
      "Package for new clients",
      1,
      true
    );
  }

  return ezsigntemplatepackage_request_compound;
}


#ifdef ezsigntemplatepackage_request_compound_MAIN

void test_ezsigntemplatepackage_request_compound(int include_optional) {
    ezsigntemplatepackage_request_compound_t* ezsigntemplatepackage_request_compound_1 = instantiate_ezsigntemplatepackage_request_compound(include_optional);

	cJSON* jsonezsigntemplatepackage_request_compound_1 = ezsigntemplatepackage_request_compound_convertToJSON(ezsigntemplatepackage_request_compound_1);
	printf("ezsigntemplatepackage_request_compound :\n%s\n", cJSON_Print(jsonezsigntemplatepackage_request_compound_1));
	ezsigntemplatepackage_request_compound_t* ezsigntemplatepackage_request_compound_2 = ezsigntemplatepackage_request_compound_parseFromJSON(jsonezsigntemplatepackage_request_compound_1);
	cJSON* jsonezsigntemplatepackage_request_compound_2 = ezsigntemplatepackage_request_compound_convertToJSON(ezsigntemplatepackage_request_compound_2);
	printf("repeating ezsigntemplatepackage_request_compound:\n%s\n", cJSON_Print(jsonezsigntemplatepackage_request_compound_2));
}

int main() {
  test_ezsigntemplatepackage_request_compound(1);
  test_ezsigntemplatepackage_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepackage_request_compound_MAIN
#endif // ezsigntemplatepackage_request_compound_TEST
