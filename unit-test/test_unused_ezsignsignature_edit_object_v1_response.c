#ifndef unused_ezsignsignature_edit_object_v1_response_TEST
#define unused_ezsignsignature_edit_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define unused_ezsignsignature_edit_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/unused_ezsignsignature_edit_object_v1_response.h"
unused_ezsignsignature_edit_object_v1_response_t* instantiate_unused_ezsignsignature_edit_object_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


unused_ezsignsignature_edit_object_v1_response_t* instantiate_unused_ezsignsignature_edit_object_v1_response(int include_optional) {
  unused_ezsignsignature_edit_object_v1_response_t* unused_ezsignsignature_edit_object_v1_response = NULL;
  if (include_optional) {
    unused_ezsignsignature_edit_object_v1_response = unused_ezsignsignature_edit_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    unused_ezsignsignature_edit_object_v1_response = unused_ezsignsignature_edit_object_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return unused_ezsignsignature_edit_object_v1_response;
}


#ifdef unused_ezsignsignature_edit_object_v1_response_MAIN

void test_unused_ezsignsignature_edit_object_v1_response(int include_optional) {
    unused_ezsignsignature_edit_object_v1_response_t* unused_ezsignsignature_edit_object_v1_response_1 = instantiate_unused_ezsignsignature_edit_object_v1_response(include_optional);

	cJSON* jsonunused_ezsignsignature_edit_object_v1_response_1 = unused_ezsignsignature_edit_object_v1_response_convertToJSON(unused_ezsignsignature_edit_object_v1_response_1);
	printf("unused_ezsignsignature_edit_object_v1_response :\n%s\n", cJSON_Print(jsonunused_ezsignsignature_edit_object_v1_response_1));
	unused_ezsignsignature_edit_object_v1_response_t* unused_ezsignsignature_edit_object_v1_response_2 = unused_ezsignsignature_edit_object_v1_response_parseFromJSON(jsonunused_ezsignsignature_edit_object_v1_response_1);
	cJSON* jsonunused_ezsignsignature_edit_object_v1_response_2 = unused_ezsignsignature_edit_object_v1_response_convertToJSON(unused_ezsignsignature_edit_object_v1_response_2);
	printf("repeating unused_ezsignsignature_edit_object_v1_response:\n%s\n", cJSON_Print(jsonunused_ezsignsignature_edit_object_v1_response_2));
}

int main() {
  test_unused_ezsignsignature_edit_object_v1_response(1);
  test_unused_ezsignsignature_edit_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // unused_ezsignsignature_edit_object_v1_response_MAIN
#endif // unused_ezsignsignature_edit_object_v1_response_TEST
