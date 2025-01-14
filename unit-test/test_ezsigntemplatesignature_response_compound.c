#ifndef ezsigntemplatesignature_response_compound_TEST
#define ezsigntemplatesignature_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatesignature_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatesignature_response_compound.h"
ezsigntemplatesignature_response_compound_t* instantiate_ezsigntemplatesignature_response_compound(int include_optional);



ezsigntemplatesignature_response_compound_t* instantiate_ezsigntemplatesignature_response_compound(int include_optional) {
  ezsigntemplatesignature_response_compound_t* ezsigntemplatesignature_response_compound = NULL;
  if (include_optional) {
    ezsigntemplatesignature_response_compound = ezsigntemplatesignature_response_compound_create(
      99,
      133,
      9,
      9,
      1,
      1,
      ezmax_api_definition__full_ezsigntemplatesignature_response_compound__"PerCoordinates",
      1,
      200,
      300,
      200,
      200,
      1,
      ezmax_api_definition__full_ezsigntemplatesignature_response_compound__"Signature",
      ezmax_api_definition__full_ezsigntemplatesignature_response_compound__"Manual",
      "Please sign here if you agree to the terms",
      ezmax_api_definition__full_ezsigntemplatesignature_response_compound__"TopLeft",
      ezmax_api_definition__full_ezsigntemplatesignature_response_compound__"Normal",
      1,
      "Attachment",
      ezmax_api_definition__full_ezsigntemplatesignature_response_compound__"Description",
      1,
      75,
      "Foo",
      "/[-0-9a-zA-Z.+_]+@[-0-9a-zA-Z.+_]+.[a-zA-Z]{2,4}/",
      ezmax_api_definition__full_ezsigntemplatesignature_response_compound__"None",
      "Phone number",
      ezmax_api_definition__full_ezsigntemplatesignature_response_compound__"AllOf",
      "Signature",
      200,
      200,
      ezmax_api_definition__full_ezsigntemplatesignature_response_compound__"All",
      1,
      list_createList(),
      list_createList()
    );
  } else {
    ezsigntemplatesignature_response_compound = ezsigntemplatesignature_response_compound_create(
      99,
      133,
      9,
      9,
      1,
      1,
      ezmax_api_definition__full_ezsigntemplatesignature_response_compound__"PerCoordinates",
      1,
      200,
      300,
      200,
      200,
      1,
      ezmax_api_definition__full_ezsigntemplatesignature_response_compound__"Signature",
      ezmax_api_definition__full_ezsigntemplatesignature_response_compound__"Manual",
      "Please sign here if you agree to the terms",
      ezmax_api_definition__full_ezsigntemplatesignature_response_compound__"TopLeft",
      ezmax_api_definition__full_ezsigntemplatesignature_response_compound__"Normal",
      1,
      "Attachment",
      ezmax_api_definition__full_ezsigntemplatesignature_response_compound__"Description",
      1,
      75,
      "Foo",
      "/[-0-9a-zA-Z.+_]+@[-0-9a-zA-Z.+_]+.[a-zA-Z]{2,4}/",
      ezmax_api_definition__full_ezsigntemplatesignature_response_compound__"None",
      "Phone number",
      ezmax_api_definition__full_ezsigntemplatesignature_response_compound__"AllOf",
      "Signature",
      200,
      200,
      ezmax_api_definition__full_ezsigntemplatesignature_response_compound__"All",
      1,
      list_createList(),
      list_createList()
    );
  }

  return ezsigntemplatesignature_response_compound;
}


#ifdef ezsigntemplatesignature_response_compound_MAIN

void test_ezsigntemplatesignature_response_compound(int include_optional) {
    ezsigntemplatesignature_response_compound_t* ezsigntemplatesignature_response_compound_1 = instantiate_ezsigntemplatesignature_response_compound(include_optional);

	cJSON* jsonezsigntemplatesignature_response_compound_1 = ezsigntemplatesignature_response_compound_convertToJSON(ezsigntemplatesignature_response_compound_1);
	printf("ezsigntemplatesignature_response_compound :\n%s\n", cJSON_Print(jsonezsigntemplatesignature_response_compound_1));
	ezsigntemplatesignature_response_compound_t* ezsigntemplatesignature_response_compound_2 = ezsigntemplatesignature_response_compound_parseFromJSON(jsonezsigntemplatesignature_response_compound_1);
	cJSON* jsonezsigntemplatesignature_response_compound_2 = ezsigntemplatesignature_response_compound_convertToJSON(ezsigntemplatesignature_response_compound_2);
	printf("repeating ezsigntemplatesignature_response_compound:\n%s\n", cJSON_Print(jsonezsigntemplatesignature_response_compound_2));
}

int main() {
  test_ezsigntemplatesignature_response_compound(1);
  test_ezsigntemplatesignature_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatesignature_response_compound_MAIN
#endif // ezsigntemplatesignature_response_compound_TEST
