#ifndef discussion_request_TEST
#define discussion_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define discussion_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/discussion_request.h"
discussion_request_t* instantiate_discussion_request(int include_optional);



discussion_request_t* instantiate_discussion_request(int include_optional) {
  discussion_request_t* discussion_request = NULL;
  if (include_optional) {
    discussion_request = discussion_request_create(
      125,
      "John Doe",
      true
    );
  } else {
    discussion_request = discussion_request_create(
      125,
      "John Doe",
      true
    );
  }

  return discussion_request;
}


#ifdef discussion_request_MAIN

void test_discussion_request(int include_optional) {
    discussion_request_t* discussion_request_1 = instantiate_discussion_request(include_optional);

	cJSON* jsondiscussion_request_1 = discussion_request_convertToJSON(discussion_request_1);
	printf("discussion_request :\n%s\n", cJSON_Print(jsondiscussion_request_1));
	discussion_request_t* discussion_request_2 = discussion_request_parseFromJSON(jsondiscussion_request_1);
	cJSON* jsondiscussion_request_2 = discussion_request_convertToJSON(discussion_request_2);
	printf("repeating discussion_request:\n%s\n", cJSON_Print(jsondiscussion_request_2));
}

int main() {
  test_discussion_request(1);
  test_discussion_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // discussion_request_MAIN
#endif // discussion_request_TEST
