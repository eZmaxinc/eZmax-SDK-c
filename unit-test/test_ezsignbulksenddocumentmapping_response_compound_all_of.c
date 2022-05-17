#ifndef ezsignbulksenddocumentmapping_response_compound_all_of_TEST
#define ezsignbulksenddocumentmapping_response_compound_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksenddocumentmapping_response_compound_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksenddocumentmapping_response_compound_all_of.h"
ezsignbulksenddocumentmapping_response_compound_all_of_t* instantiate_ezsignbulksenddocumentmapping_response_compound_all_of(int include_optional);

#include "test_ezsigntemplate_response_compound.c"
#include "test_ezsigntemplatepackage_response_compound.c"


ezsignbulksenddocumentmapping_response_compound_all_of_t* instantiate_ezsignbulksenddocumentmapping_response_compound_all_of(int include_optional) {
  ezsignbulksenddocumentmapping_response_compound_all_of_t* ezsignbulksenddocumentmapping_response_compound_all_of = NULL;
  if (include_optional) {
    ezsignbulksenddocumentmapping_response_compound_all_of = ezsignbulksenddocumentmapping_response_compound_all_of_create(
       // false, not to have infinite recursion
      instantiate_ezsigntemplate_response_compound(0),
       // false, not to have infinite recursion
      instantiate_ezsigntemplatepackage_response_compound(0)
    );
  } else {
    ezsignbulksenddocumentmapping_response_compound_all_of = ezsignbulksenddocumentmapping_response_compound_all_of_create(
      NULL,
      NULL
    );
  }

  return ezsignbulksenddocumentmapping_response_compound_all_of;
}


#ifdef ezsignbulksenddocumentmapping_response_compound_all_of_MAIN

void test_ezsignbulksenddocumentmapping_response_compound_all_of(int include_optional) {
    ezsignbulksenddocumentmapping_response_compound_all_of_t* ezsignbulksenddocumentmapping_response_compound_all_of_1 = instantiate_ezsignbulksenddocumentmapping_response_compound_all_of(include_optional);

	cJSON* jsonezsignbulksenddocumentmapping_response_compound_all_of_1 = ezsignbulksenddocumentmapping_response_compound_all_of_convertToJSON(ezsignbulksenddocumentmapping_response_compound_all_of_1);
	printf("ezsignbulksenddocumentmapping_response_compound_all_of :\n%s\n", cJSON_Print(jsonezsignbulksenddocumentmapping_response_compound_all_of_1));
	ezsignbulksenddocumentmapping_response_compound_all_of_t* ezsignbulksenddocumentmapping_response_compound_all_of_2 = ezsignbulksenddocumentmapping_response_compound_all_of_parseFromJSON(jsonezsignbulksenddocumentmapping_response_compound_all_of_1);
	cJSON* jsonezsignbulksenddocumentmapping_response_compound_all_of_2 = ezsignbulksenddocumentmapping_response_compound_all_of_convertToJSON(ezsignbulksenddocumentmapping_response_compound_all_of_2);
	printf("repeating ezsignbulksenddocumentmapping_response_compound_all_of:\n%s\n", cJSON_Print(jsonezsignbulksenddocumentmapping_response_compound_all_of_2));
}

int main() {
  test_ezsignbulksenddocumentmapping_response_compound_all_of(1);
  test_ezsignbulksenddocumentmapping_response_compound_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksenddocumentmapping_response_compound_all_of_MAIN
#endif // ezsignbulksenddocumentmapping_response_compound_all_of_TEST
