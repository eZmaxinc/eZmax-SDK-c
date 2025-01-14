#ifndef ezsignformfield_response_TEST
#define ezsignformfield_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignformfield_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignformfield_response.h"
ezsignformfield_response_t* instantiate_ezsignformfield_response(int include_optional);

#include "test_textstylestatic_response_compound.c"


ezsignformfield_response_t* instantiate_ezsignformfield_response(int include_optional) {
  ezsignformfield_response_t* ezsignformfield_response = NULL;
  if (include_optional) {
    ezsignformfield_response = ezsignformfield_response_create(
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
      "Montreal",
      ezmax_api_definition__full_ezsignformfield_response__"AllOf",
      ezmax_api_definition__full_ezsignformfield_response__"Center",
       // false, not to have infinite recursion
      instantiate_textstylestatic_response_compound(0)
    );
  } else {
    ezsignformfield_response = ezsignformfield_response_create(
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
      "Montreal",
      ezmax_api_definition__full_ezsignformfield_response__"AllOf",
      ezmax_api_definition__full_ezsignformfield_response__"Center",
      NULL
    );
  }

  return ezsignformfield_response;
}


#ifdef ezsignformfield_response_MAIN

void test_ezsignformfield_response(int include_optional) {
    ezsignformfield_response_t* ezsignformfield_response_1 = instantiate_ezsignformfield_response(include_optional);

	cJSON* jsonezsignformfield_response_1 = ezsignformfield_response_convertToJSON(ezsignformfield_response_1);
	printf("ezsignformfield_response :\n%s\n", cJSON_Print(jsonezsignformfield_response_1));
	ezsignformfield_response_t* ezsignformfield_response_2 = ezsignformfield_response_parseFromJSON(jsonezsignformfield_response_1);
	cJSON* jsonezsignformfield_response_2 = ezsignformfield_response_convertToJSON(ezsignformfield_response_2);
	printf("repeating ezsignformfield_response:\n%s\n", cJSON_Print(jsonezsignformfield_response_2));
}

int main() {
  test_ezsignformfield_response(1);
  test_ezsignformfield_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignformfield_response_MAIN
#endif // ezsignformfield_response_TEST
