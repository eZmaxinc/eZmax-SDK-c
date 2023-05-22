#ifndef ezmaxinvoicingsummaryinternaldetail_response_compound_TEST
#define ezmaxinvoicingsummaryinternaldetail_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezmaxinvoicingsummaryinternaldetail_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezmaxinvoicingsummaryinternaldetail_response_compound.h"
ezmaxinvoicingsummaryinternaldetail_response_compound_t* instantiate_ezmaxinvoicingsummaryinternaldetail_response_compound(int include_optional);



ezmaxinvoicingsummaryinternaldetail_response_compound_t* instantiate_ezmaxinvoicingsummaryinternaldetail_response_compound(int include_optional) {
  ezmaxinvoicingsummaryinternaldetail_response_compound_t* ezmaxinvoicingsummaryinternaldetail_response_compound = NULL;
  if (include_optional) {
    ezmaxinvoicingsummaryinternaldetail_response_compound = ezmaxinvoicingsummaryinternaldetail_response_compound_create(
      73,
      57,
      172,
      "eZmax (License)",
      83,
      "ACME Inc",
      "350.32",
      "625.41",
      "560.81",
      "510.77",
      true,
      "This is an exemple of help message"
    );
  } else {
    ezmaxinvoicingsummaryinternaldetail_response_compound = ezmaxinvoicingsummaryinternaldetail_response_compound_create(
      73,
      57,
      172,
      "eZmax (License)",
      83,
      "ACME Inc",
      "350.32",
      "625.41",
      "560.81",
      "510.77",
      true,
      "This is an exemple of help message"
    );
  }

  return ezmaxinvoicingsummaryinternaldetail_response_compound;
}


#ifdef ezmaxinvoicingsummaryinternaldetail_response_compound_MAIN

void test_ezmaxinvoicingsummaryinternaldetail_response_compound(int include_optional) {
    ezmaxinvoicingsummaryinternaldetail_response_compound_t* ezmaxinvoicingsummaryinternaldetail_response_compound_1 = instantiate_ezmaxinvoicingsummaryinternaldetail_response_compound(include_optional);

	cJSON* jsonezmaxinvoicingsummaryinternaldetail_response_compound_1 = ezmaxinvoicingsummaryinternaldetail_response_compound_convertToJSON(ezmaxinvoicingsummaryinternaldetail_response_compound_1);
	printf("ezmaxinvoicingsummaryinternaldetail_response_compound :\n%s\n", cJSON_Print(jsonezmaxinvoicingsummaryinternaldetail_response_compound_1));
	ezmaxinvoicingsummaryinternaldetail_response_compound_t* ezmaxinvoicingsummaryinternaldetail_response_compound_2 = ezmaxinvoicingsummaryinternaldetail_response_compound_parseFromJSON(jsonezmaxinvoicingsummaryinternaldetail_response_compound_1);
	cJSON* jsonezmaxinvoicingsummaryinternaldetail_response_compound_2 = ezmaxinvoicingsummaryinternaldetail_response_compound_convertToJSON(ezmaxinvoicingsummaryinternaldetail_response_compound_2);
	printf("repeating ezmaxinvoicingsummaryinternaldetail_response_compound:\n%s\n", cJSON_Print(jsonezmaxinvoicingsummaryinternaldetail_response_compound_2));
}

int main() {
  test_ezmaxinvoicingsummaryinternaldetail_response_compound(1);
  test_ezmaxinvoicingsummaryinternaldetail_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezmaxinvoicingsummaryinternaldetail_response_compound_MAIN
#endif // ezmaxinvoicingsummaryinternaldetail_response_compound_TEST
