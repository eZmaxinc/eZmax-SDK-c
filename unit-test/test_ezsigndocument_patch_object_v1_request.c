#ifndef ezsigndocument_patch_object_v1_request_TEST
#define ezsigndocument_patch_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigndocument_patch_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigndocument_patch_object_v1_request.h"
ezsigndocument_patch_object_v1_request_t* instantiate_ezsigndocument_patch_object_v1_request(int include_optional);

#include "test_ezsigndocument_request_patch.c"


ezsigndocument_patch_object_v1_request_t* instantiate_ezsigndocument_patch_object_v1_request(int include_optional) {
  ezsigndocument_patch_object_v1_request_t* ezsigndocument_patch_object_v1_request = NULL;
  if (include_optional) {
    ezsigndocument_patch_object_v1_request = ezsigndocument_patch_object_v1_request_create(
       // false, not to have infinite recursion
      instantiate_ezsigndocument_request_patch(0)
    );
  } else {
    ezsigndocument_patch_object_v1_request = ezsigndocument_patch_object_v1_request_create(
      NULL
    );
  }

  return ezsigndocument_patch_object_v1_request;
}


#ifdef ezsigndocument_patch_object_v1_request_MAIN

void test_ezsigndocument_patch_object_v1_request(int include_optional) {
    ezsigndocument_patch_object_v1_request_t* ezsigndocument_patch_object_v1_request_1 = instantiate_ezsigndocument_patch_object_v1_request(include_optional);

	cJSON* jsonezsigndocument_patch_object_v1_request_1 = ezsigndocument_patch_object_v1_request_convertToJSON(ezsigndocument_patch_object_v1_request_1);
	printf("ezsigndocument_patch_object_v1_request :\n%s\n", cJSON_Print(jsonezsigndocument_patch_object_v1_request_1));
	ezsigndocument_patch_object_v1_request_t* ezsigndocument_patch_object_v1_request_2 = ezsigndocument_patch_object_v1_request_parseFromJSON(jsonezsigndocument_patch_object_v1_request_1);
	cJSON* jsonezsigndocument_patch_object_v1_request_2 = ezsigndocument_patch_object_v1_request_convertToJSON(ezsigndocument_patch_object_v1_request_2);
	printf("repeating ezsigndocument_patch_object_v1_request:\n%s\n", cJSON_Print(jsonezsigndocument_patch_object_v1_request_2));
}

int main() {
  test_ezsigndocument_patch_object_v1_request(1);
  test_ezsigndocument_patch_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigndocument_patch_object_v1_request_MAIN
#endif // ezsigndocument_patch_object_v1_request_TEST
