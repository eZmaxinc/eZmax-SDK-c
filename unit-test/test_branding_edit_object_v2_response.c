#ifndef branding_edit_object_v2_response_TEST
#define branding_edit_object_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define branding_edit_object_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/branding_edit_object_v2_response.h"
branding_edit_object_v2_response_t* instantiate_branding_edit_object_v2_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


branding_edit_object_v2_response_t* instantiate_branding_edit_object_v2_response(int include_optional) {
  branding_edit_object_v2_response_t* branding_edit_object_v2_response = NULL;
  if (include_optional) {
    branding_edit_object_v2_response = branding_edit_object_v2_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    branding_edit_object_v2_response = branding_edit_object_v2_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return branding_edit_object_v2_response;
}


#ifdef branding_edit_object_v2_response_MAIN

void test_branding_edit_object_v2_response(int include_optional) {
    branding_edit_object_v2_response_t* branding_edit_object_v2_response_1 = instantiate_branding_edit_object_v2_response(include_optional);

	cJSON* jsonbranding_edit_object_v2_response_1 = branding_edit_object_v2_response_convertToJSON(branding_edit_object_v2_response_1);
	printf("branding_edit_object_v2_response :\n%s\n", cJSON_Print(jsonbranding_edit_object_v2_response_1));
	branding_edit_object_v2_response_t* branding_edit_object_v2_response_2 = branding_edit_object_v2_response_parseFromJSON(jsonbranding_edit_object_v2_response_1);
	cJSON* jsonbranding_edit_object_v2_response_2 = branding_edit_object_v2_response_convertToJSON(branding_edit_object_v2_response_2);
	printf("repeating branding_edit_object_v2_response:\n%s\n", cJSON_Print(jsonbranding_edit_object_v2_response_2));
}

int main() {
  test_branding_edit_object_v2_response(1);
  test_branding_edit_object_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // branding_edit_object_v2_response_MAIN
#endif // branding_edit_object_v2_response_TEST
