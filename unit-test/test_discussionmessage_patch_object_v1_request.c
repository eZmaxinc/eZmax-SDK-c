#ifndef discussionmessage_patch_object_v1_request_TEST
#define discussionmessage_patch_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define discussionmessage_patch_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/discussionmessage_patch_object_v1_request.h"
discussionmessage_patch_object_v1_request_t* instantiate_discussionmessage_patch_object_v1_request(int include_optional);

#include "test_discussionmessage_request_patch.c"


discussionmessage_patch_object_v1_request_t* instantiate_discussionmessage_patch_object_v1_request(int include_optional) {
  discussionmessage_patch_object_v1_request_t* discussionmessage_patch_object_v1_request = NULL;
  if (include_optional) {
    discussionmessage_patch_object_v1_request = discussionmessage_patch_object_v1_request_create(
       // false, not to have infinite recursion
      instantiate_discussionmessage_request_patch(0)
    );
  } else {
    discussionmessage_patch_object_v1_request = discussionmessage_patch_object_v1_request_create(
      NULL
    );
  }

  return discussionmessage_patch_object_v1_request;
}


#ifdef discussionmessage_patch_object_v1_request_MAIN

void test_discussionmessage_patch_object_v1_request(int include_optional) {
    discussionmessage_patch_object_v1_request_t* discussionmessage_patch_object_v1_request_1 = instantiate_discussionmessage_patch_object_v1_request(include_optional);

	cJSON* jsondiscussionmessage_patch_object_v1_request_1 = discussionmessage_patch_object_v1_request_convertToJSON(discussionmessage_patch_object_v1_request_1);
	printf("discussionmessage_patch_object_v1_request :\n%s\n", cJSON_Print(jsondiscussionmessage_patch_object_v1_request_1));
	discussionmessage_patch_object_v1_request_t* discussionmessage_patch_object_v1_request_2 = discussionmessage_patch_object_v1_request_parseFromJSON(jsondiscussionmessage_patch_object_v1_request_1);
	cJSON* jsondiscussionmessage_patch_object_v1_request_2 = discussionmessage_patch_object_v1_request_convertToJSON(discussionmessage_patch_object_v1_request_2);
	printf("repeating discussionmessage_patch_object_v1_request:\n%s\n", cJSON_Print(jsondiscussionmessage_patch_object_v1_request_2));
}

int main() {
  test_discussionmessage_patch_object_v1_request(1);
  test_discussionmessage_patch_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // discussionmessage_patch_object_v1_request_MAIN
#endif // discussionmessage_patch_object_v1_request_TEST
