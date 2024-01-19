#ifndef discussionmessage_patch_object_v1_response_TEST
#define discussionmessage_patch_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define discussionmessage_patch_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/discussionmessage_patch_object_v1_response.h"
discussionmessage_patch_object_v1_response_t* instantiate_discussionmessage_patch_object_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


discussionmessage_patch_object_v1_response_t* instantiate_discussionmessage_patch_object_v1_response(int include_optional) {
  discussionmessage_patch_object_v1_response_t* discussionmessage_patch_object_v1_response = NULL;
  if (include_optional) {
    discussionmessage_patch_object_v1_response = discussionmessage_patch_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    discussionmessage_patch_object_v1_response = discussionmessage_patch_object_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return discussionmessage_patch_object_v1_response;
}


#ifdef discussionmessage_patch_object_v1_response_MAIN

void test_discussionmessage_patch_object_v1_response(int include_optional) {
    discussionmessage_patch_object_v1_response_t* discussionmessage_patch_object_v1_response_1 = instantiate_discussionmessage_patch_object_v1_response(include_optional);

	cJSON* jsondiscussionmessage_patch_object_v1_response_1 = discussionmessage_patch_object_v1_response_convertToJSON(discussionmessage_patch_object_v1_response_1);
	printf("discussionmessage_patch_object_v1_response :\n%s\n", cJSON_Print(jsondiscussionmessage_patch_object_v1_response_1));
	discussionmessage_patch_object_v1_response_t* discussionmessage_patch_object_v1_response_2 = discussionmessage_patch_object_v1_response_parseFromJSON(jsondiscussionmessage_patch_object_v1_response_1);
	cJSON* jsondiscussionmessage_patch_object_v1_response_2 = discussionmessage_patch_object_v1_response_convertToJSON(discussionmessage_patch_object_v1_response_2);
	printf("repeating discussionmessage_patch_object_v1_response:\n%s\n", cJSON_Print(jsondiscussionmessage_patch_object_v1_response_2));
}

int main() {
  test_discussionmessage_patch_object_v1_response(1);
  test_discussionmessage_patch_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // discussionmessage_patch_object_v1_response_MAIN
#endif // discussionmessage_patch_object_v1_response_TEST
