#ifndef ezmaxinvoicingsummaryglobal_response_compound_TEST
#define ezmaxinvoicingsummaryglobal_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezmaxinvoicingsummaryglobal_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezmaxinvoicingsummaryglobal_response_compound.h"
ezmaxinvoicingsummaryglobal_response_compound_t* instantiate_ezmaxinvoicingsummaryglobal_response_compound(int include_optional);



ezmaxinvoicingsummaryglobal_response_compound_t* instantiate_ezmaxinvoicingsummaryglobal_response_compound(int include_optional) {
  ezmaxinvoicingsummaryglobal_response_compound_t* ezmaxinvoicingsummaryglobal_response_compound = NULL;
  if (include_optional) {
    ezmaxinvoicingsummaryglobal_response_compound = ezmaxinvoicingsummaryglobal_response_compound_create(
      241,
      28,
      172,
      "eZmax (License)",
      "2020-12-31",
      "2020-12-31",
      30,
      "649.08",
      "581.56",
      "200.00",
      "0.00",
      "0.00",
      "2.00",
      "198.00",
      "685.88",
      "266.49",
      "521.71",
      true,
      list_createList()
    );
  } else {
    ezmaxinvoicingsummaryglobal_response_compound = ezmaxinvoicingsummaryglobal_response_compound_create(
      241,
      28,
      172,
      "eZmax (License)",
      "2020-12-31",
      "2020-12-31",
      30,
      "649.08",
      "581.56",
      "200.00",
      "0.00",
      "0.00",
      "2.00",
      "198.00",
      "685.88",
      "266.49",
      "521.71",
      true,
      list_createList()
    );
  }

  return ezmaxinvoicingsummaryglobal_response_compound;
}


#ifdef ezmaxinvoicingsummaryglobal_response_compound_MAIN

void test_ezmaxinvoicingsummaryglobal_response_compound(int include_optional) {
    ezmaxinvoicingsummaryglobal_response_compound_t* ezmaxinvoicingsummaryglobal_response_compound_1 = instantiate_ezmaxinvoicingsummaryglobal_response_compound(include_optional);

	cJSON* jsonezmaxinvoicingsummaryglobal_response_compound_1 = ezmaxinvoicingsummaryglobal_response_compound_convertToJSON(ezmaxinvoicingsummaryglobal_response_compound_1);
	printf("ezmaxinvoicingsummaryglobal_response_compound :\n%s\n", cJSON_Print(jsonezmaxinvoicingsummaryglobal_response_compound_1));
	ezmaxinvoicingsummaryglobal_response_compound_t* ezmaxinvoicingsummaryglobal_response_compound_2 = ezmaxinvoicingsummaryglobal_response_compound_parseFromJSON(jsonezmaxinvoicingsummaryglobal_response_compound_1);
	cJSON* jsonezmaxinvoicingsummaryglobal_response_compound_2 = ezmaxinvoicingsummaryglobal_response_compound_convertToJSON(ezmaxinvoicingsummaryglobal_response_compound_2);
	printf("repeating ezmaxinvoicingsummaryglobal_response_compound:\n%s\n", cJSON_Print(jsonezmaxinvoicingsummaryglobal_response_compound_2));
}

int main() {
  test_ezmaxinvoicingsummaryglobal_response_compound(1);
  test_ezmaxinvoicingsummaryglobal_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezmaxinvoicingsummaryglobal_response_compound_MAIN
#endif // ezmaxinvoicingsummaryglobal_response_compound_TEST
