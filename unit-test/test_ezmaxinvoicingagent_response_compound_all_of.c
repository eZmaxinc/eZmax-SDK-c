#ifndef ezmaxinvoicingagent_response_compound_all_of_TEST
#define ezmaxinvoicingagent_response_compound_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezmaxinvoicingagent_response_compound_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezmaxinvoicingagent_response_compound_all_of.h"
ezmaxinvoicingagent_response_compound_all_of_t* instantiate_ezmaxinvoicingagent_response_compound_all_of(int include_optional);

#include "test_custom_contact_name_response.c"


ezmaxinvoicingagent_response_compound_all_of_t* instantiate_ezmaxinvoicingagent_response_compound_all_of(int include_optional) {
  ezmaxinvoicingagent_response_compound_all_of_t* ezmaxinvoicingagent_response_compound_all_of = NULL;
  if (include_optional) {
    ezmaxinvoicingagent_response_compound_all_of = ezmaxinvoicingagent_response_compound_all_of_create(
       // false, not to have infinite recursion
      instantiate_custom_contact_name_response(0)
    );
  } else {
    ezmaxinvoicingagent_response_compound_all_of = ezmaxinvoicingagent_response_compound_all_of_create(
      NULL
    );
  }

  return ezmaxinvoicingagent_response_compound_all_of;
}


#ifdef ezmaxinvoicingagent_response_compound_all_of_MAIN

void test_ezmaxinvoicingagent_response_compound_all_of(int include_optional) {
    ezmaxinvoicingagent_response_compound_all_of_t* ezmaxinvoicingagent_response_compound_all_of_1 = instantiate_ezmaxinvoicingagent_response_compound_all_of(include_optional);

	cJSON* jsonezmaxinvoicingagent_response_compound_all_of_1 = ezmaxinvoicingagent_response_compound_all_of_convertToJSON(ezmaxinvoicingagent_response_compound_all_of_1);
	printf("ezmaxinvoicingagent_response_compound_all_of :\n%s\n", cJSON_Print(jsonezmaxinvoicingagent_response_compound_all_of_1));
	ezmaxinvoicingagent_response_compound_all_of_t* ezmaxinvoicingagent_response_compound_all_of_2 = ezmaxinvoicingagent_response_compound_all_of_parseFromJSON(jsonezmaxinvoicingagent_response_compound_all_of_1);
	cJSON* jsonezmaxinvoicingagent_response_compound_all_of_2 = ezmaxinvoicingagent_response_compound_all_of_convertToJSON(ezmaxinvoicingagent_response_compound_all_of_2);
	printf("repeating ezmaxinvoicingagent_response_compound_all_of:\n%s\n", cJSON_Print(jsonezmaxinvoicingagent_response_compound_all_of_2));
}

int main() {
  test_ezmaxinvoicingagent_response_compound_all_of(1);
  test_ezmaxinvoicingagent_response_compound_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezmaxinvoicingagent_response_compound_all_of_MAIN
#endif // ezmaxinvoicingagent_response_compound_all_of_TEST
