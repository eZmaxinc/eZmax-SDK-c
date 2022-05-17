#ifndef ezsignbulksendsignermapping_request_compound_TEST
#define ezsignbulksendsignermapping_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksendsignermapping_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksendsignermapping_request_compound.h"
ezsignbulksendsignermapping_request_compound_t* instantiate_ezsignbulksendsignermapping_request_compound(int include_optional);



ezsignbulksendsignermapping_request_compound_t* instantiate_ezsignbulksendsignermapping_request_compound(int include_optional) {
  ezsignbulksendsignermapping_request_compound_t* ezsignbulksendsignermapping_request_compound = NULL;
  if (include_optional) {
    ezsignbulksendsignermapping_request_compound = ezsignbulksendsignermapping_request_compound_create(
      57,
      8,
      70,
      "Supervisor"
    );
  } else {
    ezsignbulksendsignermapping_request_compound = ezsignbulksendsignermapping_request_compound_create(
      57,
      8,
      70,
      "Supervisor"
    );
  }

  return ezsignbulksendsignermapping_request_compound;
}


#ifdef ezsignbulksendsignermapping_request_compound_MAIN

void test_ezsignbulksendsignermapping_request_compound(int include_optional) {
    ezsignbulksendsignermapping_request_compound_t* ezsignbulksendsignermapping_request_compound_1 = instantiate_ezsignbulksendsignermapping_request_compound(include_optional);

	cJSON* jsonezsignbulksendsignermapping_request_compound_1 = ezsignbulksendsignermapping_request_compound_convertToJSON(ezsignbulksendsignermapping_request_compound_1);
	printf("ezsignbulksendsignermapping_request_compound :\n%s\n", cJSON_Print(jsonezsignbulksendsignermapping_request_compound_1));
	ezsignbulksendsignermapping_request_compound_t* ezsignbulksendsignermapping_request_compound_2 = ezsignbulksendsignermapping_request_compound_parseFromJSON(jsonezsignbulksendsignermapping_request_compound_1);
	cJSON* jsonezsignbulksendsignermapping_request_compound_2 = ezsignbulksendsignermapping_request_compound_convertToJSON(ezsignbulksendsignermapping_request_compound_2);
	printf("repeating ezsignbulksendsignermapping_request_compound:\n%s\n", cJSON_Print(jsonezsignbulksendsignermapping_request_compound_2));
}

int main() {
  test_ezsignbulksendsignermapping_request_compound(1);
  test_ezsignbulksendsignermapping_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksendsignermapping_request_compound_MAIN
#endif // ezsignbulksendsignermapping_request_compound_TEST
