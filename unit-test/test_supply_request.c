#ifndef supply_request_TEST
#define supply_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define supply_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/supply_request.h"
supply_request_t* instantiate_supply_request(int include_optional);

#include "test_multilingual_supply_description.c"


supply_request_t* instantiate_supply_request(int include_optional) {
  supply_request_t* supply_request = NULL;
  if (include_optional) {
    supply_request = supply_request_create(
      85,
      35,
      66,
      2,
      "PPLET",
       // false, not to have infinite recursion
      instantiate_multilingual_supply_description(0),
      "8.00",
      true,
      true
    );
  } else {
    supply_request = supply_request_create(
      85,
      35,
      66,
      2,
      "PPLET",
      NULL,
      "8.00",
      true,
      true
    );
  }

  return supply_request;
}


#ifdef supply_request_MAIN

void test_supply_request(int include_optional) {
    supply_request_t* supply_request_1 = instantiate_supply_request(include_optional);

	cJSON* jsonsupply_request_1 = supply_request_convertToJSON(supply_request_1);
	printf("supply_request :\n%s\n", cJSON_Print(jsonsupply_request_1));
	supply_request_t* supply_request_2 = supply_request_parseFromJSON(jsonsupply_request_1);
	cJSON* jsonsupply_request_2 = supply_request_convertToJSON(supply_request_2);
	printf("repeating supply_request:\n%s\n", cJSON_Print(jsonsupply_request_2));
}

int main() {
  test_supply_request(1);
  test_supply_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // supply_request_MAIN
#endif // supply_request_TEST
