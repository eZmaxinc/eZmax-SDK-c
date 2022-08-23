#ifndef branding_response_compound_all_of_TEST
#define branding_response_compound_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define branding_response_compound_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/branding_response_compound_all_of.h"
branding_response_compound_all_of_t* instantiate_branding_response_compound_all_of(int include_optional);



branding_response_compound_all_of_t* instantiate_branding_response_compound_all_of(int include_optional) {
  branding_response_compound_all_of_t* branding_response_compound_all_of = NULL;
  if (include_optional) {
    branding_response_compound_all_of = branding_response_compound_all_of_create(
      "http://www.example.com/logo.jpg"
    );
  } else {
    branding_response_compound_all_of = branding_response_compound_all_of_create(
      "http://www.example.com/logo.jpg"
    );
  }

  return branding_response_compound_all_of;
}


#ifdef branding_response_compound_all_of_MAIN

void test_branding_response_compound_all_of(int include_optional) {
    branding_response_compound_all_of_t* branding_response_compound_all_of_1 = instantiate_branding_response_compound_all_of(include_optional);

	cJSON* jsonbranding_response_compound_all_of_1 = branding_response_compound_all_of_convertToJSON(branding_response_compound_all_of_1);
	printf("branding_response_compound_all_of :\n%s\n", cJSON_Print(jsonbranding_response_compound_all_of_1));
	branding_response_compound_all_of_t* branding_response_compound_all_of_2 = branding_response_compound_all_of_parseFromJSON(jsonbranding_response_compound_all_of_1);
	cJSON* jsonbranding_response_compound_all_of_2 = branding_response_compound_all_of_convertToJSON(branding_response_compound_all_of_2);
	printf("repeating branding_response_compound_all_of:\n%s\n", cJSON_Print(jsonbranding_response_compound_all_of_2));
}

int main() {
  test_branding_response_compound_all_of(1);
  test_branding_response_compound_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // branding_response_compound_all_of_MAIN
#endif // branding_response_compound_all_of_TEST
