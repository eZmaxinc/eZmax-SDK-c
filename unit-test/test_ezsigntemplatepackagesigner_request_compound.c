#ifndef ezsigntemplatepackagesigner_request_compound_TEST
#define ezsigntemplatepackagesigner_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepackagesigner_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepackagesigner_request_compound.h"
ezsigntemplatepackagesigner_request_compound_t* instantiate_ezsigntemplatepackagesigner_request_compound(int include_optional);



ezsigntemplatepackagesigner_request_compound_t* instantiate_ezsigntemplatepackagesigner_request_compound(int include_optional) {
  ezsigntemplatepackagesigner_request_compound_t* ezsigntemplatepackagesigner_request_compound = NULL;
  if (include_optional) {
    ezsigntemplatepackagesigner_request_compound = ezsigntemplatepackagesigner_request_compound_create(
      174,
      99,
      95,
      70,
      2,
      1,
      ezmax_api_definition__full_ezsigntemplatepackagesigner_request_compound__"Manual",
      "Customer"
    );
  } else {
    ezsigntemplatepackagesigner_request_compound = ezsigntemplatepackagesigner_request_compound_create(
      174,
      99,
      95,
      70,
      2,
      1,
      ezmax_api_definition__full_ezsigntemplatepackagesigner_request_compound__"Manual",
      "Customer"
    );
  }

  return ezsigntemplatepackagesigner_request_compound;
}


#ifdef ezsigntemplatepackagesigner_request_compound_MAIN

void test_ezsigntemplatepackagesigner_request_compound(int include_optional) {
    ezsigntemplatepackagesigner_request_compound_t* ezsigntemplatepackagesigner_request_compound_1 = instantiate_ezsigntemplatepackagesigner_request_compound(include_optional);

	cJSON* jsonezsigntemplatepackagesigner_request_compound_1 = ezsigntemplatepackagesigner_request_compound_convertToJSON(ezsigntemplatepackagesigner_request_compound_1);
	printf("ezsigntemplatepackagesigner_request_compound :\n%s\n", cJSON_Print(jsonezsigntemplatepackagesigner_request_compound_1));
	ezsigntemplatepackagesigner_request_compound_t* ezsigntemplatepackagesigner_request_compound_2 = ezsigntemplatepackagesigner_request_compound_parseFromJSON(jsonezsigntemplatepackagesigner_request_compound_1);
	cJSON* jsonezsigntemplatepackagesigner_request_compound_2 = ezsigntemplatepackagesigner_request_compound_convertToJSON(ezsigntemplatepackagesigner_request_compound_2);
	printf("repeating ezsigntemplatepackagesigner_request_compound:\n%s\n", cJSON_Print(jsonezsigntemplatepackagesigner_request_compound_2));
}

int main() {
  test_ezsigntemplatepackagesigner_request_compound(1);
  test_ezsigntemplatepackagesigner_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepackagesigner_request_compound_MAIN
#endif // ezsigntemplatepackagesigner_request_compound_TEST
