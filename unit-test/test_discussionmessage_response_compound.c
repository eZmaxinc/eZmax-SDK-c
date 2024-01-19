#ifndef discussionmessage_response_compound_TEST
#define discussionmessage_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define discussionmessage_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/discussionmessage_response_compound.h"
discussionmessage_response_compound_t* instantiate_discussionmessage_response_compound(int include_optional);

#include "test_common_audit.c"


discussionmessage_response_compound_t* instantiate_discussionmessage_response_compound(int include_optional) {
  discussionmessage_response_compound_t* discussionmessage_response_compound = NULL;
  if (include_optional) {
    discussionmessage_response_compound = discussionmessage_response_compound_create(
      123,
      125,
      165,
      165,
      ezmax_api_definition__full_discussionmessage_response_compound__"New",
      "Hello, this is an example of content in a message",
      "John Doe",
      "Jane Doe",
       // false, not to have infinite recursion
      instantiate_common_audit(0)
    );
  } else {
    discussionmessage_response_compound = discussionmessage_response_compound_create(
      123,
      125,
      165,
      165,
      ezmax_api_definition__full_discussionmessage_response_compound__"New",
      "Hello, this is an example of content in a message",
      "John Doe",
      "Jane Doe",
      NULL
    );
  }

  return discussionmessage_response_compound;
}


#ifdef discussionmessage_response_compound_MAIN

void test_discussionmessage_response_compound(int include_optional) {
    discussionmessage_response_compound_t* discussionmessage_response_compound_1 = instantiate_discussionmessage_response_compound(include_optional);

	cJSON* jsondiscussionmessage_response_compound_1 = discussionmessage_response_compound_convertToJSON(discussionmessage_response_compound_1);
	printf("discussionmessage_response_compound :\n%s\n", cJSON_Print(jsondiscussionmessage_response_compound_1));
	discussionmessage_response_compound_t* discussionmessage_response_compound_2 = discussionmessage_response_compound_parseFromJSON(jsondiscussionmessage_response_compound_1);
	cJSON* jsondiscussionmessage_response_compound_2 = discussionmessage_response_compound_convertToJSON(discussionmessage_response_compound_2);
	printf("repeating discussionmessage_response_compound:\n%s\n", cJSON_Print(jsondiscussionmessage_response_compound_2));
}

int main() {
  test_discussionmessage_response_compound(1);
  test_discussionmessage_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // discussionmessage_response_compound_MAIN
#endif // discussionmessage_response_compound_TEST
