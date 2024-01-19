#ifndef discussionmembership_response_compound_TEST
#define discussionmembership_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define discussionmembership_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/discussionmembership_response_compound.h"
discussionmembership_response_compound_t* instantiate_discussionmembership_response_compound(int include_optional);



discussionmembership_response_compound_t* instantiate_discussionmembership_response_compound(int include_optional) {
  discussionmembership_response_compound_t* discussionmembership_response_compound = NULL;
  if (include_optional) {
    discussionmembership_response_compound = discussionmembership_response_compound_create(
      165,
      125,
      70,
      2,
      53,
      "John Doe",
      "2020-12-31 23:59:59"
    );
  } else {
    discussionmembership_response_compound = discussionmembership_response_compound_create(
      165,
      125,
      70,
      2,
      53,
      "John Doe",
      "2020-12-31 23:59:59"
    );
  }

  return discussionmembership_response_compound;
}


#ifdef discussionmembership_response_compound_MAIN

void test_discussionmembership_response_compound(int include_optional) {
    discussionmembership_response_compound_t* discussionmembership_response_compound_1 = instantiate_discussionmembership_response_compound(include_optional);

	cJSON* jsondiscussionmembership_response_compound_1 = discussionmembership_response_compound_convertToJSON(discussionmembership_response_compound_1);
	printf("discussionmembership_response_compound :\n%s\n", cJSON_Print(jsondiscussionmembership_response_compound_1));
	discussionmembership_response_compound_t* discussionmembership_response_compound_2 = discussionmembership_response_compound_parseFromJSON(jsondiscussionmembership_response_compound_1);
	cJSON* jsondiscussionmembership_response_compound_2 = discussionmembership_response_compound_convertToJSON(discussionmembership_response_compound_2);
	printf("repeating discussionmembership_response_compound:\n%s\n", cJSON_Print(jsondiscussionmembership_response_compound_2));
}

int main() {
  test_discussionmembership_response_compound(1);
  test_discussionmembership_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // discussionmembership_response_compound_MAIN
#endif // discussionmembership_response_compound_TEST
