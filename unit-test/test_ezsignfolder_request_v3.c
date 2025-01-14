#ifndef ezsignfolder_request_v3_TEST
#define ezsignfolder_request_v3_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfolder_request_v3_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfolder_request_v3.h"
ezsignfolder_request_v3_t* instantiate_ezsignfolder_request_v3(int include_optional);



ezsignfolder_request_v3_t* instantiate_ezsignfolder_request_v3(int include_optional) {
  ezsignfolder_request_v3_t* ezsignfolder_request_v3 = NULL;
  if (include_optional) {
    ezsignfolder_request_v3 = ezsignfolder_request_v3_create(
      33,
      5,
      247,
      1,
      ezmax_api_definition__full_ezsignfolder_request_v3__"All",
      "Test eZsign Folder",
      "This is a note",
      "Hi everyone,

This is the document I need you to review.

Could you sign it before Monday please.

Best Regards.

Mary",
      30,
      30,
      "{"ID": 1234, "TAGS": ["tag1", "tag2", "tag3"]}"
    );
  } else {
    ezsignfolder_request_v3 = ezsignfolder_request_v3_create(
      33,
      5,
      247,
      1,
      ezmax_api_definition__full_ezsignfolder_request_v3__"All",
      "Test eZsign Folder",
      "This is a note",
      "Hi everyone,

This is the document I need you to review.

Could you sign it before Monday please.

Best Regards.

Mary",
      30,
      30,
      "{"ID": 1234, "TAGS": ["tag1", "tag2", "tag3"]}"
    );
  }

  return ezsignfolder_request_v3;
}


#ifdef ezsignfolder_request_v3_MAIN

void test_ezsignfolder_request_v3(int include_optional) {
    ezsignfolder_request_v3_t* ezsignfolder_request_v3_1 = instantiate_ezsignfolder_request_v3(include_optional);

	cJSON* jsonezsignfolder_request_v3_1 = ezsignfolder_request_v3_convertToJSON(ezsignfolder_request_v3_1);
	printf("ezsignfolder_request_v3 :\n%s\n", cJSON_Print(jsonezsignfolder_request_v3_1));
	ezsignfolder_request_v3_t* ezsignfolder_request_v3_2 = ezsignfolder_request_v3_parseFromJSON(jsonezsignfolder_request_v3_1);
	cJSON* jsonezsignfolder_request_v3_2 = ezsignfolder_request_v3_convertToJSON(ezsignfolder_request_v3_2);
	printf("repeating ezsignfolder_request_v3:\n%s\n", cJSON_Print(jsonezsignfolder_request_v3_2));
}

int main() {
  test_ezsignfolder_request_v3(1);
  test_ezsignfolder_request_v3(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfolder_request_v3_MAIN
#endif // ezsignfolder_request_v3_TEST
