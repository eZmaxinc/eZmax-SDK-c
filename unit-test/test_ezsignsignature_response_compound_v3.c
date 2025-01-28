#ifndef ezsignsignature_response_compound_v3_TEST
#define ezsignsignature_response_compound_v3_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignature_response_compound_v3_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignature_response_compound_v3.h"
ezsignsignature_response_compound_v3_t* instantiate_ezsignsignature_response_compound_v3(int include_optional);

#include "test_custom_contact_name_response.c"
#include "test_custom_contact_name_response.c"
#include "test_signature_response_compound.c"
#include "test_custom_creditcardtransaction_response.c"


ezsignsignature_response_compound_v3_t* instantiate_ezsignsignature_response_compound_v3(int include_optional) {
  ezsignsignature_response_compound_v3_t* ezsignsignature_response_compound_v3 = NULL;
  if (include_optional) {
    ezsignsignature_response_compound_v3 = ezsignsignature_response_compound_v3_create(
      49,
      97,
      20,
      194,
      1,
      "I approve this document",
      1,
      200,
      300,
      200,
      200,
      1,
      1,
      ezmax_api_definition__full_ezsignsignature_response_compound_v3__"Name",
      "Please sign here if you agree to the terms",
      ezmax_api_definition__full_ezsignsignature_response_compound_v3__"TopLeft",
      ezmax_api_definition__full_ezsignsignature_response_compound_v3__"Normal",
      1,
      "Attachment",
      ezmax_api_definition__full_ezsignsignature_response_compound_v3__"Description",
      ezmax_api_definition__full_ezsignsignature_response_compound_v3__"Manual",
      1,
      1,
      1,
      20,
      "2020-12-31 23:59:59",
      7,
      "Montreal",
      75,
      ezmax_api_definition__full_ezsignsignature_response_compound_v3__"None",
      "Phone number",
      ezmax_api_definition__full_ezsignsignature_response_compound_v3__"AllOf",
      "Foo",
      "^[0-9]{9}$",
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
    ezsignsignature_response_compound_v3 = ezsignsignature_response_compound_v3_create(
      49,
      97,
      20,
      194,
      1,
      "I approve this document",
      1,
      200,
      300,
      200,
      200,
      1,
      1,
      ezmax_api_definition__full_ezsignsignature_response_compound_v3__"Name",
      "Please sign here if you agree to the terms",
      ezmax_api_definition__full_ezsignsignature_response_compound_v3__"TopLeft",
      ezmax_api_definition__full_ezsignsignature_response_compound_v3__"Normal",
      1,
      "Attachment",
      ezmax_api_definition__full_ezsignsignature_response_compound_v3__"Description",
      ezmax_api_definition__full_ezsignsignature_response_compound_v3__"Manual",
      1,
      1,
      1,
      20,
      "2020-12-31 23:59:59",
      7,
      "Montreal",
      75,
      ezmax_api_definition__full_ezsignsignature_response_compound_v3__"None",
      "Phone number",
      ezmax_api_definition__full_ezsignsignature_response_compound_v3__"AllOf",
      "Foo",
      "^[0-9]{9}$",
      NULL,
      NULL,
      NULL,
      1,
      list_createList(),
      NULL,
      list_createList()
    );
  }

  return ezsignsignature_response_compound_v3;
}


#ifdef ezsignsignature_response_compound_v3_MAIN

void test_ezsignsignature_response_compound_v3(int include_optional) {
    ezsignsignature_response_compound_v3_t* ezsignsignature_response_compound_v3_1 = instantiate_ezsignsignature_response_compound_v3(include_optional);

	cJSON* jsonezsignsignature_response_compound_v3_1 = ezsignsignature_response_compound_v3_convertToJSON(ezsignsignature_response_compound_v3_1);
	printf("ezsignsignature_response_compound_v3 :\n%s\n", cJSON_Print(jsonezsignsignature_response_compound_v3_1));
	ezsignsignature_response_compound_v3_t* ezsignsignature_response_compound_v3_2 = ezsignsignature_response_compound_v3_parseFromJSON(jsonezsignsignature_response_compound_v3_1);
	cJSON* jsonezsignsignature_response_compound_v3_2 = ezsignsignature_response_compound_v3_convertToJSON(ezsignsignature_response_compound_v3_2);
	printf("repeating ezsignsignature_response_compound_v3:\n%s\n", cJSON_Print(jsonezsignsignature_response_compound_v3_2));
}

int main() {
  test_ezsignsignature_response_compound_v3(1);
  test_ezsignsignature_response_compound_v3(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignature_response_compound_v3_MAIN
#endif // ezsignsignature_response_compound_v3_TEST
