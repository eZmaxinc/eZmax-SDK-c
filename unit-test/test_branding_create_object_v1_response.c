#ifndef branding_create_object_v1_response_TEST
#define branding_create_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define branding_create_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/branding_create_object_v1_response.h"
branding_create_object_v1_response_t* instantiate_branding_create_object_v1_response(int include_optional);

#include "test_branding_create_object_v1_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


branding_create_object_v1_response_t* instantiate_branding_create_object_v1_response(int include_optional) {
  branding_create_object_v1_response_t* branding_create_object_v1_response = NULL;
  if (include_optional) {
    branding_create_object_v1_response = branding_create_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_branding_create_object_v1_response_m_payload(0),
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    branding_create_object_v1_response = branding_create_object_v1_response_create(
      NULL,
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return branding_create_object_v1_response;
}


#ifdef branding_create_object_v1_response_MAIN

void test_branding_create_object_v1_response(int include_optional) {
    branding_create_object_v1_response_t* branding_create_object_v1_response_1 = instantiate_branding_create_object_v1_response(include_optional);

	cJSON* jsonbranding_create_object_v1_response_1 = branding_create_object_v1_response_convertToJSON(branding_create_object_v1_response_1);
	printf("branding_create_object_v1_response :\n%s\n", cJSON_Print(jsonbranding_create_object_v1_response_1));
	branding_create_object_v1_response_t* branding_create_object_v1_response_2 = branding_create_object_v1_response_parseFromJSON(jsonbranding_create_object_v1_response_1);
	cJSON* jsonbranding_create_object_v1_response_2 = branding_create_object_v1_response_convertToJSON(branding_create_object_v1_response_2);
	printf("repeating branding_create_object_v1_response:\n%s\n", cJSON_Print(jsonbranding_create_object_v1_response_2));
}

int main() {
  test_branding_create_object_v1_response(1);
  test_branding_create_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // branding_create_object_v1_response_MAIN
#endif // branding_create_object_v1_response_TEST
