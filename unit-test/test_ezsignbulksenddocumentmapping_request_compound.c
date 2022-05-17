#ifndef ezsignbulksenddocumentmapping_request_compound_TEST
#define ezsignbulksenddocumentmapping_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksenddocumentmapping_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksenddocumentmapping_request_compound.h"
ezsignbulksenddocumentmapping_request_compound_t* instantiate_ezsignbulksenddocumentmapping_request_compound(int include_optional);



ezsignbulksenddocumentmapping_request_compound_t* instantiate_ezsignbulksenddocumentmapping_request_compound(int include_optional) {
  ezsignbulksenddocumentmapping_request_compound_t* ezsignbulksenddocumentmapping_request_compound = NULL;
  if (include_optional) {
    ezsignbulksenddocumentmapping_request_compound = ezsignbulksenddocumentmapping_request_compound_create(
      48,
      8,
      99,
      36
    );
  } else {
    ezsignbulksenddocumentmapping_request_compound = ezsignbulksenddocumentmapping_request_compound_create(
      48,
      8,
      99,
      36
    );
  }

  return ezsignbulksenddocumentmapping_request_compound;
}


#ifdef ezsignbulksenddocumentmapping_request_compound_MAIN

void test_ezsignbulksenddocumentmapping_request_compound(int include_optional) {
    ezsignbulksenddocumentmapping_request_compound_t* ezsignbulksenddocumentmapping_request_compound_1 = instantiate_ezsignbulksenddocumentmapping_request_compound(include_optional);

	cJSON* jsonezsignbulksenddocumentmapping_request_compound_1 = ezsignbulksenddocumentmapping_request_compound_convertToJSON(ezsignbulksenddocumentmapping_request_compound_1);
	printf("ezsignbulksenddocumentmapping_request_compound :\n%s\n", cJSON_Print(jsonezsignbulksenddocumentmapping_request_compound_1));
	ezsignbulksenddocumentmapping_request_compound_t* ezsignbulksenddocumentmapping_request_compound_2 = ezsignbulksenddocumentmapping_request_compound_parseFromJSON(jsonezsignbulksenddocumentmapping_request_compound_1);
	cJSON* jsonezsignbulksenddocumentmapping_request_compound_2 = ezsignbulksenddocumentmapping_request_compound_convertToJSON(ezsignbulksenddocumentmapping_request_compound_2);
	printf("repeating ezsignbulksenddocumentmapping_request_compound:\n%s\n", cJSON_Print(jsonezsignbulksenddocumentmapping_request_compound_2));
}

int main() {
  test_ezsignbulksenddocumentmapping_request_compound(1);
  test_ezsignbulksenddocumentmapping_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksenddocumentmapping_request_compound_MAIN
#endif // ezsignbulksenddocumentmapping_request_compound_TEST
