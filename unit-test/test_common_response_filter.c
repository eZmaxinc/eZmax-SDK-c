#ifndef common_response_filter_TEST
#define common_response_filter_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define common_response_filter_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/common_response_filter.h"
common_response_filter_t* instantiate_common_response_filter(int include_optional);



common_response_filter_t* instantiate_common_response_filter(int include_optional) {
  common_response_filter_t* common_response_filter = NULL;
  if (include_optional) {
    common_response_filter = common_response_filter_create(
      list_create(),
      list_create()
    );
  } else {
    common_response_filter = common_response_filter_create(
      list_create(),
      list_create()
    );
  }

  return common_response_filter;
}


#ifdef common_response_filter_MAIN

void test_common_response_filter(int include_optional) {
    common_response_filter_t* common_response_filter_1 = instantiate_common_response_filter(include_optional);

	cJSON* jsoncommon_response_filter_1 = common_response_filter_convertToJSON(common_response_filter_1);
	printf("common_response_filter :\n%s\n", cJSON_Print(jsoncommon_response_filter_1));
	common_response_filter_t* common_response_filter_2 = common_response_filter_parseFromJSON(jsoncommon_response_filter_1);
	cJSON* jsoncommon_response_filter_2 = common_response_filter_convertToJSON(common_response_filter_2);
	printf("repeating common_response_filter:\n%s\n", cJSON_Print(jsoncommon_response_filter_2));
}

int main() {
  test_common_response_filter(1);
  test_common_response_filter(0);

  printf("Hello world \n");
  return 0;
}

#endif // common_response_filter_MAIN
#endif // common_response_filter_TEST
