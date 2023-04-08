#ifndef branding_request_compound_TEST
#define branding_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define branding_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/branding_request_compound.h"
branding_request_compound_t* instantiate_branding_request_compound(int include_optional);

#include "test_multilingual_branding_description.c"


branding_request_compound_t* instantiate_branding_request_compound(int include_optional) {
  branding_request_compound_t* branding_request_compound = NULL;
  if (include_optional) {
    branding_request_compound = branding_request_compound_create(
      78,
       // false, not to have infinite recursion
      instantiate_multilingual_branding_description(0),
      ezmax_api_definition__full_branding_request_compound__"Default",
      "[B@4721d212",
      3752795,
      0,
      16777215,
      15658734,
      13577007,
      16777215,
      true
    );
  } else {
    branding_request_compound = branding_request_compound_create(
      78,
      NULL,
      ezmax_api_definition__full_branding_request_compound__"Default",
      "[B@4721d212",
      3752795,
      0,
      16777215,
      15658734,
      13577007,
      16777215,
      true
    );
  }

  return branding_request_compound;
}


#ifdef branding_request_compound_MAIN

void test_branding_request_compound(int include_optional) {
    branding_request_compound_t* branding_request_compound_1 = instantiate_branding_request_compound(include_optional);

	cJSON* jsonbranding_request_compound_1 = branding_request_compound_convertToJSON(branding_request_compound_1);
	printf("branding_request_compound :\n%s\n", cJSON_Print(jsonbranding_request_compound_1));
	branding_request_compound_t* branding_request_compound_2 = branding_request_compound_parseFromJSON(jsonbranding_request_compound_1);
	cJSON* jsonbranding_request_compound_2 = branding_request_compound_convertToJSON(branding_request_compound_2);
	printf("repeating branding_request_compound:\n%s\n", cJSON_Print(jsonbranding_request_compound_2));
}

int main() {
  test_branding_request_compound(1);
  test_branding_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // branding_request_compound_MAIN
#endif // branding_request_compound_TEST
