#ifndef discussionmembership_request_TEST
#define discussionmembership_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define discussionmembership_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/discussionmembership_request.h"
discussionmembership_request_t* instantiate_discussionmembership_request(int include_optional);



discussionmembership_request_t* instantiate_discussionmembership_request(int include_optional) {
  discussionmembership_request_t* discussionmembership_request = NULL;
  if (include_optional) {
    discussionmembership_request = discussionmembership_request_create(
      165,
      125,
      70,
      2,
      53,
      "2020-12-31 23:59:59"
    );
  } else {
    discussionmembership_request = discussionmembership_request_create(
      165,
      125,
      70,
      2,
      53,
      "2020-12-31 23:59:59"
    );
  }

  return discussionmembership_request;
}


#ifdef discussionmembership_request_MAIN

void test_discussionmembership_request(int include_optional) {
    discussionmembership_request_t* discussionmembership_request_1 = instantiate_discussionmembership_request(include_optional);

	cJSON* jsondiscussionmembership_request_1 = discussionmembership_request_convertToJSON(discussionmembership_request_1);
	printf("discussionmembership_request :\n%s\n", cJSON_Print(jsondiscussionmembership_request_1));
	discussionmembership_request_t* discussionmembership_request_2 = discussionmembership_request_parseFromJSON(jsondiscussionmembership_request_1);
	cJSON* jsondiscussionmembership_request_2 = discussionmembership_request_convertToJSON(discussionmembership_request_2);
	printf("repeating discussionmembership_request:\n%s\n", cJSON_Print(jsondiscussionmembership_request_2));
}

int main() {
  test_discussionmembership_request(1);
  test_discussionmembership_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // discussionmembership_request_MAIN
#endif // discussionmembership_request_TEST
