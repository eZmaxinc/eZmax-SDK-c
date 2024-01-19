#ifndef discussion_patch_object_v1_request_TEST
#define discussion_patch_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define discussion_patch_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/discussion_patch_object_v1_request.h"
discussion_patch_object_v1_request_t* instantiate_discussion_patch_object_v1_request(int include_optional);

#include "test_discussion_request_patch.c"


discussion_patch_object_v1_request_t* instantiate_discussion_patch_object_v1_request(int include_optional) {
  discussion_patch_object_v1_request_t* discussion_patch_object_v1_request = NULL;
  if (include_optional) {
    discussion_patch_object_v1_request = discussion_patch_object_v1_request_create(
       // false, not to have infinite recursion
      instantiate_discussion_request_patch(0)
    );
  } else {
    discussion_patch_object_v1_request = discussion_patch_object_v1_request_create(
      NULL
    );
  }

  return discussion_patch_object_v1_request;
}


#ifdef discussion_patch_object_v1_request_MAIN

void test_discussion_patch_object_v1_request(int include_optional) {
    discussion_patch_object_v1_request_t* discussion_patch_object_v1_request_1 = instantiate_discussion_patch_object_v1_request(include_optional);

	cJSON* jsondiscussion_patch_object_v1_request_1 = discussion_patch_object_v1_request_convertToJSON(discussion_patch_object_v1_request_1);
	printf("discussion_patch_object_v1_request :\n%s\n", cJSON_Print(jsondiscussion_patch_object_v1_request_1));
	discussion_patch_object_v1_request_t* discussion_patch_object_v1_request_2 = discussion_patch_object_v1_request_parseFromJSON(jsondiscussion_patch_object_v1_request_1);
	cJSON* jsondiscussion_patch_object_v1_request_2 = discussion_patch_object_v1_request_convertToJSON(discussion_patch_object_v1_request_2);
	printf("repeating discussion_patch_object_v1_request:\n%s\n", cJSON_Print(jsondiscussion_patch_object_v1_request_2));
}

int main() {
  test_discussion_patch_object_v1_request(1);
  test_discussion_patch_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // discussion_patch_object_v1_request_MAIN
#endif // discussion_patch_object_v1_request_TEST
