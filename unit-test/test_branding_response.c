#ifndef branding_response_TEST
#define branding_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define branding_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/branding_response.h"
branding_response_t* instantiate_branding_response(int include_optional);

#include "test_multilingual_branding_description.c"


branding_response_t* instantiate_branding_response(int include_optional) {
  branding_response_t* branding_response = NULL;
  if (include_optional) {
    branding_response = branding_response_create(
      78,
      22,
       // false, not to have infinite recursion
      instantiate_multilingual_branding_description(0),
      "Company X",
      "eZmax (Corp)",
      "email@example.com",
      ezmax_api_definition__full_branding_response__"Default",
      3752795,
      0,
      16777215,
      15658734,
      13577007,
      16777215,
      true
    );
  } else {
    branding_response = branding_response_create(
      78,
      22,
      NULL,
      "Company X",
      "eZmax (Corp)",
      "email@example.com",
      ezmax_api_definition__full_branding_response__"Default",
      3752795,
      0,
      16777215,
      15658734,
      13577007,
      16777215,
      true
    );
  }

  return branding_response;
}


#ifdef branding_response_MAIN

void test_branding_response(int include_optional) {
    branding_response_t* branding_response_1 = instantiate_branding_response(include_optional);

	cJSON* jsonbranding_response_1 = branding_response_convertToJSON(branding_response_1);
	printf("branding_response :\n%s\n", cJSON_Print(jsonbranding_response_1));
	branding_response_t* branding_response_2 = branding_response_parseFromJSON(jsonbranding_response_1);
	cJSON* jsonbranding_response_2 = branding_response_convertToJSON(branding_response_2);
	printf("repeating branding_response:\n%s\n", cJSON_Print(jsonbranding_response_2));
}

int main() {
  test_branding_response(1);
  test_branding_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // branding_response_MAIN
#endif // branding_response_TEST
