#ifndef ezsignbulksenddocumentmapping_response_TEST
#define ezsignbulksenddocumentmapping_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksenddocumentmapping_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksenddocumentmapping_response.h"
ezsignbulksenddocumentmapping_response_t* instantiate_ezsignbulksenddocumentmapping_response(int include_optional);



ezsignbulksenddocumentmapping_response_t* instantiate_ezsignbulksenddocumentmapping_response(int include_optional) {
  ezsignbulksenddocumentmapping_response_t* ezsignbulksenddocumentmapping_response = NULL;
  if (include_optional) {
    ezsignbulksenddocumentmapping_response = ezsignbulksenddocumentmapping_response_create(
      48,
      8,
      99,
      36,
      1
    );
  } else {
    ezsignbulksenddocumentmapping_response = ezsignbulksenddocumentmapping_response_create(
      48,
      8,
      99,
      36,
      1
    );
  }

  return ezsignbulksenddocumentmapping_response;
}


#ifdef ezsignbulksenddocumentmapping_response_MAIN

void test_ezsignbulksenddocumentmapping_response(int include_optional) {
    ezsignbulksenddocumentmapping_response_t* ezsignbulksenddocumentmapping_response_1 = instantiate_ezsignbulksenddocumentmapping_response(include_optional);

	cJSON* jsonezsignbulksenddocumentmapping_response_1 = ezsignbulksenddocumentmapping_response_convertToJSON(ezsignbulksenddocumentmapping_response_1);
	printf("ezsignbulksenddocumentmapping_response :\n%s\n", cJSON_Print(jsonezsignbulksenddocumentmapping_response_1));
	ezsignbulksenddocumentmapping_response_t* ezsignbulksenddocumentmapping_response_2 = ezsignbulksenddocumentmapping_response_parseFromJSON(jsonezsignbulksenddocumentmapping_response_1);
	cJSON* jsonezsignbulksenddocumentmapping_response_2 = ezsignbulksenddocumentmapping_response_convertToJSON(ezsignbulksenddocumentmapping_response_2);
	printf("repeating ezsignbulksenddocumentmapping_response:\n%s\n", cJSON_Print(jsonezsignbulksenddocumentmapping_response_2));
}

int main() {
  test_ezsignbulksenddocumentmapping_response(1);
  test_ezsignbulksenddocumentmapping_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksenddocumentmapping_response_MAIN
#endif // ezsignbulksenddocumentmapping_response_TEST
