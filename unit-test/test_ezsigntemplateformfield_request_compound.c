#ifndef ezsigntemplateformfield_request_compound_TEST
#define ezsigntemplateformfield_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplateformfield_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplateformfield_request_compound.h"
ezsigntemplateformfield_request_compound_t* instantiate_ezsigntemplateformfield_request_compound(int include_optional);

#include "test_textstylestatic_request_compound.c"


ezsigntemplateformfield_request_compound_t* instantiate_ezsigntemplateformfield_request_compound(int include_optional) {
  ezsigntemplateformfield_request_compound_t* ezsigntemplateformfield_request_compound = NULL;
  if (include_optional) {
    ezsigntemplateformfield_request_compound = ezsigntemplateformfield_request_compound_create(
      71,
      ezmax_api_definition__full_ezsigntemplateformfield_request_compound__"PerCoordinates",
      1,
      "Peanuts",
      "Yes",
      200,
      300,
      102,
      22,
      1,
      1,
      ezmax_api_definition__full_ezsigntemplateformfield_request_compound__"AllOf",
      "Signature",
      200,
      200,
      ezmax_api_definition__full_ezsigntemplateformfield_request_compound__"All",
      ezmax_api_definition__full_ezsigntemplateformfield_request_compound__"Center",
       // false, not to have infinite recursion
      instantiate_textstylestatic_request_compound(0),
      list_createList()
    );
  } else {
    ezsigntemplateformfield_request_compound = ezsigntemplateformfield_request_compound_create(
      71,
      ezmax_api_definition__full_ezsigntemplateformfield_request_compound__"PerCoordinates",
      1,
      "Peanuts",
      "Yes",
      200,
      300,
      102,
      22,
      1,
      1,
      ezmax_api_definition__full_ezsigntemplateformfield_request_compound__"AllOf",
      "Signature",
      200,
      200,
      ezmax_api_definition__full_ezsigntemplateformfield_request_compound__"All",
      ezmax_api_definition__full_ezsigntemplateformfield_request_compound__"Center",
      NULL,
      list_createList()
    );
  }

  return ezsigntemplateformfield_request_compound;
}


#ifdef ezsigntemplateformfield_request_compound_MAIN

void test_ezsigntemplateformfield_request_compound(int include_optional) {
    ezsigntemplateformfield_request_compound_t* ezsigntemplateformfield_request_compound_1 = instantiate_ezsigntemplateformfield_request_compound(include_optional);

	cJSON* jsonezsigntemplateformfield_request_compound_1 = ezsigntemplateformfield_request_compound_convertToJSON(ezsigntemplateformfield_request_compound_1);
	printf("ezsigntemplateformfield_request_compound :\n%s\n", cJSON_Print(jsonezsigntemplateformfield_request_compound_1));
	ezsigntemplateformfield_request_compound_t* ezsigntemplateformfield_request_compound_2 = ezsigntemplateformfield_request_compound_parseFromJSON(jsonezsigntemplateformfield_request_compound_1);
	cJSON* jsonezsigntemplateformfield_request_compound_2 = ezsigntemplateformfield_request_compound_convertToJSON(ezsigntemplateformfield_request_compound_2);
	printf("repeating ezsigntemplateformfield_request_compound:\n%s\n", cJSON_Print(jsonezsigntemplateformfield_request_compound_2));
}

int main() {
  test_ezsigntemplateformfield_request_compound(1);
  test_ezsigntemplateformfield_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplateformfield_request_compound_MAIN
#endif // ezsigntemplateformfield_request_compound_TEST
