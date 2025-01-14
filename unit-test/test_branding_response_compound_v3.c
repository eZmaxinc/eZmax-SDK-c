#ifndef branding_response_compound_v3_TEST
#define branding_response_compound_v3_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define branding_response_compound_v3_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/branding_response_compound_v3.h"
branding_response_compound_v3_t* instantiate_branding_response_compound_v3(int include_optional);

#include "test_multilingual_branding_description.c"


branding_response_compound_v3_t* instantiate_branding_response_compound_v3(int include_optional) {
  branding_response_compound_v3_t* branding_response_compound_v3 = NULL;
  if (include_optional) {
    branding_response_compound_v3 = branding_response_compound_v3_create(
      78,
      22,
       // false, not to have infinite recursion
      instantiate_multilingual_branding_description(0),
      "Company X",
      "eZmax (Corp)",
      "email@example.com",
      ezmax_api_definition__full_branding_response_compound_v3__"Default",
      ezmax_api_definition__full_branding_response_compound_v3__"Center",
      15658734,
      true,
      "http://www.example.com/logo.jpg",
      "http://www.example.com/logo.jpg",
      "http://www.example.com/logo.jpg"
    );
  } else {
    branding_response_compound_v3 = branding_response_compound_v3_create(
      78,
      22,
      NULL,
      "Company X",
      "eZmax (Corp)",
      "email@example.com",
      ezmax_api_definition__full_branding_response_compound_v3__"Default",
      ezmax_api_definition__full_branding_response_compound_v3__"Center",
      15658734,
      true,
      "http://www.example.com/logo.jpg",
      "http://www.example.com/logo.jpg",
      "http://www.example.com/logo.jpg"
    );
  }

  return branding_response_compound_v3;
}


#ifdef branding_response_compound_v3_MAIN

void test_branding_response_compound_v3(int include_optional) {
    branding_response_compound_v3_t* branding_response_compound_v3_1 = instantiate_branding_response_compound_v3(include_optional);

	cJSON* jsonbranding_response_compound_v3_1 = branding_response_compound_v3_convertToJSON(branding_response_compound_v3_1);
	printf("branding_response_compound_v3 :\n%s\n", cJSON_Print(jsonbranding_response_compound_v3_1));
	branding_response_compound_v3_t* branding_response_compound_v3_2 = branding_response_compound_v3_parseFromJSON(jsonbranding_response_compound_v3_1);
	cJSON* jsonbranding_response_compound_v3_2 = branding_response_compound_v3_convertToJSON(branding_response_compound_v3_2);
	printf("repeating branding_response_compound_v3:\n%s\n", cJSON_Print(jsonbranding_response_compound_v3_2));
}

int main() {
  test_branding_response_compound_v3(1);
  test_branding_response_compound_v3(0);

  printf("Hello world \n");
  return 0;
}

#endif // branding_response_compound_v3_MAIN
#endif // branding_response_compound_v3_TEST
