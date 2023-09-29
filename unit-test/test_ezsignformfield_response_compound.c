#ifndef ezsignformfield_response_compound_TEST
#define ezsignformfield_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignformfield_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignformfield_response_compound.h"
ezsignformfield_response_compound_t* instantiate_ezsignformfield_response_compound(int include_optional);



ezsignformfield_response_compound_t* instantiate_ezsignformfield_response_compound(int include_optional) {
  ezsignformfield_response_compound_t* ezsignformfield_response_compound = NULL;
  if (include_optional) {
    ezsignformfield_response_compound = ezsignformfield_response_compound_create(
      32,
      1,
      "Peanuts",
      "Yes",
      200,
      300,
      102,
      22,
      1,
      1,
      "Montreal"
    );
  } else {
    ezsignformfield_response_compound = ezsignformfield_response_compound_create(
      32,
      1,
      "Peanuts",
      "Yes",
      200,
      300,
      102,
      22,
      1,
      1,
      "Montreal"
    );
  }

  return ezsignformfield_response_compound;
}


#ifdef ezsignformfield_response_compound_MAIN

void test_ezsignformfield_response_compound(int include_optional) {
    ezsignformfield_response_compound_t* ezsignformfield_response_compound_1 = instantiate_ezsignformfield_response_compound(include_optional);

	cJSON* jsonezsignformfield_response_compound_1 = ezsignformfield_response_compound_convertToJSON(ezsignformfield_response_compound_1);
	printf("ezsignformfield_response_compound :\n%s\n", cJSON_Print(jsonezsignformfield_response_compound_1));
	ezsignformfield_response_compound_t* ezsignformfield_response_compound_2 = ezsignformfield_response_compound_parseFromJSON(jsonezsignformfield_response_compound_1);
	cJSON* jsonezsignformfield_response_compound_2 = ezsignformfield_response_compound_convertToJSON(ezsignformfield_response_compound_2);
	printf("repeating ezsignformfield_response_compound:\n%s\n", cJSON_Print(jsonezsignformfield_response_compound_2));
}

int main() {
  test_ezsignformfield_response_compound(1);
  test_ezsignformfield_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignformfield_response_compound_MAIN
#endif // ezsignformfield_response_compound_TEST
