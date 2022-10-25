#ifndef ezsigntemplatesignature_request_compound_TEST
#define ezsigntemplatesignature_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatesignature_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatesignature_request_compound.h"
ezsigntemplatesignature_request_compound_t* instantiate_ezsigntemplatesignature_request_compound(int include_optional);



ezsigntemplatesignature_request_compound_t* instantiate_ezsigntemplatesignature_request_compound(int include_optional) {
  ezsigntemplatesignature_request_compound_t* ezsigntemplatesignature_request_compound = NULL;
  if (include_optional) {
    ezsigntemplatesignature_request_compound = ezsigntemplatesignature_request_compound_create(
      99,
      133,
      9,
      9,
      1,
      200,
      300,
      1,
      ezmax_api_definition__full_ezsigntemplatesignature_request_compound__"Name",
      "Please sign here if you agree to the terms",
      ezmax_api_definition__full_ezsigntemplatesignature_request_compound__"TopLeft",
      ezmax_api_definition__full_ezsigntemplatesignature_request_compound__Normal,
      1,
      ezmax_api_definition__full_ezsigntemplatesignature_request_compound__"Description",
      "Attachment",
      1,
      1,
      list_createList()
    );
  } else {
    ezsigntemplatesignature_request_compound = ezsigntemplatesignature_request_compound_create(
      99,
      133,
      9,
      9,
      1,
      200,
      300,
      1,
      ezmax_api_definition__full_ezsigntemplatesignature_request_compound__"Name",
      "Please sign here if you agree to the terms",
      ezmax_api_definition__full_ezsigntemplatesignature_request_compound__"TopLeft",
      ezmax_api_definition__full_ezsigntemplatesignature_request_compound__Normal,
      1,
      ezmax_api_definition__full_ezsigntemplatesignature_request_compound__"Description",
      "Attachment",
      1,
      1,
      list_createList()
    );
  }

  return ezsigntemplatesignature_request_compound;
}


#ifdef ezsigntemplatesignature_request_compound_MAIN

void test_ezsigntemplatesignature_request_compound(int include_optional) {
    ezsigntemplatesignature_request_compound_t* ezsigntemplatesignature_request_compound_1 = instantiate_ezsigntemplatesignature_request_compound(include_optional);

	cJSON* jsonezsigntemplatesignature_request_compound_1 = ezsigntemplatesignature_request_compound_convertToJSON(ezsigntemplatesignature_request_compound_1);
	printf("ezsigntemplatesignature_request_compound :\n%s\n", cJSON_Print(jsonezsigntemplatesignature_request_compound_1));
	ezsigntemplatesignature_request_compound_t* ezsigntemplatesignature_request_compound_2 = ezsigntemplatesignature_request_compound_parseFromJSON(jsonezsigntemplatesignature_request_compound_1);
	cJSON* jsonezsigntemplatesignature_request_compound_2 = ezsigntemplatesignature_request_compound_convertToJSON(ezsigntemplatesignature_request_compound_2);
	printf("repeating ezsigntemplatesignature_request_compound:\n%s\n", cJSON_Print(jsonezsigntemplatesignature_request_compound_2));
}

int main() {
  test_ezsigntemplatesignature_request_compound(1);
  test_ezsigntemplatesignature_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatesignature_request_compound_MAIN
#endif // ezsigntemplatesignature_request_compound_TEST
