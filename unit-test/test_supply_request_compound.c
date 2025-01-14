#ifndef supply_request_compound_TEST
#define supply_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define supply_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/supply_request_compound.h"
supply_request_compound_t* instantiate_supply_request_compound(int include_optional);

#include "test_multilingual_supply_description.c"


supply_request_compound_t* instantiate_supply_request_compound(int include_optional) {
  supply_request_compound_t* supply_request_compound = NULL;
  if (include_optional) {
    supply_request_compound = supply_request_compound_create(
      85,
      35,
      66,
      2,
      "PPLET",
       // false, not to have infinite recursion
      instantiate_multilingual_supply_description(0),
      "8",
      true,
      true
    );
  } else {
    supply_request_compound = supply_request_compound_create(
      85,
      35,
      66,
      2,
      "PPLET",
      NULL,
      "8",
      true,
      true
    );
  }

  return supply_request_compound;
}


#ifdef supply_request_compound_MAIN

void test_supply_request_compound(int include_optional) {
    supply_request_compound_t* supply_request_compound_1 = instantiate_supply_request_compound(include_optional);

	cJSON* jsonsupply_request_compound_1 = supply_request_compound_convertToJSON(supply_request_compound_1);
	printf("supply_request_compound :\n%s\n", cJSON_Print(jsonsupply_request_compound_1));
	supply_request_compound_t* supply_request_compound_2 = supply_request_compound_parseFromJSON(jsonsupply_request_compound_1);
	cJSON* jsonsupply_request_compound_2 = supply_request_compound_convertToJSON(supply_request_compound_2);
	printf("repeating supply_request_compound:\n%s\n", cJSON_Print(jsonsupply_request_compound_2));
}

int main() {
  test_supply_request_compound(1);
  test_supply_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // supply_request_compound_MAIN
#endif // supply_request_compound_TEST
