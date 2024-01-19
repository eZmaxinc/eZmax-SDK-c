#ifndef discussionmessage_request_TEST
#define discussionmessage_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define discussionmessage_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/discussionmessage_request.h"
discussionmessage_request_t* instantiate_discussionmessage_request(int include_optional);



discussionmessage_request_t* instantiate_discussionmessage_request(int include_optional) {
  discussionmessage_request_t* discussionmessage_request = NULL;
  if (include_optional) {
    discussionmessage_request = discussionmessage_request_create(
      123,
      125,
      165,
      "Hello, this is an example of content in a message"
    );
  } else {
    discussionmessage_request = discussionmessage_request_create(
      123,
      125,
      165,
      "Hello, this is an example of content in a message"
    );
  }

  return discussionmessage_request;
}


#ifdef discussionmessage_request_MAIN

void test_discussionmessage_request(int include_optional) {
    discussionmessage_request_t* discussionmessage_request_1 = instantiate_discussionmessage_request(include_optional);

	cJSON* jsondiscussionmessage_request_1 = discussionmessage_request_convertToJSON(discussionmessage_request_1);
	printf("discussionmessage_request :\n%s\n", cJSON_Print(jsondiscussionmessage_request_1));
	discussionmessage_request_t* discussionmessage_request_2 = discussionmessage_request_parseFromJSON(jsondiscussionmessage_request_1);
	cJSON* jsondiscussionmessage_request_2 = discussionmessage_request_convertToJSON(discussionmessage_request_2);
	printf("repeating discussionmessage_request:\n%s\n", cJSON_Print(jsondiscussionmessage_request_2));
}

int main() {
  test_discussionmessage_request(1);
  test_discussionmessage_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // discussionmessage_request_MAIN
#endif // discussionmessage_request_TEST
