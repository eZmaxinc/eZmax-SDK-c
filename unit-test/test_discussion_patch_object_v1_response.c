#ifndef discussion_patch_object_v1_response_TEST
#define discussion_patch_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define discussion_patch_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/discussion_patch_object_v1_response.h"
discussion_patch_object_v1_response_t* instantiate_discussion_patch_object_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


discussion_patch_object_v1_response_t* instantiate_discussion_patch_object_v1_response(int include_optional) {
  discussion_patch_object_v1_response_t* discussion_patch_object_v1_response = NULL;
  if (include_optional) {
    discussion_patch_object_v1_response = discussion_patch_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    discussion_patch_object_v1_response = discussion_patch_object_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return discussion_patch_object_v1_response;
}


#ifdef discussion_patch_object_v1_response_MAIN

void test_discussion_patch_object_v1_response(int include_optional) {
    discussion_patch_object_v1_response_t* discussion_patch_object_v1_response_1 = instantiate_discussion_patch_object_v1_response(include_optional);

	cJSON* jsondiscussion_patch_object_v1_response_1 = discussion_patch_object_v1_response_convertToJSON(discussion_patch_object_v1_response_1);
	printf("discussion_patch_object_v1_response :\n%s\n", cJSON_Print(jsondiscussion_patch_object_v1_response_1));
	discussion_patch_object_v1_response_t* discussion_patch_object_v1_response_2 = discussion_patch_object_v1_response_parseFromJSON(jsondiscussion_patch_object_v1_response_1);
	cJSON* jsondiscussion_patch_object_v1_response_2 = discussion_patch_object_v1_response_convertToJSON(discussion_patch_object_v1_response_2);
	printf("repeating discussion_patch_object_v1_response:\n%s\n", cJSON_Print(jsondiscussion_patch_object_v1_response_2));
}

int main() {
  test_discussion_patch_object_v1_response(1);
  test_discussion_patch_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // discussion_patch_object_v1_response_MAIN
#endif // discussion_patch_object_v1_response_TEST
