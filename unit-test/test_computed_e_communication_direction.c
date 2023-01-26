#ifndef computed_e_communication_direction_TEST
#define computed_e_communication_direction_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define computed_e_communication_direction_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/computed_e_communication_direction.h"
computed_e_communication_direction_t* instantiate_computed_e_communication_direction(int include_optional);



computed_e_communication_direction_t* instantiate_computed_e_communication_direction(int include_optional) {
  computed_e_communication_direction_t* computed_e_communication_direction = NULL;
  if (include_optional) {
    computed_e_communication_direction = computed_e_communication_direction_create(
    );
  } else {
    computed_e_communication_direction = computed_e_communication_direction_create(
    );
  }

  return computed_e_communication_direction;
}


#ifdef computed_e_communication_direction_MAIN

void test_computed_e_communication_direction(int include_optional) {
    computed_e_communication_direction_t* computed_e_communication_direction_1 = instantiate_computed_e_communication_direction(include_optional);

	cJSON* jsoncomputed_e_communication_direction_1 = computed_e_communication_direction_convertToJSON(computed_e_communication_direction_1);
	printf("computed_e_communication_direction :\n%s\n", cJSON_Print(jsoncomputed_e_communication_direction_1));
	computed_e_communication_direction_t* computed_e_communication_direction_2 = computed_e_communication_direction_parseFromJSON(jsoncomputed_e_communication_direction_1);
	cJSON* jsoncomputed_e_communication_direction_2 = computed_e_communication_direction_convertToJSON(computed_e_communication_direction_2);
	printf("repeating computed_e_communication_direction:\n%s\n", cJSON_Print(jsoncomputed_e_communication_direction_2));
}

int main() {
  test_computed_e_communication_direction(1);
  test_computed_e_communication_direction(0);

  printf("Hello world \n");
  return 0;
}

#endif // computed_e_communication_direction_MAIN
#endif // computed_e_communication_direction_TEST
