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

#include "test_custom_ezsignfoldertype_response.c"
#include "test_common_audit.c"
#include "test_custom_timezone_with_code_response.c"


ezsignfolder_response_compound_t* instantiate_ezsignfolder_response_compound(int include_optional) {
  ezsignfolder_response_compound_t* ezsignfolder_response_compound = NULL;
  if (include_optional) {
    ezsignfolder_response_compound = ezsignfolder_response_compound_create(
      33,
      5,
       // false, not to have infinite recursion
      instantiate_custom_ezsignfoldertype_response(0),
      247,
      ezmax_api_definition__full_ezsignfolder_response_compound__"PerEzsigndocument",
      "0",
      1,
      "Default",
      1,
      "No",
      "Test eZsign Folder",
      "This is a note",
      false,
      ezmax_api_definition__full_ezsignfolder_response_compound__"None",
      30,
      30,
      "2020-12-31T23:59:59.000Z",
      "2020-12-31 23:59:59",
      "2020-12-31T23:59:59.000Z",
      "2020-12-31 23:59:59",
      "2020-12-31",
      ezmax_api_definition__full_ezsignfolder_response_compound__"Completed",
      "2020-12-31 23:59:59",
      "Hi everyone,

This is the document I need you to review.

Could you sign it before Monday please.

Best Regards.

Mary",
       // false, not to have infinite recursion
      instantiate_common_audit(0),
      "{"ID": 1234, "TAGS": ["tag1", "tag2", "tag3"]}",
       // false, not to have infinite recursion
      instantiate_custom_timezone_with_code_response(0)
    );
  } else {
    ezsignfolder_response_compound = ezsignfolder_response_compound_create(
      33,
      5,
      NULL,
      247,
      ezmax_api_definition__full_ezsignfolder_response_compound__"PerEzsigndocument",
      "0",
      1,
      "Default",
      1,
      "No",
      "Test eZsign Folder",
      "This is a note",
      false,
      ezmax_api_definition__full_ezsignfolder_response_compound__"None",
      30,
      30,
      "2020-12-31T23:59:59.000Z",
      "2020-12-31 23:59:59",
      "2020-12-31T23:59:59.000Z",
      "2020-12-31 23:59:59",
      "2020-12-31",
      ezmax_api_definition__full_ezsignfolder_response_compound__"Completed",
      "2020-12-31 23:59:59",
      "Hi everyone,

This is the document I need you to review.

Could you sign it before Monday please.

Best Regards.

Mary",
      NULL,
      "{"ID": 1234, "TAGS": ["tag1", "tag2", "tag3"]}",
      NULL
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
