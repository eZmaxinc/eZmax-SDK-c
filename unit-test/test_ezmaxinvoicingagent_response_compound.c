#ifndef ezmaxinvoicingagent_response_compound_TEST
#define ezmaxinvoicingagent_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezmaxinvoicingagent_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezmaxinvoicingagent_response_compound.h"
ezmaxinvoicingagent_response_compound_t* instantiate_ezmaxinvoicingagent_response_compound(int include_optional);

#include "test_custom_contact_name_response.c"


ezmaxinvoicingagent_response_compound_t* instantiate_ezmaxinvoicingagent_response_compound(int include_optional) {
  ezmaxinvoicingagent_response_compound_t* ezmaxinvoicingagent_response_compound = NULL;
  if (include_optional) {
    ezmaxinvoicingagent_response_compound = ezmaxinvoicingagent_response_compound_create(
      181,
      28,
      1,
      "Default",
      1,
      26,
      42,
      157,
      30,
      113,
      51,
      213,
      198,
      107,
      160,
      true,
      true,
      ezmax_api_definition__full_ezmaxinvoicingagent_response_compound__"Charge",
      true,
      ezmax_api_definition__full_ezmaxinvoicingagent_response_compound__"Charge",
       // false, not to have infinite recursion
      instantiate_custom_contact_name_response(0)
    );
  } else {
    ezmaxinvoicingagent_response_compound = ezmaxinvoicingagent_response_compound_create(
      181,
      28,
      1,
      "Default",
      1,
      26,
      42,
      157,
      30,
      113,
      51,
      213,
      198,
      107,
      160,
      true,
      true,
      ezmax_api_definition__full_ezmaxinvoicingagent_response_compound__"Charge",
      true,
      ezmax_api_definition__full_ezmaxinvoicingagent_response_compound__"Charge",
      NULL
    );
  }

  return ezmaxinvoicingagent_response_compound;
}


#ifdef ezmaxinvoicingagent_response_compound_MAIN

void test_ezmaxinvoicingagent_response_compound(int include_optional) {
    ezmaxinvoicingagent_response_compound_t* ezmaxinvoicingagent_response_compound_1 = instantiate_ezmaxinvoicingagent_response_compound(include_optional);

	cJSON* jsonezmaxinvoicingagent_response_compound_1 = ezmaxinvoicingagent_response_compound_convertToJSON(ezmaxinvoicingagent_response_compound_1);
	printf("ezmaxinvoicingagent_response_compound :\n%s\n", cJSON_Print(jsonezmaxinvoicingagent_response_compound_1));
	ezmaxinvoicingagent_response_compound_t* ezmaxinvoicingagent_response_compound_2 = ezmaxinvoicingagent_response_compound_parseFromJSON(jsonezmaxinvoicingagent_response_compound_1);
	cJSON* jsonezmaxinvoicingagent_response_compound_2 = ezmaxinvoicingagent_response_compound_convertToJSON(ezmaxinvoicingagent_response_compound_2);
	printf("repeating ezmaxinvoicingagent_response_compound:\n%s\n", cJSON_Print(jsonezmaxinvoicingagent_response_compound_2));
}

int main() {
  test_ezmaxinvoicingagent_response_compound(1);
  test_ezmaxinvoicingagent_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezmaxinvoicingagent_response_compound_MAIN
#endif // ezmaxinvoicingagent_response_compound_TEST
