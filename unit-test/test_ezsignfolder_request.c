#ifndef ezsignfolder_request_TEST
#define ezsignfolder_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfolder_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfolder_request.h"
ezsignfolder_request_t* instantiate_ezsignfolder_request(int include_optional);



ezsignfolder_request_t* instantiate_ezsignfolder_request(int include_optional) {
  ezsignfolder_request_t* ezsignfolder_request = NULL;
  if (include_optional) {
    ezsignfolder_request = ezsignfolder_request_create(
      33,
      5,
      1,
      "Test eZsign Folder",
      "This is a note",
      ezmax_api_definition__full_ezsignfolder_request__"None",
      "{"ID": 1234, "TAGS": ["tag1", "tag2", "tag3"]}"
    );
  } else {
    ezsignfolder_request = ezsignfolder_request_create(
      33,
      5,
      1,
      "Test eZsign Folder",
      "This is a note",
      ezmax_api_definition__full_ezsignfolder_request__"None",
      "{"ID": 1234, "TAGS": ["tag1", "tag2", "tag3"]}"
    );
  }

  return ezsignfolder_request;
}


#ifdef ezsignfolder_request_MAIN

void test_ezsignfolder_request(int include_optional) {
    ezsignfolder_request_t* ezsignfolder_request_1 = instantiate_ezsignfolder_request(include_optional);

	cJSON* jsonezsignfolder_request_1 = ezsignfolder_request_convertToJSON(ezsignfolder_request_1);
	printf("ezsignfolder_request :\n%s\n", cJSON_Print(jsonezsignfolder_request_1));
	ezsignfolder_request_t* ezsignfolder_request_2 = ezsignfolder_request_parseFromJSON(jsonezsignfolder_request_1);
	cJSON* jsonezsignfolder_request_2 = ezsignfolder_request_convertToJSON(ezsignfolder_request_2);
	printf("repeating ezsignfolder_request:\n%s\n", cJSON_Print(jsonezsignfolder_request_2));
}

int main() {
  test_ezsignfolder_request(1);
  test_ezsignfolder_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfolder_request_MAIN
#endif // ezsignfolder_request_TEST
