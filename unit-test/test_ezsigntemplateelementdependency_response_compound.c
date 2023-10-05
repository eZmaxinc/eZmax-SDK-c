#ifndef ezsigntemplateelementdependency_response_compound_TEST
#define ezsigntemplateelementdependency_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplateelementdependency_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplateelementdependency_response_compound.h"
ezsigntemplateelementdependency_response_compound_t* instantiate_ezsigntemplateelementdependency_response_compound(int include_optional);



ezsigntemplateelementdependency_response_compound_t* instantiate_ezsigntemplateelementdependency_response_compound(int include_optional) {
  ezsigntemplateelementdependency_response_compound_t* ezsigntemplateelementdependency_response_compound = NULL;
  if (include_optional) {
    ezsigntemplateelementdependency_response_compound = ezsigntemplateelementdependency_response_compound_create(
      314,
      71,
      99,
      71,
      64,
      ezmax_api_definition__full_ezsigntemplateelementdependency_response_compound__"Value",
      false,
      ezmax_api_definition__full_ezsigntemplateelementdependency_response_compound__"eq",
      "Montreal"
    );
  } else {
    ezsigntemplateelementdependency_response_compound = ezsigntemplateelementdependency_response_compound_create(
      314,
      71,
      99,
      71,
      64,
      ezmax_api_definition__full_ezsigntemplateelementdependency_response_compound__"Value",
      false,
      ezmax_api_definition__full_ezsigntemplateelementdependency_response_compound__"eq",
      "Montreal"
    );
  }

  return ezsigntemplateelementdependency_response_compound;
}


#ifdef ezsigntemplateelementdependency_response_compound_MAIN

void test_ezsigntemplateelementdependency_response_compound(int include_optional) {
    ezsigntemplateelementdependency_response_compound_t* ezsigntemplateelementdependency_response_compound_1 = instantiate_ezsigntemplateelementdependency_response_compound(include_optional);

	cJSON* jsonezsigntemplateelementdependency_response_compound_1 = ezsigntemplateelementdependency_response_compound_convertToJSON(ezsigntemplateelementdependency_response_compound_1);
	printf("ezsigntemplateelementdependency_response_compound :\n%s\n", cJSON_Print(jsonezsigntemplateelementdependency_response_compound_1));
	ezsigntemplateelementdependency_response_compound_t* ezsigntemplateelementdependency_response_compound_2 = ezsigntemplateelementdependency_response_compound_parseFromJSON(jsonezsigntemplateelementdependency_response_compound_1);
	cJSON* jsonezsigntemplateelementdependency_response_compound_2 = ezsigntemplateelementdependency_response_compound_convertToJSON(ezsigntemplateelementdependency_response_compound_2);
	printf("repeating ezsigntemplateelementdependency_response_compound:\n%s\n", cJSON_Print(jsonezsigntemplateelementdependency_response_compound_2));
}

int main() {
  test_ezsigntemplateelementdependency_response_compound(1);
  test_ezsigntemplateelementdependency_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplateelementdependency_response_compound_MAIN
#endif // ezsigntemplateelementdependency_response_compound_TEST
