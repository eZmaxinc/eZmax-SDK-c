#ifndef ezsignbulksendsignermapping_response_TEST
#define ezsignbulksendsignermapping_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksendsignermapping_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksendsignermapping_response.h"
ezsignbulksendsignermapping_response_t* instantiate_ezsignbulksendsignermapping_response(int include_optional);



ezsignbulksendsignermapping_response_t* instantiate_ezsignbulksendsignermapping_response(int include_optional) {
  ezsignbulksendsignermapping_response_t* ezsignbulksendsignermapping_response = NULL;
  if (include_optional) {
    ezsignbulksendsignermapping_response = ezsignbulksendsignermapping_response_create(
      57,
      8,
      70,
      "Supervisor"
    );
  } else {
    ezsignbulksendsignermapping_response = ezsignbulksendsignermapping_response_create(
      57,
      8,
      70,
      "Supervisor"
    );
  }

  return ezsignbulksendsignermapping_response;
}


#ifdef ezsignbulksendsignermapping_response_MAIN

void test_ezsignbulksendsignermapping_response(int include_optional) {
    ezsignbulksendsignermapping_response_t* ezsignbulksendsignermapping_response_1 = instantiate_ezsignbulksendsignermapping_response(include_optional);

	cJSON* jsonezsignbulksendsignermapping_response_1 = ezsignbulksendsignermapping_response_convertToJSON(ezsignbulksendsignermapping_response_1);
	printf("ezsignbulksendsignermapping_response :\n%s\n", cJSON_Print(jsonezsignbulksendsignermapping_response_1));
	ezsignbulksendsignermapping_response_t* ezsignbulksendsignermapping_response_2 = ezsignbulksendsignermapping_response_parseFromJSON(jsonezsignbulksendsignermapping_response_1);
	cJSON* jsonezsignbulksendsignermapping_response_2 = ezsignbulksendsignermapping_response_convertToJSON(ezsignbulksendsignermapping_response_2);
	printf("repeating ezsignbulksendsignermapping_response:\n%s\n", cJSON_Print(jsonezsignbulksendsignermapping_response_2));
}

int main() {
  test_ezsignbulksendsignermapping_response(1);
  test_ezsignbulksendsignermapping_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksendsignermapping_response_MAIN
#endif // ezsignbulksendsignermapping_response_TEST
