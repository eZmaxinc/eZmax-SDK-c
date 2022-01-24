#ifndef common_response_obj_debug_payload_get_list_all_of_TEST
#define common_response_obj_debug_payload_get_list_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define common_response_obj_debug_payload_get_list_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/common_response_obj_debug_payload_get_list_all_of.h"
common_response_obj_debug_payload_get_list_all_of_t* instantiate_common_response_obj_debug_payload_get_list_all_of(int include_optional);

#include "test_common_response_filter.c"


common_response_obj_debug_payload_get_list_all_of_t* instantiate_common_response_obj_debug_payload_get_list_all_of(int include_optional) {
  common_response_obj_debug_payload_get_list_all_of_t* common_response_obj_debug_payload_get_list_all_of = NULL;
  if (include_optional) {
    common_response_obj_debug_payload_get_list_all_of = common_response_obj_debug_payload_get_list_all_of_create(
       // false, not to have infinite recursion
      instantiate_common_response_filter(0),
      list_createList()
    );
  } else {
    common_response_obj_debug_payload_get_list_all_of = common_response_obj_debug_payload_get_list_all_of_create(
      NULL,
      list_createList()
    );
  }

  return common_response_obj_debug_payload_get_list_all_of;
}


#ifdef common_response_obj_debug_payload_get_list_all_of_MAIN

void test_common_response_obj_debug_payload_get_list_all_of(int include_optional) {
    common_response_obj_debug_payload_get_list_all_of_t* common_response_obj_debug_payload_get_list_all_of_1 = instantiate_common_response_obj_debug_payload_get_list_all_of(include_optional);

	cJSON* jsoncommon_response_obj_debug_payload_get_list_all_of_1 = common_response_obj_debug_payload_get_list_all_of_convertToJSON(common_response_obj_debug_payload_get_list_all_of_1);
	printf("common_response_obj_debug_payload_get_list_all_of :\n%s\n", cJSON_Print(jsoncommon_response_obj_debug_payload_get_list_all_of_1));
	common_response_obj_debug_payload_get_list_all_of_t* common_response_obj_debug_payload_get_list_all_of_2 = common_response_obj_debug_payload_get_list_all_of_parseFromJSON(jsoncommon_response_obj_debug_payload_get_list_all_of_1);
	cJSON* jsoncommon_response_obj_debug_payload_get_list_all_of_2 = common_response_obj_debug_payload_get_list_all_of_convertToJSON(common_response_obj_debug_payload_get_list_all_of_2);
	printf("repeating common_response_obj_debug_payload_get_list_all_of:\n%s\n", cJSON_Print(jsoncommon_response_obj_debug_payload_get_list_all_of_2));
}

int main() {
  test_common_response_obj_debug_payload_get_list_all_of(1);
  test_common_response_obj_debug_payload_get_list_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // common_response_obj_debug_payload_get_list_all_of_MAIN
#endif // common_response_obj_debug_payload_get_list_all_of_TEST
