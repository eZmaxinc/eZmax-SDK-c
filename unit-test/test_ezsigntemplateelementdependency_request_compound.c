#ifndef ezsigntemplateelementdependency_request_compound_TEST
#define ezsigntemplateelementdependency_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplateelementdependency_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplateelementdependency_request_compound.h"
ezsigntemplateelementdependency_request_compound_t* instantiate_ezsigntemplateelementdependency_request_compound(int include_optional);



ezsigntemplateelementdependency_request_compound_t* instantiate_ezsigntemplateelementdependency_request_compound(int include_optional) {
  ezsigntemplateelementdependency_request_compound_t* ezsigntemplateelementdependency_request_compound = NULL;
  if (include_optional) {
    ezsigntemplateelementdependency_request_compound = ezsigntemplateelementdependency_request_compound_create(
      314,
      71,
      64,
      "Allergies",
      "Peanuts",
      ezmax_api_definition__full_ezsigntemplateelementdependency_request_compound__"Value",
      false,
      ezmax_api_definition__full_ezsigntemplateelementdependency_request_compound__"eq",
      "Montreal"
    );
  } else {
    ezsigntemplateelementdependency_request_compound = ezsigntemplateelementdependency_request_compound_create(
      314,
      71,
      64,
      "Allergies",
      "Peanuts",
      ezmax_api_definition__full_ezsigntemplateelementdependency_request_compound__"Value",
      false,
      ezmax_api_definition__full_ezsigntemplateelementdependency_request_compound__"eq",
      "Montreal"
    );
  }

  return ezsigntemplateelementdependency_request_compound;
}


#ifdef ezsigntemplateelementdependency_request_compound_MAIN

void test_ezsigntemplateelementdependency_request_compound(int include_optional) {
    ezsigntemplateelementdependency_request_compound_t* ezsigntemplateelementdependency_request_compound_1 = instantiate_ezsigntemplateelementdependency_request_compound(include_optional);

	cJSON* jsonezsigntemplateelementdependency_request_compound_1 = ezsigntemplateelementdependency_request_compound_convertToJSON(ezsigntemplateelementdependency_request_compound_1);
	printf("ezsigntemplateelementdependency_request_compound :\n%s\n", cJSON_Print(jsonezsigntemplateelementdependency_request_compound_1));
	ezsigntemplateelementdependency_request_compound_t* ezsigntemplateelementdependency_request_compound_2 = ezsigntemplateelementdependency_request_compound_parseFromJSON(jsonezsigntemplateelementdependency_request_compound_1);
	cJSON* jsonezsigntemplateelementdependency_request_compound_2 = ezsigntemplateelementdependency_request_compound_convertToJSON(ezsigntemplateelementdependency_request_compound_2);
	printf("repeating ezsigntemplateelementdependency_request_compound:\n%s\n", cJSON_Print(jsonezsigntemplateelementdependency_request_compound_2));
}

int main() {
  test_ezsigntemplateelementdependency_request_compound(1);
  test_ezsigntemplateelementdependency_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplateelementdependency_request_compound_MAIN
#endif // ezsigntemplateelementdependency_request_compound_TEST
