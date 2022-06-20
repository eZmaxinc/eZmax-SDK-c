#ifndef common_response_warning_TEST
#define common_response_warning_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define common_response_warning_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/common_response_warning.h"
common_response_warning_t* instantiate_common_response_warning(int include_optional);



common_response_warning_t* instantiate_common_response_warning(int include_optional) {
  common_response_warning_t* common_response_warning = NULL;
  if (include_optional) {
    common_response_warning = common_response_warning_create(
      "0",
      "0"
    );
  } else {
    common_response_warning = common_response_warning_create(
      "0",
      "0"
    );
  }

  return common_response_warning;
}


#ifdef common_response_warning_MAIN

void test_common_response_warning(int include_optional) {
    common_response_warning_t* common_response_warning_1 = instantiate_common_response_warning(include_optional);

	cJSON* jsoncommon_response_warning_1 = common_response_warning_convertToJSON(common_response_warning_1);
	printf("common_response_warning :\n%s\n", cJSON_Print(jsoncommon_response_warning_1));
	common_response_warning_t* common_response_warning_2 = common_response_warning_parseFromJSON(jsoncommon_response_warning_1);
	cJSON* jsoncommon_response_warning_2 = common_response_warning_convertToJSON(common_response_warning_2);
	printf("repeating common_response_warning:\n%s\n", cJSON_Print(jsoncommon_response_warning_2));
}

int main() {
  test_common_response_warning(1);
  test_common_response_warning(0);

  printf("Hello world \n");
  return 0;
}

#endif // common_response_warning_MAIN
#endif // common_response_warning_TEST
