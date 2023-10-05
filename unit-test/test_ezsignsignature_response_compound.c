#ifndef ezsignsignature_response_compound_TEST
#define ezsignsignature_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignature_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignature_response_compound.h"
ezsignsignature_response_compound_t* instantiate_ezsignsignature_response_compound(int include_optional);

#include "test_custom_contact_name_response.c"
#include "test_custom_contact_name_response.c"
#include "test_signature_response_compound.c"
#include "test_custom_creditcardtransaction_response.c"


ezsignsignature_response_compound_t* instantiate_ezsignsignature_response_compound(int include_optional) {
  ezsignsignature_response_compound_t* ezsignsignature_response_compound = NULL;
  if (include_optional) {
    ezsignsignature_response_compound = ezsignsignature_response_compound_create(
      49,
      97,
      20,
      1,
      200,
      300,
      200,
      200,
      1,
      ezmax_api_definition__full_ezsignsignature_response_compound__"Name",
      "Please sign here if you agree to the terms",
      ezmax_api_definition__full_ezsignsignature_response_compound__"TopLeft",
      ezmax_api_definition__full_ezsignsignature_response_compound__"Normal",
      1,
      "Attachment",
      ezmax_api_definition__full_ezsignsignature_response_compound__"Description",
      1,
      20,
      "2020-12-31 23:59:59",
      7,
      "Montreal",
      75,
      ezmax_api_definition__full_ezsignsignature_response_compound__"None",
      ezmax_api_definition__full_ezsignsignature_response_compound__"AllOf",
      "/[-0-9a-zA-Z.+_]+@[-0-9a-zA-Z.+_]+.[a-zA-Z]{2,4}/",
       // false, not to have infinite recursion
      instantiate_custom_contact_name_response(0),
       // false, not to have infinite recursion
      instantiate_custom_contact_name_response(0),
       // false, not to have infinite recursion
      instantiate_signature_response_compound(0),
      1,
      list_createList(),
       // false, not to have infinite recursion
      instantiate_custom_creditcardtransaction_response(0),
      list_createList()
    );
  } else {
    ezsignsignature_response_compound = ezsignsignature_response_compound_create(
      49,
      97,
      20,
      1,
      200,
      300,
      200,
      200,
      1,
      ezmax_api_definition__full_ezsignsignature_response_compound__"Name",
      "Please sign here if you agree to the terms",
      ezmax_api_definition__full_ezsignsignature_response_compound__"TopLeft",
      ezmax_api_definition__full_ezsignsignature_response_compound__"Normal",
      1,
      "Attachment",
      ezmax_api_definition__full_ezsignsignature_response_compound__"Description",
      1,
      20,
      "2020-12-31 23:59:59",
      7,
      "Montreal",
      75,
      ezmax_api_definition__full_ezsignsignature_response_compound__"None",
      ezmax_api_definition__full_ezsignsignature_response_compound__"AllOf",
      "/[-0-9a-zA-Z.+_]+@[-0-9a-zA-Z.+_]+.[a-zA-Z]{2,4}/",
      NULL,
      NULL,
      NULL,
      1,
      list_createList(),
      NULL,
      list_createList()
    );
  }

  return ezsignsignature_response_compound;
}


#ifdef ezsignsignature_response_compound_MAIN

void test_ezsignsignature_response_compound(int include_optional) {
    ezsignsignature_response_compound_t* ezsignsignature_response_compound_1 = instantiate_ezsignsignature_response_compound(include_optional);

	cJSON* jsonezsignsignature_response_compound_1 = ezsignsignature_response_compound_convertToJSON(ezsignsignature_response_compound_1);
	printf("ezsignsignature_response_compound :\n%s\n", cJSON_Print(jsonezsignsignature_response_compound_1));
	ezsignsignature_response_compound_t* ezsignsignature_response_compound_2 = ezsignsignature_response_compound_parseFromJSON(jsonezsignsignature_response_compound_1);
	cJSON* jsonezsignsignature_response_compound_2 = ezsignsignature_response_compound_convertToJSON(ezsignsignature_response_compound_2);
	printf("repeating ezsignsignature_response_compound:\n%s\n", cJSON_Print(jsonezsignsignature_response_compound_2));
}

int main() {
  test_ezsignsignature_response_compound(1);
  test_ezsignsignature_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignature_response_compound_MAIN
#endif // ezsignsignature_response_compound_TEST
