#ifndef ezsignsignature_request_compound_TEST
#define ezsignsignature_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignature_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignature_request_compound.h"
ezsignsignature_request_compound_t* instantiate_ezsignsignature_request_compound(int include_optional);



ezsignsignature_request_compound_t* instantiate_ezsignsignature_request_compound(int include_optional) {
  ezsignsignature_request_compound_t* ezsignsignature_request_compound = NULL;
  if (include_optional) {
    ezsignsignature_request_compound = ezsignsignature_request_compound_create(
      49,
      20,
      1,
      200,
      300,
      200,
      200,
      1,
      ezmax_api_definition__full_ezsignsignature_request_compound__"Name",
      97,
      "Please sign here if you agree to the terms",
      ezmax_api_definition__full_ezsignsignature_request_compound__"TopLeft",
      ezmax_api_definition__full_ezsignsignature_request_compound__"Normal",
      20,
      1,
      1,
      1,
      ezmax_api_definition__full_ezsignsignature_request_compound__"Description",
      "Attachment",
      ezmax_api_definition__full_ezsignsignature_request_compound__"Manual",
      1,
      75,
      "Foo",
      ezmax_api_definition__full_ezsignsignature_request_compound__"None",
      "Phone number",
      "^[0-9]{9}$",
      ezmax_api_definition__full_ezsignsignature_request_compound__"AllOf",
      1,
      list_createList(),
      list_createList()
    );
  } else {
    ezsignsignature_request_compound = ezsignsignature_request_compound_create(
      49,
      20,
      1,
      200,
      300,
      200,
      200,
      1,
      ezmax_api_definition__full_ezsignsignature_request_compound__"Name",
      97,
      "Please sign here if you agree to the terms",
      ezmax_api_definition__full_ezsignsignature_request_compound__"TopLeft",
      ezmax_api_definition__full_ezsignsignature_request_compound__"Normal",
      20,
      1,
      1,
      1,
      ezmax_api_definition__full_ezsignsignature_request_compound__"Description",
      "Attachment",
      ezmax_api_definition__full_ezsignsignature_request_compound__"Manual",
      1,
      75,
      "Foo",
      ezmax_api_definition__full_ezsignsignature_request_compound__"None",
      "Phone number",
      "^[0-9]{9}$",
      ezmax_api_definition__full_ezsignsignature_request_compound__"AllOf",
      1,
      list_createList(),
      list_createList()
    );
  }

  return ezsignsignature_request_compound;
}


#ifdef ezsignsignature_request_compound_MAIN

void test_ezsignsignature_request_compound(int include_optional) {
    ezsignsignature_request_compound_t* ezsignsignature_request_compound_1 = instantiate_ezsignsignature_request_compound(include_optional);

	cJSON* jsonezsignsignature_request_compound_1 = ezsignsignature_request_compound_convertToJSON(ezsignsignature_request_compound_1);
	printf("ezsignsignature_request_compound :\n%s\n", cJSON_Print(jsonezsignsignature_request_compound_1));
	ezsignsignature_request_compound_t* ezsignsignature_request_compound_2 = ezsignsignature_request_compound_parseFromJSON(jsonezsignsignature_request_compound_1);
	cJSON* jsonezsignsignature_request_compound_2 = ezsignsignature_request_compound_convertToJSON(ezsignsignature_request_compound_2);
	printf("repeating ezsignsignature_request_compound:\n%s\n", cJSON_Print(jsonezsignsignature_request_compound_2));
}

int main() {
  test_ezsignsignature_request_compound(1);
  test_ezsignsignature_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignature_request_compound_MAIN
#endif // ezsignsignature_request_compound_TEST
