#ifndef supply_response_TEST
#define supply_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define supply_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/supply_response.h"
supply_response_t* instantiate_supply_response(int include_optional);

#include "test_multilingual_supply_description.c"


supply_response_t* instantiate_supply_response(int include_optional) {
  supply_response_t* supply_response = NULL;
  if (include_optional) {
    supply_response = supply_response_create(
      85,
      35,
      66,
      2,
      "PPLET",
       // false, not to have infinite recursion
      instantiate_multilingual_supply_description(0),
      "8",
      true,
      true,
      "Supplies income",
      "Quebec",
      "Équipements de bureau"
    );
  } else {
    supply_response = supply_response_create(
      85,
      35,
      66,
      2,
      "PPLET",
      NULL,
      "8",
      true,
      true,
      "Supplies income",
      "Quebec",
      "Équipements de bureau"
    );
  }

  return supply_response;
}


#ifdef supply_response_MAIN

void test_supply_response(int include_optional) {
    supply_response_t* supply_response_1 = instantiate_supply_response(include_optional);

	cJSON* jsonsupply_response_1 = supply_response_convertToJSON(supply_response_1);
	printf("supply_response :\n%s\n", cJSON_Print(jsonsupply_response_1));
	supply_response_t* supply_response_2 = supply_response_parseFromJSON(jsonsupply_response_1);
	cJSON* jsonsupply_response_2 = supply_response_convertToJSON(supply_response_2);
	printf("repeating supply_response:\n%s\n", cJSON_Print(jsonsupply_response_2));
}

int main() {
  test_supply_response(1);
  test_supply_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // supply_response_MAIN
#endif // supply_response_TEST
