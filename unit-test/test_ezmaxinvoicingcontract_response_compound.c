#ifndef ezmaxinvoicingcontract_response_compound_TEST
#define ezmaxinvoicingcontract_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezmaxinvoicingcontract_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezmaxinvoicingcontract_response_compound.h"
ezmaxinvoicingcontract_response_compound_t* instantiate_ezmaxinvoicingcontract_response_compound(int include_optional);

#include "test_common_audit.c"


ezmaxinvoicingcontract_response_compound_t* instantiate_ezmaxinvoicingcontract_response_compound(int include_optional) {
  ezmaxinvoicingcontract_response_compound_t* ezmaxinvoicingcontract_response_compound = NULL;
  if (include_optional) {
    ezmaxinvoicingcontract_response_compound = ezmaxinvoicingcontract_response_compound_create(
      28,
      ezmax_api_definition__full_ezmaxinvoicingcontract_response_compound__"Cheque",
      3,
      "2020-12-31",
      "2020-12-31",
      "335.42",
      "295.48",
      true,
       // false, not to have infinite recursion
      instantiate_common_audit(0)
    );
  } else {
    ezmaxinvoicingcontract_response_compound = ezmaxinvoicingcontract_response_compound_create(
      28,
      ezmax_api_definition__full_ezmaxinvoicingcontract_response_compound__"Cheque",
      3,
      "2020-12-31",
      "2020-12-31",
      "335.42",
      "295.48",
      true,
      NULL
    );
  }

  return ezmaxinvoicingcontract_response_compound;
}


#ifdef ezmaxinvoicingcontract_response_compound_MAIN

void test_ezmaxinvoicingcontract_response_compound(int include_optional) {
    ezmaxinvoicingcontract_response_compound_t* ezmaxinvoicingcontract_response_compound_1 = instantiate_ezmaxinvoicingcontract_response_compound(include_optional);

	cJSON* jsonezmaxinvoicingcontract_response_compound_1 = ezmaxinvoicingcontract_response_compound_convertToJSON(ezmaxinvoicingcontract_response_compound_1);
	printf("ezmaxinvoicingcontract_response_compound :\n%s\n", cJSON_Print(jsonezmaxinvoicingcontract_response_compound_1));
	ezmaxinvoicingcontract_response_compound_t* ezmaxinvoicingcontract_response_compound_2 = ezmaxinvoicingcontract_response_compound_parseFromJSON(jsonezmaxinvoicingcontract_response_compound_1);
	cJSON* jsonezmaxinvoicingcontract_response_compound_2 = ezmaxinvoicingcontract_response_compound_convertToJSON(ezmaxinvoicingcontract_response_compound_2);
	printf("repeating ezmaxinvoicingcontract_response_compound:\n%s\n", cJSON_Print(jsonezmaxinvoicingcontract_response_compound_2));
}

int main() {
  test_ezmaxinvoicingcontract_response_compound(1);
  test_ezmaxinvoicingcontract_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezmaxinvoicingcontract_response_compound_MAIN
#endif // ezmaxinvoicingcontract_response_compound_TEST
