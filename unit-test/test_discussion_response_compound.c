#ifndef discussion_response_compound_TEST
#define discussion_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define discussion_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/discussion_response_compound.h"
discussion_response_compound_t* instantiate_discussion_response_compound(int include_optional);

#include "test_object.c"


discussion_response_compound_t* instantiate_discussion_response_compound(int include_optional) {
  discussion_response_compound_t* discussion_response_compound = NULL;
  if (include_optional) {
    discussion_response_compound = discussion_response_compound_create(
      125,
      "John Doe",
      true,
      "2020-12-31 23:59:59",
      4,
      4,
       // false, not to have infinite recursion
      instantiate_object(0),
      list_createList(),
      list_createList()
    );
  } else {
    discussion_response_compound = discussion_response_compound_create(
      125,
      "John Doe",
      true,
      "2020-12-31 23:59:59",
      4,
      4,
      NULL,
      list_createList(),
      list_createList()
    );
  }

  return discussion_response_compound;
}


#ifdef discussion_response_compound_MAIN

void test_discussion_response_compound(int include_optional) {
    discussion_response_compound_t* discussion_response_compound_1 = instantiate_discussion_response_compound(include_optional);

	cJSON* jsondiscussion_response_compound_1 = discussion_response_compound_convertToJSON(discussion_response_compound_1);
	printf("discussion_response_compound :\n%s\n", cJSON_Print(jsondiscussion_response_compound_1));
	discussion_response_compound_t* discussion_response_compound_2 = discussion_response_compound_parseFromJSON(jsondiscussion_response_compound_1);
	cJSON* jsondiscussion_response_compound_2 = discussion_response_compound_convertToJSON(discussion_response_compound_2);
	printf("repeating discussion_response_compound:\n%s\n", cJSON_Print(jsondiscussion_response_compound_2));
}

int main() {
  test_discussion_response_compound(1);
  test_discussion_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // discussion_response_compound_MAIN
#endif // discussion_response_compound_TEST
