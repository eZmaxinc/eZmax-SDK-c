#ifndef userlogintype_response_TEST
#define userlogintype_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define userlogintype_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/userlogintype_response.h"
userlogintype_response_t* instantiate_userlogintype_response(int include_optional);

#include "test_multilingual_userlogintype_description.c"


userlogintype_response_t* instantiate_userlogintype_response(int include_optional) {
  userlogintype_response_t* userlogintype_response = NULL;
  if (include_optional) {
    userlogintype_response = userlogintype_response_create(
      2,
       // false, not to have infinite recursion
      instantiate_multilingual_userlogintype_description(0),
      "Email and phone or SMS"
    );
  } else {
    userlogintype_response = userlogintype_response_create(
      2,
      NULL,
      "Email and phone or SMS"
    );
  }

  return userlogintype_response;
}


#ifdef userlogintype_response_MAIN

void test_userlogintype_response(int include_optional) {
    userlogintype_response_t* userlogintype_response_1 = instantiate_userlogintype_response(include_optional);

	cJSON* jsonuserlogintype_response_1 = userlogintype_response_convertToJSON(userlogintype_response_1);
	printf("userlogintype_response :\n%s\n", cJSON_Print(jsonuserlogintype_response_1));
	userlogintype_response_t* userlogintype_response_2 = userlogintype_response_parseFromJSON(jsonuserlogintype_response_1);
	cJSON* jsonuserlogintype_response_2 = userlogintype_response_convertToJSON(userlogintype_response_2);
	printf("repeating userlogintype_response:\n%s\n", cJSON_Print(jsonuserlogintype_response_2));
}

int main() {
  test_userlogintype_response(1);
  test_userlogintype_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // userlogintype_response_MAIN
#endif // userlogintype_response_TEST
