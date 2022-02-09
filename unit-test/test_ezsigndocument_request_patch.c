#ifndef ezsigndocument_request_patch_TEST
#define ezsigndocument_request_patch_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigndocument_request_patch_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigndocument_request_patch.h"
ezsigndocument_request_patch_t* instantiate_ezsigndocument_request_patch(int include_optional);



ezsigndocument_request_patch_t* instantiate_ezsigndocument_request_patch(int include_optional) {
  ezsigndocument_request_patch_t* ezsigndocument_request_patch = NULL;
  if (include_optional) {
    ezsigndocument_request_patch = ezsigndocument_request_patch_create(
      "2020-12-31 23:59:59",
      "Contract #123"
    );
  } else {
    ezsigndocument_request_patch = ezsigndocument_request_patch_create(
      "2020-12-31 23:59:59",
      "Contract #123"
    );
  }

  return ezsigndocument_request_patch;
}


#ifdef ezsigndocument_request_patch_MAIN

void test_ezsigndocument_request_patch(int include_optional) {
    ezsigndocument_request_patch_t* ezsigndocument_request_patch_1 = instantiate_ezsigndocument_request_patch(include_optional);

	cJSON* jsonezsigndocument_request_patch_1 = ezsigndocument_request_patch_convertToJSON(ezsigndocument_request_patch_1);
	printf("ezsigndocument_request_patch :\n%s\n", cJSON_Print(jsonezsigndocument_request_patch_1));
	ezsigndocument_request_patch_t* ezsigndocument_request_patch_2 = ezsigndocument_request_patch_parseFromJSON(jsonezsigndocument_request_patch_1);
	cJSON* jsonezsigndocument_request_patch_2 = ezsigndocument_request_patch_convertToJSON(ezsigndocument_request_patch_2);
	printf("repeating ezsigndocument_request_patch:\n%s\n", cJSON_Print(jsonezsigndocument_request_patch_2));
}

int main() {
  test_ezsigndocument_request_patch(1);
  test_ezsigndocument_request_patch(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigndocument_request_patch_MAIN
#endif // ezsigndocument_request_patch_TEST
