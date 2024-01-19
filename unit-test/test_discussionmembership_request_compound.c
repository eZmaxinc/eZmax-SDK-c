#ifndef discussionmembership_request_compound_TEST
#define discussionmembership_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define discussionmembership_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/discussionmembership_request_compound.h"
discussionmembership_request_compound_t* instantiate_discussionmembership_request_compound(int include_optional);



discussionmembership_request_compound_t* instantiate_discussionmembership_request_compound(int include_optional) {
  discussionmembership_request_compound_t* discussionmembership_request_compound = NULL;
  if (include_optional) {
    discussionmembership_request_compound = discussionmembership_request_compound_create(
      165,
      125,
      70,
      2,
      53,
      "2020-12-31 23:59:59"
    );
  } else {
    discussionmembership_request_compound = discussionmembership_request_compound_create(
      165,
      125,
      70,
      2,
      53,
      "2020-12-31 23:59:59"
    );
  }

  return discussionmembership_request_compound;
}


#ifdef discussionmembership_request_compound_MAIN

void test_discussionmembership_request_compound(int include_optional) {
    discussionmembership_request_compound_t* discussionmembership_request_compound_1 = instantiate_discussionmembership_request_compound(include_optional);

	cJSON* jsondiscussionmembership_request_compound_1 = discussionmembership_request_compound_convertToJSON(discussionmembership_request_compound_1);
	printf("discussionmembership_request_compound :\n%s\n", cJSON_Print(jsondiscussionmembership_request_compound_1));
	discussionmembership_request_compound_t* discussionmembership_request_compound_2 = discussionmembership_request_compound_parseFromJSON(jsondiscussionmembership_request_compound_1);
	cJSON* jsondiscussionmembership_request_compound_2 = discussionmembership_request_compound_convertToJSON(discussionmembership_request_compound_2);
	printf("repeating discussionmembership_request_compound:\n%s\n", cJSON_Print(jsondiscussionmembership_request_compound_2));
}

int main() {
  test_discussionmembership_request_compound(1);
  test_discussionmembership_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // discussionmembership_request_compound_MAIN
#endif // discussionmembership_request_compound_TEST
