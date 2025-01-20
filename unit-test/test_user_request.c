#ifndef user_request_TEST
#define user_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define user_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/user_request.h"
user_request_t* instantiate_user_request(int include_optional);

#include "test_email_request.c"
#include "test_phone_request.c"
#include "test_phone_request.c"


user_request_t* instantiate_user_request(int include_optional) {
  user_request_t* user_request = NULL;
  if (include_optional) {
    user_request = user_request_create(
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
      instantiate_email_request(0),
      1,
       // false, not to have infinite recursion
      instantiate_phone_request(0),
       // false, not to have infinite recursion
      instantiate_phone_request(0),
      7,
      "Montreal General Hospital",
      40,
      ezmax_api_definition__full_user_request__"EzsignUser",
      ezmax_api_definition__full_user_request__"Password",
      "John",
      "Doe",
      "JohnDoe",
      "Sales Representative",
      ezmax_api_definition__full_user_request__"PaidByOffice",
      true,
      false,
      false,
      true,
      true
    );
  } else {
    user_request = user_request_create(
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
      ezmax_api_definition__full_user_request__"EzsignUser",
      ezmax_api_definition__full_user_request__"Password",
      "John",
      "Doe",
      "JohnDoe",
      "Sales Representative",
      ezmax_api_definition__full_user_request__"PaidByOffice",
      true,
      false,
      false,
      true,
      true
    );
  }

  return user_request;
}


#ifdef user_request_MAIN

void test_user_request(int include_optional) {
    user_request_t* user_request_1 = instantiate_user_request(include_optional);

	cJSON* jsonuser_request_1 = user_request_convertToJSON(user_request_1);
	printf("user_request :\n%s\n", cJSON_Print(jsonuser_request_1));
	user_request_t* user_request_2 = user_request_parseFromJSON(jsonuser_request_1);
	cJSON* jsonuser_request_2 = user_request_convertToJSON(user_request_2);
	printf("repeating user_request:\n%s\n", cJSON_Print(jsonuser_request_2));
}

int main() {
  test_user_request(1);
  test_user_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // user_request_MAIN
#endif // user_request_TEST
