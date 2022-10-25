#ifndef ezmaxinvoicinguser_response_compound_TEST
#define ezmaxinvoicinguser_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezmaxinvoicinguser_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezmaxinvoicinguser_response_compound.h"
ezmaxinvoicinguser_response_compound_t* instantiate_ezmaxinvoicinguser_response_compound(int include_optional);

#include "test_custom_contact_name_response.c"


ezmaxinvoicinguser_response_compound_t* instantiate_ezmaxinvoicinguser_response_compound(int include_optional) {
  ezmaxinvoicinguser_response_compound_t* ezmaxinvoicinguser_response_compound = NULL;
  if (include_optional) {
    ezmaxinvoicinguser_response_compound = ezmaxinvoicinguser_response_compound_create(
      202,
      28,
      1,
      "Default",
      70,
      243,
      true,
      true,
      ezmax_api_definition__full_ezmaxinvoicinguser_response_compound__"Charge",
       // false, not to have infinite recursion
      instantiate_custom_contact_name_response(0)
    );
  } else {
    ezmaxinvoicinguser_response_compound = ezmaxinvoicinguser_response_compound_create(
      202,
      28,
      1,
      "Default",
      70,
      243,
      true,
      true,
      ezmax_api_definition__full_ezmaxinvoicinguser_response_compound__"Charge",
      NULL
    );
  }

  return ezmaxinvoicinguser_response_compound;
}


#ifdef ezmaxinvoicinguser_response_compound_MAIN

void test_ezmaxinvoicinguser_response_compound(int include_optional) {
    ezmaxinvoicinguser_response_compound_t* ezmaxinvoicinguser_response_compound_1 = instantiate_ezmaxinvoicinguser_response_compound(include_optional);

	cJSON* jsonezmaxinvoicinguser_response_compound_1 = ezmaxinvoicinguser_response_compound_convertToJSON(ezmaxinvoicinguser_response_compound_1);
	printf("ezmaxinvoicinguser_response_compound :\n%s\n", cJSON_Print(jsonezmaxinvoicinguser_response_compound_1));
	ezmaxinvoicinguser_response_compound_t* ezmaxinvoicinguser_response_compound_2 = ezmaxinvoicinguser_response_compound_parseFromJSON(jsonezmaxinvoicinguser_response_compound_1);
	cJSON* jsonezmaxinvoicinguser_response_compound_2 = ezmaxinvoicinguser_response_compound_convertToJSON(ezmaxinvoicinguser_response_compound_2);
	printf("repeating ezmaxinvoicinguser_response_compound:\n%s\n", cJSON_Print(jsonezmaxinvoicinguser_response_compound_2));
}

int main() {
  test_ezmaxinvoicinguser_response_compound(1);
  test_ezmaxinvoicinguser_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezmaxinvoicinguser_response_compound_MAIN
#endif // ezmaxinvoicinguser_response_compound_TEST
