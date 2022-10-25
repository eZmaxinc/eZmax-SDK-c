#ifndef ezmaxinvoicingcommission_response_compound_TEST
#define ezmaxinvoicingcommission_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezmaxinvoicingcommission_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezmaxinvoicingcommission_response_compound.h"
ezmaxinvoicingcommission_response_compound_t* instantiate_ezmaxinvoicingcommission_response_compound(int include_optional);

#include "test_custom_contact_name_response.c"


ezmaxinvoicingcommission_response_compound_t* instantiate_ezmaxinvoicingcommission_response_compound(int include_optional) {
  ezmaxinvoicingcommission_response_compound_t* ezmaxinvoicingcommission_response_compound = NULL;
  if (include_optional) {
    ezmaxinvoicingcommission_response_compound = ezmaxinvoicingcommission_response_compound_create(
      36,
      241,
      12,
      21,
      "2020-12-31",
      "2020-12-31",
      30,
      "450.34",
       // false, not to have infinite recursion
      instantiate_custom_contact_name_response(0)
    );
  } else {
    ezmaxinvoicingcommission_response_compound = ezmaxinvoicingcommission_response_compound_create(
      36,
      241,
      12,
      21,
      "2020-12-31",
      "2020-12-31",
      30,
      "450.34",
      NULL
    );
  }

  return ezmaxinvoicingcommission_response_compound;
}


#ifdef ezmaxinvoicingcommission_response_compound_MAIN

void test_ezmaxinvoicingcommission_response_compound(int include_optional) {
    ezmaxinvoicingcommission_response_compound_t* ezmaxinvoicingcommission_response_compound_1 = instantiate_ezmaxinvoicingcommission_response_compound(include_optional);

	cJSON* jsonezmaxinvoicingcommission_response_compound_1 = ezmaxinvoicingcommission_response_compound_convertToJSON(ezmaxinvoicingcommission_response_compound_1);
	printf("ezmaxinvoicingcommission_response_compound :\n%s\n", cJSON_Print(jsonezmaxinvoicingcommission_response_compound_1));
	ezmaxinvoicingcommission_response_compound_t* ezmaxinvoicingcommission_response_compound_2 = ezmaxinvoicingcommission_response_compound_parseFromJSON(jsonezmaxinvoicingcommission_response_compound_1);
	cJSON* jsonezmaxinvoicingcommission_response_compound_2 = ezmaxinvoicingcommission_response_compound_convertToJSON(ezmaxinvoicingcommission_response_compound_2);
	printf("repeating ezmaxinvoicingcommission_response_compound:\n%s\n", cJSON_Print(jsonezmaxinvoicingcommission_response_compound_2));
}

int main() {
  test_ezmaxinvoicingcommission_response_compound(1);
  test_ezmaxinvoicingcommission_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezmaxinvoicingcommission_response_compound_MAIN
#endif // ezmaxinvoicingcommission_response_compound_TEST
