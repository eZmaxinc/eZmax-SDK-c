#ifndef ezsigntemplatepackagesignermembership_request_compound_TEST
#define ezsigntemplatepackagesignermembership_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepackagesignermembership_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepackagesignermembership_request_compound.h"
ezsigntemplatepackagesignermembership_request_compound_t* instantiate_ezsigntemplatepackagesignermembership_request_compound(int include_optional);



ezsigntemplatepackagesignermembership_request_compound_t* instantiate_ezsigntemplatepackagesignermembership_request_compound(int include_optional) {
  ezsigntemplatepackagesignermembership_request_compound_t* ezsigntemplatepackagesignermembership_request_compound = NULL;
  if (include_optional) {
    ezsigntemplatepackagesignermembership_request_compound = ezsigntemplatepackagesignermembership_request_compound_create(
      237,
      194,
      174,
      9,
      1
    );
  } else {
    ezsigntemplatepackagesignermembership_request_compound = ezsigntemplatepackagesignermembership_request_compound_create(
      237,
      194,
      174,
      9,
      1
    );
  }

  return ezsigntemplatepackagesignermembership_request_compound;
}


#ifdef ezsigntemplatepackagesignermembership_request_compound_MAIN

void test_ezsigntemplatepackagesignermembership_request_compound(int include_optional) {
    ezsigntemplatepackagesignermembership_request_compound_t* ezsigntemplatepackagesignermembership_request_compound_1 = instantiate_ezsigntemplatepackagesignermembership_request_compound(include_optional);

	cJSON* jsonezsigntemplatepackagesignermembership_request_compound_1 = ezsigntemplatepackagesignermembership_request_compound_convertToJSON(ezsigntemplatepackagesignermembership_request_compound_1);
	printf("ezsigntemplatepackagesignermembership_request_compound :\n%s\n", cJSON_Print(jsonezsigntemplatepackagesignermembership_request_compound_1));
	ezsigntemplatepackagesignermembership_request_compound_t* ezsigntemplatepackagesignermembership_request_compound_2 = ezsigntemplatepackagesignermembership_request_compound_parseFromJSON(jsonezsigntemplatepackagesignermembership_request_compound_1);
	cJSON* jsonezsigntemplatepackagesignermembership_request_compound_2 = ezsigntemplatepackagesignermembership_request_compound_convertToJSON(ezsigntemplatepackagesignermembership_request_compound_2);
	printf("repeating ezsigntemplatepackagesignermembership_request_compound:\n%s\n", cJSON_Print(jsonezsigntemplatepackagesignermembership_request_compound_2));
}

int main() {
  test_ezsigntemplatepackagesignermembership_request_compound(1);
  test_ezsigntemplatepackagesignermembership_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepackagesignermembership_request_compound_MAIN
#endif // ezsigntemplatepackagesignermembership_request_compound_TEST
