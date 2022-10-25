#ifndef branding_get_autocomplete_v2_response_all_of_TEST
#define branding_get_autocomplete_v2_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define branding_get_autocomplete_v2_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/branding_get_autocomplete_v2_response_all_of.h"
branding_get_autocomplete_v2_response_all_of_t* instantiate_branding_get_autocomplete_v2_response_all_of(int include_optional);

#include "test_branding_get_autocomplete_v2_response_m_payload.c"


branding_get_autocomplete_v2_response_all_of_t* instantiate_branding_get_autocomplete_v2_response_all_of(int include_optional) {
  branding_get_autocomplete_v2_response_all_of_t* branding_get_autocomplete_v2_response_all_of = NULL;
  if (include_optional) {
    branding_get_autocomplete_v2_response_all_of = branding_get_autocomplete_v2_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_branding_get_autocomplete_v2_response_m_payload(0)
    );
  } else {
    branding_get_autocomplete_v2_response_all_of = branding_get_autocomplete_v2_response_all_of_create(
      NULL
    );
  }

  return branding_get_autocomplete_v2_response_all_of;
}


#ifdef branding_get_autocomplete_v2_response_all_of_MAIN

void test_branding_get_autocomplete_v2_response_all_of(int include_optional) {
    branding_get_autocomplete_v2_response_all_of_t* branding_get_autocomplete_v2_response_all_of_1 = instantiate_branding_get_autocomplete_v2_response_all_of(include_optional);

	cJSON* jsonbranding_get_autocomplete_v2_response_all_of_1 = branding_get_autocomplete_v2_response_all_of_convertToJSON(branding_get_autocomplete_v2_response_all_of_1);
	printf("branding_get_autocomplete_v2_response_all_of :\n%s\n", cJSON_Print(jsonbranding_get_autocomplete_v2_response_all_of_1));
	branding_get_autocomplete_v2_response_all_of_t* branding_get_autocomplete_v2_response_all_of_2 = branding_get_autocomplete_v2_response_all_of_parseFromJSON(jsonbranding_get_autocomplete_v2_response_all_of_1);
	cJSON* jsonbranding_get_autocomplete_v2_response_all_of_2 = branding_get_autocomplete_v2_response_all_of_convertToJSON(branding_get_autocomplete_v2_response_all_of_2);
	printf("repeating branding_get_autocomplete_v2_response_all_of:\n%s\n", cJSON_Print(jsonbranding_get_autocomplete_v2_response_all_of_2));
}

int main() {
  test_branding_get_autocomplete_v2_response_all_of(1);
  test_branding_get_autocomplete_v2_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // branding_get_autocomplete_v2_response_all_of_MAIN
#endif // branding_get_autocomplete_v2_response_all_of_TEST
