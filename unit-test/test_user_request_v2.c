#ifndef user_request_v2_TEST
#define user_request_v2_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define user_request_v2_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/user_request_v2.h"
user_request_v2_t* instantiate_user_request_v2(int include_optional);

#include "test_email_request.c"
#include "test_phone_request_v2.c"
#include "test_phone_request_v2.c"


user_request_v2_t* instantiate_user_request_v2(int include_optional) {
  user_request_v2_t* user_request_v2 = NULL;
  if (include_optional) {
    user_request_v2 = user_request_v2_create(
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
      instantiate_phone_request_v2(0),
       // false, not to have infinite recursion
      instantiate_phone_request_v2(0),
      7,
      "Montreal General Hospital",
      40,
      ezmax_api_definition__full_user_request_v2__"EzsignUser",
      ezmax_api_definition__full_user_request_v2__"Password",
      "John",
      "Doe",
      "JohnDoe",
      "Sales Representative",
      ezmax_api_definition__full_user_request_v2__"PaidByOffice",
      true,
      false,
      false,
      true,
      true
    );
  } else {
    user_request_v2 = user_request_v2_create(
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
      ezmax_api_definition__full_user_request_v2__"EzsignUser",
      ezmax_api_definition__full_user_request_v2__"Password",
      "John",
      "Doe",
      "JohnDoe",
      "Sales Representative",
      ezmax_api_definition__full_user_request_v2__"PaidByOffice",
      true,
      false,
      false,
      true,
      true
    );
  }

  return user_request_v2;
}


#ifdef user_request_v2_MAIN

void test_user_request_v2(int include_optional) {
    user_request_v2_t* user_request_v2_1 = instantiate_user_request_v2(include_optional);

	cJSON* jsonuser_request_v2_1 = user_request_v2_convertToJSON(user_request_v2_1);
	printf("user_request_v2 :\n%s\n", cJSON_Print(jsonuser_request_v2_1));
	user_request_v2_t* user_request_v2_2 = user_request_v2_parseFromJSON(jsonuser_request_v2_1);
	cJSON* jsonuser_request_v2_2 = user_request_v2_convertToJSON(user_request_v2_2);
	printf("repeating user_request_v2:\n%s\n", cJSON_Print(jsonuser_request_v2_2));
}

int main() {
  test_user_request_v2(1);
  test_user_request_v2(0);

  printf("Hello world \n");
  return 0;
}

#endif // user_request_v2_MAIN
#endif // user_request_v2_TEST
