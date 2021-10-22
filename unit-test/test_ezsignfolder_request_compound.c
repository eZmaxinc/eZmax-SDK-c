#ifndef ezsignfolder_request_compound_TEST
#define ezsignfolder_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfolder_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfolder_request_compound.h"
ezsignfolder_request_compound_t* instantiate_ezsignfolder_request_compound(int include_optional);



ezsignfolder_request_compound_t* instantiate_ezsignfolder_request_compound(int include_optional) {
  ezsignfolder_request_compound_t* ezsignfolder_request_compound = NULL;
  if (include_optional) {
    ezsignfolder_request_compound = ezsignfolder_request_compound_create(
      list_create(),
      5,
      92,
      "Test eZsign Folder",
      "An extra notes we can add to the ezsign folder",
      ezmax_api_definition_ezsignfolder_request_compound__"None"
    );
  } else {
    ezsignfolder_request_compound = ezsignfolder_request_compound_create(
      list_create(),
      5,
      92,
      "Test eZsign Folder",
      "An extra notes we can add to the ezsign folder",
      ezmax_api_definition_ezsignfolder_request_compound__"None"
    );
  }

  return ezsignfolder_request_compound;
}


#ifdef ezsignfolder_request_compound_MAIN

void test_ezsignfolder_request_compound(int include_optional) {
    ezsignfolder_request_compound_t* ezsignfolder_request_compound_1 = instantiate_ezsignfolder_request_compound(include_optional);

	cJSON* jsonezsignfolder_request_compound_1 = ezsignfolder_request_compound_convertToJSON(ezsignfolder_request_compound_1);
	printf("ezsignfolder_request_compound :\n%s\n", cJSON_Print(jsonezsignfolder_request_compound_1));
	ezsignfolder_request_compound_t* ezsignfolder_request_compound_2 = ezsignfolder_request_compound_parseFromJSON(jsonezsignfolder_request_compound_1);
	cJSON* jsonezsignfolder_request_compound_2 = ezsignfolder_request_compound_convertToJSON(ezsignfolder_request_compound_2);
	printf("repeating ezsignfolder_request_compound:\n%s\n", cJSON_Print(jsonezsignfolder_request_compound_2));
}

int main() {
  test_ezsignfolder_request_compound(1);
  test_ezsignfolder_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfolder_request_compound_MAIN
#endif // ezsignfolder_request_compound_TEST
