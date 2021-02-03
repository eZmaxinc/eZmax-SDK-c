#ifndef attempt_response_TEST
#define attempt_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define attempt_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/attempt_response.h"
attempt_response_t* instantiate_attempt_response(int include_optional);



attempt_response_t* instantiate_attempt_response(int include_optional) {
  attempt_response_t* attempt_response = NULL;
  if (include_optional) {
    attempt_response = attempt_response_create(
      "2020-12-31 23:59:59",
      "0",
      56
    );
  } else {
    attempt_response = attempt_response_create(
      "2020-12-31 23:59:59",
      "0",
      56
    );
  }

  return attempt_response;
}


#ifdef attempt_response_MAIN

void test_attempt_response(int include_optional) {
    attempt_response_t* attempt_response_1 = instantiate_attempt_response(include_optional);

	cJSON* jsonattempt_response_1 = attempt_response_convertToJSON(attempt_response_1);
	printf("attempt_response :\n%s\n", cJSON_Print(jsonattempt_response_1));
	attempt_response_t* attempt_response_2 = attempt_response_parseFromJSON(jsonattempt_response_1);
	cJSON* jsonattempt_response_2 = attempt_response_convertToJSON(attempt_response_2);
	printf("repeating attempt_response:\n%s\n", cJSON_Print(jsonattempt_response_2));
}

int main() {
  test_attempt_response(1);
  test_attempt_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // attempt_response_MAIN
#endif // attempt_response_TEST
