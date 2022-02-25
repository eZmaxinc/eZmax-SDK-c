#ifndef ezsignfolder_response_compound_TEST
#define ezsignfolder_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfolder_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfolder_response_compound.h"
ezsignfolder_response_compound_t* instantiate_ezsignfolder_response_compound(int include_optional);

#include "test_common_audit.c"


ezsignfolder_response_compound_t* instantiate_ezsignfolder_response_compound(int include_optional) {
  ezsignfolder_response_compound_t* ezsignfolder_response_compound = NULL;
  if (include_optional) {
    ezsignfolder_response_compound = ezsignfolder_response_compound_create(
      33,
      5,
      "Default",
      1,
      "Default",
      92,
      "Default",
      "Test eZsign Folder",
      "This is a note",
      ezmax_api_definition_ezsignfolder_response_compound__"None",
      "2020-12-31 23:59:59",
      "2020-12-31 23:59:59",
      "2020-12-31 23:59:59",
      "2020-12-31 23:59:59",
      ezmax_api_definition_ezsignfolder_response_compound__"Completed",
      "2020-12-31 23:59:59",
      {"fkiUserIDCreated":35,"fkiUserIDModified":35,"fkiApikeyIDCreated":1,"fkiApikeyIDModified":1,"dtCreatedDate":"2020-12-31 23:59:59","dtModifiedDate":"2020-12-31 23:59:59"}
    );
  } else {
    ezsignfolder_response_compound = ezsignfolder_response_compound_create(
      33,
      5,
      "Default",
      1,
      "Default",
      92,
      "Default",
      "Test eZsign Folder",
      "This is a note",
      ezmax_api_definition_ezsignfolder_response_compound__"None",
      "2020-12-31 23:59:59",
      "2020-12-31 23:59:59",
      "2020-12-31 23:59:59",
      "2020-12-31 23:59:59",
      ezmax_api_definition_ezsignfolder_response_compound__"Completed",
      "2020-12-31 23:59:59",
      {"fkiUserIDCreated":35,"fkiUserIDModified":35,"fkiApikeyIDCreated":1,"fkiApikeyIDModified":1,"dtCreatedDate":"2020-12-31 23:59:59","dtModifiedDate":"2020-12-31 23:59:59"}
    );
  }

  return ezsignfolder_response_compound;
}


#ifdef ezsignfolder_response_compound_MAIN

void test_ezsignfolder_response_compound(int include_optional) {
    ezsignfolder_response_compound_t* ezsignfolder_response_compound_1 = instantiate_ezsignfolder_response_compound(include_optional);

	cJSON* jsonezsignfolder_response_compound_1 = ezsignfolder_response_compound_convertToJSON(ezsignfolder_response_compound_1);
	printf("ezsignfolder_response_compound :\n%s\n", cJSON_Print(jsonezsignfolder_response_compound_1));
	ezsignfolder_response_compound_t* ezsignfolder_response_compound_2 = ezsignfolder_response_compound_parseFromJSON(jsonezsignfolder_response_compound_1);
	cJSON* jsonezsignfolder_response_compound_2 = ezsignfolder_response_compound_convertToJSON(ezsignfolder_response_compound_2);
	printf("repeating ezsignfolder_response_compound:\n%s\n", cJSON_Print(jsonezsignfolder_response_compound_2));
}

int main() {
  test_ezsignfolder_response_compound(1);
  test_ezsignfolder_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfolder_response_compound_MAIN
#endif // ezsignfolder_response_compound_TEST
