#ifndef ezsigntemplateformfieldgroup_response_compound_TEST
#define ezsigntemplateformfieldgroup_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplateformfieldgroup_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplateformfieldgroup_response_compound.h"
ezsigntemplateformfieldgroup_response_compound_t* instantiate_ezsigntemplateformfieldgroup_response_compound(int include_optional);



ezsigntemplateformfieldgroup_response_compound_t* instantiate_ezsigntemplateformfieldgroup_response_compound(int include_optional) {
  ezsigntemplateformfieldgroup_response_compound_t* ezsigntemplateformfieldgroup_response_compound = NULL;
  if (include_optional) {
    ezsigntemplateformfieldgroup_response_compound = ezsigntemplateformfieldgroup_response_compound_create(
      64,
      133,
      ezmax_api_definition__full_ezsigntemplateformfieldgroup_response_compound__"Text",
      ezmax_api_definition__full_ezsigntemplateformfieldgroup_response_compound__"One",
      "Allergies",
      1,
      "Foo",
      1,
      2,
      1,
      75,
      1,
      "/[-0-9a-zA-Z.+_]+@[-0-9a-zA-Z.+_]+.[a-zA-Z]{2,4}/",
      ezmax_api_definition__full_ezsigntemplateformfieldgroup_response_compound__"None",
      "Please enter a valid email address",
      ezmax_api_definition__full_ezsigntemplateformfieldgroup_response_compound__"TopLeft",
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    ezsigntemplateformfieldgroup_response_compound = ezsigntemplateformfieldgroup_response_compound_create(
      64,
      133,
      ezmax_api_definition__full_ezsigntemplateformfieldgroup_response_compound__"Text",
      ezmax_api_definition__full_ezsigntemplateformfieldgroup_response_compound__"One",
      "Allergies",
      1,
      "Foo",
      1,
      2,
      1,
      75,
      1,
      "/[-0-9a-zA-Z.+_]+@[-0-9a-zA-Z.+_]+.[a-zA-Z]{2,4}/",
      ezmax_api_definition__full_ezsigntemplateformfieldgroup_response_compound__"None",
      "Please enter a valid email address",
      ezmax_api_definition__full_ezsigntemplateformfieldgroup_response_compound__"TopLeft",
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return ezsigntemplateformfieldgroup_response_compound;
}


#ifdef ezsigntemplateformfieldgroup_response_compound_MAIN

void test_ezsigntemplateformfieldgroup_response_compound(int include_optional) {
    ezsigntemplateformfieldgroup_response_compound_t* ezsigntemplateformfieldgroup_response_compound_1 = instantiate_ezsigntemplateformfieldgroup_response_compound(include_optional);

	cJSON* jsonezsigntemplateformfieldgroup_response_compound_1 = ezsigntemplateformfieldgroup_response_compound_convertToJSON(ezsigntemplateformfieldgroup_response_compound_1);
	printf("ezsigntemplateformfieldgroup_response_compound :\n%s\n", cJSON_Print(jsonezsigntemplateformfieldgroup_response_compound_1));
	ezsigntemplateformfieldgroup_response_compound_t* ezsigntemplateformfieldgroup_response_compound_2 = ezsigntemplateformfieldgroup_response_compound_parseFromJSON(jsonezsigntemplateformfieldgroup_response_compound_1);
	cJSON* jsonezsigntemplateformfieldgroup_response_compound_2 = ezsigntemplateformfieldgroup_response_compound_convertToJSON(ezsigntemplateformfieldgroup_response_compound_2);
	printf("repeating ezsigntemplateformfieldgroup_response_compound:\n%s\n", cJSON_Print(jsonezsigntemplateformfieldgroup_response_compound_2));
}

int main() {
  test_ezsigntemplateformfieldgroup_response_compound(1);
  test_ezsigntemplateformfieldgroup_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplateformfieldgroup_response_compound_MAIN
#endif // ezsigntemplateformfieldgroup_response_compound_TEST
