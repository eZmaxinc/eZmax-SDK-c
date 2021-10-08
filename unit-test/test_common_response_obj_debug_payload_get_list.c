#ifndef common_response_obj_debug_payload_get_list_TEST
#define common_response_obj_debug_payload_get_list_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define common_response_obj_debug_payload_get_list_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/common_response_obj_debug_payload_get_list.h"
common_response_obj_debug_payload_get_list_t* instantiate_common_response_obj_debug_payload_get_list(int include_optional);

#include "test_common_response_filter.c"


common_response_obj_debug_payload_get_list_t* instantiate_common_response_obj_debug_payload_get_list(int include_optional) {
  common_response_obj_debug_payload_get_list_t* common_response_obj_debug_payload_get_list = NULL;
  if (include_optional) {
    common_response_obj_debug_payload_get_list = common_response_obj_debug_payload_get_list_create(
      1,
      2,
      list_create(),
       // false, not to have infinite recursion
      instantiate_common_response_filter(0),
      list_create()
    );
  } else {
    common_response_obj_debug_payload_get_list = common_response_obj_debug_payload_get_list_create(
      1,
      2,
      list_create(),
      NULL,
      list_create()
    );
  }

  return common_response_obj_debug_payload_get_list;
}


#ifdef common_response_obj_debug_payload_get_list_MAIN

void test_common_response_obj_debug_payload_get_list(int include_optional) {
    common_response_obj_debug_payload_get_list_t* common_response_obj_debug_payload_get_list_1 = instantiate_common_response_obj_debug_payload_get_list(include_optional);

	cJSON* jsoncommon_response_obj_debug_payload_get_list_1 = common_response_obj_debug_payload_get_list_convertToJSON(common_response_obj_debug_payload_get_list_1);
	printf("common_response_obj_debug_payload_get_list :\n%s\n", cJSON_Print(jsoncommon_response_obj_debug_payload_get_list_1));
	common_response_obj_debug_payload_get_list_t* common_response_obj_debug_payload_get_list_2 = common_response_obj_debug_payload_get_list_parseFromJSON(jsoncommon_response_obj_debug_payload_get_list_1);
	cJSON* jsoncommon_response_obj_debug_payload_get_list_2 = common_response_obj_debug_payload_get_list_convertToJSON(common_response_obj_debug_payload_get_list_2);
	printf("repeating common_response_obj_debug_payload_get_list:\n%s\n", cJSON_Print(jsoncommon_response_obj_debug_payload_get_list_2));
}

int main() {
  test_common_response_obj_debug_payload_get_list(1);
  test_common_response_obj_debug_payload_get_list(0);

  printf("Hello world \n");
  return 0;
}

#endif // common_response_obj_debug_payload_get_list_MAIN
#endif // common_response_obj_debug_payload_get_list_TEST
