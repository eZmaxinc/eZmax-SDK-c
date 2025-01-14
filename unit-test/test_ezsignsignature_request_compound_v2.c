#ifndef ezsignsignature_request_compound_v2_TEST
#define ezsignsignature_request_compound_v2_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignature_request_compound_v2_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignature_request_compound_v2.h"
ezsignsignature_request_compound_v2_t* instantiate_ezsignsignature_request_compound_v2(int include_optional);



ezsignsignature_request_compound_v2_t* instantiate_ezsignsignature_request_compound_v2(int include_optional) {
  ezsignsignature_request_compound_v2_t* ezsignsignature_request_compound_v2 = NULL;
  if (include_optional) {
    ezsignsignature_request_compound_v2 = ezsignsignature_request_compound_v2_create(
      49,
      20,
      1,
      200,
      300,
      200,
      200,
      1,
      ezmax_api_definition__full_ezsignsignature_request_compound_v2__"Name",
      97,
      "Please sign here if you agree to the terms",
      ezmax_api_definition__full_ezsignsignature_request_compound_v2__"TopLeft",
      ezmax_api_definition__full_ezsignsignature_request_compound_v2__"Normal",
      20,
      1,
      1,
      1,
      ezmax_api_definition__full_ezsignsignature_request_compound_v2__"Description",
      "Attachment",
      ezmax_api_definition__full_ezsignsignature_request_compound_v2__"Manual",
      1,
      75,
      "Foo",
      ezmax_api_definition__full_ezsignsignature_request_compound_v2__"None",
      "Phone number",
      "/[-0-9a-zA-Z.+_]+@[-0-9a-zA-Z.+_]+.[a-zA-Z]{2,4}/",
      ezmax_api_definition__full_ezsignsignature_request_compound_v2__"AllOf",
      1,
      list_createList(),
      list_createList()
    );
  } else {
    ezsignsignature_request_compound_v2 = ezsignsignature_request_compound_v2_create(
      49,
      20,
      1,
      200,
      300,
      200,
      200,
      1,
      ezmax_api_definition__full_ezsignsignature_request_compound_v2__"Name",
      97,
      "Please sign here if you agree to the terms",
      ezmax_api_definition__full_ezsignsignature_request_compound_v2__"TopLeft",
      ezmax_api_definition__full_ezsignsignature_request_compound_v2__"Normal",
      20,
      1,
      1,
      1,
      ezmax_api_definition__full_ezsignsignature_request_compound_v2__"Description",
      "Attachment",
      ezmax_api_definition__full_ezsignsignature_request_compound_v2__"Manual",
      1,
      75,
      "Foo",
      ezmax_api_definition__full_ezsignsignature_request_compound_v2__"None",
      "Phone number",
      "/[-0-9a-zA-Z.+_]+@[-0-9a-zA-Z.+_]+.[a-zA-Z]{2,4}/",
      ezmax_api_definition__full_ezsignsignature_request_compound_v2__"AllOf",
      1,
      list_createList(),
      list_createList()
    );
  }

  return ezsignsignature_request_compound_v2;
}


#ifdef ezsignsignature_request_compound_v2_MAIN

void test_ezsignsignature_request_compound_v2(int include_optional) {
    ezsignsignature_request_compound_v2_t* ezsignsignature_request_compound_v2_1 = instantiate_ezsignsignature_request_compound_v2(include_optional);

	cJSON* jsonezsignsignature_request_compound_v2_1 = ezsignsignature_request_compound_v2_convertToJSON(ezsignsignature_request_compound_v2_1);
	printf("ezsignsignature_request_compound_v2 :\n%s\n", cJSON_Print(jsonezsignsignature_request_compound_v2_1));
	ezsignsignature_request_compound_v2_t* ezsignsignature_request_compound_v2_2 = ezsignsignature_request_compound_v2_parseFromJSON(jsonezsignsignature_request_compound_v2_1);
	cJSON* jsonezsignsignature_request_compound_v2_2 = ezsignsignature_request_compound_v2_convertToJSON(ezsignsignature_request_compound_v2_2);
	printf("repeating ezsignsignature_request_compound_v2:\n%s\n", cJSON_Print(jsonezsignsignature_request_compound_v2_2));
}

int main() {
  test_ezsignsignature_request_compound_v2(1);
  test_ezsignsignature_request_compound_v2(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignature_request_compound_v2_MAIN
#endif // ezsignsignature_request_compound_v2_TEST
