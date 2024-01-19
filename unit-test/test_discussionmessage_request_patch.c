#ifndef discussionmessage_request_patch_TEST
#define discussionmessage_request_patch_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define discussionmessage_request_patch_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/discussionmessage_request_patch.h"
discussionmessage_request_patch_t* instantiate_discussionmessage_request_patch(int include_optional);



discussionmessage_request_patch_t* instantiate_discussionmessage_request_patch(int include_optional) {
  discussionmessage_request_patch_t* discussionmessage_request_patch = NULL;
  if (include_optional) {
    discussionmessage_request_patch = discussionmessage_request_patch_create(
      165,
      "Hello, this is an example of content in a message"
    );
  } else {
    discussionmessage_request_patch = discussionmessage_request_patch_create(
      165,
      "Hello, this is an example of content in a message"
    );
  }

  return discussionmessage_request_patch;
}


#ifdef discussionmessage_request_patch_MAIN

void test_discussionmessage_request_patch(int include_optional) {
    discussionmessage_request_patch_t* discussionmessage_request_patch_1 = instantiate_discussionmessage_request_patch(include_optional);

	cJSON* jsondiscussionmessage_request_patch_1 = discussionmessage_request_patch_convertToJSON(discussionmessage_request_patch_1);
	printf("discussionmessage_request_patch :\n%s\n", cJSON_Print(jsondiscussionmessage_request_patch_1));
	discussionmessage_request_patch_t* discussionmessage_request_patch_2 = discussionmessage_request_patch_parseFromJSON(jsondiscussionmessage_request_patch_1);
	cJSON* jsondiscussionmessage_request_patch_2 = discussionmessage_request_patch_convertToJSON(discussionmessage_request_patch_2);
	printf("repeating discussionmessage_request_patch:\n%s\n", cJSON_Print(jsondiscussionmessage_request_patch_2));
}

int main() {
  test_discussionmessage_request_patch(1);
  test_discussionmessage_request_patch(0);

  printf("Hello world \n");
  return 0;
}

#endif // discussionmessage_request_patch_MAIN
#endif // discussionmessage_request_patch_TEST
