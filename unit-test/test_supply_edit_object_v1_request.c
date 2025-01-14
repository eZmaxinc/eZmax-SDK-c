#ifndef supply_edit_object_v1_request_TEST
#define supply_edit_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define supply_edit_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/supply_edit_object_v1_request.h"
supply_edit_object_v1_request_t* instantiate_supply_edit_object_v1_request(int include_optional);

#include "test_supply_request_compound.c"


supply_edit_object_v1_request_t* instantiate_supply_edit_object_v1_request(int include_optional) {
  supply_edit_object_v1_request_t* supply_edit_object_v1_request = NULL;
  if (include_optional) {
    supply_edit_object_v1_request = supply_edit_object_v1_request_create(
       // false, not to have infinite recursion
      instantiate_supply_request_compound(0)
    );
  } else {
    supply_edit_object_v1_request = supply_edit_object_v1_request_create(
      NULL
    );
  }

  return supply_edit_object_v1_request;
}


#ifdef supply_edit_object_v1_request_MAIN

void test_supply_edit_object_v1_request(int include_optional) {
    supply_edit_object_v1_request_t* supply_edit_object_v1_request_1 = instantiate_supply_edit_object_v1_request(include_optional);

	cJSON* jsonsupply_edit_object_v1_request_1 = supply_edit_object_v1_request_convertToJSON(supply_edit_object_v1_request_1);
	printf("supply_edit_object_v1_request :\n%s\n", cJSON_Print(jsonsupply_edit_object_v1_request_1));
	supply_edit_object_v1_request_t* supply_edit_object_v1_request_2 = supply_edit_object_v1_request_parseFromJSON(jsonsupply_edit_object_v1_request_1);
	cJSON* jsonsupply_edit_object_v1_request_2 = supply_edit_object_v1_request_convertToJSON(supply_edit_object_v1_request_2);
	printf("repeating supply_edit_object_v1_request:\n%s\n", cJSON_Print(jsonsupply_edit_object_v1_request_2));
}

int main() {
  test_supply_edit_object_v1_request(1);
  test_supply_edit_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // supply_edit_object_v1_request_MAIN
#endif // supply_edit_object_v1_request_TEST
