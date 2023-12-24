#ifndef branding_request_TEST
#define branding_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define branding_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/branding_request.h"
branding_request_t* instantiate_branding_request(int include_optional);

#include "test_multilingual_branding_description.c"


branding_request_t* instantiate_branding_request(int include_optional) {
  branding_request_t* branding_request = NULL;
  if (include_optional) {
    branding_request = branding_request_create(
      78,
       // false, not to have infinite recursion
      instantiate_multilingual_branding_description(0),
      ezmax_api_definition__full_branding_request__"Default",
      "[B@78fbff54",
      3752795,
      0,
      16777215,
      15658734,
      13577007,
      16777215,
      "eZmax (Corp)",
      "email@example.com",
      true
    );
  } else {
    branding_request = branding_request_create(
      78,
      NULL,
      ezmax_api_definition__full_branding_request__"Default",
      "[B@78fbff54",
      3752795,
      0,
      16777215,
      15658734,
      13577007,
      16777215,
      "eZmax (Corp)",
      "email@example.com",
      true
    );
  }

  return branding_request;
}


#ifdef branding_request_MAIN

void test_branding_request(int include_optional) {
    branding_request_t* branding_request_1 = instantiate_branding_request(include_optional);

	cJSON* jsonbranding_request_1 = branding_request_convertToJSON(branding_request_1);
	printf("branding_request :\n%s\n", cJSON_Print(jsonbranding_request_1));
	branding_request_t* branding_request_2 = branding_request_parseFromJSON(jsonbranding_request_1);
	cJSON* jsonbranding_request_2 = branding_request_convertToJSON(branding_request_2);
	printf("repeating branding_request:\n%s\n", cJSON_Print(jsonbranding_request_2));
}

int main() {
  test_branding_request(1);
  test_branding_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // branding_request_MAIN
#endif // branding_request_TEST
