#ifndef ezsignbulksendsignermapping_request_TEST
#define ezsignbulksendsignermapping_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksendsignermapping_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksendsignermapping_request.h"
ezsignbulksendsignermapping_request_t* instantiate_ezsignbulksendsignermapping_request(int include_optional);



ezsignbulksendsignermapping_request_t* instantiate_ezsignbulksendsignermapping_request(int include_optional) {
  ezsignbulksendsignermapping_request_t* ezsignbulksendsignermapping_request = NULL;
  if (include_optional) {
    ezsignbulksendsignermapping_request = ezsignbulksendsignermapping_request_create(
      57,
      8,
      70,
      "Supervisor"
    );
  } else {
    ezsignbulksendsignermapping_request = ezsignbulksendsignermapping_request_create(
      57,
      8,
      70,
      "Supervisor"
    );
  }

  return ezsignbulksendsignermapping_request;
}


#ifdef ezsignbulksendsignermapping_request_MAIN

void test_ezsignbulksendsignermapping_request(int include_optional) {
    ezsignbulksendsignermapping_request_t* ezsignbulksendsignermapping_request_1 = instantiate_ezsignbulksendsignermapping_request(include_optional);

	cJSON* jsonezsignbulksendsignermapping_request_1 = ezsignbulksendsignermapping_request_convertToJSON(ezsignbulksendsignermapping_request_1);
	printf("ezsignbulksendsignermapping_request :\n%s\n", cJSON_Print(jsonezsignbulksendsignermapping_request_1));
	ezsignbulksendsignermapping_request_t* ezsignbulksendsignermapping_request_2 = ezsignbulksendsignermapping_request_parseFromJSON(jsonezsignbulksendsignermapping_request_1);
	cJSON* jsonezsignbulksendsignermapping_request_2 = ezsignbulksendsignermapping_request_convertToJSON(ezsignbulksendsignermapping_request_2);
	printf("repeating ezsignbulksendsignermapping_request:\n%s\n", cJSON_Print(jsonezsignbulksendsignermapping_request_2));
}

int main() {
  test_ezsignbulksendsignermapping_request(1);
  test_ezsignbulksendsignermapping_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksendsignermapping_request_MAIN
#endif // ezsignbulksendsignermapping_request_TEST
