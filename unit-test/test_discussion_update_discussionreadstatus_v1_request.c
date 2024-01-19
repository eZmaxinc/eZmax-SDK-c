#ifndef discussion_update_discussionreadstatus_v1_request_TEST
#define discussion_update_discussionreadstatus_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define discussion_update_discussionreadstatus_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/discussion_update_discussionreadstatus_v1_request.h"
discussion_update_discussionreadstatus_v1_request_t* instantiate_discussion_update_discussionreadstatus_v1_request(int include_optional);



discussion_update_discussionreadstatus_v1_request_t* instantiate_discussion_update_discussionreadstatus_v1_request(int include_optional) {
  discussion_update_discussionreadstatus_v1_request_t* discussion_update_discussionreadstatus_v1_request = NULL;
  if (include_optional) {
    discussion_update_discussionreadstatus_v1_request = discussion_update_discussionreadstatus_v1_request_create(
      "2020-12-31 23:59:59"
    );
  } else {
    discussion_update_discussionreadstatus_v1_request = discussion_update_discussionreadstatus_v1_request_create(
      "2020-12-31 23:59:59"
    );
  }

  return discussion_update_discussionreadstatus_v1_request;
}


#ifdef discussion_update_discussionreadstatus_v1_request_MAIN

void test_discussion_update_discussionreadstatus_v1_request(int include_optional) {
    discussion_update_discussionreadstatus_v1_request_t* discussion_update_discussionreadstatus_v1_request_1 = instantiate_discussion_update_discussionreadstatus_v1_request(include_optional);

	cJSON* jsondiscussion_update_discussionreadstatus_v1_request_1 = discussion_update_discussionreadstatus_v1_request_convertToJSON(discussion_update_discussionreadstatus_v1_request_1);
	printf("discussion_update_discussionreadstatus_v1_request :\n%s\n", cJSON_Print(jsondiscussion_update_discussionreadstatus_v1_request_1));
	discussion_update_discussionreadstatus_v1_request_t* discussion_update_discussionreadstatus_v1_request_2 = discussion_update_discussionreadstatus_v1_request_parseFromJSON(jsondiscussion_update_discussionreadstatus_v1_request_1);
	cJSON* jsondiscussion_update_discussionreadstatus_v1_request_2 = discussion_update_discussionreadstatus_v1_request_convertToJSON(discussion_update_discussionreadstatus_v1_request_2);
	printf("repeating discussion_update_discussionreadstatus_v1_request:\n%s\n", cJSON_Print(jsondiscussion_update_discussionreadstatus_v1_request_2));
}

int main() {
  test_discussion_update_discussionreadstatus_v1_request(1);
  test_discussion_update_discussionreadstatus_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // discussion_update_discussionreadstatus_v1_request_MAIN
#endif // discussion_update_discussionreadstatus_v1_request_TEST
