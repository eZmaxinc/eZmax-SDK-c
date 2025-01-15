#ifndef ezsignfolder_response_v3_TEST
#define ezsignfolder_response_v3_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfolder_response_v3_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfolder_response_v3.h"
ezsignfolder_response_v3_t* instantiate_ezsignfolder_response_v3(int include_optional);

#include "test_object.c"
#include "test_common_audit.c"


ezsignfolder_response_v3_t* instantiate_ezsignfolder_response_v3(int include_optional) {
  ezsignfolder_response_v3_t* ezsignfolder_response_v3 = NULL;
  if (include_optional) {
    ezsignfolder_response_v3 = ezsignfolder_response_v3_create(
      33,
      5,
       // false, not to have infinite recursion
      instantiate_object(0),
      247,
      ezmax_api_definition__full_ezsignfolder_response_v3__"PerEzsigndocument",
      ezmax_api_definition__full_ezsignfolder_response_v3__"All",
      "0",
      1,
      "Default",
      1,
      "No",
      "Test eZsign Folder",
      "This is a note",
      false,
      30,
      30,
      "2020-12-31T23:59:59.000Z",
      "2020-12-31 23:59:59",
      "2020-12-31T23:59:59.000Z",
      "2020-12-31 23:59:59",
      "2020-12-31",
      ezmax_api_definition__full_ezsignfolder_response_v3__"Completed",
      "2020-12-31 23:59:59",
      "Hi everyone,

This is the document I need you to review.

Could you sign it before Monday please.

Best Regards.

Mary",
       // false, not to have infinite recursion
      instantiate_common_audit(0),
      "{"ID": 1234, "TAGS": ["tag1", "tag2", "tag3"]}",
      ezmax_api_definition__full_ezsignfolder_response_v3__"Full"
    );
  } else {
    ezsignfolder_response_v3 = ezsignfolder_response_v3_create(
      33,
      5,
      NULL,
      247,
      ezmax_api_definition__full_ezsignfolder_response_v3__"PerEzsigndocument",
      ezmax_api_definition__full_ezsignfolder_response_v3__"All",
      "0",
      1,
      "Default",
      1,
      "No",
      "Test eZsign Folder",
      "This is a note",
      false,
      30,
      30,
      "2020-12-31T23:59:59.000Z",
      "2020-12-31 23:59:59",
      "2020-12-31T23:59:59.000Z",
      "2020-12-31 23:59:59",
      "2020-12-31",
      ezmax_api_definition__full_ezsignfolder_response_v3__"Completed",
      "2020-12-31 23:59:59",
      "Hi everyone,

This is the document I need you to review.

Could you sign it before Monday please.

Best Regards.

Mary",
      NULL,
      "{"ID": 1234, "TAGS": ["tag1", "tag2", "tag3"]}",
      ezmax_api_definition__full_ezsignfolder_response_v3__"Full"
    );
  }

  return ezsignfolder_response_v3;
}


#ifdef ezsignfolder_response_v3_MAIN

void test_ezsignfolder_response_v3(int include_optional) {
    ezsignfolder_response_v3_t* ezsignfolder_response_v3_1 = instantiate_ezsignfolder_response_v3(include_optional);

	cJSON* jsonezsignfolder_response_v3_1 = ezsignfolder_response_v3_convertToJSON(ezsignfolder_response_v3_1);
	printf("ezsignfolder_response_v3 :\n%s\n", cJSON_Print(jsonezsignfolder_response_v3_1));
	ezsignfolder_response_v3_t* ezsignfolder_response_v3_2 = ezsignfolder_response_v3_parseFromJSON(jsonezsignfolder_response_v3_1);
	cJSON* jsonezsignfolder_response_v3_2 = ezsignfolder_response_v3_convertToJSON(ezsignfolder_response_v3_2);
	printf("repeating ezsignfolder_response_v3:\n%s\n", cJSON_Print(jsonezsignfolder_response_v3_2));
}

int main() {
  test_ezsignfolder_response_v3(1);
  test_ezsignfolder_response_v3(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfolder_response_v3_MAIN
#endif // ezsignfolder_response_v3_TEST
