#ifndef ezsigntemplatepackagesigner_response_compound_TEST
#define ezsigntemplatepackagesigner_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepackagesigner_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepackagesigner_response_compound.h"
ezsigntemplatepackagesigner_response_compound_t* instantiate_ezsigntemplatepackagesigner_response_compound(int include_optional);



ezsigntemplatepackagesigner_response_compound_t* instantiate_ezsigntemplatepackagesigner_response_compound(int include_optional) {
  ezsigntemplatepackagesigner_response_compound_t* ezsigntemplatepackagesigner_response_compound = NULL;
  if (include_optional) {
    ezsigntemplatepackagesigner_response_compound = ezsigntemplatepackagesigner_response_compound_create(
      174,
      99,
      95,
      70,
      2,
      "Standard Contract",
      1,
      ezmax_api_definition__full_ezsigntemplatepackagesigner_response_compound__"Manual",
      "Customer",
      "Default",
      "Administration"
    );
  } else {
    ezsigntemplatepackagesigner_response_compound = ezsigntemplatepackagesigner_response_compound_create(
      174,
      99,
      95,
      70,
      2,
      "Standard Contract",
      1,
      ezmax_api_definition__full_ezsigntemplatepackagesigner_response_compound__"Manual",
      "Customer",
      "Default",
      "Administration"
    );
  }

  return ezsigntemplatepackagesigner_response_compound;
}


#ifdef ezsigntemplatepackagesigner_response_compound_MAIN

void test_ezsigntemplatepackagesigner_response_compound(int include_optional) {
    ezsigntemplatepackagesigner_response_compound_t* ezsigntemplatepackagesigner_response_compound_1 = instantiate_ezsigntemplatepackagesigner_response_compound(include_optional);

	cJSON* jsonezsigntemplatepackagesigner_response_compound_1 = ezsigntemplatepackagesigner_response_compound_convertToJSON(ezsigntemplatepackagesigner_response_compound_1);
	printf("ezsigntemplatepackagesigner_response_compound :\n%s\n", cJSON_Print(jsonezsigntemplatepackagesigner_response_compound_1));
	ezsigntemplatepackagesigner_response_compound_t* ezsigntemplatepackagesigner_response_compound_2 = ezsigntemplatepackagesigner_response_compound_parseFromJSON(jsonezsigntemplatepackagesigner_response_compound_1);
	cJSON* jsonezsigntemplatepackagesigner_response_compound_2 = ezsigntemplatepackagesigner_response_compound_convertToJSON(ezsigntemplatepackagesigner_response_compound_2);
	printf("repeating ezsigntemplatepackagesigner_response_compound:\n%s\n", cJSON_Print(jsonezsigntemplatepackagesigner_response_compound_2));
}

int main() {
  test_ezsigntemplatepackagesigner_response_compound(1);
  test_ezsigntemplatepackagesigner_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepackagesigner_response_compound_MAIN
#endif // ezsigntemplatepackagesigner_response_compound_TEST
