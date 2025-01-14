#ifndef ezsigntemplatepackage_response_compound_TEST
#define ezsigntemplatepackage_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepackage_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepackage_response_compound.h"
ezsigntemplatepackage_response_compound_t* instantiate_ezsigntemplatepackage_response_compound(int include_optional);



ezsigntemplatepackage_response_compound_t* instantiate_ezsigntemplatepackage_response_compound(int include_optional) {
  ezsigntemplatepackage_response_compound_t* ezsigntemplatepackage_response_compound = NULL;
  if (include_optional) {
    ezsigntemplatepackage_response_compound = ezsigntemplatepackage_response_compound_create(
      99,
      5,
      95,
      2,
      "Standard Contract",
      "English",
      "Package for new clients",
      1,
      1,
      true,
      "Default",
      1,
      list_createList(),
      list_createList()
    );
  } else {
    ezsigntemplatepackage_response_compound = ezsigntemplatepackage_response_compound_create(
      99,
      5,
      95,
      2,
      "Standard Contract",
      "English",
      "Package for new clients",
      1,
      1,
      true,
      "Default",
      1,
      list_createList(),
      list_createList()
    );
  }

  return ezsigntemplatepackage_response_compound;
}


#ifdef ezsigntemplatepackage_response_compound_MAIN

void test_ezsigntemplatepackage_response_compound(int include_optional) {
    ezsigntemplatepackage_response_compound_t* ezsigntemplatepackage_response_compound_1 = instantiate_ezsigntemplatepackage_response_compound(include_optional);

	cJSON* jsonezsigntemplatepackage_response_compound_1 = ezsigntemplatepackage_response_compound_convertToJSON(ezsigntemplatepackage_response_compound_1);
	printf("ezsigntemplatepackage_response_compound :\n%s\n", cJSON_Print(jsonezsigntemplatepackage_response_compound_1));
	ezsigntemplatepackage_response_compound_t* ezsigntemplatepackage_response_compound_2 = ezsigntemplatepackage_response_compound_parseFromJSON(jsonezsigntemplatepackage_response_compound_1);
	cJSON* jsonezsigntemplatepackage_response_compound_2 = ezsigntemplatepackage_response_compound_convertToJSON(ezsigntemplatepackage_response_compound_2);
	printf("repeating ezsigntemplatepackage_response_compound:\n%s\n", cJSON_Print(jsonezsigntemplatepackage_response_compound_2));
}

int main() {
  test_ezsigntemplatepackage_response_compound(1);
  test_ezsigntemplatepackage_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepackage_response_compound_MAIN
#endif // ezsigntemplatepackage_response_compound_TEST
