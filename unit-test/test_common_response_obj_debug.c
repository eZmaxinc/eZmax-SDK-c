#ifndef common_response_obj_debug_TEST
#define common_response_obj_debug_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define common_response_obj_debug_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/common_response_obj_debug.h"
common_response_obj_debug_t* instantiate_common_response_obj_debug(int include_optional);



common_response_obj_debug_t* instantiate_common_response_obj_debug(int include_optional) {
  common_response_obj_debug_t* common_response_obj_debug = NULL;
  if (include_optional) {
    common_response_obj_debug = common_response_obj_debug_create(
      "0",
      "0",
      56,
      56,
      list_createList()
    );
  } else {
    common_response_obj_debug = common_response_obj_debug_create(
      "0",
      "0",
      56,
      56,
      list_createList()
    );
  }

  return common_response_obj_debug;
}


#ifdef common_response_obj_debug_MAIN

void test_common_response_obj_debug(int include_optional) {
    common_response_obj_debug_t* common_response_obj_debug_1 = instantiate_common_response_obj_debug(include_optional);

	cJSON* jsoncommon_response_obj_debug_1 = common_response_obj_debug_convertToJSON(common_response_obj_debug_1);
	printf("common_response_obj_debug :\n%s\n", cJSON_Print(jsoncommon_response_obj_debug_1));
	common_response_obj_debug_t* common_response_obj_debug_2 = common_response_obj_debug_parseFromJSON(jsoncommon_response_obj_debug_1);
	cJSON* jsoncommon_response_obj_debug_2 = common_response_obj_debug_convertToJSON(common_response_obj_debug_2);
	printf("repeating common_response_obj_debug:\n%s\n", cJSON_Print(jsoncommon_response_obj_debug_2));
}

int main() {
  test_common_response_obj_debug(1);
  test_common_response_obj_debug(0);

  printf("Hello world \n");
  return 0;
}

#endif // common_response_obj_debug_MAIN
#endif // common_response_obj_debug_TEST
