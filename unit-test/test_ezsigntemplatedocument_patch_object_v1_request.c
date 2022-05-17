#ifndef ezsigntemplatedocument_patch_object_v1_request_TEST
#define ezsigntemplatedocument_patch_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatedocument_patch_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatedocument_patch_object_v1_request.h"
ezsigntemplatedocument_patch_object_v1_request_t* instantiate_ezsigntemplatedocument_patch_object_v1_request(int include_optional);

#include "test_ezsigntemplatedocument_request_patch.c"


ezsigntemplatedocument_patch_object_v1_request_t* instantiate_ezsigntemplatedocument_patch_object_v1_request(int include_optional) {
  ezsigntemplatedocument_patch_object_v1_request_t* ezsigntemplatedocument_patch_object_v1_request = NULL;
  if (include_optional) {
    ezsigntemplatedocument_patch_object_v1_request = ezsigntemplatedocument_patch_object_v1_request_create(
       // false, not to have infinite recursion
      instantiate_ezsigntemplatedocument_request_patch(0)
    );
  } else {
    ezsigntemplatedocument_patch_object_v1_request = ezsigntemplatedocument_patch_object_v1_request_create(
      NULL
    );
  }

  return ezsigntemplatedocument_patch_object_v1_request;
}


#ifdef ezsigntemplatedocument_patch_object_v1_request_MAIN

void test_ezsigntemplatedocument_patch_object_v1_request(int include_optional) {
    ezsigntemplatedocument_patch_object_v1_request_t* ezsigntemplatedocument_patch_object_v1_request_1 = instantiate_ezsigntemplatedocument_patch_object_v1_request(include_optional);

	cJSON* jsonezsigntemplatedocument_patch_object_v1_request_1 = ezsigntemplatedocument_patch_object_v1_request_convertToJSON(ezsigntemplatedocument_patch_object_v1_request_1);
	printf("ezsigntemplatedocument_patch_object_v1_request :\n%s\n", cJSON_Print(jsonezsigntemplatedocument_patch_object_v1_request_1));
	ezsigntemplatedocument_patch_object_v1_request_t* ezsigntemplatedocument_patch_object_v1_request_2 = ezsigntemplatedocument_patch_object_v1_request_parseFromJSON(jsonezsigntemplatedocument_patch_object_v1_request_1);
	cJSON* jsonezsigntemplatedocument_patch_object_v1_request_2 = ezsigntemplatedocument_patch_object_v1_request_convertToJSON(ezsigntemplatedocument_patch_object_v1_request_2);
	printf("repeating ezsigntemplatedocument_patch_object_v1_request:\n%s\n", cJSON_Print(jsonezsigntemplatedocument_patch_object_v1_request_2));
}

int main() {
  test_ezsigntemplatedocument_patch_object_v1_request(1);
  test_ezsigntemplatedocument_patch_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatedocument_patch_object_v1_request_MAIN
#endif // ezsigntemplatedocument_patch_object_v1_request_TEST
