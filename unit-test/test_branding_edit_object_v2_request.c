#ifndef branding_edit_object_v2_request_TEST
#define branding_edit_object_v2_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define branding_edit_object_v2_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/branding_edit_object_v2_request.h"
branding_edit_object_v2_request_t* instantiate_branding_edit_object_v2_request(int include_optional);

#include "test_branding_request_compound_v2.c"


branding_edit_object_v2_request_t* instantiate_branding_edit_object_v2_request(int include_optional) {
  branding_edit_object_v2_request_t* branding_edit_object_v2_request = NULL;
  if (include_optional) {
    branding_edit_object_v2_request = branding_edit_object_v2_request_create(
       // false, not to have infinite recursion
      instantiate_branding_request_compound_v2(0)
    );
  } else {
    branding_edit_object_v2_request = branding_edit_object_v2_request_create(
      NULL
    );
  }

  return branding_edit_object_v2_request;
}


#ifdef branding_edit_object_v2_request_MAIN

void test_branding_edit_object_v2_request(int include_optional) {
    branding_edit_object_v2_request_t* branding_edit_object_v2_request_1 = instantiate_branding_edit_object_v2_request(include_optional);

	cJSON* jsonbranding_edit_object_v2_request_1 = branding_edit_object_v2_request_convertToJSON(branding_edit_object_v2_request_1);
	printf("branding_edit_object_v2_request :\n%s\n", cJSON_Print(jsonbranding_edit_object_v2_request_1));
	branding_edit_object_v2_request_t* branding_edit_object_v2_request_2 = branding_edit_object_v2_request_parseFromJSON(jsonbranding_edit_object_v2_request_1);
	cJSON* jsonbranding_edit_object_v2_request_2 = branding_edit_object_v2_request_convertToJSON(branding_edit_object_v2_request_2);
	printf("repeating branding_edit_object_v2_request:\n%s\n", cJSON_Print(jsonbranding_edit_object_v2_request_2));
}

int main() {
  test_branding_edit_object_v2_request(1);
  test_branding_edit_object_v2_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // branding_edit_object_v2_request_MAIN
#endif // branding_edit_object_v2_request_TEST
