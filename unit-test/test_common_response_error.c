#ifndef common_response_error_TEST
#define common_response_error_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define common_response_error_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/common_response_error.h"
common_response_error_t* instantiate_common_response_error(int include_optional);



common_response_error_t* instantiate_common_response_error(int include_optional) {
  common_response_error_t* common_response_error = NULL;
  if (include_optional) {
    common_response_error = common_response_error_create(
      "0"
    );
  } else {
    common_response_error = common_response_error_create(
      "0"
    );
  }

  return common_response_error;
}


#ifdef common_response_error_MAIN

void test_common_response_error(int include_optional) {
    common_response_error_t* common_response_error_1 = instantiate_common_response_error(include_optional);

	cJSON* jsoncommon_response_error_1 = common_response_error_convertToJSON(common_response_error_1);
	printf("common_response_error :\n%s\n", cJSON_Print(jsoncommon_response_error_1));
	common_response_error_t* common_response_error_2 = common_response_error_parseFromJSON(jsoncommon_response_error_1);
	cJSON* jsoncommon_response_error_2 = common_response_error_convertToJSON(common_response_error_2);
	printf("repeating common_response_error:\n%s\n", cJSON_Print(jsoncommon_response_error_2));
}

int main() {
  test_common_response_error(1);
  test_common_response_error(0);

  printf("Hello world \n");
  return 0;
}

#endif // common_response_error_MAIN
#endif // common_response_error_TEST
