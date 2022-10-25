#ifndef ezmaxinvoicingsummaryexternaldetail_response_compound_TEST
#define ezmaxinvoicingsummaryexternaldetail_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezmaxinvoicingsummaryexternaldetail_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezmaxinvoicingsummaryexternaldetail_response_compound.h"
ezmaxinvoicingsummaryexternaldetail_response_compound_t* instantiate_ezmaxinvoicingsummaryexternaldetail_response_compound(int include_optional);



ezmaxinvoicingsummaryexternaldetail_response_compound_t* instantiate_ezmaxinvoicingsummaryexternaldetail_response_compound(int include_optional) {
  ezmaxinvoicingsummaryexternaldetail_response_compound_t* ezmaxinvoicingsummaryexternaldetail_response_compound = NULL;
  if (include_optional) {
    ezmaxinvoicingsummaryexternaldetail_response_compound = ezmaxinvoicingsummaryexternaldetail_response_compound_create(
      163,
      177,
      172,
      "eZmax (License)",
      "815.61",
      "382.88",
      "608.18",
      "869.71",
      true
    );
  } else {
    ezmaxinvoicingsummaryexternaldetail_response_compound = ezmaxinvoicingsummaryexternaldetail_response_compound_create(
      163,
      177,
      172,
      "eZmax (License)",
      "815.61",
      "382.88",
      "608.18",
      "869.71",
      true
    );
  }

  return ezmaxinvoicingsummaryexternaldetail_response_compound;
}


#ifdef ezmaxinvoicingsummaryexternaldetail_response_compound_MAIN

void test_ezmaxinvoicingsummaryexternaldetail_response_compound(int include_optional) {
    ezmaxinvoicingsummaryexternaldetail_response_compound_t* ezmaxinvoicingsummaryexternaldetail_response_compound_1 = instantiate_ezmaxinvoicingsummaryexternaldetail_response_compound(include_optional);

	cJSON* jsonezmaxinvoicingsummaryexternaldetail_response_compound_1 = ezmaxinvoicingsummaryexternaldetail_response_compound_convertToJSON(ezmaxinvoicingsummaryexternaldetail_response_compound_1);
	printf("ezmaxinvoicingsummaryexternaldetail_response_compound :\n%s\n", cJSON_Print(jsonezmaxinvoicingsummaryexternaldetail_response_compound_1));
	ezmaxinvoicingsummaryexternaldetail_response_compound_t* ezmaxinvoicingsummaryexternaldetail_response_compound_2 = ezmaxinvoicingsummaryexternaldetail_response_compound_parseFromJSON(jsonezmaxinvoicingsummaryexternaldetail_response_compound_1);
	cJSON* jsonezmaxinvoicingsummaryexternaldetail_response_compound_2 = ezmaxinvoicingsummaryexternaldetail_response_compound_convertToJSON(ezmaxinvoicingsummaryexternaldetail_response_compound_2);
	printf("repeating ezmaxinvoicingsummaryexternaldetail_response_compound:\n%s\n", cJSON_Print(jsonezmaxinvoicingsummaryexternaldetail_response_compound_2));
}

int main() {
  test_ezmaxinvoicingsummaryexternaldetail_response_compound(1);
  test_ezmaxinvoicingsummaryexternaldetail_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezmaxinvoicingsummaryexternaldetail_response_compound_MAIN
#endif // ezmaxinvoicingsummaryexternaldetail_response_compound_TEST
