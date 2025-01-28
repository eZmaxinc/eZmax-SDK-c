#ifndef supply_list_element_TEST
#define supply_list_element_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define supply_list_element_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/supply_list_element.h"
supply_list_element_t* instantiate_supply_list_element(int include_optional);



supply_list_element_t* instantiate_supply_list_element(int include_optional) {
  supply_list_element_t* supply_list_element = NULL;
  if (include_optional) {
    supply_list_element = supply_list_element_create(
      85,
      35,
      66,
      2,
      "PPLET",
      "Letter paper package",
      "8.00",
      true,
      true,
      "Supplies income",
      "Quebec",
      "Équipements de bureau"
    );
  } else {
    supply_list_element = supply_list_element_create(
      85,
      35,
      66,
      2,
      "PPLET",
      "Letter paper package",
      "8.00",
      true,
      true,
      "Supplies income",
      "Quebec",
      "Équipements de bureau"
    );
  }

  return supply_list_element;
}


#ifdef supply_list_element_MAIN

void test_supply_list_element(int include_optional) {
    supply_list_element_t* supply_list_element_1 = instantiate_supply_list_element(include_optional);

	cJSON* jsonsupply_list_element_1 = supply_list_element_convertToJSON(supply_list_element_1);
	printf("supply_list_element :\n%s\n", cJSON_Print(jsonsupply_list_element_1));
	supply_list_element_t* supply_list_element_2 = supply_list_element_parseFromJSON(jsonsupply_list_element_1);
	cJSON* jsonsupply_list_element_2 = supply_list_element_convertToJSON(supply_list_element_2);
	printf("repeating supply_list_element:\n%s\n", cJSON_Print(jsonsupply_list_element_2));
}

int main() {
  test_supply_list_element(1);
  test_supply_list_element(0);

  printf("Hello world \n");
  return 0;
}

#endif // supply_list_element_MAIN
#endif // supply_list_element_TEST
