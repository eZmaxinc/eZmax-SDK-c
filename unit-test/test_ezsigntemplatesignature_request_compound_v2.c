#ifndef ezsigntemplatesignature_request_compound_v2_TEST
#define ezsigntemplatesignature_request_compound_v2_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatesignature_request_compound_v2_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatesignature_request_compound_v2.h"
ezsigntemplatesignature_request_compound_v2_t* instantiate_ezsigntemplatesignature_request_compound_v2(int include_optional);



ezsigntemplatesignature_request_compound_v2_t* instantiate_ezsigntemplatesignature_request_compound_v2(int include_optional) {
  ezsigntemplatesignature_request_compound_v2_t* ezsigntemplatesignature_request_compound_v2 = NULL;
  if (include_optional) {
    ezsigntemplatesignature_request_compound_v2 = ezsigntemplatesignature_request_compound_v2_create(
      99,
      133,
      9,
      9,
      1,
      1,
      ezmax_api_definition__full_ezsigntemplatesignature_request_compound_v2__"PerCoordinates",
      1,
      200,
      300,
      200,
      200,
      1,
      ezmax_api_definition__full_ezsigntemplatesignature_request_compound_v2__"Signature",
      ezmax_api_definition__full_ezsigntemplatesignature_request_compound_v2__"Manual",
      "Please sign here if you agree to the terms",
      ezmax_api_definition__full_ezsigntemplatesignature_request_compound_v2__"TopLeft",
      ezmax_api_definition__full_ezsigntemplatesignature_request_compound_v2__"Normal",
      1,
      ezmax_api_definition__full_ezsigntemplatesignature_request_compound_v2__"Description",
      "Attachment",
      1,
      75,
      "Foo",
      "^.{0,30}$",
      ezmax_api_definition__full_ezsigntemplatesignature_request_compound_v2__"None",
      "Phone number",
      ezmax_api_definition__full_ezsigntemplatesignature_request_compound_v2__"AllOf",
      "Signature",
      200,
      200,
      ezmax_api_definition__full_ezsigntemplatesignature_request_compound_v2__"All",
      1,
      list_createList(),
      list_createList()
    );
  } else {
    ezsigntemplatesignature_request_compound_v2 = ezsigntemplatesignature_request_compound_v2_create(
      99,
      133,
      9,
      9,
      1,
      1,
      ezmax_api_definition__full_ezsigntemplatesignature_request_compound_v2__"PerCoordinates",
      1,
      200,
      300,
      200,
      200,
      1,
      ezmax_api_definition__full_ezsigntemplatesignature_request_compound_v2__"Signature",
      ezmax_api_definition__full_ezsigntemplatesignature_request_compound_v2__"Manual",
      "Please sign here if you agree to the terms",
      ezmax_api_definition__full_ezsigntemplatesignature_request_compound_v2__"TopLeft",
      ezmax_api_definition__full_ezsigntemplatesignature_request_compound_v2__"Normal",
      1,
      ezmax_api_definition__full_ezsigntemplatesignature_request_compound_v2__"Description",
      "Attachment",
      1,
      75,
      "Foo",
      "^.{0,30}$",
      ezmax_api_definition__full_ezsigntemplatesignature_request_compound_v2__"None",
      "Phone number",
      ezmax_api_definition__full_ezsigntemplatesignature_request_compound_v2__"AllOf",
      "Signature",
      200,
      200,
      ezmax_api_definition__full_ezsigntemplatesignature_request_compound_v2__"All",
      1,
      list_createList(),
      list_createList()
    );
  }

  return ezsigntemplatesignature_request_compound_v2;
}


#ifdef ezsigntemplatesignature_request_compound_v2_MAIN

void test_ezsigntemplatesignature_request_compound_v2(int include_optional) {
    ezsigntemplatesignature_request_compound_v2_t* ezsigntemplatesignature_request_compound_v2_1 = instantiate_ezsigntemplatesignature_request_compound_v2(include_optional);

	cJSON* jsonezsigntemplatesignature_request_compound_v2_1 = ezsigntemplatesignature_request_compound_v2_convertToJSON(ezsigntemplatesignature_request_compound_v2_1);
	printf("ezsigntemplatesignature_request_compound_v2 :\n%s\n", cJSON_Print(jsonezsigntemplatesignature_request_compound_v2_1));
	ezsigntemplatesignature_request_compound_v2_t* ezsigntemplatesignature_request_compound_v2_2 = ezsigntemplatesignature_request_compound_v2_parseFromJSON(jsonezsigntemplatesignature_request_compound_v2_1);
	cJSON* jsonezsigntemplatesignature_request_compound_v2_2 = ezsigntemplatesignature_request_compound_v2_convertToJSON(ezsigntemplatesignature_request_compound_v2_2);
	printf("repeating ezsigntemplatesignature_request_compound_v2:\n%s\n", cJSON_Print(jsonezsigntemplatesignature_request_compound_v2_2));
}

int main() {
  test_ezsigntemplatesignature_request_compound_v2(1);
  test_ezsigntemplatesignature_request_compound_v2(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatesignature_request_compound_v2_MAIN
#endif // ezsigntemplatesignature_request_compound_v2_TEST
