#ifndef discussionmembership_create_object_v1_response_TEST
#define discussionmembership_create_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define discussionmembership_create_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/discussionmembership_create_object_v1_response.h"
discussionmembership_create_object_v1_response_t* instantiate_discussionmembership_create_object_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_discussionmembership_create_object_v1_response_m_payload.c"


discussionmembership_create_object_v1_response_t* instantiate_discussionmembership_create_object_v1_response(int include_optional) {
  discussionmembership_create_object_v1_response_t* discussionmembership_create_object_v1_response = NULL;
  if (include_optional) {
    discussionmembership_create_object_v1_response = discussionmembership_create_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_discussionmembership_create_object_v1_response_m_payload(0)
    );
  } else {
    discussionmembership_create_object_v1_response = discussionmembership_create_object_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return discussionmembership_create_object_v1_response;
}


#ifdef discussionmembership_create_object_v1_response_MAIN

void test_discussionmembership_create_object_v1_response(int include_optional) {
    discussionmembership_create_object_v1_response_t* discussionmembership_create_object_v1_response_1 = instantiate_discussionmembership_create_object_v1_response(include_optional);

	cJSON* jsondiscussionmembership_create_object_v1_response_1 = discussionmembership_create_object_v1_response_convertToJSON(discussionmembership_create_object_v1_response_1);
	printf("discussionmembership_create_object_v1_response :\n%s\n", cJSON_Print(jsondiscussionmembership_create_object_v1_response_1));
	discussionmembership_create_object_v1_response_t* discussionmembership_create_object_v1_response_2 = discussionmembership_create_object_v1_response_parseFromJSON(jsondiscussionmembership_create_object_v1_response_1);
	cJSON* jsondiscussionmembership_create_object_v1_response_2 = discussionmembership_create_object_v1_response_convertToJSON(discussionmembership_create_object_v1_response_2);
	printf("repeating discussionmembership_create_object_v1_response:\n%s\n", cJSON_Print(jsondiscussionmembership_create_object_v1_response_2));
}

int main() {
  test_discussionmembership_create_object_v1_response(1);
  test_discussionmembership_create_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // discussionmembership_create_object_v1_response_MAIN
#endif // discussionmembership_create_object_v1_response_TEST
