#ifndef branding_response_compound_TEST
#define branding_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define branding_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/branding_response_compound.h"
branding_response_compound_t* instantiate_branding_response_compound(int include_optional);

#include "test_multilingual_branding_description.c"


branding_response_compound_t* instantiate_branding_response_compound(int include_optional) {
  branding_response_compound_t* branding_response_compound = NULL;
  if (include_optional) {
    branding_response_compound = branding_response_compound_create(
      78,
      22,
       // false, not to have infinite recursion
      instantiate_multilingual_branding_description(0),
      "Company X",
      "eZmax (Corp)",
      "email@example.com",
      ezmax_api_definition__full_branding_response_compound__"Default",
      3752795,
      0,
      16777215,
      15658734,
      13577007,
      16777215,
      true,
      "http://www.example.com/logo.jpg"
    );
  } else {
    branding_response_compound = branding_response_compound_create(
      78,
      22,
      NULL,
      "Company X",
      "eZmax (Corp)",
      "email@example.com",
      ezmax_api_definition__full_branding_response_compound__"Default",
      3752795,
      0,
      16777215,
      15658734,
      13577007,
      16777215,
      true,
      "http://www.example.com/logo.jpg"
    );
  }

  return branding_response_compound;
}


#ifdef branding_response_compound_MAIN

void test_branding_response_compound(int include_optional) {
    branding_response_compound_t* branding_response_compound_1 = instantiate_branding_response_compound(include_optional);

	cJSON* jsonbranding_response_compound_1 = branding_response_compound_convertToJSON(branding_response_compound_1);
	printf("branding_response_compound :\n%s\n", cJSON_Print(jsonbranding_response_compound_1));
	branding_response_compound_t* branding_response_compound_2 = branding_response_compound_parseFromJSON(jsonbranding_response_compound_1);
	cJSON* jsonbranding_response_compound_2 = branding_response_compound_convertToJSON(branding_response_compound_2);
	printf("repeating branding_response_compound:\n%s\n", cJSON_Print(jsonbranding_response_compound_2));
}

int main() {
  test_branding_response_compound(1);
  test_branding_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // branding_response_compound_MAIN
#endif // branding_response_compound_TEST
