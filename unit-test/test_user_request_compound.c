#ifndef user_request_compound_TEST
#define user_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define user_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/user_request_compound.h"
user_request_compound_t* instantiate_user_request_compound(int include_optional);

#include "test_email_request_compound.c"
#include "test_phone_request_compound.c"
#include "test_phone_request_compound.c"


user_request_compound_t* instantiate_user_request_compound(int include_optional) {
  user_request_compound_t* user_request_compound = NULL;
  if (include_optional) {
    user_request_compound = user_request_compound_create(
      70,
      1,
      26,
      1,
      31,
      1,
      21,
      247,
      2,
       // false, not to have infinite recursion
      instantiate_email_request_compound(0),
      1,
       // false, not to have infinite recursion
      instantiate_phone_request_compound(0),
       // false, not to have infinite recursion
      instantiate_phone_request_compound(0),
      7,
      "Montreal General Hospital",
      40,
      ezmax_api_definition__full_user_request_compound__"EzsignUser",
      ezmax_api_definition__full_user_request_compound__"Password",
      "John",
      "Doe",
      "JohnDoe",
      ezmax_api_definition__full_user_request_compound__"PaidByOffice",
      true,
      false,
      false,
      true,
      true
    );
  } else {
    user_request_compound = user_request_compound_create(
      70,
      1,
      26,
      1,
      31,
      1,
      21,
      247,
      2,
      NULL,
      1,
      NULL,
      NULL,
      7,
      "Montreal General Hospital",
      40,
      ezmax_api_definition__full_user_request_compound__"EzsignUser",
      ezmax_api_definition__full_user_request_compound__"Password",
      "John",
      "Doe",
      "JohnDoe",
      ezmax_api_definition__full_user_request_compound__"PaidByOffice",
      true,
      false,
      false,
      true,
      true
    );
  }

  return user_request_compound;
}


#ifdef user_request_compound_MAIN

void test_user_request_compound(int include_optional) {
    user_request_compound_t* user_request_compound_1 = instantiate_user_request_compound(include_optional);

	cJSON* jsonuser_request_compound_1 = user_request_compound_convertToJSON(user_request_compound_1);
	printf("user_request_compound :\n%s\n", cJSON_Print(jsonuser_request_compound_1));
	user_request_compound_t* user_request_compound_2 = user_request_compound_parseFromJSON(jsonuser_request_compound_1);
	cJSON* jsonuser_request_compound_2 = user_request_compound_convertToJSON(user_request_compound_2);
	printf("repeating user_request_compound:\n%s\n", cJSON_Print(jsonuser_request_compound_2));
}

int main() {
  test_user_request_compound(1);
  test_user_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // user_request_compound_MAIN
#endif // user_request_compound_TEST
