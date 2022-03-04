#ifndef attempt_response_compound_TEST
#define attempt_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define attempt_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/attempt_response_compound.h"
attempt_response_compound_t* instantiate_attempt_response_compound(int include_optional);



attempt_response_compound_t* instantiate_attempt_response_compound(int include_optional) {
  attempt_response_compound_t* attempt_response_compound = NULL;
  if (include_optional) {
    attempt_response_compound = attempt_response_compound_create(
      "2020-12-31 23:59:59",
      "0",
      56
    );
  } else {
    attempt_response_compound = attempt_response_compound_create(
      "2020-12-31 23:59:59",
      "0",
      56
    );
  }

  return attempt_response_compound;
}


#ifdef attempt_response_compound_MAIN

void test_attempt_response_compound(int include_optional) {
    attempt_response_compound_t* attempt_response_compound_1 = instantiate_attempt_response_compound(include_optional);

	cJSON* jsonattempt_response_compound_1 = attempt_response_compound_convertToJSON(attempt_response_compound_1);
	printf("attempt_response_compound :\n%s\n", cJSON_Print(jsonattempt_response_compound_1));
	attempt_response_compound_t* attempt_response_compound_2 = attempt_response_compound_parseFromJSON(jsonattempt_response_compound_1);
	cJSON* jsonattempt_response_compound_2 = attempt_response_compound_convertToJSON(attempt_response_compound_2);
	printf("repeating attempt_response_compound:\n%s\n", cJSON_Print(jsonattempt_response_compound_2));
}

int main() {
  test_attempt_response_compound(1);
  test_attempt_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // attempt_response_compound_MAIN
#endif // attempt_response_compound_TEST
