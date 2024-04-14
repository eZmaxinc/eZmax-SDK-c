#ifndef common_response_obj_debug_payload_TEST
#define common_response_obj_debug_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define common_response_obj_debug_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/common_response_obj_debug_payload.h"
common_response_obj_debug_payload_t* instantiate_common_response_obj_debug_payload(int include_optional);



common_response_obj_debug_payload_t* instantiate_common_response_obj_debug_payload(int include_optional) {
  common_response_obj_debug_payload_t* common_response_obj_debug_payload = NULL;
  if (include_optional) {
    common_response_obj_debug_payload = common_response_obj_debug_payload_create(
      1,
      2,
      list_createList(),
      false,
      "2020-12-31 23:59:59"
    );
  } else {
    common_response_obj_debug_payload = common_response_obj_debug_payload_create(
      1,
      2,
      list_createList(),
      false,
      "2020-12-31 23:59:59"
    );
  }

  return common_response_obj_debug_payload;
}


#ifdef common_response_obj_debug_payload_MAIN

void test_common_response_obj_debug_payload(int include_optional) {
    common_response_obj_debug_payload_t* common_response_obj_debug_payload_1 = instantiate_common_response_obj_debug_payload(include_optional);

	cJSON* jsoncommon_response_obj_debug_payload_1 = common_response_obj_debug_payload_convertToJSON(common_response_obj_debug_payload_1);
	printf("common_response_obj_debug_payload :\n%s\n", cJSON_Print(jsoncommon_response_obj_debug_payload_1));
	common_response_obj_debug_payload_t* common_response_obj_debug_payload_2 = common_response_obj_debug_payload_parseFromJSON(jsoncommon_response_obj_debug_payload_1);
	cJSON* jsoncommon_response_obj_debug_payload_2 = common_response_obj_debug_payload_convertToJSON(common_response_obj_debug_payload_2);
	printf("repeating common_response_obj_debug_payload:\n%s\n", cJSON_Print(jsoncommon_response_obj_debug_payload_2));
}

int main() {
  test_common_response_obj_debug_payload(1);
  test_common_response_obj_debug_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // common_response_obj_debug_payload_MAIN
#endif // common_response_obj_debug_payload_TEST
