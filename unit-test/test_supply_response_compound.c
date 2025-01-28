#ifndef supply_response_compound_TEST
#define supply_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define supply_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/supply_response_compound.h"
supply_response_compound_t* instantiate_supply_response_compound(int include_optional);

#include "test_multilingual_supply_description.c"


supply_response_compound_t* instantiate_supply_response_compound(int include_optional) {
  supply_response_compound_t* supply_response_compound = NULL;
  if (include_optional) {
    supply_response_compound = supply_response_compound_create(
      85,
      35,
      66,
      2,
      "PPLET",
       // false, not to have infinite recursion
      instantiate_multilingual_supply_description(0),
      "8.00",
      true,
      true,
      "Supplies income",
      "Quebec",
      "Équipements de bureau"
    );
  } else {
    supply_response_compound = supply_response_compound_create(
      85,
      35,
      66,
      2,
      "PPLET",
      NULL,
      "8.00",
      true,
      true,
      "Supplies income",
      "Quebec",
      "Équipements de bureau"
    );
  }

  return supply_response_compound;
}


#ifdef supply_response_compound_MAIN

void test_supply_response_compound(int include_optional) {
    supply_response_compound_t* supply_response_compound_1 = instantiate_supply_response_compound(include_optional);

	cJSON* jsonsupply_response_compound_1 = supply_response_compound_convertToJSON(supply_response_compound_1);
	printf("supply_response_compound :\n%s\n", cJSON_Print(jsonsupply_response_compound_1));
	supply_response_compound_t* supply_response_compound_2 = supply_response_compound_parseFromJSON(jsonsupply_response_compound_1);
	cJSON* jsonsupply_response_compound_2 = supply_response_compound_convertToJSON(supply_response_compound_2);
	printf("repeating supply_response_compound:\n%s\n", cJSON_Print(jsonsupply_response_compound_2));
}

int main() {
  test_supply_response_compound(1);
  test_supply_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // supply_response_compound_MAIN
#endif // supply_response_compound_TEST
