#ifndef ezsignbulksendsignermapping_response_compound_TEST
#define ezsignbulksendsignermapping_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksendsignermapping_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksendsignermapping_response_compound.h"
ezsignbulksendsignermapping_response_compound_t* instantiate_ezsignbulksendsignermapping_response_compound(int include_optional);



ezsignbulksendsignermapping_response_compound_t* instantiate_ezsignbulksendsignermapping_response_compound(int include_optional) {
  ezsignbulksendsignermapping_response_compound_t* ezsignbulksendsignermapping_response_compound = NULL;
  if (include_optional) {
    ezsignbulksendsignermapping_response_compound = ezsignbulksendsignermapping_response_compound_create(
      57,
      8,
      70,
      "Supervisor"
    );
  } else {
    ezsignbulksendsignermapping_response_compound = ezsignbulksendsignermapping_response_compound_create(
      57,
      8,
      70,
      "Supervisor"
    );
  }

  return ezsignbulksendsignermapping_response_compound;
}


#ifdef ezsignbulksendsignermapping_response_compound_MAIN

void test_ezsignbulksendsignermapping_response_compound(int include_optional) {
    ezsignbulksendsignermapping_response_compound_t* ezsignbulksendsignermapping_response_compound_1 = instantiate_ezsignbulksendsignermapping_response_compound(include_optional);

	cJSON* jsonezsignbulksendsignermapping_response_compound_1 = ezsignbulksendsignermapping_response_compound_convertToJSON(ezsignbulksendsignermapping_response_compound_1);
	printf("ezsignbulksendsignermapping_response_compound :\n%s\n", cJSON_Print(jsonezsignbulksendsignermapping_response_compound_1));
	ezsignbulksendsignermapping_response_compound_t* ezsignbulksendsignermapping_response_compound_2 = ezsignbulksendsignermapping_response_compound_parseFromJSON(jsonezsignbulksendsignermapping_response_compound_1);
	cJSON* jsonezsignbulksendsignermapping_response_compound_2 = ezsignbulksendsignermapping_response_compound_convertToJSON(ezsignbulksendsignermapping_response_compound_2);
	printf("repeating ezsignbulksendsignermapping_response_compound:\n%s\n", cJSON_Print(jsonezsignbulksendsignermapping_response_compound_2));
}

int main() {
  test_ezsignbulksendsignermapping_response_compound(1);
  test_ezsignbulksendsignermapping_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksendsignermapping_response_compound_MAIN
#endif // ezsignbulksendsignermapping_response_compound_TEST
