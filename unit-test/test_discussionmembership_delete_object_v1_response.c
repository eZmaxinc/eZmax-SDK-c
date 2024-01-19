#ifndef discussionmembership_delete_object_v1_response_TEST
#define discussionmembership_delete_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define discussionmembership_delete_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/discussionmembership_delete_object_v1_response.h"
discussionmembership_delete_object_v1_response_t* instantiate_discussionmembership_delete_object_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


discussionmembership_delete_object_v1_response_t* instantiate_discussionmembership_delete_object_v1_response(int include_optional) {
  discussionmembership_delete_object_v1_response_t* discussionmembership_delete_object_v1_response = NULL;
  if (include_optional) {
    discussionmembership_delete_object_v1_response = discussionmembership_delete_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    discussionmembership_delete_object_v1_response = discussionmembership_delete_object_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return discussionmembership_delete_object_v1_response;
}


#ifdef discussionmembership_delete_object_v1_response_MAIN

void test_discussionmembership_delete_object_v1_response(int include_optional) {
    discussionmembership_delete_object_v1_response_t* discussionmembership_delete_object_v1_response_1 = instantiate_discussionmembership_delete_object_v1_response(include_optional);

	cJSON* jsondiscussionmembership_delete_object_v1_response_1 = discussionmembership_delete_object_v1_response_convertToJSON(discussionmembership_delete_object_v1_response_1);
	printf("discussionmembership_delete_object_v1_response :\n%s\n", cJSON_Print(jsondiscussionmembership_delete_object_v1_response_1));
	discussionmembership_delete_object_v1_response_t* discussionmembership_delete_object_v1_response_2 = discussionmembership_delete_object_v1_response_parseFromJSON(jsondiscussionmembership_delete_object_v1_response_1);
	cJSON* jsondiscussionmembership_delete_object_v1_response_2 = discussionmembership_delete_object_v1_response_convertToJSON(discussionmembership_delete_object_v1_response_2);
	printf("repeating discussionmembership_delete_object_v1_response:\n%s\n", cJSON_Print(jsondiscussionmembership_delete_object_v1_response_2));
}

int main() {
  test_discussionmembership_delete_object_v1_response(1);
  test_discussionmembership_delete_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // discussionmembership_delete_object_v1_response_MAIN
#endif // discussionmembership_delete_object_v1_response_TEST
