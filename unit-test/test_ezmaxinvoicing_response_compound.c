#ifndef ezmaxinvoicing_response_compound_TEST
#define ezmaxinvoicing_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezmaxinvoicing_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezmaxinvoicing_response_compound.h"
ezmaxinvoicing_response_compound_t* instantiate_ezmaxinvoicing_response_compound(int include_optional);

#include "test_common_audit.c"
#include "test_ezmaxinvoicingcontract_response_compound.c"
#include "test_custom_ezmaxpricing_response.c"


ezmaxinvoicing_response_compound_t* instantiate_ezmaxinvoicing_response_compound(int include_optional) {
  ezmaxinvoicing_response_compound_t* ezmaxinvoicing_response_compound = NULL;
  if (include_optional) {
    ezmaxinvoicing_response_compound = ezmaxinvoicing_response_compound_create(
      28,
      28,
      28,
      28,
      "eZsign (Pro)",
      "2022-01",
      28,
      ezmax_api_definition__full_ezmaxinvoicing_response_compound__"Cheque",
      "1.00",
      1,
      "1.00",
      true,
       // false, not to have infinite recursion
      instantiate_common_audit(0),
       // false, not to have infinite recursion
      instantiate_ezmaxinvoicingcontract_response_compound(0),
       // false, not to have infinite recursion
      instantiate_custom_ezmaxpricing_response(0),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    ezmaxinvoicing_response_compound = ezmaxinvoicing_response_compound_create(
      28,
      28,
      28,
      28,
      "eZsign (Pro)",
      "2022-01",
      28,
      ezmax_api_definition__full_ezmaxinvoicing_response_compound__"Cheque",
      "1.00",
      1,
      "1.00",
      true,
      NULL,
      NULL,
      NULL,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return ezmaxinvoicing_response_compound;
}


#ifdef ezmaxinvoicing_response_compound_MAIN

void test_ezmaxinvoicing_response_compound(int include_optional) {
    ezmaxinvoicing_response_compound_t* ezmaxinvoicing_response_compound_1 = instantiate_ezmaxinvoicing_response_compound(include_optional);

	cJSON* jsonezmaxinvoicing_response_compound_1 = ezmaxinvoicing_response_compound_convertToJSON(ezmaxinvoicing_response_compound_1);
	printf("ezmaxinvoicing_response_compound :\n%s\n", cJSON_Print(jsonezmaxinvoicing_response_compound_1));
	ezmaxinvoicing_response_compound_t* ezmaxinvoicing_response_compound_2 = ezmaxinvoicing_response_compound_parseFromJSON(jsonezmaxinvoicing_response_compound_1);
	cJSON* jsonezmaxinvoicing_response_compound_2 = ezmaxinvoicing_response_compound_convertToJSON(ezmaxinvoicing_response_compound_2);
	printf("repeating ezmaxinvoicing_response_compound:\n%s\n", cJSON_Print(jsonezmaxinvoicing_response_compound_2));
}

int main() {
  test_ezmaxinvoicing_response_compound(1);
  test_ezmaxinvoicing_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezmaxinvoicing_response_compound_MAIN
#endif // ezmaxinvoicing_response_compound_TEST
