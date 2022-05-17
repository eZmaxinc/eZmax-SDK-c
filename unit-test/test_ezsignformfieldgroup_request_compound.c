#ifndef ezsignformfieldgroup_request_compound_TEST
#define ezsignformfieldgroup_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignformfieldgroup_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignformfieldgroup_request_compound.h"
ezsignformfieldgroup_request_compound_t* instantiate_ezsignformfieldgroup_request_compound(int include_optional);



ezsignformfieldgroup_request_compound_t* instantiate_ezsignformfieldgroup_request_compound(int include_optional) {
  ezsignformfieldgroup_request_compound_t* ezsignformfieldgroup_request_compound = NULL;
  if (include_optional) {
    ezsignformfieldgroup_request_compound = ezsignformfieldgroup_request_compound_create(
      26,
      97,
      ezmax_api_definition__full_ezsignformfieldgroup_request_compound__"Text",
      ezmax_api_definition__full_ezsignformfieldgroup_request_compound__"One",
      "Allergies",
      1,
      "Foo",
      1,
      2,
      1,
      75,
      1,
      "/[-0-9a-zA-Z.+_]+@[-0-9a-zA-Z.+_]+.[a-zA-Z]{2,4}/",
      "Please enter a valid email address",
      ezmax_api_definition__full_ezsignformfieldgroup_request_compound__"TopLeft",
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    ezsignformfieldgroup_request_compound = ezsignformfieldgroup_request_compound_create(
      26,
      97,
      ezmax_api_definition__full_ezsignformfieldgroup_request_compound__"Text",
      ezmax_api_definition__full_ezsignformfieldgroup_request_compound__"One",
      "Allergies",
      1,
      "Foo",
      1,
      2,
      1,
      75,
      1,
      "/[-0-9a-zA-Z.+_]+@[-0-9a-zA-Z.+_]+.[a-zA-Z]{2,4}/",
      "Please enter a valid email address",
      ezmax_api_definition__full_ezsignformfieldgroup_request_compound__"TopLeft",
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return ezsignformfieldgroup_request_compound;
}


#ifdef ezsignformfieldgroup_request_compound_MAIN

void test_ezsignformfieldgroup_request_compound(int include_optional) {
    ezsignformfieldgroup_request_compound_t* ezsignformfieldgroup_request_compound_1 = instantiate_ezsignformfieldgroup_request_compound(include_optional);

	cJSON* jsonezsignformfieldgroup_request_compound_1 = ezsignformfieldgroup_request_compound_convertToJSON(ezsignformfieldgroup_request_compound_1);
	printf("ezsignformfieldgroup_request_compound :\n%s\n", cJSON_Print(jsonezsignformfieldgroup_request_compound_1));
	ezsignformfieldgroup_request_compound_t* ezsignformfieldgroup_request_compound_2 = ezsignformfieldgroup_request_compound_parseFromJSON(jsonezsignformfieldgroup_request_compound_1);
	cJSON* jsonezsignformfieldgroup_request_compound_2 = ezsignformfieldgroup_request_compound_convertToJSON(ezsignformfieldgroup_request_compound_2);
	printf("repeating ezsignformfieldgroup_request_compound:\n%s\n", cJSON_Print(jsonezsignformfieldgroup_request_compound_2));
}

int main() {
  test_ezsignformfieldgroup_request_compound(1);
  test_ezsignformfieldgroup_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignformfieldgroup_request_compound_MAIN
#endif // ezsignformfieldgroup_request_compound_TEST
