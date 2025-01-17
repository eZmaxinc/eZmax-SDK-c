#ifndef user_response_TEST
#define user_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define user_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/user_response.h"
user_response_t* instantiate_user_response(int include_optional);

#include "test_email_response_compound.c"
#include "test_phone_response_compound.c"
#include "test_phone_response_compound.c"
#include "test_common_audit.c"


user_response_t* instantiate_user_response(int include_optional) {
  user_response_t* user_response = NULL;
  if (include_optional) {
    user_response = user_response_create(
      70,
      1,
      26,
      1,
      31,
      1,
      "Acme inc.",
      21,
      "Head Office",
      247,
      "Default",
      2,
      "English",
       // false, not to have infinite recursion
      instantiate_email_response_compound(0),
      1,
      "Default",
       // false, not to have infinite recursion
      instantiate_phone_response_compound(0),
       // false, not to have infinite recursion
      instantiate_phone_response_compound(0),
      7,
      40,
      "Purchase",
      ezmax_api_definition__full_user_response__"BuiltIn",
      ezmax_api_definition__full_user_response__"EzsignUser",
      ezmax_api_definition__full_user_response__"Password",
      "John",
      "Doe",
      "JohnDoe",
      "Sales Representative",
      ezmax_api_definition__full_user_response__"PaidByOffice",
      "2020-12-31 23:59:59",
      "2020-12-31 23:59:59",
      "2020-12-31",
      true,
      false,
      false,
      true,
      true,
       // false, not to have infinite recursion
      instantiate_common_audit(0)
    );
  } else {
    user_response = user_response_create(
      70,
      1,
      26,
      1,
      31,
      1,
      "Acme inc.",
      21,
      "Head Office",
      247,
      "Default",
      2,
      "English",
      NULL,
      1,
      "Default",
      NULL,
      NULL,
      7,
      40,
      "Purchase",
      ezmax_api_definition__full_user_response__"BuiltIn",
      ezmax_api_definition__full_user_response__"EzsignUser",
      ezmax_api_definition__full_user_response__"Password",
      "John",
      "Doe",
      "JohnDoe",
      "Sales Representative",
      ezmax_api_definition__full_user_response__"PaidByOffice",
      "2020-12-31 23:59:59",
      "2020-12-31 23:59:59",
      "2020-12-31",
      true,
      false,
      false,
      true,
      true,
      NULL
    );
  }

  return user_response;
}


#ifdef user_response_MAIN

void test_user_response(int include_optional) {
    user_response_t* user_response_1 = instantiate_user_response(include_optional);

	cJSON* jsonuser_response_1 = user_response_convertToJSON(user_response_1);
	printf("user_response :\n%s\n", cJSON_Print(jsonuser_response_1));
	user_response_t* user_response_2 = user_response_parseFromJSON(jsonuser_response_1);
	cJSON* jsonuser_response_2 = user_response_convertToJSON(user_response_2);
	printf("repeating user_response:\n%s\n", cJSON_Print(jsonuser_response_2));
}

int main() {
  test_user_response(1);
  test_user_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // user_response_MAIN
#endif // user_response_TEST
