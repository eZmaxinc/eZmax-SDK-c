#ifndef discussionmessage_request_compound_TEST
#define discussionmessage_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define discussionmessage_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/discussionmessage_request_compound.h"
discussionmessage_request_compound_t* instantiate_discussionmessage_request_compound(int include_optional);



discussionmessage_request_compound_t* instantiate_discussionmessage_request_compound(int include_optional) {
  discussionmessage_request_compound_t* discussionmessage_request_compound = NULL;
  if (include_optional) {
    discussionmessage_request_compound = discussionmessage_request_compound_create(
      123,
      125,
      165,
      "Hello, this is an example of content in a message"
    );
  } else {
    discussionmessage_request_compound = discussionmessage_request_compound_create(
      123,
      125,
      165,
      "Hello, this is an example of content in a message"
    );
  }

  return discussionmessage_request_compound;
}


#ifdef discussionmessage_request_compound_MAIN

void test_discussionmessage_request_compound(int include_optional) {
    discussionmessage_request_compound_t* discussionmessage_request_compound_1 = instantiate_discussionmessage_request_compound(include_optional);

	cJSON* jsondiscussionmessage_request_compound_1 = discussionmessage_request_compound_convertToJSON(discussionmessage_request_compound_1);
	printf("discussionmessage_request_compound :\n%s\n", cJSON_Print(jsondiscussionmessage_request_compound_1));
	discussionmessage_request_compound_t* discussionmessage_request_compound_2 = discussionmessage_request_compound_parseFromJSON(jsondiscussionmessage_request_compound_1);
	cJSON* jsondiscussionmessage_request_compound_2 = discussionmessage_request_compound_convertToJSON(discussionmessage_request_compound_2);
	printf("repeating discussionmessage_request_compound:\n%s\n", cJSON_Print(jsondiscussionmessage_request_compound_2));
}

int main() {
  test_discussionmessage_request_compound(1);
  test_discussionmessage_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // discussionmessage_request_compound_MAIN
#endif // discussionmessage_request_compound_TEST
