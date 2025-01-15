#ifndef discussion_response_TEST
#define discussion_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define discussion_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/discussion_response.h"
discussion_response_t* instantiate_discussion_response(int include_optional);

#include "test_object.c"


discussion_response_t* instantiate_discussion_response(int include_optional) {
  discussion_response_t* discussion_response = NULL;
  if (include_optional) {
    discussion_response = discussion_response_create(
      125,
      "John Doe",
      true,
      "2020-12-31 23:59:59",
      4,
      4,
       // false, not to have infinite recursion
      instantiate_object(0)
    );
  } else {
    discussion_response = discussion_response_create(
      125,
      "John Doe",
      true,
      "2020-12-31 23:59:59",
      4,
      4,
      NULL
    );
  }

  return discussion_response;
}


#ifdef discussion_response_MAIN

void test_discussion_response(int include_optional) {
    discussion_response_t* discussion_response_1 = instantiate_discussion_response(include_optional);

	cJSON* jsondiscussion_response_1 = discussion_response_convertToJSON(discussion_response_1);
	printf("discussion_response :\n%s\n", cJSON_Print(jsondiscussion_response_1));
	discussion_response_t* discussion_response_2 = discussion_response_parseFromJSON(jsondiscussion_response_1);
	cJSON* jsondiscussion_response_2 = discussion_response_convertToJSON(discussion_response_2);
	printf("repeating discussion_response:\n%s\n", cJSON_Print(jsondiscussion_response_2));
}

int main() {
  test_discussion_response(1);
  test_discussion_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // discussion_response_MAIN
#endif // discussion_response_TEST
