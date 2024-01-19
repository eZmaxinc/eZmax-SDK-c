#ifndef discussionmessage_response_TEST
#define discussionmessage_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define discussionmessage_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/discussionmessage_response.h"
discussionmessage_response_t* instantiate_discussionmessage_response(int include_optional);

#include "test_common_audit.c"


discussionmessage_response_t* instantiate_discussionmessage_response(int include_optional) {
  discussionmessage_response_t* discussionmessage_response = NULL;
  if (include_optional) {
    discussionmessage_response = discussionmessage_response_create(
      123,
      125,
      165,
      165,
      ezmax_api_definition__full_discussionmessage_response__"New",
      "Hello, this is an example of content in a message",
      "John Doe",
      "Jane Doe",
       // false, not to have infinite recursion
      instantiate_common_audit(0)
    );
  } else {
    discussionmessage_response = discussionmessage_response_create(
      123,
      125,
      165,
      165,
      ezmax_api_definition__full_discussionmessage_response__"New",
      "Hello, this is an example of content in a message",
      "John Doe",
      "Jane Doe",
      NULL
    );
  }

  return discussionmessage_response;
}


#ifdef discussionmessage_response_MAIN

void test_discussionmessage_response(int include_optional) {
    discussionmessage_response_t* discussionmessage_response_1 = instantiate_discussionmessage_response(include_optional);

	cJSON* jsondiscussionmessage_response_1 = discussionmessage_response_convertToJSON(discussionmessage_response_1);
	printf("discussionmessage_response :\n%s\n", cJSON_Print(jsondiscussionmessage_response_1));
	discussionmessage_response_t* discussionmessage_response_2 = discussionmessage_response_parseFromJSON(jsondiscussionmessage_response_1);
	cJSON* jsondiscussionmessage_response_2 = discussionmessage_response_convertToJSON(discussionmessage_response_2);
	printf("repeating discussionmessage_response:\n%s\n", cJSON_Print(jsondiscussionmessage_response_2));
}

int main() {
  test_discussionmessage_response(1);
  test_discussionmessage_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // discussionmessage_response_MAIN
#endif // discussionmessage_response_TEST
