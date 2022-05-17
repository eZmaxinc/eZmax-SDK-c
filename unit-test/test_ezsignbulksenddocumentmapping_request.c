#ifndef ezsignbulksenddocumentmapping_request_TEST
#define ezsignbulksenddocumentmapping_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksenddocumentmapping_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksenddocumentmapping_request.h"
ezsignbulksenddocumentmapping_request_t* instantiate_ezsignbulksenddocumentmapping_request(int include_optional);



ezsignbulksenddocumentmapping_request_t* instantiate_ezsignbulksenddocumentmapping_request(int include_optional) {
  ezsignbulksenddocumentmapping_request_t* ezsignbulksenddocumentmapping_request = NULL;
  if (include_optional) {
    ezsignbulksenddocumentmapping_request = ezsignbulksenddocumentmapping_request_create(
      48,
      8,
      99,
      36
    );
  } else {
    ezsignbulksenddocumentmapping_request = ezsignbulksenddocumentmapping_request_create(
      48,
      8,
      99,
      36
    );
  }

  return ezsignbulksenddocumentmapping_request;
}


#ifdef ezsignbulksenddocumentmapping_request_MAIN

void test_ezsignbulksenddocumentmapping_request(int include_optional) {
    ezsignbulksenddocumentmapping_request_t* ezsignbulksenddocumentmapping_request_1 = instantiate_ezsignbulksenddocumentmapping_request(include_optional);

	cJSON* jsonezsignbulksenddocumentmapping_request_1 = ezsignbulksenddocumentmapping_request_convertToJSON(ezsignbulksenddocumentmapping_request_1);
	printf("ezsignbulksenddocumentmapping_request :\n%s\n", cJSON_Print(jsonezsignbulksenddocumentmapping_request_1));
	ezsignbulksenddocumentmapping_request_t* ezsignbulksenddocumentmapping_request_2 = ezsignbulksenddocumentmapping_request_parseFromJSON(jsonezsignbulksenddocumentmapping_request_1);
	cJSON* jsonezsignbulksenddocumentmapping_request_2 = ezsignbulksenddocumentmapping_request_convertToJSON(ezsignbulksenddocumentmapping_request_2);
	printf("repeating ezsignbulksenddocumentmapping_request:\n%s\n", cJSON_Print(jsonezsignbulksenddocumentmapping_request_2));
}

int main() {
  test_ezsignbulksenddocumentmapping_request(1);
  test_ezsignbulksenddocumentmapping_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksenddocumentmapping_request_MAIN
#endif // ezsignbulksenddocumentmapping_request_TEST
