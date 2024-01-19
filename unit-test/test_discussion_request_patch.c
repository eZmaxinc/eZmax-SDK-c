#ifndef discussion_request_patch_TEST
#define discussion_request_patch_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define discussion_request_patch_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/discussion_request_patch.h"
discussion_request_patch_t* instantiate_discussion_request_patch(int include_optional);



discussion_request_patch_t* instantiate_discussion_request_patch(int include_optional) {
  discussion_request_patch_t* discussion_request_patch = NULL;
  if (include_optional) {
    discussion_request_patch = discussion_request_patch_create(
      "John Doe",
      true
    );
  } else {
    discussion_request_patch = discussion_request_patch_create(
      "John Doe",
      true
    );
  }

  return discussion_request_patch;
}


#ifdef discussion_request_patch_MAIN

void test_discussion_request_patch(int include_optional) {
    discussion_request_patch_t* discussion_request_patch_1 = instantiate_discussion_request_patch(include_optional);

	cJSON* jsondiscussion_request_patch_1 = discussion_request_patch_convertToJSON(discussion_request_patch_1);
	printf("discussion_request_patch :\n%s\n", cJSON_Print(jsondiscussion_request_patch_1));
	discussion_request_patch_t* discussion_request_patch_2 = discussion_request_patch_parseFromJSON(jsondiscussion_request_patch_1);
	cJSON* jsondiscussion_request_patch_2 = discussion_request_patch_convertToJSON(discussion_request_patch_2);
	printf("repeating discussion_request_patch:\n%s\n", cJSON_Print(jsondiscussion_request_patch_2));
}

int main() {
  test_discussion_request_patch(1);
  test_discussion_request_patch(0);

  printf("Hello world \n");
  return 0;
}

#endif // discussion_request_patch_MAIN
#endif // discussion_request_patch_TEST
