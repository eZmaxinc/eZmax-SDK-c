#ifndef activesession_response_compound_user_TEST
#define activesession_response_compound_user_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define activesession_response_compound_user_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/activesession_response_compound_user.h"
activesession_response_compound_user_t* instantiate_activesession_response_compound_user(int include_optional);



activesession_response_compound_user_t* instantiate_activesession_response_compound_user(int include_optional) {
  activesession_response_compound_user_t* activesession_response_compound_user = NULL;
  if (include_optional) {
    activesession_response_compound_user = activesession_response_compound_user_create(
      70,
      247,
      "http://www.website.com/avatar.jpg",
      "John",
      "Doe",
      "example@domain.com",
      ezmax_api_definition__full_activesession_response_compound_user__"None",
      3752795,
      false,
      25
    );
  } else {
    activesession_response_compound_user = activesession_response_compound_user_create(
      70,
      247,
      "http://www.website.com/avatar.jpg",
      "John",
      "Doe",
      "example@domain.com",
      ezmax_api_definition__full_activesession_response_compound_user__"None",
      3752795,
      false,
      25
    );
  }

  return activesession_response_compound_user;
}


#ifdef activesession_response_compound_user_MAIN

void test_activesession_response_compound_user(int include_optional) {
    activesession_response_compound_user_t* activesession_response_compound_user_1 = instantiate_activesession_response_compound_user(include_optional);

	cJSON* jsonactivesession_response_compound_user_1 = activesession_response_compound_user_convertToJSON(activesession_response_compound_user_1);
	printf("activesession_response_compound_user :\n%s\n", cJSON_Print(jsonactivesession_response_compound_user_1));
	activesession_response_compound_user_t* activesession_response_compound_user_2 = activesession_response_compound_user_parseFromJSON(jsonactivesession_response_compound_user_1);
	cJSON* jsonactivesession_response_compound_user_2 = activesession_response_compound_user_convertToJSON(activesession_response_compound_user_2);
	printf("repeating activesession_response_compound_user:\n%s\n", cJSON_Print(jsonactivesession_response_compound_user_2));
}

int main() {
  test_activesession_response_compound_user(1);
  test_activesession_response_compound_user(0);

  printf("Hello world \n");
  return 0;
}

#endif // activesession_response_compound_user_MAIN
#endif // activesession_response_compound_user_TEST
