#ifndef branding_request_v2_TEST
#define branding_request_v2_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define branding_request_v2_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/branding_request_v2.h"
branding_request_v2_t* instantiate_branding_request_v2(int include_optional);

#include "test_multilingual_branding_description.c"


branding_request_v2_t* instantiate_branding_request_v2(int include_optional) {
  branding_request_v2_t* branding_request_v2 = NULL;
  if (include_optional) {
    branding_request_v2 = branding_request_v2_create(
      78,
       // false, not to have infinite recursion
      instantiate_multilingual_branding_description(0),
      ezmax_api_definition__full_branding_request_v2__"Default",
      ezmax_api_definition__full_branding_request_v2__"Center",
      "[B@5c87bfe2",
      15658734,
      "eZmax (Corp)",
      "email@example.com",
      true
    );
  } else {
    branding_request_v2 = branding_request_v2_create(
      78,
      NULL,
      ezmax_api_definition__full_branding_request_v2__"Default",
      ezmax_api_definition__full_branding_request_v2__"Center",
      "[B@5c87bfe2",
      15658734,
      "eZmax (Corp)",
      "email@example.com",
      true
    );
  }

  return branding_request_v2;
}


#ifdef branding_request_v2_MAIN

void test_branding_request_v2(int include_optional) {
    branding_request_v2_t* branding_request_v2_1 = instantiate_branding_request_v2(include_optional);

	cJSON* jsonbranding_request_v2_1 = branding_request_v2_convertToJSON(branding_request_v2_1);
	printf("branding_request_v2 :\n%s\n", cJSON_Print(jsonbranding_request_v2_1));
	branding_request_v2_t* branding_request_v2_2 = branding_request_v2_parseFromJSON(jsonbranding_request_v2_1);
	cJSON* jsonbranding_request_v2_2 = branding_request_v2_convertToJSON(branding_request_v2_2);
	printf("repeating branding_request_v2:\n%s\n", cJSON_Print(jsonbranding_request_v2_2));
}

int main() {
  test_branding_request_v2(1);
  test_branding_request_v2(0);

  printf("Hello world \n");
  return 0;
}

#endif // branding_request_v2_MAIN
#endif // branding_request_v2_TEST
