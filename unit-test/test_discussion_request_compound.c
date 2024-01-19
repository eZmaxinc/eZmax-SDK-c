#ifndef discussion_request_compound_TEST
#define discussion_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define discussion_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/discussion_request_compound.h"
discussion_request_compound_t* instantiate_discussion_request_compound(int include_optional);



discussion_request_compound_t* instantiate_discussion_request_compound(int include_optional) {
  discussion_request_compound_t* discussion_request_compound = NULL;
  if (include_optional) {
    discussion_request_compound = discussion_request_compound_create(
      125,
      "John Doe",
      true
    );
  } else {
    discussion_request_compound = discussion_request_compound_create(
      125,
      "John Doe",
      true
    );
  }

  return discussion_request_compound;
}


#ifdef discussion_request_compound_MAIN

void test_discussion_request_compound(int include_optional) {
    discussion_request_compound_t* discussion_request_compound_1 = instantiate_discussion_request_compound(include_optional);

	cJSON* jsondiscussion_request_compound_1 = discussion_request_compound_convertToJSON(discussion_request_compound_1);
	printf("discussion_request_compound :\n%s\n", cJSON_Print(jsondiscussion_request_compound_1));
	discussion_request_compound_t* discussion_request_compound_2 = discussion_request_compound_parseFromJSON(jsondiscussion_request_compound_1);
	cJSON* jsondiscussion_request_compound_2 = discussion_request_compound_convertToJSON(discussion_request_compound_2);
	printf("repeating discussion_request_compound:\n%s\n", cJSON_Print(jsondiscussion_request_compound_2));
}

int main() {
  test_discussion_request_compound(1);
  test_discussion_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // discussion_request_compound_MAIN
#endif // discussion_request_compound_TEST
