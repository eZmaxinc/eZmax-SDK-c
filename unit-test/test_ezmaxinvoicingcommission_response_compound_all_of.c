#ifndef ezmaxinvoicingcommission_response_compound_all_of_TEST
#define ezmaxinvoicingcommission_response_compound_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezmaxinvoicingcommission_response_compound_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezmaxinvoicingcommission_response_compound_all_of.h"
ezmaxinvoicingcommission_response_compound_all_of_t* instantiate_ezmaxinvoicingcommission_response_compound_all_of(int include_optional);

#include "test_custom_contact_name_response.c"


ezmaxinvoicingcommission_response_compound_all_of_t* instantiate_ezmaxinvoicingcommission_response_compound_all_of(int include_optional) {
  ezmaxinvoicingcommission_response_compound_all_of_t* ezmaxinvoicingcommission_response_compound_all_of = NULL;
  if (include_optional) {
    ezmaxinvoicingcommission_response_compound_all_of = ezmaxinvoicingcommission_response_compound_all_of_create(
       // false, not to have infinite recursion
      instantiate_custom_contact_name_response(0)
    );
  } else {
    ezmaxinvoicingcommission_response_compound_all_of = ezmaxinvoicingcommission_response_compound_all_of_create(
      NULL
    );
  }

  return ezmaxinvoicingcommission_response_compound_all_of;
}


#ifdef ezmaxinvoicingcommission_response_compound_all_of_MAIN

void test_ezmaxinvoicingcommission_response_compound_all_of(int include_optional) {
    ezmaxinvoicingcommission_response_compound_all_of_t* ezmaxinvoicingcommission_response_compound_all_of_1 = instantiate_ezmaxinvoicingcommission_response_compound_all_of(include_optional);

	cJSON* jsonezmaxinvoicingcommission_response_compound_all_of_1 = ezmaxinvoicingcommission_response_compound_all_of_convertToJSON(ezmaxinvoicingcommission_response_compound_all_of_1);
	printf("ezmaxinvoicingcommission_response_compound_all_of :\n%s\n", cJSON_Print(jsonezmaxinvoicingcommission_response_compound_all_of_1));
	ezmaxinvoicingcommission_response_compound_all_of_t* ezmaxinvoicingcommission_response_compound_all_of_2 = ezmaxinvoicingcommission_response_compound_all_of_parseFromJSON(jsonezmaxinvoicingcommission_response_compound_all_of_1);
	cJSON* jsonezmaxinvoicingcommission_response_compound_all_of_2 = ezmaxinvoicingcommission_response_compound_all_of_convertToJSON(ezmaxinvoicingcommission_response_compound_all_of_2);
	printf("repeating ezmaxinvoicingcommission_response_compound_all_of:\n%s\n", cJSON_Print(jsonezmaxinvoicingcommission_response_compound_all_of_2));
}

int main() {
  test_ezmaxinvoicingcommission_response_compound_all_of(1);
  test_ezmaxinvoicingcommission_response_compound_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezmaxinvoicingcommission_response_compound_all_of_MAIN
#endif // ezmaxinvoicingcommission_response_compound_all_of_TEST
