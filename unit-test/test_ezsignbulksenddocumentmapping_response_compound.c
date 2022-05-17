#ifndef ezsignbulksenddocumentmapping_response_compound_TEST
#define ezsignbulksenddocumentmapping_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksenddocumentmapping_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksenddocumentmapping_response_compound.h"
ezsignbulksenddocumentmapping_response_compound_t* instantiate_ezsignbulksenddocumentmapping_response_compound(int include_optional);

#include "test_ezsigntemplate_response_compound.c"
#include "test_ezsigntemplatepackage_response_compound.c"


ezsignbulksenddocumentmapping_response_compound_t* instantiate_ezsignbulksenddocumentmapping_response_compound(int include_optional) {
  ezsignbulksenddocumentmapping_response_compound_t* ezsignbulksenddocumentmapping_response_compound = NULL;
  if (include_optional) {
    ezsignbulksenddocumentmapping_response_compound = ezsignbulksenddocumentmapping_response_compound_create(
      48,
      8,
      99,
      36,
      1,
       // false, not to have infinite recursion
      instantiate_ezsigntemplate_response_compound(0),
       // false, not to have infinite recursion
      instantiate_ezsigntemplatepackage_response_compound(0)
    );
  } else {
    ezsignbulksenddocumentmapping_response_compound = ezsignbulksenddocumentmapping_response_compound_create(
      48,
      8,
      99,
      36,
      1,
      NULL,
      NULL
    );
  }

  return ezsignbulksenddocumentmapping_response_compound;
}


#ifdef ezsignbulksenddocumentmapping_response_compound_MAIN

void test_ezsignbulksenddocumentmapping_response_compound(int include_optional) {
    ezsignbulksenddocumentmapping_response_compound_t* ezsignbulksenddocumentmapping_response_compound_1 = instantiate_ezsignbulksenddocumentmapping_response_compound(include_optional);

	cJSON* jsonezsignbulksenddocumentmapping_response_compound_1 = ezsignbulksenddocumentmapping_response_compound_convertToJSON(ezsignbulksenddocumentmapping_response_compound_1);
	printf("ezsignbulksenddocumentmapping_response_compound :\n%s\n", cJSON_Print(jsonezsignbulksenddocumentmapping_response_compound_1));
	ezsignbulksenddocumentmapping_response_compound_t* ezsignbulksenddocumentmapping_response_compound_2 = ezsignbulksenddocumentmapping_response_compound_parseFromJSON(jsonezsignbulksenddocumentmapping_response_compound_1);
	cJSON* jsonezsignbulksenddocumentmapping_response_compound_2 = ezsignbulksenddocumentmapping_response_compound_convertToJSON(ezsignbulksenddocumentmapping_response_compound_2);
	printf("repeating ezsignbulksenddocumentmapping_response_compound:\n%s\n", cJSON_Print(jsonezsignbulksenddocumentmapping_response_compound_2));
}

int main() {
  test_ezsignbulksenddocumentmapping_response_compound(1);
  test_ezsignbulksenddocumentmapping_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksenddocumentmapping_response_compound_MAIN
#endif // ezsignbulksenddocumentmapping_response_compound_TEST
