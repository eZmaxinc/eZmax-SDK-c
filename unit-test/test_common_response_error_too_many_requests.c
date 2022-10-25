#ifndef common_response_error_too_many_requests_TEST
#define common_response_error_too_many_requests_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define common_response_error_too_many_requests_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/common_response_error_too_many_requests.h"
common_response_error_too_many_requests_t* instantiate_common_response_error_too_many_requests(int include_optional);



common_response_error_too_many_requests_t* instantiate_common_response_error_too_many_requests(int include_optional) {
  common_response_error_too_many_requests_t* common_response_error_too_many_requests = NULL;
  if (include_optional) {
    common_response_error_too_many_requests = common_response_error_too_many_requests_create(
      "0",
      "0"
    );
  } else {
    common_response_error_too_many_requests = common_response_error_too_many_requests_create(
      "0",
      "0"
    );
  }

  return common_response_error_too_many_requests;
}


#ifdef common_response_error_too_many_requests_MAIN

void test_common_response_error_too_many_requests(int include_optional) {
    common_response_error_too_many_requests_t* common_response_error_too_many_requests_1 = instantiate_common_response_error_too_many_requests(include_optional);

	cJSON* jsoncommon_response_error_too_many_requests_1 = common_response_error_too_many_requests_convertToJSON(common_response_error_too_many_requests_1);
	printf("common_response_error_too_many_requests :\n%s\n", cJSON_Print(jsoncommon_response_error_too_many_requests_1));
	common_response_error_too_many_requests_t* common_response_error_too_many_requests_2 = common_response_error_too_many_requests_parseFromJSON(jsoncommon_response_error_too_many_requests_1);
	cJSON* jsoncommon_response_error_too_many_requests_2 = common_response_error_too_many_requests_convertToJSON(common_response_error_too_many_requests_2);
	printf("repeating common_response_error_too_many_requests:\n%s\n", cJSON_Print(jsoncommon_response_error_too_many_requests_2));
}

int main() {
  test_common_response_error_too_many_requests(1);
  test_common_response_error_too_many_requests(0);

  printf("Hello world \n");
  return 0;
}

#endif // common_response_error_too_many_requests_MAIN
#endif // common_response_error_too_many_requests_TEST
