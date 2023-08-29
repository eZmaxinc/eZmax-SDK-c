#ifndef ezsignformfieldgroup_response_compound_TEST
#define ezsignformfieldgroup_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignformfieldgroup_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignformfieldgroup_response_compound.h"
ezsignformfieldgroup_response_compound_t* instantiate_ezsignformfieldgroup_response_compound(int include_optional);



ezsignformfieldgroup_response_compound_t* instantiate_ezsignformfieldgroup_response_compound(int include_optional) {
  ezsignformfieldgroup_response_compound_t* ezsignformfieldgroup_response_compound = NULL;
  if (include_optional) {
    ezsignformfieldgroup_response_compound = ezsignformfieldgroup_response_compound_create(
      26,
      97,
      ezmax_api_definition__full_ezsignformfieldgroup_response_compound__"Text",
      ezmax_api_definition__full_ezsignformfieldgroup_response_compound__"One",
      "Allergies",
      1,
      "Foo",
      1,
      2,
      1,
      75,
      1,
      ezmax_api_definition__full_ezsignformfieldgroup_response_compound__"None",
      "/[-0-9a-zA-Z.+_]+@[-0-9a-zA-Z.+_]+.[a-zA-Z]{2,4}/",
      "Please enter a valid email address",
      ezmax_api_definition__full_ezsignformfieldgroup_response_compound__"TopLeft",
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    ezsignformfieldgroup_response_compound = ezsignformfieldgroup_response_compound_create(
      26,
      97,
      ezmax_api_definition__full_ezsignformfieldgroup_response_compound__"Text",
      ezmax_api_definition__full_ezsignformfieldgroup_response_compound__"One",
      "Allergies",
      1,
      "Foo",
      1,
      2,
      1,
      75,
      1,
      ezmax_api_definition__full_ezsignformfieldgroup_response_compound__"None",
      "/[-0-9a-zA-Z.+_]+@[-0-9a-zA-Z.+_]+.[a-zA-Z]{2,4}/",
      "Please enter a valid email address",
      ezmax_api_definition__full_ezsignformfieldgroup_response_compound__"TopLeft",
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return ezsignformfieldgroup_response_compound;
}


#ifdef ezsignformfieldgroup_response_compound_MAIN

void test_ezsignformfieldgroup_response_compound(int include_optional) {
    ezsignformfieldgroup_response_compound_t* ezsignformfieldgroup_response_compound_1 = instantiate_ezsignformfieldgroup_response_compound(include_optional);

	cJSON* jsonezsignformfieldgroup_response_compound_1 = ezsignformfieldgroup_response_compound_convertToJSON(ezsignformfieldgroup_response_compound_1);
	printf("ezsignformfieldgroup_response_compound :\n%s\n", cJSON_Print(jsonezsignformfieldgroup_response_compound_1));
	ezsignformfieldgroup_response_compound_t* ezsignformfieldgroup_response_compound_2 = ezsignformfieldgroup_response_compound_parseFromJSON(jsonezsignformfieldgroup_response_compound_1);
	cJSON* jsonezsignformfieldgroup_response_compound_2 = ezsignformfieldgroup_response_compound_convertToJSON(ezsignformfieldgroup_response_compound_2);
	printf("repeating ezsignformfieldgroup_response_compound:\n%s\n", cJSON_Print(jsonezsignformfieldgroup_response_compound_2));
}

int main() {
  test_ezsignformfieldgroup_response_compound(1);
  test_ezsignformfieldgroup_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignformfieldgroup_response_compound_MAIN
#endif // ezsignformfieldgroup_response_compound_TEST
