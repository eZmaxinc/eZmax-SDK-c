#ifndef ezsignbulksend_request_compound_TEST
#define ezsignbulksend_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksend_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksend_request_compound.h"
ezsignbulksend_request_compound_t* instantiate_ezsignbulksend_request_compound(int include_optional);



ezsignbulksend_request_compound_t* instantiate_ezsignbulksend_request_compound(int include_optional) {
  ezsignbulksend_request_compound_t* ezsignbulksend_request_compound = NULL;
  if (include_optional) {
    ezsignbulksend_request_compound = ezsignbulksend_request_compound_create(
      8,
      5,
      2,
      "Test eZsign Bulk Send",
      "This is a note",
      1,
      1
    );
  } else {
    ezsignbulksend_request_compound = ezsignbulksend_request_compound_create(
      8,
      5,
      2,
      "Test eZsign Bulk Send",
      "This is a note",
      1,
      1
    );
  }

  return ezsignbulksend_request_compound;
}


#ifdef ezsignbulksend_request_compound_MAIN

void test_ezsignbulksend_request_compound(int include_optional) {
    ezsignbulksend_request_compound_t* ezsignbulksend_request_compound_1 = instantiate_ezsignbulksend_request_compound(include_optional);

	cJSON* jsonezsignbulksend_request_compound_1 = ezsignbulksend_request_compound_convertToJSON(ezsignbulksend_request_compound_1);
	printf("ezsignbulksend_request_compound :\n%s\n", cJSON_Print(jsonezsignbulksend_request_compound_1));
	ezsignbulksend_request_compound_t* ezsignbulksend_request_compound_2 = ezsignbulksend_request_compound_parseFromJSON(jsonezsignbulksend_request_compound_1);
	cJSON* jsonezsignbulksend_request_compound_2 = ezsignbulksend_request_compound_convertToJSON(ezsignbulksend_request_compound_2);
	printf("repeating ezsignbulksend_request_compound:\n%s\n", cJSON_Print(jsonezsignbulksend_request_compound_2));
}

int main() {
  test_ezsignbulksend_request_compound(1);
  test_ezsignbulksend_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksend_request_compound_MAIN
#endif // ezsignbulksend_request_compound_TEST
