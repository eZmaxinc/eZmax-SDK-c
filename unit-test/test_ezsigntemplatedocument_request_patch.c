#ifndef ezsigntemplatedocument_request_patch_TEST
#define ezsigntemplatedocument_request_patch_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatedocument_request_patch_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatedocument_request_patch.h"
ezsigntemplatedocument_request_patch_t* instantiate_ezsigntemplatedocument_request_patch(int include_optional);



ezsigntemplatedocument_request_patch_t* instantiate_ezsigntemplatedocument_request_patch(int include_optional) {
  ezsigntemplatedocument_request_patch_t* ezsigntemplatedocument_request_patch = NULL;
  if (include_optional) {
    ezsigntemplatedocument_request_patch = ezsigntemplatedocument_request_patch_create(
      "Standard Contract"
    );
  } else {
    ezsigntemplatedocument_request_patch = ezsigntemplatedocument_request_patch_create(
      "Standard Contract"
    );
  }

  return ezsigntemplatedocument_request_patch;
}


#ifdef ezsigntemplatedocument_request_patch_MAIN

void test_ezsigntemplatedocument_request_patch(int include_optional) {
    ezsigntemplatedocument_request_patch_t* ezsigntemplatedocument_request_patch_1 = instantiate_ezsigntemplatedocument_request_patch(include_optional);

	cJSON* jsonezsigntemplatedocument_request_patch_1 = ezsigntemplatedocument_request_patch_convertToJSON(ezsigntemplatedocument_request_patch_1);
	printf("ezsigntemplatedocument_request_patch :\n%s\n", cJSON_Print(jsonezsigntemplatedocument_request_patch_1));
	ezsigntemplatedocument_request_patch_t* ezsigntemplatedocument_request_patch_2 = ezsigntemplatedocument_request_patch_parseFromJSON(jsonezsigntemplatedocument_request_patch_1);
	cJSON* jsonezsigntemplatedocument_request_patch_2 = ezsigntemplatedocument_request_patch_convertToJSON(ezsigntemplatedocument_request_patch_2);
	printf("repeating ezsigntemplatedocument_request_patch:\n%s\n", cJSON_Print(jsonezsigntemplatedocument_request_patch_2));
}

int main() {
  test_ezsigntemplatedocument_request_patch(1);
  test_ezsigntemplatedocument_request_patch(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatedocument_request_patch_MAIN
#endif // ezsigntemplatedocument_request_patch_TEST
