#ifndef discussionmembership_response_TEST
#define discussionmembership_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define discussionmembership_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/discussionmembership_response.h"
discussionmembership_response_t* instantiate_discussionmembership_response(int include_optional);



discussionmembership_response_t* instantiate_discussionmembership_response(int include_optional) {
  discussionmembership_response_t* discussionmembership_response = NULL;
  if (include_optional) {
    discussionmembership_response = discussionmembership_response_create(
      165,
      125,
      70,
      2,
      53,
      "John Doe",
      "2020-12-31 23:59:59"
    );
  } else {
    discussionmembership_response = discussionmembership_response_create(
      165,
      125,
      70,
      2,
      53,
      "John Doe",
      "2020-12-31 23:59:59"
    );
  }

  return discussionmembership_response;
}


#ifdef discussionmembership_response_MAIN

void test_discussionmembership_response(int include_optional) {
    discussionmembership_response_t* discussionmembership_response_1 = instantiate_discussionmembership_response(include_optional);

	cJSON* jsondiscussionmembership_response_1 = discussionmembership_response_convertToJSON(discussionmembership_response_1);
	printf("discussionmembership_response :\n%s\n", cJSON_Print(jsondiscussionmembership_response_1));
	discussionmembership_response_t* discussionmembership_response_2 = discussionmembership_response_parseFromJSON(jsondiscussionmembership_response_1);
	cJSON* jsondiscussionmembership_response_2 = discussionmembership_response_convertToJSON(discussionmembership_response_2);
	printf("repeating discussionmembership_response:\n%s\n", cJSON_Print(jsondiscussionmembership_response_2));
}

int main() {
  test_discussionmembership_response(1);
  test_discussionmembership_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // discussionmembership_response_MAIN
#endif // discussionmembership_response_TEST
